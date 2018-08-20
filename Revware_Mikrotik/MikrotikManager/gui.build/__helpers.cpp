// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 1 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 1; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 1 * sizeof(PyObject *) );
            memcpy( python_pars + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 1 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 1 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 1; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 1 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 1 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 1 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 1, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 1 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 1 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 2 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 2; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 2 * sizeof(PyObject *) );
            memcpy( python_pars + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 2 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 2 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 2; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 2 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 2 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 2 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 2, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 2 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 2 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 3 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 3; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 3 * sizeof(PyObject *) );
            memcpy( python_pars + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 3 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 3 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 3; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 3 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 3 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 3 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 3, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 3 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 3 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 4 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 4; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 4 * sizeof(PyObject *) );
            memcpy( python_pars + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 4 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 4 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 4; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 4 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 4 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 4 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 4, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 4 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 4 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 5 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 5; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 5 * sizeof(PyObject *) );
            memcpy( python_pars + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 5 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 5 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 5; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 5 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 5 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 5 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 5, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 5 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 5 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 6 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 6; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 6 * sizeof(PyObject *) );
            memcpy( python_pars + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 6 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 6 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 6; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 6 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 6 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 6 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 6, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 6 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 6 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS7( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 7; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 7 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 7; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 7 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 7 * sizeof(PyObject *) );
            memcpy( python_pars + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 7 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 7 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 7; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 7 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 7 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 7 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 7 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (7 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 7 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (7 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 7 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 7, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 7 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            7
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 7 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 8; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 8 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 8; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 8 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 8 * sizeof(PyObject *) );
            memcpy( python_pars + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 8 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 8 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 8; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 8 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 8 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 8 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 8 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (8 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 8 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (8 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 8 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 8, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 8 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            8
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 8 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS9( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 9; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 9 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 9; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 9 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 9 * sizeof(PyObject *) );
            memcpy( python_pars + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 9 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 9 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 9; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 9 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 9 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 9 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 9 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (9 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 9 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (9 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 9 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 9, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 9 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            9
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 9 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS10( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 10; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 10 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 10; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 10 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 10 * sizeof(PyObject *) );
            memcpy( python_pars + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 10 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 10 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 10; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 10 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 10 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 10 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 10 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (10 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 10 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (10 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 10 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 10, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 10 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            10
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 10 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS11( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 11; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 11 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 11; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 11 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 11 * sizeof(PyObject *) );
            memcpy( python_pars + 11, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 11 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 11 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 11; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 11 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 11 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 11, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 11 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 11 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (11 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 11 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (11 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 11 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 11, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 11 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            11
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 11 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_METHOD_WITH_ARGS1( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    1
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS1( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    1
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS1( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS1( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS2( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    2
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS2( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    2
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS2( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS2( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS3( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    3
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS3( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    3
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS3( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS3( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS4( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    4
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS4( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    4
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS4( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS4( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
MOD_INIT_DECL( PyQt5 );
MOD_INIT_DECL( PyQt5$QtCore$$45$postLoad );
MOD_INIT_DECL( __main__ );
MOD_INIT_DECL( asn1crypto );
MOD_INIT_DECL( asn1crypto$_elliptic_curve );
MOD_INIT_DECL( asn1crypto$_errors );
MOD_INIT_DECL( asn1crypto$_ffi );
MOD_INIT_DECL( asn1crypto$_inet );
MOD_INIT_DECL( asn1crypto$_int );
MOD_INIT_DECL( asn1crypto$_iri );
MOD_INIT_DECL( asn1crypto$_ordereddict );
MOD_INIT_DECL( asn1crypto$_perf );
MOD_INIT_DECL( asn1crypto$_perf$_big_num_ctypes );
MOD_INIT_DECL( asn1crypto$_teletex_codec );
MOD_INIT_DECL( asn1crypto$_types );
MOD_INIT_DECL( asn1crypto$algos );
MOD_INIT_DECL( asn1crypto$core );
MOD_INIT_DECL( asn1crypto$keys );
MOD_INIT_DECL( asn1crypto$parser );
MOD_INIT_DECL( asn1crypto$util );
MOD_INIT_DECL( asn1crypto$version );
MOD_INIT_DECL( bcrypt );
MOD_INIT_DECL( bcrypt$__about__ );
MOD_INIT_DECL( cryptography );
MOD_INIT_DECL( cryptography$__about__ );
MOD_INIT_DECL( cryptography$exceptions );
MOD_INIT_DECL( cryptography$hazmat );
MOD_INIT_DECL( cryptography$hazmat$backends );
MOD_INIT_DECL( cryptography$hazmat$backends$interfaces );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$aead );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$backend );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$ciphers );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$cmac );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$decode_asn1 );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$dh );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$dsa );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$ec );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$encode_asn1 );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$hashes );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$hmac );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$rsa );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$utils );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$x25519 );
MOD_INIT_DECL( cryptography$hazmat$backends$openssl$x509 );
MOD_INIT_DECL( cryptography$hazmat$bindings );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl$_conditional );
MOD_INIT_DECL( cryptography$hazmat$bindings$openssl$binding );
MOD_INIT_DECL( cryptography$hazmat$primitives );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$dh );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$dsa );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$ec );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$padding );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$rsa );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$utils );
MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$x25519 );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$aead );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$algorithms );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$base );
MOD_INIT_DECL( cryptography$hazmat$primitives$ciphers$modes );
MOD_INIT_DECL( cryptography$hazmat$primitives$constant_time );
MOD_INIT_DECL( cryptography$hazmat$primitives$hashes );
MOD_INIT_DECL( cryptography$hazmat$primitives$kdf );
MOD_INIT_DECL( cryptography$hazmat$primitives$kdf$scrypt );
MOD_INIT_DECL( cryptography$hazmat$primitives$mac );
MOD_INIT_DECL( cryptography$hazmat$primitives$serialization );
MOD_INIT_DECL( cryptography$utils );
MOD_INIT_DECL( cryptography$x509 );
MOD_INIT_DECL( cryptography$x509$base );
MOD_INIT_DECL( cryptography$x509$certificate_transparency );
MOD_INIT_DECL( cryptography$x509$extensions );
MOD_INIT_DECL( cryptography$x509$general_name );
MOD_INIT_DECL( cryptography$x509$name );
MOD_INIT_DECL( cryptography$x509$oid );
MOD_INIT_DECL( idna );
MOD_INIT_DECL( idna$core );
MOD_INIT_DECL( idna$idnadata );
MOD_INIT_DECL( idna$intranges );
MOD_INIT_DECL( idna$package_data );
MOD_INIT_DECL( idna$uts46data );
MOD_INIT_DECL( menu );
MOD_INIT_DECL( nacl );
MOD_INIT_DECL( nacl$bindings );
MOD_INIT_DECL( nacl$bindings$crypto_box );
MOD_INIT_DECL( nacl$bindings$crypto_generichash );
MOD_INIT_DECL( nacl$bindings$crypto_hash );
MOD_INIT_DECL( nacl$bindings$crypto_pwhash );
MOD_INIT_DECL( nacl$bindings$crypto_scalarmult );
MOD_INIT_DECL( nacl$bindings$crypto_secretbox );
MOD_INIT_DECL( nacl$bindings$crypto_shorthash );
MOD_INIT_DECL( nacl$bindings$crypto_sign );
MOD_INIT_DECL( nacl$bindings$randombytes );
MOD_INIT_DECL( nacl$bindings$sodium_core );
MOD_INIT_DECL( nacl$bindings$utils );
MOD_INIT_DECL( nacl$encoding );
MOD_INIT_DECL( nacl$exceptions );
MOD_INIT_DECL( nacl$public );
MOD_INIT_DECL( nacl$signing );
MOD_INIT_DECL( nacl$utils );
MOD_INIT_DECL( paramiko );
MOD_INIT_DECL( paramiko$_version );
MOD_INIT_DECL( paramiko$_winapi );
MOD_INIT_DECL( paramiko$agent );
MOD_INIT_DECL( paramiko$auth_handler );
MOD_INIT_DECL( paramiko$ber );
MOD_INIT_DECL( paramiko$buffered_pipe );
MOD_INIT_DECL( paramiko$channel );
MOD_INIT_DECL( paramiko$client );
MOD_INIT_DECL( paramiko$common );
MOD_INIT_DECL( paramiko$compress );
MOD_INIT_DECL( paramiko$config );
MOD_INIT_DECL( paramiko$dsskey );
MOD_INIT_DECL( paramiko$ecdsakey );
MOD_INIT_DECL( paramiko$ed25519key );
MOD_INIT_DECL( paramiko$file );
MOD_INIT_DECL( paramiko$hostkeys );
MOD_INIT_DECL( paramiko$kex_ecdh_nist );
MOD_INIT_DECL( paramiko$kex_gex );
MOD_INIT_DECL( paramiko$kex_group1 );
MOD_INIT_DECL( paramiko$kex_group14 );
MOD_INIT_DECL( paramiko$kex_gss );
MOD_INIT_DECL( paramiko$message );
MOD_INIT_DECL( paramiko$packet );
MOD_INIT_DECL( paramiko$pipe );
MOD_INIT_DECL( paramiko$pkey );
MOD_INIT_DECL( paramiko$primes );
MOD_INIT_DECL( paramiko$proxy );
MOD_INIT_DECL( paramiko$py3compat );
MOD_INIT_DECL( paramiko$rsakey );
MOD_INIT_DECL( paramiko$server );
MOD_INIT_DECL( paramiko$sftp );
MOD_INIT_DECL( paramiko$sftp_attr );
MOD_INIT_DECL( paramiko$sftp_client );
MOD_INIT_DECL( paramiko$sftp_file );
MOD_INIT_DECL( paramiko$sftp_handle );
MOD_INIT_DECL( paramiko$sftp_server );
MOD_INIT_DECL( paramiko$sftp_si );
MOD_INIT_DECL( paramiko$ssh_exception );
MOD_INIT_DECL( paramiko$ssh_gss );
MOD_INIT_DECL( paramiko$transport );
MOD_INIT_DECL( paramiko$util );
MOD_INIT_DECL( paramiko$win_pageant );
MOD_INIT_DECL( ping );
MOD_INIT_DECL( pyasn1 );
MOD_INIT_DECL( pyasn1$codec );
MOD_INIT_DECL( pyasn1$codec$ber );
MOD_INIT_DECL( pyasn1$codec$ber$decoder );
MOD_INIT_DECL( pyasn1$codec$ber$encoder );
MOD_INIT_DECL( pyasn1$codec$ber$eoo );
MOD_INIT_DECL( pyasn1$codec$cer );
MOD_INIT_DECL( pyasn1$codec$cer$decoder );
MOD_INIT_DECL( pyasn1$codec$cer$encoder );
MOD_INIT_DECL( pyasn1$codec$der );
MOD_INIT_DECL( pyasn1$codec$der$decoder );
MOD_INIT_DECL( pyasn1$codec$der$encoder );
MOD_INIT_DECL( pyasn1$compat );
MOD_INIT_DECL( pyasn1$compat$binary );
MOD_INIT_DECL( pyasn1$compat$calling );
MOD_INIT_DECL( pyasn1$compat$dateandtime );
MOD_INIT_DECL( pyasn1$compat$integer );
MOD_INIT_DECL( pyasn1$compat$octets );
MOD_INIT_DECL( pyasn1$compat$string );
MOD_INIT_DECL( pyasn1$debug );
MOD_INIT_DECL( pyasn1$error );
MOD_INIT_DECL( pyasn1$type );
MOD_INIT_DECL( pyasn1$type$base );
MOD_INIT_DECL( pyasn1$type$char );
MOD_INIT_DECL( pyasn1$type$constraint );
MOD_INIT_DECL( pyasn1$type$error );
MOD_INIT_DECL( pyasn1$type$namedtype );
MOD_INIT_DECL( pyasn1$type$namedval );
MOD_INIT_DECL( pyasn1$type$tag );
MOD_INIT_DECL( pyasn1$type$tagmap );
MOD_INIT_DECL( pyasn1$type$univ );
MOD_INIT_DECL( pyasn1$type$useful );
MOD_INIT_DECL( pywintypes );
MOD_INIT_DECL( routeros_api );
MOD_INIT_DECL( routeros_api$api );
MOD_INIT_DECL( routeros_api$api_communicator );
MOD_INIT_DECL( routeros_api$api_communicator$async_decorator );
MOD_INIT_DECL( routeros_api$api_communicator$base );
MOD_INIT_DECL( routeros_api$api_communicator$encoding_decorator );
MOD_INIT_DECL( routeros_api$api_communicator$exception_decorator );
MOD_INIT_DECL( routeros_api$api_communicator$key_cleaner_decorator );
MOD_INIT_DECL( routeros_api$api_socket );
MOD_INIT_DECL( routeros_api$api_structure );
MOD_INIT_DECL( routeros_api$base_api );
MOD_INIT_DECL( routeros_api$communication_exception_parsers );
MOD_INIT_DECL( routeros_api$exceptions );
MOD_INIT_DECL( routeros_api$query );
MOD_INIT_DECL( routeros_api$resource );
MOD_INIT_DECL( routeros_api$sentence );
MOD_INIT_DECL( routeros_api$utils );
MOD_INIT_DECL( sftp );
MOD_INIT_DECL( six );
MOD_INIT_DECL( ssh );
MOD_INIT_DECL( sspi );
MOD_INIT_DECL( sspicon );
MOD_INIT_DECL( telnet );
MOD_INIT_DECL( yaml );
MOD_INIT_DECL( yaml$composer );
MOD_INIT_DECL( yaml$constructor );
MOD_INIT_DECL( yaml$cyaml );
MOD_INIT_DECL( yaml$dumper );
MOD_INIT_DECL( yaml$emitter );
MOD_INIT_DECL( yaml$error );
MOD_INIT_DECL( yaml$events );
MOD_INIT_DECL( yaml$loader );
MOD_INIT_DECL( yaml$nodes );
MOD_INIT_DECL( yaml$parser );
MOD_INIT_DECL( yaml$reader );
MOD_INIT_DECL( yaml$representer );
MOD_INIT_DECL( yaml$resolver );
MOD_INIT_DECL( yaml$scanner );
MOD_INIT_DECL( yaml$serializer );
MOD_INIT_DECL( yaml$tokens );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { "PyQt5", MOD_INIT_NAME( PyQt5 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "PyQt5.QtCore", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "PyQt5.QtCore-postLoad", MOD_INIT_NAME( PyQt5$QtCore$$45$postLoad ), 0, 0, NUITKA_COMPILED_MODULE },
    { "PyQt5.QtGui", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "PyQt5.QtWidgets", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "__main__", MOD_INIT_NAME( __main__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "_bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_cffi_backend", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_decimal", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_elementtree", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_lzma", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_msi", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_overlapped", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_socket", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_tkinter", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_win32sysloader", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_yaml", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "asn1crypto", MOD_INIT_NAME( asn1crypto ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "asn1crypto._elliptic_curve", MOD_INIT_NAME( asn1crypto$_elliptic_curve ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._errors", MOD_INIT_NAME( asn1crypto$_errors ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._ffi", MOD_INIT_NAME( asn1crypto$_ffi ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._inet", MOD_INIT_NAME( asn1crypto$_inet ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._int", MOD_INIT_NAME( asn1crypto$_int ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._iri", MOD_INIT_NAME( asn1crypto$_iri ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._ordereddict", MOD_INIT_NAME( asn1crypto$_ordereddict ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._perf", MOD_INIT_NAME( asn1crypto$_perf ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "asn1crypto._perf._big_num_ctypes", MOD_INIT_NAME( asn1crypto$_perf$_big_num_ctypes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._teletex_codec", MOD_INIT_NAME( asn1crypto$_teletex_codec ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto._types", MOD_INIT_NAME( asn1crypto$_types ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto.algos", MOD_INIT_NAME( asn1crypto$algos ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto.core", MOD_INIT_NAME( asn1crypto$core ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto.keys", MOD_INIT_NAME( asn1crypto$keys ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto.parser", MOD_INIT_NAME( asn1crypto$parser ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto.util", MOD_INIT_NAME( asn1crypto$util ), 0, 0, NUITKA_COMPILED_MODULE },
    { "asn1crypto.version", MOD_INIT_NAME( asn1crypto$version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "bcrypt", MOD_INIT_NAME( bcrypt ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "bcrypt.__about__", MOD_INIT_NAME( bcrypt$__about__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "bcrypt._bcrypt", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "cryptography", MOD_INIT_NAME( cryptography ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.__about__", MOD_INIT_NAME( cryptography$__about__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.exceptions", MOD_INIT_NAME( cryptography$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat", MOD_INIT_NAME( cryptography$hazmat ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.backends", MOD_INIT_NAME( cryptography$hazmat$backends ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.backends.interfaces", MOD_INIT_NAME( cryptography$hazmat$backends$interfaces ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl", MOD_INIT_NAME( cryptography$hazmat$backends$openssl ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.backends.openssl.aead", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$aead ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.backend", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$backend ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.ciphers", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$ciphers ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.cmac", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$cmac ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.decode_asn1", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$decode_asn1 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.dh", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$dh ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.dsa", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$dsa ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.ec", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$ec ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.encode_asn1", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$encode_asn1 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.hashes", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$hashes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.hmac", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$hmac ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.rsa", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$rsa ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.utils", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.x25519", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$x25519 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.backends.openssl.x509", MOD_INIT_NAME( cryptography$hazmat$backends$openssl$x509 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.bindings", MOD_INIT_NAME( cryptography$hazmat$bindings ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.bindings._constant_time", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "cryptography.hazmat.bindings._openssl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "cryptography.hazmat.bindings.openssl", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.bindings.openssl._conditional", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl$_conditional ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.bindings.openssl.binding", MOD_INIT_NAME( cryptography$hazmat$bindings$openssl$binding ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives", MOD_INIT_NAME( cryptography$hazmat$primitives ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.primitives.asymmetric", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.primitives.asymmetric.dh", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$dh ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.asymmetric.dsa", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$dsa ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.asymmetric.ec", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$ec ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.asymmetric.padding", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$padding ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.asymmetric.rsa", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$rsa ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.asymmetric.utils", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.asymmetric.x25519", MOD_INIT_NAME( cryptography$hazmat$primitives$asymmetric$x25519 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.ciphers", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.primitives.ciphers.aead", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers$aead ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.ciphers.algorithms", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers$algorithms ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.ciphers.base", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.ciphers.modes", MOD_INIT_NAME( cryptography$hazmat$primitives$ciphers$modes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.constant_time", MOD_INIT_NAME( cryptography$hazmat$primitives$constant_time ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.hashes", MOD_INIT_NAME( cryptography$hazmat$primitives$hashes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.kdf", MOD_INIT_NAME( cryptography$hazmat$primitives$kdf ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.hazmat.primitives.kdf.scrypt", MOD_INIT_NAME( cryptography$hazmat$primitives$kdf$scrypt ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.mac", MOD_INIT_NAME( cryptography$hazmat$primitives$mac ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.hazmat.primitives.serialization", MOD_INIT_NAME( cryptography$hazmat$primitives$serialization ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.utils", MOD_INIT_NAME( cryptography$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.x509", MOD_INIT_NAME( cryptography$x509 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "cryptography.x509.base", MOD_INIT_NAME( cryptography$x509$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.x509.certificate_transparency", MOD_INIT_NAME( cryptography$x509$certificate_transparency ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.x509.extensions", MOD_INIT_NAME( cryptography$x509$extensions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.x509.general_name", MOD_INIT_NAME( cryptography$x509$general_name ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.x509.name", MOD_INIT_NAME( cryptography$x509$name ), 0, 0, NUITKA_COMPILED_MODULE },
    { "cryptography.x509.oid", MOD_INIT_NAME( cryptography$x509$oid ), 0, 0, NUITKA_COMPILED_MODULE },
    { "idna", MOD_INIT_NAME( idna ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "idna.core", MOD_INIT_NAME( idna$core ), 0, 0, NUITKA_COMPILED_MODULE },
    { "idna.idnadata", MOD_INIT_NAME( idna$idnadata ), 0, 0, NUITKA_COMPILED_MODULE },
    { "idna.intranges", MOD_INIT_NAME( idna$intranges ), 0, 0, NUITKA_COMPILED_MODULE },
    { "idna.package_data", MOD_INIT_NAME( idna$package_data ), 0, 0, NUITKA_COMPILED_MODULE },
    { "idna.uts46data", MOD_INIT_NAME( idna$uts46data ), 0, 0, NUITKA_COMPILED_MODULE },
    { "menu", MOD_INIT_NAME( menu ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl", MOD_INIT_NAME( nacl ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "nacl._sodium", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "nacl.bindings", MOD_INIT_NAME( nacl$bindings ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "nacl.bindings.crypto_box", MOD_INIT_NAME( nacl$bindings$crypto_box ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.bindings.crypto_generichash", MOD_INIT_NAME( nacl$bindings$crypto_generichash ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.bindings.crypto_hash", MOD_INIT_NAME( nacl$bindings$crypto_hash ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.bindings.crypto_pwhash", MOD_INIT_NAME( nacl$bindings$crypto_pwhash ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.bindings.crypto_scalarmult", MOD_INIT_NAME( nacl$bindings$crypto_scalarmult ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.bindings.crypto_secretbox", MOD_INIT_NAME( nacl$bindings$crypto_secretbox ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.bindings.crypto_shorthash", MOD_INIT_NAME( nacl$bindings$crypto_shorthash ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.bindings.crypto_sign", MOD_INIT_NAME( nacl$bindings$crypto_sign ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.bindings.randombytes", MOD_INIT_NAME( nacl$bindings$randombytes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.bindings.sodium_core", MOD_INIT_NAME( nacl$bindings$sodium_core ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.bindings.utils", MOD_INIT_NAME( nacl$bindings$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.encoding", MOD_INIT_NAME( nacl$encoding ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.exceptions", MOD_INIT_NAME( nacl$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.public", MOD_INIT_NAME( nacl$public ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.signing", MOD_INIT_NAME( nacl$signing ), 0, 0, NUITKA_COMPILED_MODULE },
    { "nacl.utils", MOD_INIT_NAME( nacl$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko", MOD_INIT_NAME( paramiko ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "paramiko._version", MOD_INIT_NAME( paramiko$_version ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko._winapi", MOD_INIT_NAME( paramiko$_winapi ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.agent", MOD_INIT_NAME( paramiko$agent ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.auth_handler", MOD_INIT_NAME( paramiko$auth_handler ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.ber", MOD_INIT_NAME( paramiko$ber ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.buffered_pipe", MOD_INIT_NAME( paramiko$buffered_pipe ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.channel", MOD_INIT_NAME( paramiko$channel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.client", MOD_INIT_NAME( paramiko$client ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.common", MOD_INIT_NAME( paramiko$common ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.compress", MOD_INIT_NAME( paramiko$compress ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.config", MOD_INIT_NAME( paramiko$config ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.dsskey", MOD_INIT_NAME( paramiko$dsskey ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.ecdsakey", MOD_INIT_NAME( paramiko$ecdsakey ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.ed25519key", MOD_INIT_NAME( paramiko$ed25519key ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.file", MOD_INIT_NAME( paramiko$file ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.hostkeys", MOD_INIT_NAME( paramiko$hostkeys ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.kex_ecdh_nist", MOD_INIT_NAME( paramiko$kex_ecdh_nist ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.kex_gex", MOD_INIT_NAME( paramiko$kex_gex ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.kex_group1", MOD_INIT_NAME( paramiko$kex_group1 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.kex_group14", MOD_INIT_NAME( paramiko$kex_group14 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.kex_gss", MOD_INIT_NAME( paramiko$kex_gss ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.message", MOD_INIT_NAME( paramiko$message ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.packet", MOD_INIT_NAME( paramiko$packet ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.pipe", MOD_INIT_NAME( paramiko$pipe ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.pkey", MOD_INIT_NAME( paramiko$pkey ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.primes", MOD_INIT_NAME( paramiko$primes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.proxy", MOD_INIT_NAME( paramiko$proxy ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.py3compat", MOD_INIT_NAME( paramiko$py3compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.rsakey", MOD_INIT_NAME( paramiko$rsakey ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.server", MOD_INIT_NAME( paramiko$server ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.sftp", MOD_INIT_NAME( paramiko$sftp ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.sftp_attr", MOD_INIT_NAME( paramiko$sftp_attr ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.sftp_client", MOD_INIT_NAME( paramiko$sftp_client ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.sftp_file", MOD_INIT_NAME( paramiko$sftp_file ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.sftp_handle", MOD_INIT_NAME( paramiko$sftp_handle ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.sftp_server", MOD_INIT_NAME( paramiko$sftp_server ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.sftp_si", MOD_INIT_NAME( paramiko$sftp_si ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.ssh_exception", MOD_INIT_NAME( paramiko$ssh_exception ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.ssh_gss", MOD_INIT_NAME( paramiko$ssh_gss ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.transport", MOD_INIT_NAME( paramiko$transport ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.util", MOD_INIT_NAME( paramiko$util ), 0, 0, NUITKA_COMPILED_MODULE },
    { "paramiko.win_pageant", MOD_INIT_NAME( paramiko$win_pageant ), 0, 0, NUITKA_COMPILED_MODULE },
    { "ping", MOD_INIT_NAME( ping ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1", MOD_INIT_NAME( pyasn1 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1.codec", MOD_INIT_NAME( pyasn1$codec ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1.codec.ber", MOD_INIT_NAME( pyasn1$codec$ber ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1.codec.ber.decoder", MOD_INIT_NAME( pyasn1$codec$ber$decoder ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.codec.ber.encoder", MOD_INIT_NAME( pyasn1$codec$ber$encoder ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.codec.ber.eoo", MOD_INIT_NAME( pyasn1$codec$ber$eoo ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.codec.cer", MOD_INIT_NAME( pyasn1$codec$cer ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1.codec.cer.decoder", MOD_INIT_NAME( pyasn1$codec$cer$decoder ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.codec.cer.encoder", MOD_INIT_NAME( pyasn1$codec$cer$encoder ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.codec.der", MOD_INIT_NAME( pyasn1$codec$der ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1.codec.der.decoder", MOD_INIT_NAME( pyasn1$codec$der$decoder ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.codec.der.encoder", MOD_INIT_NAME( pyasn1$codec$der$encoder ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.compat", MOD_INIT_NAME( pyasn1$compat ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1.compat.binary", MOD_INIT_NAME( pyasn1$compat$binary ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.compat.calling", MOD_INIT_NAME( pyasn1$compat$calling ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.compat.dateandtime", MOD_INIT_NAME( pyasn1$compat$dateandtime ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.compat.integer", MOD_INIT_NAME( pyasn1$compat$integer ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.compat.octets", MOD_INIT_NAME( pyasn1$compat$octets ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.compat.string", MOD_INIT_NAME( pyasn1$compat$string ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.debug", MOD_INIT_NAME( pyasn1$debug ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.error", MOD_INIT_NAME( pyasn1$error ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.type", MOD_INIT_NAME( pyasn1$type ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyasn1.type.base", MOD_INIT_NAME( pyasn1$type$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.type.char", MOD_INIT_NAME( pyasn1$type$char ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.type.constraint", MOD_INIT_NAME( pyasn1$type$constraint ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.type.error", MOD_INIT_NAME( pyasn1$type$error ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.type.namedtype", MOD_INIT_NAME( pyasn1$type$namedtype ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.type.namedval", MOD_INIT_NAME( pyasn1$type$namedval ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.type.tag", MOD_INIT_NAME( pyasn1$type$tag ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.type.tagmap", MOD_INIT_NAME( pyasn1$type$tagmap ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.type.univ", MOD_INIT_NAME( pyasn1$type$univ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyasn1.type.useful", MOD_INIT_NAME( pyasn1$type$useful ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyexpat", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "pywintypes", MOD_INIT_NAME( pywintypes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api", MOD_INIT_NAME( routeros_api ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "routeros_api.api", MOD_INIT_NAME( routeros_api$api ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api.api_communicator", MOD_INIT_NAME( routeros_api$api_communicator ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "routeros_api.api_communicator.async_decorator", MOD_INIT_NAME( routeros_api$api_communicator$async_decorator ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api.api_communicator.base", MOD_INIT_NAME( routeros_api$api_communicator$base ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api.api_communicator.encoding_decorator", MOD_INIT_NAME( routeros_api$api_communicator$encoding_decorator ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api.api_communicator.exception_decorator", MOD_INIT_NAME( routeros_api$api_communicator$exception_decorator ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api.api_communicator.key_cleaner_decorator", MOD_INIT_NAME( routeros_api$api_communicator$key_cleaner_decorator ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api.api_socket", MOD_INIT_NAME( routeros_api$api_socket ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api.api_structure", MOD_INIT_NAME( routeros_api$api_structure ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api.base_api", MOD_INIT_NAME( routeros_api$base_api ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api.communication_exception_parsers", MOD_INIT_NAME( routeros_api$communication_exception_parsers ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api.exceptions", MOD_INIT_NAME( routeros_api$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api.query", MOD_INIT_NAME( routeros_api$query ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api.resource", MOD_INIT_NAME( routeros_api$resource ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api.sentence", MOD_INIT_NAME( routeros_api$sentence ), 0, 0, NUITKA_COMPILED_MODULE },
    { "routeros_api.utils", MOD_INIT_NAME( routeros_api$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { "select", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "sftp", MOD_INIT_NAME( sftp ), 0, 0, NUITKA_COMPILED_MODULE },
    { "sip", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "six", MOD_INIT_NAME( six ), 0, 0, NUITKA_COMPILED_MODULE },
    { "ssh", MOD_INIT_NAME( ssh ), 0, 0, NUITKA_COMPILED_MODULE },
    { "sspi", MOD_INIT_NAME( sspi ), 0, 0, NUITKA_COMPILED_MODULE },
    { "sspicon", MOD_INIT_NAME( sspicon ), 0, 0, NUITKA_COMPILED_MODULE },
    { "telnet", MOD_INIT_NAME( telnet ), 0, 0, NUITKA_COMPILED_MODULE },
    { "unicodedata", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "win32security", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "yaml", MOD_INIT_NAME( yaml ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "yaml.composer", MOD_INIT_NAME( yaml$composer ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.constructor", MOD_INIT_NAME( yaml$constructor ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.cyaml", MOD_INIT_NAME( yaml$cyaml ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.dumper", MOD_INIT_NAME( yaml$dumper ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.emitter", MOD_INIT_NAME( yaml$emitter ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.error", MOD_INIT_NAME( yaml$error ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.events", MOD_INIT_NAME( yaml$events ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.loader", MOD_INIT_NAME( yaml$loader ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.nodes", MOD_INIT_NAME( yaml$nodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.parser", MOD_INIT_NAME( yaml$parser ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.reader", MOD_INIT_NAME( yaml$reader ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.representer", MOD_INIT_NAME( yaml$representer ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.resolver", MOD_INIT_NAME( yaml$resolver ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.scanner", MOD_INIT_NAME( yaml$scanner ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.serializer", MOD_INIT_NAME( yaml$serializer ), 0, 0, NUITKA_COMPILED_MODULE },
    { "yaml.tokens", MOD_INIT_NAME( yaml$tokens ), 0, 0, NUITKA_COMPILED_MODULE },
    { "__future__", NULL, 757506, 4331, NUITKA_BYTECODE_FLAG },
    { "_compat_pickle", NULL, 761837, 7865, NUITKA_BYTECODE_FLAG },
    { "_dummy_thread", NULL, 769702, 5073, NUITKA_BYTECODE_FLAG },
    { "_markupbase", NULL, 774775, 8907, NUITKA_BYTECODE_FLAG },
    { "_osx_support", NULL, 783682, 10497, NUITKA_BYTECODE_FLAG },
    { "_pyio", NULL, 794179, 75876, NUITKA_BYTECODE_FLAG },
    { "_sitebuiltins", NULL, 870055, 3681, NUITKA_BYTECODE_FLAG },
    { "_strptime", NULL, 873736, 15526, NUITKA_BYTECODE_FLAG },
    { "_threading_local", NULL, 889262, 6947, NUITKA_BYTECODE_FLAG },
    { "aifc", NULL, 896209, 27713, NUITKA_BYTECODE_FLAG },
    { "argparse", NULL, 923922, 65532, NUITKA_BYTECODE_FLAG },
    { "asynchat", NULL, 989454, 8492, NUITKA_BYTECODE_FLAG },
    { "asyncio", NULL, 997946, 879, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "asyncio.base_events", NULL, 998825, 35499, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_subprocess", NULL, 1034324, 9621, NUITKA_BYTECODE_FLAG },
    { "asyncio.compat", NULL, 1043945, 760, NUITKA_BYTECODE_FLAG },
    { "asyncio.constants", NULL, 1044705, 254, NUITKA_BYTECODE_FLAG },
    { "asyncio.coroutines", NULL, 1044959, 8357, NUITKA_BYTECODE_FLAG },
    { "asyncio.events", NULL, 1053316, 22490, NUITKA_BYTECODE_FLAG },
    { "asyncio.futures", NULL, 1075806, 14163, NUITKA_BYTECODE_FLAG },
    { "asyncio.locks", NULL, 1089969, 15456, NUITKA_BYTECODE_FLAG },
    { "asyncio.log", NULL, 1105425, 256, NUITKA_BYTECODE_FLAG },
    { "asyncio.proactor_events", NULL, 1105681, 17728, NUITKA_BYTECODE_FLAG },
    { "asyncio.protocols", NULL, 1123409, 6103, NUITKA_BYTECODE_FLAG },
    { "asyncio.queues", NULL, 1129512, 10519, NUITKA_BYTECODE_FLAG },
    { "asyncio.selector_events", NULL, 1140031, 30572, NUITKA_BYTECODE_FLAG },
    { "asyncio.sslproto", NULL, 1170603, 21031, NUITKA_BYTECODE_FLAG },
    { "asyncio.streams", NULL, 1191634, 16310, NUITKA_BYTECODE_FLAG },
    { "asyncio.subprocess", NULL, 1207944, 7116, NUITKA_BYTECODE_FLAG },
    { "asyncio.tasks", NULL, 1215060, 19770, NUITKA_BYTECODE_FLAG },
    { "asyncio.test_utils", NULL, 1234830, 15562, NUITKA_BYTECODE_FLAG },
    { "asyncio.transports", NULL, 1250392, 11960, NUITKA_BYTECODE_FLAG },
    { "asyncio.windows_events", NULL, 1262352, 23188, NUITKA_BYTECODE_FLAG },
    { "asyncio.windows_utils", NULL, 1285540, 5907, NUITKA_BYTECODE_FLAG },
    { "asyncore", NULL, 1291447, 17184, NUITKA_BYTECODE_FLAG },
    { "bdb", NULL, 1308631, 18571, NUITKA_BYTECODE_FLAG },
    { "binhex", NULL, 1327202, 13439, NUITKA_BYTECODE_FLAG },
    { "bisect", NULL, 1340641, 2846, NUITKA_BYTECODE_FLAG },
    { "cProfile", NULL, 1343487, 4618, NUITKA_BYTECODE_FLAG },
    { "calendar", NULL, 1348105, 27538, NUITKA_BYTECODE_FLAG },
    { "cgi", NULL, 1375643, 29838, NUITKA_BYTECODE_FLAG },
    { "cgitb", NULL, 1405481, 11022, NUITKA_BYTECODE_FLAG },
    { "chunk", NULL, 1416503, 5230, NUITKA_BYTECODE_FLAG },
    { "cmd", NULL, 1421733, 13420, NUITKA_BYTECODE_FLAG },
    { "code", NULL, 1435153, 9838, NUITKA_BYTECODE_FLAG },
    { "codeop", NULL, 1444991, 6466, NUITKA_BYTECODE_FLAG },
    { "colorsys", NULL, 1451457, 3653, NUITKA_BYTECODE_FLAG },
    { "compileall", NULL, 1455110, 8885, NUITKA_BYTECODE_FLAG },
    { "concurrent", NULL, 1463995, 151, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "concurrent.futures", NULL, 1464146, 699, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "concurrent.futures._base", NULL, 1464845, 20926, NUITKA_BYTECODE_FLAG },
    { "concurrent.futures.process", NULL, 1485771, 16359, NUITKA_BYTECODE_FLAG },
    { "concurrent.futures.thread", NULL, 1502130, 3925, NUITKA_BYTECODE_FLAG },
    { "configparser", NULL, 1506055, 47928, NUITKA_BYTECODE_FLAG },
    { "contextlib", NULL, 1553983, 10927, NUITKA_BYTECODE_FLAG },
    { "copy", NULL, 1564910, 8133, NUITKA_BYTECODE_FLAG },
    { "csv", NULL, 1573043, 12940, NUITKA_BYTECODE_FLAG },
    { "ctypes", NULL, 1585983, 17532, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes._endian", NULL, 1603515, 2079, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib", NULL, 1605594, 322, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes.macholib.dyld", NULL, 1605916, 4691, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib.dylib", NULL, 1610607, 2088, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib.framework", NULL, 1612695, 2387, NUITKA_BYTECODE_FLAG },
    { "ctypes.util", NULL, 1615082, 7106, NUITKA_BYTECODE_FLAG },
    { "ctypes.wintypes", NULL, 1622188, 5750, NUITKA_BYTECODE_FLAG },
    { "datetime", NULL, 1627938, 55399, NUITKA_BYTECODE_FLAG },
    { "dbm", NULL, 1683337, 4448, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "dbm.dumb", NULL, 1687785, 8097, NUITKA_BYTECODE_FLAG },
    { "decimal", NULL, 1695882, 171296, NUITKA_BYTECODE_FLAG },
    { "difflib", NULL, 1867178, 62281, NUITKA_BYTECODE_FLAG },
    { "distutils", NULL, 1929459, 418, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils._msvccompiler", NULL, 1929877, 13614, NUITKA_BYTECODE_FLAG },
    { "distutils.archive_util", NULL, 1943491, 6823, NUITKA_BYTECODE_FLAG },
    { "distutils.bcppcompiler", NULL, 1950314, 7257, NUITKA_BYTECODE_FLAG },
    { "distutils.ccompiler", NULL, 1957571, 34787, NUITKA_BYTECODE_FLAG },
    { "distutils.cmd", NULL, 1992358, 15647, NUITKA_BYTECODE_FLAG },
    { "distutils.command", NULL, 2008005, 583, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils.command.bdist", NULL, 2008588, 4060, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_dumb", NULL, 2012648, 3980, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_msi", NULL, 2016628, 21786, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_rpm", NULL, 2038414, 14228, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_wininst", NULL, 2052642, 9021, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build", NULL, 2061663, 4298, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_clib", NULL, 2065961, 5418, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_ext", NULL, 2071379, 18099, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_py", NULL, 2089478, 11472, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_scripts", NULL, 2100950, 4727, NUITKA_BYTECODE_FLAG },
    { "distutils.command.check", NULL, 2105677, 5253, NUITKA_BYTECODE_FLAG },
    { "distutils.command.clean", NULL, 2110930, 2379, NUITKA_BYTECODE_FLAG },
    { "distutils.command.config", NULL, 2113309, 11025, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install", NULL, 2124334, 14998, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_data", NULL, 2139332, 2556, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_egg_info", NULL, 2141888, 3202, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_headers", NULL, 2145090, 1863, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_lib", NULL, 2146953, 5657, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_scripts", NULL, 2152610, 2388, NUITKA_BYTECODE_FLAG },
    { "distutils.command.register", NULL, 2154998, 9194, NUITKA_BYTECODE_FLAG },
    { "distutils.command.sdist", NULL, 2164192, 14136, NUITKA_BYTECODE_FLAG },
    { "distutils.command.upload", NULL, 2178328, 5695, NUITKA_BYTECODE_FLAG },
    { "distutils.config", NULL, 2184023, 3813, NUITKA_BYTECODE_FLAG },
    { "distutils.core", NULL, 2187836, 7128, NUITKA_BYTECODE_FLAG },
    { "distutils.cygwinccompiler", NULL, 2194964, 9225, NUITKA_BYTECODE_FLAG },
    { "distutils.debug", NULL, 2204189, 223, NUITKA_BYTECODE_FLAG },
    { "distutils.dep_util", NULL, 2204412, 2865, NUITKA_BYTECODE_FLAG },
    { "distutils.dir_util", NULL, 2207277, 6207, NUITKA_BYTECODE_FLAG },
    { "distutils.dist", NULL, 2213484, 36711, NUITKA_BYTECODE_FLAG },
    { "distutils.errors", NULL, 2250195, 5729, NUITKA_BYTECODE_FLAG },
    { "distutils.extension", NULL, 2255924, 7416, NUITKA_BYTECODE_FLAG },
    { "distutils.fancy_getopt", NULL, 2263340, 11503, NUITKA_BYTECODE_FLAG },
    { "distutils.file_util", NULL, 2274843, 6308, NUITKA_BYTECODE_FLAG },
    { "distutils.filelist", NULL, 2281151, 10120, NUITKA_BYTECODE_FLAG },
    { "distutils.log", NULL, 2291271, 2490, NUITKA_BYTECODE_FLAG },
    { "distutils.msvc9compiler", NULL, 2293761, 19186, NUITKA_BYTECODE_FLAG },
    { "distutils.msvccompiler", NULL, 2312947, 15953, NUITKA_BYTECODE_FLAG },
    { "distutils.spawn", NULL, 2328900, 5379, NUITKA_BYTECODE_FLAG },
    { "distutils.sysconfig", NULL, 2334279, 13106, NUITKA_BYTECODE_FLAG },
    { "distutils.text_file", NULL, 2347385, 8904, NUITKA_BYTECODE_FLAG },
    { "distutils.unixccompiler", NULL, 2356289, 6996, NUITKA_BYTECODE_FLAG },
    { "distutils.util", NULL, 2363285, 16539, NUITKA_BYTECODE_FLAG },
    { "distutils.version", NULL, 2379824, 7785, NUITKA_BYTECODE_FLAG },
    { "distutils.versionpredicate", NULL, 2387609, 5381, NUITKA_BYTECODE_FLAG },
    { "doctest", NULL, 2392990, 79750, NUITKA_BYTECODE_FLAG },
    { "dummy_threading", NULL, 2472740, 1211, NUITKA_BYTECODE_FLAG },
    { "email", NULL, 2473951, 1773, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email._encoded_words", NULL, 2475724, 6058, NUITKA_BYTECODE_FLAG },
    { "email._header_value_parser", NULL, 2481782, 87276, NUITKA_BYTECODE_FLAG },
    { "email._parseaddr", NULL, 2569058, 13750, NUITKA_BYTECODE_FLAG },
    { "email._policybase", NULL, 2582808, 15161, NUITKA_BYTECODE_FLAG },
    { "email.base64mime", NULL, 2597969, 3381, NUITKA_BYTECODE_FLAG },
    { "email.charset", NULL, 2601350, 12068, NUITKA_BYTECODE_FLAG },
    { "email.contentmanager", NULL, 2613418, 8119, NUITKA_BYTECODE_FLAG },
    { "email.encoders", NULL, 2621537, 1756, NUITKA_BYTECODE_FLAG },
    { "email.errors", NULL, 2623293, 6287, NUITKA_BYTECODE_FLAG },
    { "email.feedparser", NULL, 2629580, 11762, NUITKA_BYTECODE_FLAG },
    { "email.generator", NULL, 2641342, 13609, NUITKA_BYTECODE_FLAG },
    { "email.header", NULL, 2654951, 17695, NUITKA_BYTECODE_FLAG },
    { "email.headerregistry", NULL, 2672646, 22629, NUITKA_BYTECODE_FLAG },
    { "email.iterators", NULL, 2695275, 2040, NUITKA_BYTECODE_FLAG },
    { "email.message", NULL, 2697315, 39277, NUITKA_BYTECODE_FLAG },
    { "email.mime", NULL, 2736592, 151, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email.mime.application", NULL, 2736743, 1473, NUITKA_BYTECODE_FLAG },
    { "email.mime.audio", NULL, 2738216, 2690, NUITKA_BYTECODE_FLAG },
    { "email.mime.base", NULL, 2740906, 1030, NUITKA_BYTECODE_FLAG },
    { "email.mime.image", NULL, 2741936, 1932, NUITKA_BYTECODE_FLAG },
    { "email.mime.message", NULL, 2743868, 1350, NUITKA_BYTECODE_FLAG },
    { "email.mime.multipart", NULL, 2745218, 1565, NUITKA_BYTECODE_FLAG },
    { "email.mime.nonmultipart", NULL, 2746783, 807, NUITKA_BYTECODE_FLAG },
    { "email.mime.text", NULL, 2747590, 1375, NUITKA_BYTECODE_FLAG },
    { "email.parser", NULL, 2748965, 5924, NUITKA_BYTECODE_FLAG },
    { "email.policy", NULL, 2754889, 9779, NUITKA_BYTECODE_FLAG },
    { "email.quoprimime", NULL, 2764668, 8121, NUITKA_BYTECODE_FLAG },
    { "email.utils", NULL, 2772789, 10470, NUITKA_BYTECODE_FLAG },
    { "filecmp", NULL, 2783259, 9098, NUITKA_BYTECODE_FLAG },
    { "fileinput", NULL, 2792357, 14187, NUITKA_BYTECODE_FLAG },
    { "fnmatch", NULL, 2806544, 3143, NUITKA_BYTECODE_FLAG },
    { "formatter", NULL, 2809687, 18857, NUITKA_BYTECODE_FLAG },
    { "fractions", NULL, 2828544, 20023, NUITKA_BYTECODE_FLAG },
    { "ftplib", NULL, 2848567, 30101, NUITKA_BYTECODE_FLAG },
    { "getopt", NULL, 2878668, 6712, NUITKA_BYTECODE_FLAG },
    { "getpass", NULL, 2885380, 4595, NUITKA_BYTECODE_FLAG },
    { "gettext", NULL, 2889975, 13060, NUITKA_BYTECODE_FLAG },
    { "glob", NULL, 2903035, 4027, NUITKA_BYTECODE_FLAG },
    { "gzip", NULL, 2907062, 17653, NUITKA_BYTECODE_FLAG },
    { "hashlib", NULL, 2924715, 6370, NUITKA_BYTECODE_FLAG },
    { "hmac", NULL, 2931085, 5143, NUITKA_BYTECODE_FLAG },
    { "html", NULL, 2936228, 3644, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "html.entities", NULL, 2939872, 55452, NUITKA_BYTECODE_FLAG },
    { "html.parser", NULL, 2995324, 12138, NUITKA_BYTECODE_FLAG },
    { "http", NULL, 3007462, 6746, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "http.client", NULL, 3014208, 32974, NUITKA_BYTECODE_FLAG },
    { "http.cookiejar", NULL, 3047182, 58314, NUITKA_BYTECODE_FLAG },
    { "http.cookies", NULL, 3105496, 17223, NUITKA_BYTECODE_FLAG },
    { "http.server", NULL, 3122719, 34559, NUITKA_BYTECODE_FLAG },
    { "imaplib", NULL, 3157278, 44729, NUITKA_BYTECODE_FLAG },
    { "imghdr", NULL, 3202007, 4510, NUITKA_BYTECODE_FLAG },
    { "imp", NULL, 3206517, 10467, NUITKA_BYTECODE_FLAG },
    { "importlib.abc", NULL, 3216984, 11766, NUITKA_BYTECODE_FLAG },
    { "importlib.util", NULL, 3228750, 9778, NUITKA_BYTECODE_FLAG },
    { "ipaddress", NULL, 3238528, 66307, NUITKA_BYTECODE_FLAG },
    { "json", NULL, 3304835, 12266, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "json.decoder", NULL, 3317101, 10686, NUITKA_BYTECODE_FLAG },
    { "json.encoder", NULL, 3327787, 12014, NUITKA_BYTECODE_FLAG },
    { "json.scanner", NULL, 3339801, 2224, NUITKA_BYTECODE_FLAG },
    { "json.tool", NULL, 3342025, 1694, NUITKA_BYTECODE_FLAG },
    { "lib2to3", NULL, 3343719, 148, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.btm_matcher", NULL, 3343867, 5328, NUITKA_BYTECODE_FLAG },
    { "lib2to3.btm_utils", NULL, 3349195, 6798, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixer_base", NULL, 3355993, 6539, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixer_util", NULL, 3362532, 13364, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes", NULL, 3375896, 154, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.fixes.fix_apply", NULL, 3376050, 1697, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_asserts", NULL, 3377747, 1374, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_basestring", NULL, 3379121, 699, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_buffer", NULL, 3379820, 851, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_callable", NULL, 3380671, 1356, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_dict", NULL, 3382027, 3680, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_except", NULL, 3385707, 3051, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_exec", NULL, 3388758, 1276, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_execfile", NULL, 3390034, 1856, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_exitfunc", NULL, 3391890, 2471, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_filter", NULL, 3394361, 2106, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_funcattrs", NULL, 3396467, 1018, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_future", NULL, 3397485, 826, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_getcwdu", NULL, 3398311, 829, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_has_key", NULL, 3399140, 3178, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_idioms", NULL, 3402318, 4158, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_import", NULL, 3406476, 3024, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_imports", NULL, 3409500, 4734, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_imports2", NULL, 3414234, 579, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_input", NULL, 3414813, 1015, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_intern", NULL, 3415828, 1061, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_isinstance", NULL, 3416889, 1686, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_itertools", NULL, 3418575, 1650, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_itertools_imports", NULL, 3420225, 1796, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_long", NULL, 3422021, 747, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_map", NULL, 3422768, 2852, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_metaclass", NULL, 3425620, 5958, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_methodattrs", NULL, 3431578, 990, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_ne", NULL, 3432568, 858, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_next", NULL, 3433426, 3313, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_nonzero", NULL, 3436739, 983, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_numliterals", NULL, 3437722, 1114, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_operator", NULL, 3438836, 4497, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_paren", NULL, 3443333, 1445, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_print", NULL, 3444778, 2593, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_raise", NULL, 3447371, 2448, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_raw_input", NULL, 3449819, 836, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_reduce", NULL, 3450655, 1169, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_reload", NULL, 3451824, 1061, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_renames", NULL, 3452885, 2123, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_repr", NULL, 3455008, 904, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_set_literal", NULL, 3455912, 1812, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_standarderror", NULL, 3457724, 756, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_sys_exc", NULL, 3458480, 1502, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_throw", NULL, 3459982, 1952, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_tuple_params", NULL, 3461934, 5063, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_types", NULL, 3466997, 2000, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_unicode", NULL, 3468997, 1660, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_urllib", NULL, 3470657, 6522, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_ws_comma", NULL, 3477179, 1222, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_xrange", NULL, 3478401, 2725, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_xreadlines", NULL, 3481126, 1178, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_zip", NULL, 3482304, 1232, NUITKA_BYTECODE_FLAG },
    { "lib2to3.main", NULL, 3483536, 9160, NUITKA_BYTECODE_FLAG },
    { "lib2to3.patcomp", NULL, 3492696, 6344, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2", NULL, 3499040, 186, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.pgen2.driver", NULL, 3499226, 4652, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.grammar", NULL, 3503878, 5713, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.literals", NULL, 3509591, 1757, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.parse", NULL, 3511348, 6722, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.pgen", NULL, 3518070, 11023, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.token", NULL, 3529093, 2037, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.tokenize", NULL, 3531130, 15971, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pygram", NULL, 3547101, 1271, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pytree", NULL, 3548372, 26881, NUITKA_BYTECODE_FLAG },
    { "lib2to3.refactor", NULL, 3575253, 22816, NUITKA_BYTECODE_FLAG },
    { "logging", NULL, 3598069, 61411, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "logging.config", NULL, 3659480, 25425, NUITKA_BYTECODE_FLAG },
    { "logging.handlers", NULL, 3684905, 44978, NUITKA_BYTECODE_FLAG },
    { "lzma", NULL, 3729883, 12487, NUITKA_BYTECODE_FLAG },
    { "macpath", NULL, 3742370, 6155, NUITKA_BYTECODE_FLAG },
    { "macurl2path", NULL, 3748525, 2096, NUITKA_BYTECODE_FLAG },
    { "mailbox", NULL, 3750621, 69810, NUITKA_BYTECODE_FLAG },
    { "mailcap", NULL, 3820431, 6517, NUITKA_BYTECODE_FLAG },
    { "mimetypes", NULL, 3826948, 16608, NUITKA_BYTECODE_FLAG },
    { "modulefinder", NULL, 3843556, 17250, NUITKA_BYTECODE_FLAG },
    { "msilib", NULL, 3860806, 17223, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "msilib.schema", NULL, 3878029, 54191, NUITKA_BYTECODE_FLAG },
    { "msilib.sequence", NULL, 3932220, 4004, NUITKA_BYTECODE_FLAG },
    { "msilib.text", NULL, 3936224, 9939, NUITKA_BYTECODE_FLAG },
    { "multiprocessing", NULL, 3946163, 575, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "multiprocessing.connection", NULL, 3946738, 27225, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.context", NULL, 3973963, 13524, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.dummy", NULL, 3987487, 4059, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "multiprocessing.dummy.connection", NULL, 3991546, 2679, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.forkserver", NULL, 3994225, 7092, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.heap", NULL, 4001317, 6779, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.managers", NULL, 4008096, 35524, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.pool", NULL, 4043620, 22863, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.popen_spawn_win32", NULL, 4066483, 3072, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.process", NULL, 4069555, 8911, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.queues", NULL, 4078466, 9890, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.reduction", NULL, 4088356, 7777, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.resource_sharer", NULL, 4096133, 5646, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.semaphore_tracker", NULL, 4101779, 3734, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.sharedctypes", NULL, 4105513, 7500, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.spawn", NULL, 4113013, 7049, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.synchronize", NULL, 4120062, 12317, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.util", NULL, 4132379, 9958, NUITKA_BYTECODE_FLAG },
    { "netrc", NULL, 4142337, 4266, NUITKA_BYTECODE_FLAG },
    { "nntplib", NULL, 4146603, 36092, NUITKA_BYTECODE_FLAG },
    { "nturl2path", NULL, 4182695, 1707, NUITKA_BYTECODE_FLAG },
    { "numbers", NULL, 4184402, 12679, NUITKA_BYTECODE_FLAG },
    { "optparse", NULL, 4197081, 51340, NUITKA_BYTECODE_FLAG },
    { "pathlib", NULL, 4248421, 43621, NUITKA_BYTECODE_FLAG },
    { "pdb", NULL, 4292042, 49291, NUITKA_BYTECODE_FLAG },
    { "pickle", NULL, 4341333, 46490, NUITKA_BYTECODE_FLAG },
    { "pickletools", NULL, 4387823, 70142, NUITKA_BYTECODE_FLAG },
    { "pipes", NULL, 4457965, 8368, NUITKA_BYTECODE_FLAG },
    { "pkgutil", NULL, 4466333, 17490, NUITKA_BYTECODE_FLAG },
    { "plat-aix4.IN", NULL, 4483823, 5133, NUITKA_BYTECODE_FLAG },
    { "plat-darwin.IN", NULL, 4488956, 19203, NUITKA_BYTECODE_FLAG },
    { "plat-freebsd4.IN", NULL, 4508159, 11573, NUITKA_BYTECODE_FLAG },
    { "plat-freebsd5.IN", NULL, 4519732, 11573, NUITKA_BYTECODE_FLAG },
    { "plat-freebsd6.IN", NULL, 4531305, 18586, NUITKA_BYTECODE_FLAG },
    { "plat-freebsd7.IN", NULL, 4549891, 19186, NUITKA_BYTECODE_FLAG },
    { "plat-freebsd8.IN", NULL, 4569077, 19186, NUITKA_BYTECODE_FLAG },
    { "plat-linux.CDROM", NULL, 4588263, 6142, NUITKA_BYTECODE_FLAG },
    { "plat-linux.DLFCN", NULL, 4594405, 2262, NUITKA_BYTECODE_FLAG },
    { "plat-linux.TYPES", NULL, 4596667, 4868, NUITKA_BYTECODE_FLAG },
    { "plat-netbsd1.IN", NULL, 4601535, 1841, NUITKA_BYTECODE_FLAG },
    { "plat-sunos5.CDIO", NULL, 4603376, 2343, NUITKA_BYTECODE_FLAG },
    { "plat-unixware7.IN", NULL, 4605719, 23340, NUITKA_BYTECODE_FLAG },
    { "plat-unixware7.STROPTS", NULL, 4629059, 7924, NUITKA_BYTECODE_FLAG },
    { "platform", NULL, 4636983, 31900, NUITKA_BYTECODE_FLAG },
    { "plistlib", NULL, 4668883, 29847, NUITKA_BYTECODE_FLAG },
    { "poplib", NULL, 4698730, 13940, NUITKA_BYTECODE_FLAG },
    { "posixpath", NULL, 4712670, 11147, NUITKA_BYTECODE_FLAG },
    { "pprint", NULL, 4723817, 17492, NUITKA_BYTECODE_FLAG },
    { "profile", NULL, 4741309, 15097, NUITKA_BYTECODE_FLAG },
    { "pstats", NULL, 4756406, 23579, NUITKA_BYTECODE_FLAG },
    { "py_compile", NULL, 4779985, 6890, NUITKA_BYTECODE_FLAG },
    { "pyclbr", NULL, 4786875, 9120, NUITKA_BYTECODE_FLAG },
    { "pydoc", NULL, 4795995, 90353, NUITKA_BYTECODE_FLAG },
    { "pydoc_data", NULL, 4886348, 151, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "pydoc_data.topics", NULL, 4886499, 377774, NUITKA_BYTECODE_FLAG },
    { "queue", NULL, 5264273, 9206, NUITKA_BYTECODE_FLAG },
    { "random", NULL, 5273479, 18997, NUITKA_BYTECODE_FLAG },
    { "rlcompleter", NULL, 5292476, 5585, NUITKA_BYTECODE_FLAG },
    { "runpy", NULL, 5298061, 7723, NUITKA_BYTECODE_FLAG },
    { "sched", NULL, 5305784, 6378, NUITKA_BYTECODE_FLAG },
    { "selectors", NULL, 5312162, 18308, NUITKA_BYTECODE_FLAG },
    { "shelve", NULL, 5330470, 9952, NUITKA_BYTECODE_FLAG },
    { "shlex", NULL, 5340422, 7350, NUITKA_BYTECODE_FLAG },
    { "shutil", NULL, 5347772, 32552, NUITKA_BYTECODE_FLAG },
    { "signal", NULL, 5380324, 2766, NUITKA_BYTECODE_FLAG },
    { "site", NULL, 5383090, 14308, NUITKA_BYTECODE_FLAG },
    { "smtpd", NULL, 5397398, 29318, NUITKA_BYTECODE_FLAG },
    { "smtplib", NULL, 5426716, 37139, NUITKA_BYTECODE_FLAG },
    { "sndhdr", NULL, 5463855, 6917, NUITKA_BYTECODE_FLAG },
    { "socket", NULL, 5470772, 23049, NUITKA_BYTECODE_FLAG },
    { "socketserver", NULL, 5493821, 23193, NUITKA_BYTECODE_FLAG },
    { "sqlite3", NULL, 5517014, 181, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "sqlite3.dbapi2", NULL, 5517195, 2716, NUITKA_BYTECODE_FLAG },
    { "sqlite3.dump", NULL, 5519911, 2057, NUITKA_BYTECODE_FLAG },
    { "ssl", NULL, 5521968, 35638, NUITKA_BYTECODE_FLAG },
    { "statistics", NULL, 5557606, 15984, NUITKA_BYTECODE_FLAG },
    { "string", NULL, 5573590, 8486, NUITKA_BYTECODE_FLAG },
    { "subprocess", NULL, 5582076, 46573, NUITKA_BYTECODE_FLAG },
    { "sunau", NULL, 5628649, 18213, NUITKA_BYTECODE_FLAG },
    { "symbol", NULL, 5646862, 2742, NUITKA_BYTECODE_FLAG },
    { "symtable", NULL, 5649604, 11029, NUITKA_BYTECODE_FLAG },
    { "sysconfig", NULL, 5660633, 16805, NUITKA_BYTECODE_FLAG },
    { "tabnanny", NULL, 5677438, 7713, NUITKA_BYTECODE_FLAG },
    { "tarfile", NULL, 5685151, 68799, NUITKA_BYTECODE_FLAG },
    { "telnetlib", NULL, 5753950, 19243, NUITKA_BYTECODE_FLAG },
    { "tempfile", NULL, 5773193, 23589, NUITKA_BYTECODE_FLAG },
    { "textwrap", NULL, 5796782, 14089, NUITKA_BYTECODE_FLAG },
    { "this", NULL, 5810871, 1328, NUITKA_BYTECODE_FLAG },
    { "timeit", NULL, 5812199, 11022, NUITKA_BYTECODE_FLAG },
    { "tkinter", NULL, 5823221, 184025, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "tkinter.colorchooser", NULL, 6007246, 1219, NUITKA_BYTECODE_FLAG },
    { "tkinter.commondialog", NULL, 6008465, 1291, NUITKA_BYTECODE_FLAG },
    { "tkinter.constants", NULL, 6009756, 1819, NUITKA_BYTECODE_FLAG },
    { "tkinter.dialog", NULL, 6011575, 1637, NUITKA_BYTECODE_FLAG },
    { "tkinter.dnd", NULL, 6013212, 11842, NUITKA_BYTECODE_FLAG },
    { "tkinter.filedialog", NULL, 6025054, 13442, NUITKA_BYTECODE_FLAG },
    { "tkinter.font", NULL, 6038496, 6692, NUITKA_BYTECODE_FLAG },
    { "tkinter.messagebox", NULL, 6045188, 3292, NUITKA_BYTECODE_FLAG },
    { "tkinter.scrolledtext", NULL, 6048480, 2351, NUITKA_BYTECODE_FLAG },
    { "tkinter.simpledialog", NULL, 6050831, 11406, NUITKA_BYTECODE_FLAG },
    { "tkinter.tix", NULL, 6062237, 88898, NUITKA_BYTECODE_FLAG },
    { "tkinter.ttk", NULL, 6151135, 58249, NUITKA_BYTECODE_FLAG },
    { "trace", NULL, 6209384, 23951, NUITKA_BYTECODE_FLAG },
    { "tracemalloc", NULL, 6233335, 17090, NUITKA_BYTECODE_FLAG },
    { "turtle", NULL, 6250425, 138872, NUITKA_BYTECODE_FLAG },
    { "typing", NULL, 6389297, 55001, NUITKA_BYTECODE_FLAG },
    { "unittest", NULL, 6444298, 3102, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "unittest.case", NULL, 6447400, 50477, NUITKA_BYTECODE_FLAG },
    { "unittest.loader", NULL, 6497877, 15125, NUITKA_BYTECODE_FLAG },
    { "unittest.main", NULL, 6513002, 7690, NUITKA_BYTECODE_FLAG },
    { "unittest.mock", NULL, 6520692, 65533, NUITKA_BYTECODE_FLAG },
    { "unittest.result", NULL, 6586225, 7785, NUITKA_BYTECODE_FLAG },
    { "unittest.runner", NULL, 6594010, 7530, NUITKA_BYTECODE_FLAG },
    { "unittest.signals", NULL, 6601540, 2389, NUITKA_BYTECODE_FLAG },
    { "unittest.suite", NULL, 6603929, 9925, NUITKA_BYTECODE_FLAG },
    { "unittest.util", NULL, 6613854, 5239, NUITKA_BYTECODE_FLAG },
    { "urllib", NULL, 6619093, 147, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "urllib.error", NULL, 6619240, 2935, NUITKA_BYTECODE_FLAG },
    { "urllib.parse", NULL, 6622175, 30110, NUITKA_BYTECODE_FLAG },
    { "urllib.request", NULL, 6652285, 75660, NUITKA_BYTECODE_FLAG },
    { "urllib.response", NULL, 6727945, 3407, NUITKA_BYTECODE_FLAG },
    { "urllib.robotparser", NULL, 6731352, 6725, NUITKA_BYTECODE_FLAG },
    { "uu", NULL, 6738077, 3967, NUITKA_BYTECODE_FLAG },
    { "uuid", NULL, 6742044, 21969, NUITKA_BYTECODE_FLAG },
    { "venv", NULL, 6764013, 16370, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "wave", NULL, 6780383, 19018, NUITKA_BYTECODE_FLAG },
    { "webbrowser", NULL, 6799401, 17045, NUITKA_BYTECODE_FLAG },
    { "wsgiref", NULL, 6816446, 745, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "wsgiref.handlers", NULL, 6817191, 16932, NUITKA_BYTECODE_FLAG },
    { "wsgiref.headers", NULL, 6834123, 8165, NUITKA_BYTECODE_FLAG },
    { "wsgiref.simple_server", NULL, 6842288, 5661, NUITKA_BYTECODE_FLAG },
    { "wsgiref.util", NULL, 6847949, 5602, NUITKA_BYTECODE_FLAG },
    { "wsgiref.validate", NULL, 6853551, 15665, NUITKA_BYTECODE_FLAG },
    { "xdrlib", NULL, 6869216, 8978, NUITKA_BYTECODE_FLAG },
    { "xml", NULL, 6878194, 719, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom", NULL, 6878913, 5787, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom.NodeFilter", NULL, 6884700, 1027, NUITKA_BYTECODE_FLAG },
    { "xml.dom.domreg", NULL, 6885727, 2952, NUITKA_BYTECODE_FLAG },
    { "xml.dom.expatbuilder", NULL, 6888679, 29842, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minicompat", NULL, 6918521, 3093, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minidom", NULL, 6921614, 61394, NUITKA_BYTECODE_FLAG },
    { "xml.dom.pulldom", NULL, 6983008, 11593, NUITKA_BYTECODE_FLAG },
    { "xml.dom.xmlbuilder", NULL, 6994601, 14812, NUITKA_BYTECODE_FLAG },
    { "xml.etree", NULL, 7009413, 150, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.etree.ElementInclude", NULL, 7009563, 1764, NUITKA_BYTECODE_FLAG },
    { "xml.etree.ElementPath", NULL, 7011327, 6727, NUITKA_BYTECODE_FLAG },
    { "xml.etree.ElementTree", NULL, 7018054, 47727, NUITKA_BYTECODE_FLAG },
    { "xml.etree.cElementTree", NULL, 7065781, 194, NUITKA_BYTECODE_FLAG },
    { "xml.parsers", NULL, 7065975, 326, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.parsers.expat", NULL, 7066301, 367, NUITKA_BYTECODE_FLAG },
    { "xml.sax", NULL, 7066668, 3362, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.sax._exceptions", NULL, 7070030, 5696, NUITKA_BYTECODE_FLAG },
    { "xml.sax.expatreader", NULL, 7075726, 13352, NUITKA_BYTECODE_FLAG },
    { "xml.sax.handler", NULL, 7089078, 12518, NUITKA_BYTECODE_FLAG },
    { "xml.sax.saxutils", NULL, 7101596, 13762, NUITKA_BYTECODE_FLAG },
    { "xml.sax.xmlreader", NULL, 7115358, 17542, NUITKA_BYTECODE_FLAG },
    { "xmlrpc", NULL, 7132900, 147, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xmlrpc.client", NULL, 7133047, 36748, NUITKA_BYTECODE_FLAG },
    { "xmlrpc.server", NULL, 7169795, 31201, NUITKA_BYTECODE_FLAG },
    { "zipapp", NULL, 7200996, 6028, NUITKA_BYTECODE_FLAG },
    { "zipfile", NULL, 7207024, 49916, NUITKA_BYTECODE_FLAG },
    { NULL, NULL, 0, 0, 0 }
};

void setupMetaPathBasedLoader( void )
{
    static bool init_done = false;

    if ( init_done == false )
    {
        registerMetaPathBasedUnfreezer( meta_path_loader_entries );
        init_done = true;
    }
}

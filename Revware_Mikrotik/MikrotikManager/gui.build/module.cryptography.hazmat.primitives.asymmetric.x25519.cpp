/* Generated code for Python source for module 'cryptography.hazmat.primitives.asymmetric.x25519'
 * created by Nuitka version 0.5.32.5
 *
 * This code is in part copyright 2018 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_cryptography$hazmat$primitives$asymmetric$x25519 is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$primitives$asymmetric$x25519;
PyDictObject *moduledict_cryptography$hazmat$primitives$asymmetric$x25519;

/* The module constants used, if any. */
extern PyObject *const_str_digest_82e5b7f1075745a8638e06059354d03c;
extern PyObject *const_str_plain_x25519_load_private_bytes;
static PyObject *const_str_digest_790bc7af17b36fa600fe5f38fcc02991;
extern PyObject *const_str_plain_data;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_UNSUPPORTED_EXCHANGE_ALGORITHM;
extern PyObject *const_tuple_str_plain_backend_tuple;
extern PyObject *const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain__Reasons;
extern PyObject *const_str_plain_public_bytes;
extern PyObject *const_str_digest_0713cbbeeac70373b39e1f71574ea9c2;
extern PyObject *const_str_plain_generate;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_abc;
extern PyObject *const_str_plain_backend;
extern PyObject *const_str_plain_object;
static PyObject *const_str_digest_92762476848ae2f4818c508784af4a14;
static PyObject *const_tuple_str_plain_X25519PrivateKey_tuple_type_object_tuple_tuple;
extern PyObject *const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_add_metaclass;
extern PyObject *const_str_plain_X25519PrivateKey;
extern PyObject *const_str_plain_x25519_generate_key;
extern PyObject *const_str_plain_peer_public_key;
extern PyObject *const_str_plain_six;
static PyObject *const_str_digest_a73c00f52ea8350cb5b4b56951406999;
static PyObject *const_tuple_str_plain_cls_str_plain_data_str_plain_backend_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_ABCMeta;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_X25519PublicKey;
static PyObject *const_str_digest_b3868e4ca5c7adde5e4b721e686befa4;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_8a20b993a61f2c6dfbd046c80267336a;
extern PyObject *const_str_plain_exchange;
extern PyObject *const_tuple_str_plain_self_str_plain_peer_public_key_tuple;
static PyObject *const_str_digest_1f609a4db4a9dd1eb91e8fe7f8f5fc72;
extern PyObject *const_str_plain_UnsupportedAlgorithm;
extern PyObject *const_str_plain_abstractmethod;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_classmethod;
extern PyObject *const_str_plain_x25519_load_public_bytes;
extern PyObject *const_str_plain_cls;
static PyObject *const_tuple_str_plain_cls_str_plain_backend_tuple;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_str_plain_X25519PublicKey_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_d2f9b74adc886a9e1808a93bb0a49f9d;
static PyObject *const_str_digest_6bdd203415d3b6fa2c3a0235dc2bfa94;
extern PyObject *const_str_plain_public_key;
extern PyObject *const_str_plain_x25519_supported;
static PyObject *const_str_plain__from_private_bytes;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_9725cd7dd30fb3edfe84dcde59709fe6;
static PyObject *const_str_plain_from_public_bytes;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_790bc7af17b36fa600fe5f38fcc02991 = UNSTREAM_STRING( &constant_bin[ 151328 ], 33, 0 );
    const_str_digest_92762476848ae2f4818c508784af4a14 = UNSTREAM_STRING( &constant_bin[ 151361 ], 36, 0 );
    const_tuple_str_plain_X25519PrivateKey_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_X25519PrivateKey_tuple_type_object_tuple_tuple, 0, const_str_plain_X25519PrivateKey ); Py_INCREF( const_str_plain_X25519PrivateKey );
    PyTuple_SET_ITEM( const_tuple_str_plain_X25519PrivateKey_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_a73c00f52ea8350cb5b4b56951406999 = UNSTREAM_STRING( &constant_bin[ 132970 ], 25, 0 );
    const_tuple_str_plain_cls_str_plain_data_str_plain_backend_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_data_str_plain_backend_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_data_str_plain_backend_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_data_str_plain_backend_tuple, 2, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    const_str_digest_b3868e4ca5c7adde5e4b721e686befa4 = UNSTREAM_STRING( &constant_bin[ 151397 ], 123, 0 );
    const_str_digest_8a20b993a61f2c6dfbd046c80267336a = UNSTREAM_STRING( &constant_bin[ 133162 ], 28, 0 );
    const_str_digest_1f609a4db4a9dd1eb91e8fe7f8f5fc72 = UNSTREAM_STRING( &constant_bin[ 151520 ], 51, 0 );
    const_tuple_str_plain_cls_str_plain_backend_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_backend_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_backend_tuple, 1, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    const_tuple_str_plain_X25519PublicKey_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_X25519PublicKey_tuple_type_object_tuple_tuple, 0, const_str_plain_X25519PublicKey ); Py_INCREF( const_str_plain_X25519PublicKey );
    PyTuple_SET_ITEM( const_tuple_str_plain_X25519PublicKey_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_d2f9b74adc886a9e1808a93bb0a49f9d = UNSTREAM_STRING( &constant_bin[ 132942 ], 27, 0 );
    const_str_digest_6bdd203415d3b6fa2c3a0235dc2bfa94 = UNSTREAM_STRING( &constant_bin[ 151571 ], 25, 0 );
    const_str_plain__from_private_bytes = UNSTREAM_STRING( &constant_bin[ 151378 ], 19, 1 );
    const_str_digest_9725cd7dd30fb3edfe84dcde59709fe6 = UNSTREAM_STRING( &constant_bin[ 151596 ], 57, 0 );
    const_str_plain_from_public_bytes = UNSTREAM_STRING( &constant_bin[ 151344 ], 17, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$primitives$asymmetric$x25519( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a16642a376f37052f1dd7b33c0f94d29;
static PyCodeObject *codeobj_0fae46f9f07c03b8df4afe4529906ef7;
static PyCodeObject *codeobj_d020f51cafdc7e21fd5a833597544160;
static PyCodeObject *codeobj_efd799258e8e15a61f36e98c2c995420;
static PyCodeObject *codeobj_ea3c0d93881da686fd83037e46a5b085;
static PyCodeObject *codeobj_e853725951ace020171f01a2f84487d2;
static PyCodeObject *codeobj_d0bbf0d292e514b74ccbe33914c04c90;
static PyCodeObject *codeobj_6f589cb25b351e1eae9889a8b0cbbf8f;
static PyCodeObject *codeobj_85b42ead71f6805741ebdacefbe006e1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_b3868e4ca5c7adde5e4b721e686befa4;
    codeobj_a16642a376f37052f1dd7b33c0f94d29 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_9725cd7dd30fb3edfe84dcde59709fe6, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_0fae46f9f07c03b8df4afe4529906ef7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_X25519PrivateKey, 32, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_d020f51cafdc7e21fd5a833597544160 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_X25519PublicKey, 15, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_efd799258e8e15a61f36e98c2c995420 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__from_private_bytes, 43, const_tuple_str_plain_cls_str_plain_data_str_plain_backend_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ea3c0d93881da686fd83037e46a5b085 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_exchange, 52, const_tuple_str_plain_self_str_plain_peer_public_key_tuple, 2, 0, CO_NOFREE );
    codeobj_e853725951ace020171f01a2f84487d2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_public_bytes, 16, const_tuple_str_plain_cls_str_plain_data_str_plain_backend_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d0bbf0d292e514b74ccbe33914c04c90 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate, 33, const_tuple_str_plain_cls_str_plain_backend_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6f589cb25b351e1eae9889a8b0cbbf8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_bytes, 26, const_tuple_str_plain_self_tuple, 1, 0, CO_NOFREE );
    codeobj_85b42ead71f6805741ebdacefbe006e1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_public_key, 48, const_tuple_str_plain_self_tuple, 1, 0, CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_1_from_public_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_2_public_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_3_generate(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_4__from_private_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_5_public_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_6_exchange(  );


// The module function definitions.
static PyObject *impl_cryptography$hazmat$primitives$asymmetric$x25519$$$function_1_from_public_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_backend = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_e853725951ace020171f01a2f84487d2 = NULL;

    struct Nuitka_FrameObject *frame_e853725951ace020171f01a2f84487d2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e853725951ace020171f01a2f84487d2, codeobj_e853725951ace020171f01a2f84487d2, module_cryptography$hazmat$primitives$asymmetric$x25519, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e853725951ace020171f01a2f84487d2 = cache_frame_e853725951ace020171f01a2f84487d2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e853725951ace020171f01a2f84487d2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e853725951ace020171f01a2f84487d2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$x25519;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
    tmp_level_name_1 = const_int_0;
    frame_e853725951ace020171f01a2f84487d2->m_frame.f_lineno = 18;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_backend );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_backend == NULL );
    var_backend = tmp_assign_source_1;

    tmp_called_instance_1 = var_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_e853725951ace020171f01a2f84487d2->m_frame.f_lineno = 19;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_x25519_supported );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 19;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnsupportedAlgorithm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_1f609a4db4a9dd1eb91e8fe7f8f5fc72;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain__Reasons );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_Reasons" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_UNSUPPORTED_EXCHANGE_ALGORITHM );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_e853725951ace020171f01a2f84487d2->m_frame.f_lineno = 20;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 20;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = var_backend;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "backend" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_x25519_load_public_bytes );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_data;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_e853725951ace020171f01a2f84487d2->m_frame.f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e853725951ace020171f01a2f84487d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e853725951ace020171f01a2f84487d2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e853725951ace020171f01a2f84487d2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e853725951ace020171f01a2f84487d2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e853725951ace020171f01a2f84487d2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e853725951ace020171f01a2f84487d2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e853725951ace020171f01a2f84487d2,
        type_description_1,
        par_cls,
        par_data,
        var_backend
    );


    // Release cached frame.
    if ( frame_e853725951ace020171f01a2f84487d2 == cache_frame_e853725951ace020171f01a2f84487d2 )
    {
        Py_DECREF( frame_e853725951ace020171f01a2f84487d2 );
    }
    cache_frame_e853725951ace020171f01a2f84487d2 = NULL;

    assertFrameObject( frame_e853725951ace020171f01a2f84487d2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519$$$function_1_from_public_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_backend );
    var_backend = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_backend );
    var_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519$$$function_1_from_public_bytes );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$x25519$$$function_2_public_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519$$$function_2_public_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519$$$function_2_public_bytes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$x25519$$$function_3_generate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *var_backend = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_d0bbf0d292e514b74ccbe33914c04c90 = NULL;

    struct Nuitka_FrameObject *frame_d0bbf0d292e514b74ccbe33914c04c90;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d0bbf0d292e514b74ccbe33914c04c90, codeobj_d0bbf0d292e514b74ccbe33914c04c90, module_cryptography$hazmat$primitives$asymmetric$x25519, sizeof(void *)+sizeof(void *) );
    frame_d0bbf0d292e514b74ccbe33914c04c90 = cache_frame_d0bbf0d292e514b74ccbe33914c04c90;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d0bbf0d292e514b74ccbe33914c04c90 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d0bbf0d292e514b74ccbe33914c04c90 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$x25519;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
    tmp_level_name_1 = const_int_0;
    frame_d0bbf0d292e514b74ccbe33914c04c90->m_frame.f_lineno = 35;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_backend );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_backend == NULL );
    var_backend = tmp_assign_source_1;

    tmp_called_instance_1 = var_backend;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_d0bbf0d292e514b74ccbe33914c04c90->m_frame.f_lineno = 36;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_x25519_supported );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 36;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UnsupportedAlgorithm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_1f609a4db4a9dd1eb91e8fe7f8f5fc72;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain__Reasons );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Reasons );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_Reasons" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_UNSUPPORTED_EXCHANGE_ALGORITHM );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_d0bbf0d292e514b74ccbe33914c04c90->m_frame.f_lineno = 37;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 37;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_instance_2 = var_backend;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "backend" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_d0bbf0d292e514b74ccbe33914c04c90->m_frame.f_lineno = 41;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_x25519_generate_key );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0bbf0d292e514b74ccbe33914c04c90 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0bbf0d292e514b74ccbe33914c04c90 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d0bbf0d292e514b74ccbe33914c04c90 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d0bbf0d292e514b74ccbe33914c04c90, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d0bbf0d292e514b74ccbe33914c04c90->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d0bbf0d292e514b74ccbe33914c04c90, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d0bbf0d292e514b74ccbe33914c04c90,
        type_description_1,
        par_cls,
        var_backend
    );


    // Release cached frame.
    if ( frame_d0bbf0d292e514b74ccbe33914c04c90 == cache_frame_d0bbf0d292e514b74ccbe33914c04c90 )
    {
        Py_DECREF( frame_d0bbf0d292e514b74ccbe33914c04c90 );
    }
    cache_frame_d0bbf0d292e514b74ccbe33914c04c90 = NULL;

    assertFrameObject( frame_d0bbf0d292e514b74ccbe33914c04c90 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519$$$function_3_generate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( var_backend );
    var_backend = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( var_backend );
    var_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519$$$function_3_generate );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$x25519$$$function_4__from_private_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_backend = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_efd799258e8e15a61f36e98c2c995420 = NULL;

    struct Nuitka_FrameObject *frame_efd799258e8e15a61f36e98c2c995420;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_efd799258e8e15a61f36e98c2c995420, codeobj_efd799258e8e15a61f36e98c2c995420, module_cryptography$hazmat$primitives$asymmetric$x25519, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_efd799258e8e15a61f36e98c2c995420 = cache_frame_efd799258e8e15a61f36e98c2c995420;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_efd799258e8e15a61f36e98c2c995420 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_efd799258e8e15a61f36e98c2c995420 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_9abb9f40508debfa3aae6d9135753f7e;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$x25519;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_backend_tuple;
    tmp_level_name_1 = const_int_0;
    frame_efd799258e8e15a61f36e98c2c995420->m_frame.f_lineno = 45;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_backend );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_backend == NULL );
    var_backend = tmp_assign_source_1;

    tmp_source_name_1 = var_backend;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_x25519_load_private_bytes );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_data;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_efd799258e8e15a61f36e98c2c995420->m_frame.f_lineno = 46;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_efd799258e8e15a61f36e98c2c995420 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_efd799258e8e15a61f36e98c2c995420 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_efd799258e8e15a61f36e98c2c995420 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_efd799258e8e15a61f36e98c2c995420, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_efd799258e8e15a61f36e98c2c995420->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_efd799258e8e15a61f36e98c2c995420, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_efd799258e8e15a61f36e98c2c995420,
        type_description_1,
        par_cls,
        par_data,
        var_backend
    );


    // Release cached frame.
    if ( frame_efd799258e8e15a61f36e98c2c995420 == cache_frame_efd799258e8e15a61f36e98c2c995420 )
    {
        Py_DECREF( frame_efd799258e8e15a61f36e98c2c995420 );
    }
    cache_frame_efd799258e8e15a61f36e98c2c995420 = NULL;

    assertFrameObject( frame_efd799258e8e15a61f36e98c2c995420 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519$$$function_4__from_private_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_backend );
    var_backend = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_backend );
    var_backend = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519$$$function_4__from_private_bytes );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$x25519$$$function_5_public_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519$$$function_5_public_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519$$$function_5_public_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$primitives$asymmetric$x25519$$$function_6_exchange( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_peer_public_key = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519$$$function_6_exchange );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_peer_public_key );
    par_peer_public_key = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_peer_public_key );
    par_peer_public_key = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519$$$function_6_exchange );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_1_from_public_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$x25519$$$function_1_from_public_bytes,
        const_str_plain_from_public_bytes,
#if PYTHON_VERSION >= 300
        const_str_digest_790bc7af17b36fa600fe5f38fcc02991,
#endif
        codeobj_e853725951ace020171f01a2f84487d2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$x25519,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_2_public_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$x25519$$$function_2_public_bytes,
        const_str_plain_public_bytes,
#if PYTHON_VERSION >= 300
        const_str_digest_8a20b993a61f2c6dfbd046c80267336a,
#endif
        codeobj_6f589cb25b351e1eae9889a8b0cbbf8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$x25519,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_3_generate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$x25519$$$function_3_generate,
        const_str_plain_generate,
#if PYTHON_VERSION >= 300
        const_str_digest_6bdd203415d3b6fa2c3a0235dc2bfa94,
#endif
        codeobj_d0bbf0d292e514b74ccbe33914c04c90,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$x25519,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_4__from_private_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$x25519$$$function_4__from_private_bytes,
        const_str_plain__from_private_bytes,
#if PYTHON_VERSION >= 300
        const_str_digest_92762476848ae2f4818c508784af4a14,
#endif
        codeobj_efd799258e8e15a61f36e98c2c995420,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$x25519,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_5_public_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$x25519$$$function_5_public_key,
        const_str_plain_public_key,
#if PYTHON_VERSION >= 300
        const_str_digest_d2f9b74adc886a9e1808a93bb0a49f9d,
#endif
        codeobj_85b42ead71f6805741ebdacefbe006e1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$x25519,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_6_exchange(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$primitives$asymmetric$x25519$$$function_6_exchange,
        const_str_plain_exchange,
#if PYTHON_VERSION >= 300
        const_str_digest_a73c00f52ea8350cb5b4b56951406999,
#endif
        codeobj_ea3c0d93881da686fd83037e46a5b085,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$primitives$asymmetric$x25519,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$primitives$asymmetric$x25519 =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.primitives.asymmetric.x25519",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;

extern PyObject *const_str_plain___loader__;
extern PyObject *metapath_based_loader;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( cryptography$hazmat$primitives$asymmetric$x25519 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$asymmetric$x25519 );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.asymmetric.x25519: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.asymmetric.x25519: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.primitives.asymmetric.x25519: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$primitives$asymmetric$x25519" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$primitives$asymmetric$x25519 = Py_InitModule4(
        "cryptography.hazmat.primitives.asymmetric.x25519",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$primitives$asymmetric$x25519 = PyModule_Create( &mdef_cryptography$hazmat$primitives$asymmetric$x25519 );
#endif

    moduledict_cryptography$hazmat$primitives$asymmetric$x25519 = MODULE_DICT( module_cryptography$hazmat$primitives$asymmetric$x25519 );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$primitives$asymmetric$x25519,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$x25519,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$primitives$asymmetric$x25519,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$primitives$asymmetric$x25519 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_0713cbbeeac70373b39e1f71574ea9c2, module_cryptography$hazmat$primitives$asymmetric$x25519 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_classmethod_arg_1;
    PyObject *tmp_classmethod_arg_2;
    PyObject *tmp_classmethod_arg_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_d020f51cafdc7e21fd5a833597544160_2 = NULL;

    struct Nuitka_FrameObject *frame_d020f51cafdc7e21fd5a833597544160_2;

    static struct Nuitka_FrameObject *cache_frame_0fae46f9f07c03b8df4afe4529906ef7_3 = NULL;

    struct Nuitka_FrameObject *frame_0fae46f9f07c03b8df4afe4529906ef7_3;

    struct Nuitka_FrameObject *frame_a16642a376f37052f1dd7b33c0f94d29;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    PyObject *locals_cryptography$hazmat$primitives$asymmetric$x25519_32 = NULL;
    PyObject *locals_cryptography$hazmat$primitives$asymmetric$x25519_15 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_b3868e4ca5c7adde5e4b721e686befa4;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( !(tmp_assign_source_4 == NULL) );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_a16642a376f37052f1dd7b33c0f94d29 = MAKE_MODULE_FRAME( codeobj_a16642a376f37052f1dd7b33c0f94d29, module_cryptography$hazmat$primitives$asymmetric$x25519 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a16642a376f37052f1dd7b33c0f94d29 );
    assert( Py_REFCNT( frame_a16642a376f37052f1dd7b33c0f94d29 ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_1 = const_str_plain_abc;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$x25519;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_a16642a376f37052f1dd7b33c0f94d29->m_frame.f_lineno = 7;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_abc, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_six;
    tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$x25519;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_a16642a376f37052f1dd7b33c0f94d29->m_frame.f_lineno = 9;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_9 );
    tmp_name_name_3 = const_str_digest_82e5b7f1075745a8638e06059354d03c;
    tmp_globals_name_3 = (PyObject *)moduledict_cryptography$hazmat$primitives$asymmetric$x25519;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_UnsupportedAlgorithm_str_plain__Reasons_tuple;
    tmp_level_name_3 = const_int_0;
    frame_a16642a376f37052f1dd7b33c0f94d29->m_frame.f_lineno = 11;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_10;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_UnsupportedAlgorithm );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_UnsupportedAlgorithm, tmp_assign_source_11 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain__Reasons );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain__Reasons, tmp_assign_source_12 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_assign_source_13 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;

    // Tried code:
    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_1:;
    tmp_bases_name_1 = const_tuple_type_object_tuple;
    tmp_assign_source_14 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_14;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    tmp_cond_value_2 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_source_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    tmp_args_name_1 = const_tuple_str_plain_X25519PublicKey_tuple_type_object_tuple_tuple;
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_a16642a376f37052f1dd7b33c0f94d29->m_frame.f_lineno = 15;
    tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_3;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_15 = PyDict_New();
    condexpr_end_2:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_15;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 14;

        goto try_except_handler_3;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_add_metaclass );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_3;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 14;

        goto try_except_handler_3;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 14;

        goto try_except_handler_3;
    }
    frame_a16642a376f37052f1dd7b33c0f94d29->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_3;
    }
    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$primitives$asymmetric$x25519_15 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_0713cbbeeac70373b39e1f71574ea9c2;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_15, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_5;
    }
    tmp_dictset_value = const_str_plain_X25519PublicKey;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_15, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_5;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_d020f51cafdc7e21fd5a833597544160_2, codeobj_d020f51cafdc7e21fd5a833597544160, module_cryptography$hazmat$primitives$asymmetric$x25519, sizeof(void *) );
    frame_d020f51cafdc7e21fd5a833597544160_2 = cache_frame_d020f51cafdc7e21fd5a833597544160_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d020f51cafdc7e21fd5a833597544160_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d020f51cafdc7e21fd5a833597544160_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_res = MAPPING_HAS_ITEM( locals_cryptography$hazmat$primitives$asymmetric$x25519_15, const_str_plain_classmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_called_name_4 = PyObject_GetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_15, const_str_plain_classmethod );

    if ( tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 16;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_3 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_1_from_public_bytes(  );
    frame_d020f51cafdc7e21fd5a833597544160_2->m_frame.f_lineno = 16;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_classmethod_arg_1 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_1_from_public_bytes(  );
    tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
    Py_DECREF( tmp_classmethod_arg_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    condexpr_end_3:;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_15, const_str_plain_from_public_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_called_instance_1 = PyObject_GetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_15, const_str_plain_abc );

    if ( tmp_called_instance_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_1 == NULL ))
        {
            tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 26;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_args_element_name_4 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_2_public_bytes(  );
    frame_d020f51cafdc7e21fd5a833597544160_2->m_frame.f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_15, const_str_plain_public_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d020f51cafdc7e21fd5a833597544160_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d020f51cafdc7e21fd5a833597544160_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d020f51cafdc7e21fd5a833597544160_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d020f51cafdc7e21fd5a833597544160_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d020f51cafdc7e21fd5a833597544160_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d020f51cafdc7e21fd5a833597544160_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_d020f51cafdc7e21fd5a833597544160_2 == cache_frame_d020f51cafdc7e21fd5a833597544160_2 )
    {
        Py_DECREF( frame_d020f51cafdc7e21fd5a833597544160_2 );
    }
    cache_frame_d020f51cafdc7e21fd5a833597544160_2 = NULL;

    assertFrameObject( frame_d020f51cafdc7e21fd5a833597544160_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_5;
    skip_nested_handling_1:;
    tmp_called_name_5 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_tuple_element_1 = const_str_plain_X25519PublicKey;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_cryptography$hazmat$primitives$asymmetric$x25519_15;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_1 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_a16642a376f37052f1dd7b33c0f94d29->m_frame.f_lineno = 15;
    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_5;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_17;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519 );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    Py_DECREF( locals_cryptography$hazmat$primitives$asymmetric$x25519_15 );
    locals_cryptography$hazmat$primitives$asymmetric$x25519_15 = NULL;
    goto try_return_handler_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$hazmat$primitives$asymmetric$x25519_15 );
    locals_cryptography$hazmat$primitives$asymmetric$x25519_15 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519 );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519 );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 15;
    goto try_except_handler_3;
    outline_result_1:;
    tmp_args_element_name_2 = tmp_outline_return_value_1;
    frame_a16642a376f37052f1dd7b33c0f94d29->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_X25519PublicKey, tmp_assign_source_16 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    tmp_assign_source_18 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_18;

    // Tried code:
    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_6;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_6;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_6;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_metaclass_name_2 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_2 != NULL );
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_4:;
    tmp_bases_name_2 = const_tuple_type_object_tuple;
    tmp_assign_source_19 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_6;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_19;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_6;
    }
    tmp_cond_value_5 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_6;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_6;
    }
    branch_no_2:;
    tmp_hasattr_source_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_2 );
    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_6;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_source_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_6;
    }
    tmp_args_name_3 = const_tuple_str_plain_X25519PrivateKey_tuple_type_object_tuple_tuple;
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_a16642a376f37052f1dd7b33c0f94d29->m_frame.f_lineno = 32;
    tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_6;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_assign_source_20 = PyDict_New();
    condexpr_end_5:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_20;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;

        goto try_except_handler_6;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_add_metaclass );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_6;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;

        goto try_except_handler_6;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 31;

        goto try_except_handler_6;
    }
    frame_a16642a376f37052f1dd7b33c0f94d29->m_frame.f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_called_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_6;
    }
    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$primitives$asymmetric$x25519_32 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_0713cbbeeac70373b39e1f71574ea9c2;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_32, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_8;
    }
    tmp_dictset_value = const_str_plain_X25519PrivateKey;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_32, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_8;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_0fae46f9f07c03b8df4afe4529906ef7_3, codeobj_0fae46f9f07c03b8df4afe4529906ef7, module_cryptography$hazmat$primitives$asymmetric$x25519, sizeof(void *) );
    frame_0fae46f9f07c03b8df4afe4529906ef7_3 = cache_frame_0fae46f9f07c03b8df4afe4529906ef7_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0fae46f9f07c03b8df4afe4529906ef7_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0fae46f9f07c03b8df4afe4529906ef7_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_res = MAPPING_HAS_ITEM( locals_cryptography$hazmat$primitives$asymmetric$x25519_32, const_str_plain_classmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_called_name_9 = PyObject_GetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_32, const_str_plain_classmethod );

    if ( tmp_called_name_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_args_element_name_7 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_3_generate(  );
    frame_0fae46f9f07c03b8df4afe4529906ef7_3->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_classmethod_arg_2 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_3_generate(  );
    tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_2 );
    Py_DECREF( tmp_classmethod_arg_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    condexpr_end_6:;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_32, const_str_plain_generate, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_cryptography$hazmat$primitives$asymmetric$x25519_32, const_str_plain_classmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_cond_value_7 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_called_name_10 = PyObject_GetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_32, const_str_plain_classmethod );

    if ( tmp_called_name_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_args_element_name_8 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_4__from_private_bytes(  );
    frame_0fae46f9f07c03b8df4afe4529906ef7_3->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_classmethod_arg_3 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_4__from_private_bytes(  );
    tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_3 );
    Py_DECREF( tmp_classmethod_arg_3 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    condexpr_end_7:;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_32, const_str_plain__from_private_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_instance_2 = PyObject_GetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_32, const_str_plain_abc );

    if ( tmp_called_instance_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_2 == NULL ))
        {
            tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    tmp_args_element_name_9 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_5_public_key(  );
    frame_0fae46f9f07c03b8df4afe4529906ef7_3->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_32, const_str_plain_public_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_instance_3 = PyObject_GetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_32, const_str_plain_abc );

    if ( tmp_called_instance_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_3 == NULL ))
        {
            tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 52;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    tmp_args_element_name_10 = MAKE_FUNCTION_cryptography$hazmat$primitives$asymmetric$x25519$$$function_6_exchange(  );
    frame_0fae46f9f07c03b8df4afe4529906ef7_3->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$primitives$asymmetric$x25519_32, const_str_plain_exchange, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0fae46f9f07c03b8df4afe4529906ef7_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0fae46f9f07c03b8df4afe4529906ef7_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0fae46f9f07c03b8df4afe4529906ef7_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0fae46f9f07c03b8df4afe4529906ef7_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0fae46f9f07c03b8df4afe4529906ef7_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0fae46f9f07c03b8df4afe4529906ef7_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_0fae46f9f07c03b8df4afe4529906ef7_3 == cache_frame_0fae46f9f07c03b8df4afe4529906ef7_3 )
    {
        Py_DECREF( frame_0fae46f9f07c03b8df4afe4529906ef7_3 );
    }
    cache_frame_0fae46f9f07c03b8df4afe4529906ef7_3 = NULL;

    assertFrameObject( frame_0fae46f9f07c03b8df4afe4529906ef7_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_8;
    skip_nested_handling_2:;
    tmp_called_name_11 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_11 );
    tmp_tuple_element_2 = const_str_plain_X25519PrivateKey;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_cryptography$hazmat$primitives$asymmetric$x25519_32;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_2 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_a16642a376f37052f1dd7b33c0f94d29->m_frame.f_lineno = 32;
    tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_8;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_22;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519 );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    Py_DECREF( locals_cryptography$hazmat$primitives$asymmetric$x25519_32 );
    locals_cryptography$hazmat$primitives$asymmetric$x25519_32 = NULL;
    goto try_return_handler_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$hazmat$primitives$asymmetric$x25519_32 );
    locals_cryptography$hazmat$primitives$asymmetric$x25519_32 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519 );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$primitives$asymmetric$x25519 );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 32;
    goto try_except_handler_6;
    outline_result_2:;
    tmp_args_element_name_6 = tmp_outline_return_value_2;
    frame_a16642a376f37052f1dd7b33c0f94d29->m_frame.f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$primitives$asymmetric$x25519, (Nuitka_StringObject *)const_str_plain_X25519PrivateKey, tmp_assign_source_21 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a16642a376f37052f1dd7b33c0f94d29 );
#endif
    popFrameStack();

    assertFrameObject( frame_a16642a376f37052f1dd7b33c0f94d29 );

    goto frame_no_exception_3;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a16642a376f37052f1dd7b33c0f94d29 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a16642a376f37052f1dd7b33c0f94d29, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a16642a376f37052f1dd7b33c0f94d29->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a16642a376f37052f1dd7b33c0f94d29, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;


    return MOD_RETURN_VALUE( module_cryptography$hazmat$primitives$asymmetric$x25519 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

/* Generated code for Python source for module 'pyasn1.compat.octets'
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

/* The _module_pyasn1$compat$octets is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$compat$octets;
PyDictObject *moduledict_pyasn1$compat$octets;

/* The module constants used, if any. */
extern PyObject *const_str_plain_ensureString;
extern PyObject *const_str_digest_20861594150da1e43b5ee3f86b9deef6;
extern PyObject *const_str_plain_int2oct;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_sys;
static PyObject *const_tuple_str_digest_20861594150da1e43b5ee3f86b9deef6_tuple;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_str;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_oct2int;
extern PyObject *const_str_plain_null;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_chr;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_58c2836bd656d96de4fce58c5a6f004c;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_ints2octs;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_digest_60685fcea8bf95c3a304455958b7e27d;
extern PyObject *const_str_plain_isStringType;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_ord;
extern PyObject *const_str_plain_isOctetsType;
static PyObject *const_str_digest_70980fbda7ec531ebd1bb916648c3b9f;
extern PyObject *const_tuple_str_plain_s_tuple;
static PyObject *const_str_plain_octs2str;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_str2octs;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_octs2ints;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_str_plain_version_info_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_digest_20861594150da1e43b5ee3f86b9deef6_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_20861594150da1e43b5ee3f86b9deef6_tuple, 0, const_str_digest_20861594150da1e43b5ee3f86b9deef6 ); Py_INCREF( const_str_digest_20861594150da1e43b5ee3f86b9deef6 );
    const_str_digest_58c2836bd656d96de4fce58c5a6f004c = UNSTREAM_STRING( &constant_bin[ 631182 ], 29, 0 );
    const_str_digest_70980fbda7ec531ebd1bb916648c3b9f = UNSTREAM_STRING( &constant_bin[ 631211 ], 95, 0 );
    const_str_plain_octs2str = UNSTREAM_STRING( &constant_bin[ 631306 ], 8, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyasn1$compat$octets( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a0412d173b9c3ba5faac5603ce048737;
static PyCodeObject *codeobj_4b09e5ca6f022e1c0d2240a84f9acf02;
static PyCodeObject *codeobj_ff4f83c048bc27f32f23379fe2a8e999;
static PyCodeObject *codeobj_87c98f8f6078e257eb24759cab0a530e;
static PyCodeObject *codeobj_48a119065553024a787693e459bf75ee;
static PyCodeObject *codeobj_123998b78651c5d080b15a771584d711;
static PyCodeObject *codeobj_a8913c9ceb5901c054981e3c680b10f5;
static PyCodeObject *codeobj_93e304c680a11037a1fef642c3ce8afb;
static PyCodeObject *codeobj_324ecc5133a69e820b9232325da1ef92;
static PyCodeObject *codeobj_2286637ff955547a762f4557a17aca17;
static PyCodeObject *codeobj_4c5b81a9f02625e48a72597cd506817c;
static PyCodeObject *codeobj_0c914f8edd08f8446f2220444e046326;
static PyCodeObject *codeobj_517e19eac38e55b0f553e419bfd23112;
static PyCodeObject *codeobj_02dede8e1ac3bbba97edf250dc9348c0;
static PyCodeObject *codeobj_10be44d388e4c33448ed9b769d558393;
static PyCodeObject *codeobj_ef6d4754ac6da7b81a1dba083a77fee0;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_70980fbda7ec531ebd1bb916648c3b9f;
    codeobj_a0412d173b9c3ba5faac5603ce048737 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 12, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4b09e5ca6f022e1c0d2240a84f9acf02 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 17, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ff4f83c048bc27f32f23379fe2a8e999 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 19, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_87c98f8f6078e257eb24759cab0a530e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 21, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_48a119065553024a787693e459bf75ee = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 23, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_123998b78651c5d080b15a771584d711 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 25, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a8913c9ceb5901c054981e3c680b10f5 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 31, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_93e304c680a11037a1fef642c3ce8afb = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 34, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_324ecc5133a69e820b9232325da1ef92 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 36, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2286637ff955547a762f4557a17aca17 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 38, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4c5b81a9f02625e48a72597cd506817c = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 40, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0c914f8edd08f8446f2220444e046326 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 42, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_517e19eac38e55b0f553e419bfd23112 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 44, const_tuple_str_plain_s_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_02dede8e1ac3bbba97edf250dc9348c0 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 12, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_10be44d388e4c33448ed9b769d558393 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 17, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ef6d4754ac6da7b81a1dba083a77fee0 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_58c2836bd656d96de4fce58c5a6f004c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_10_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_11_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_12_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_13_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_2_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_3_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_4_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_5_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_6_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_7_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_8_lambda(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_9_lambda(  );


// The module function definitions.
static PyObject *impl_pyasn1$compat$octets$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_02dede8e1ac3bbba97edf250dc9348c0_2 = NULL;

    struct Nuitka_FrameObject *frame_02dede8e1ac3bbba97edf250dc9348c0_2;

    static struct Nuitka_FrameObject *cache_frame_a0412d173b9c3ba5faac5603ce048737 = NULL;

    struct Nuitka_FrameObject *frame_a0412d173b9c3ba5faac5603ce048737;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a0412d173b9c3ba5faac5603ce048737, codeobj_a0412d173b9c3ba5faac5603ce048737, module_pyasn1$compat$octets, sizeof(void *) );
    frame_a0412d173b9c3ba5faac5603ce048737 = cache_frame_a0412d173b9c3ba5faac5603ce048737;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a0412d173b9c3ba5faac5603ce048737 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a0412d173b9c3ba5faac5603ce048737 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = const_str_empty;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( !(tmp_called_name_1 == NULL) );
    // Tried code:
    tmp_iter_arg_1 = par_s;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    assert( tmp_listcomp_1__$0 == NULL );
    tmp_listcomp_1__$0 = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( tmp_listcomp_1__contraction == NULL );
    tmp_listcomp_1__contraction = tmp_assign_source_2;

    MAKE_OR_REUSE_FRAME( cache_frame_02dede8e1ac3bbba97edf250dc9348c0_2, codeobj_02dede8e1ac3bbba97edf250dc9348c0, module_pyasn1$compat$octets, sizeof(void *) );
    frame_02dede8e1ac3bbba97edf250dc9348c0_2 = cache_frame_02dede8e1ac3bbba97edf250dc9348c0_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_02dede8e1ac3bbba97edf250dc9348c0_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_02dede8e1ac3bbba97edf250dc9348c0_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_listcomp_1__$0;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "o";
        exception_lineno = 12;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_listcomp_1__iter_value_0;
        tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 12;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = outline_0_var_x;
        outline_0_var_x = tmp_assign_source_4;
        Py_INCREF( outline_0_var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_listcomp_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_int2oct );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int2oct );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "int2oct" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 12;
        type_description_2 = "o";
        goto try_except_handler_3;
    }

    tmp_args_element_name_2 = outline_0_var_x;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_02dede8e1ac3bbba97edf250dc9348c0_2->m_frame.f_lineno = 12;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcomp_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_02dede8e1ac3bbba97edf250dc9348c0_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_02dede8e1ac3bbba97edf250dc9348c0_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_02dede8e1ac3bbba97edf250dc9348c0_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_02dede8e1ac3bbba97edf250dc9348c0_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_02dede8e1ac3bbba97edf250dc9348c0_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_02dede8e1ac3bbba97edf250dc9348c0_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_02dede8e1ac3bbba97edf250dc9348c0_2,
        type_description_2,
        outline_0_var_x
    );


    // Release cached frame.
    if ( frame_02dede8e1ac3bbba97edf250dc9348c0_2 == cache_frame_02dede8e1ac3bbba97edf250dc9348c0_2 )
    {
        Py_DECREF( frame_02dede8e1ac3bbba97edf250dc9348c0_2 );
    }
    cache_frame_02dede8e1ac3bbba97edf250dc9348c0_2 = NULL;

    assertFrameObject( frame_02dede8e1ac3bbba97edf250dc9348c0_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "o";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_x );
    outline_0_var_x = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var_x );
    outline_0_var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_1_lambda );
    return NULL;
    outline_exception_1:;
    exception_lineno = 12;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_args_element_name_1 = tmp_outline_return_value_1;
    frame_a0412d173b9c3ba5faac5603ce048737->m_frame.f_lineno = 12;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0412d173b9c3ba5faac5603ce048737 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0412d173b9c3ba5faac5603ce048737 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a0412d173b9c3ba5faac5603ce048737 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a0412d173b9c3ba5faac5603ce048737, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a0412d173b9c3ba5faac5603ce048737->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a0412d173b9c3ba5faac5603ce048737, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a0412d173b9c3ba5faac5603ce048737,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_a0412d173b9c3ba5faac5603ce048737 == cache_frame_a0412d173b9c3ba5faac5603ce048737 )
    {
        Py_DECREF( frame_a0412d173b9c3ba5faac5603ce048737 );
    }
    cache_frame_a0412d173b9c3ba5faac5603ce048737 = NULL;

    assertFrameObject( frame_a0412d173b9c3ba5faac5603ce048737 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_1_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_2_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_10be44d388e4c33448ed9b769d558393_2 = NULL;

    struct Nuitka_FrameObject *frame_10be44d388e4c33448ed9b769d558393_2;

    static struct Nuitka_FrameObject *cache_frame_4b09e5ca6f022e1c0d2240a84f9acf02 = NULL;

    struct Nuitka_FrameObject *frame_4b09e5ca6f022e1c0d2240a84f9acf02;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4b09e5ca6f022e1c0d2240a84f9acf02, codeobj_4b09e5ca6f022e1c0d2240a84f9acf02, module_pyasn1$compat$octets, sizeof(void *) );
    frame_4b09e5ca6f022e1c0d2240a84f9acf02 = cache_frame_4b09e5ca6f022e1c0d2240a84f9acf02;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4b09e5ca6f022e1c0d2240a84f9acf02 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4b09e5ca6f022e1c0d2240a84f9acf02 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_iter_arg_1 = par_s;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "o";
        goto try_except_handler_2;
    }
    assert( tmp_listcomp_1__$0 == NULL );
    tmp_listcomp_1__$0 = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( tmp_listcomp_1__contraction == NULL );
    tmp_listcomp_1__contraction = tmp_assign_source_2;

    MAKE_OR_REUSE_FRAME( cache_frame_10be44d388e4c33448ed9b769d558393_2, codeobj_10be44d388e4c33448ed9b769d558393, module_pyasn1$compat$octets, sizeof(void *) );
    frame_10be44d388e4c33448ed9b769d558393_2 = cache_frame_10be44d388e4c33448ed9b769d558393_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10be44d388e4c33448ed9b769d558393_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10be44d388e4c33448ed9b769d558393_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_listcomp_1__$0;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_2 = "o";
        exception_lineno = 17;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_listcomp_1__iter_value_0;
        tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 17;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = outline_0_var_x;
        outline_0_var_x = tmp_assign_source_4;
        Py_INCREF( outline_0_var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_listcomp_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_oct2int );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_oct2int );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "oct2int" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;
        type_description_2 = "o";
        goto try_except_handler_3;
    }

    tmp_args_element_name_1 = outline_0_var_x;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_10be44d388e4c33448ed9b769d558393_2->m_frame.f_lineno = 17;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcomp_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10be44d388e4c33448ed9b769d558393_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_10be44d388e4c33448ed9b769d558393_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10be44d388e4c33448ed9b769d558393_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10be44d388e4c33448ed9b769d558393_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10be44d388e4c33448ed9b769d558393_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10be44d388e4c33448ed9b769d558393_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10be44d388e4c33448ed9b769d558393_2,
        type_description_2,
        outline_0_var_x
    );


    // Release cached frame.
    if ( frame_10be44d388e4c33448ed9b769d558393_2 == cache_frame_10be44d388e4c33448ed9b769d558393_2 )
    {
        Py_DECREF( frame_10be44d388e4c33448ed9b769d558393_2 );
    }
    cache_frame_10be44d388e4c33448ed9b769d558393_2 = NULL;

    assertFrameObject( frame_10be44d388e4c33448ed9b769d558393_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "o";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_x );
    outline_0_var_x = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var_x );
    outline_0_var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_2_lambda );
    return NULL;
    outline_exception_1:;
    exception_lineno = 17;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_return_value = tmp_outline_return_value_1;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b09e5ca6f022e1c0d2240a84f9acf02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b09e5ca6f022e1c0d2240a84f9acf02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4b09e5ca6f022e1c0d2240a84f9acf02 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4b09e5ca6f022e1c0d2240a84f9acf02, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4b09e5ca6f022e1c0d2240a84f9acf02->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4b09e5ca6f022e1c0d2240a84f9acf02, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4b09e5ca6f022e1c0d2240a84f9acf02,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_4b09e5ca6f022e1c0d2240a84f9acf02 == cache_frame_4b09e5ca6f022e1c0d2240a84f9acf02 )
    {
        Py_DECREF( frame_4b09e5ca6f022e1c0d2240a84f9acf02 );
    }
    cache_frame_4b09e5ca6f022e1c0d2240a84f9acf02 = NULL;

    assertFrameObject( frame_4b09e5ca6f022e1c0d2240a84f9acf02 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_2_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_3_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_x;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_3_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_3_lambda );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pyasn1$compat$octets$$$function_4_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_x;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_4_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_4_lambda );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pyasn1$compat$octets$$$function_5_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_48a119065553024a787693e459bf75ee = NULL;

    struct Nuitka_FrameObject *frame_48a119065553024a787693e459bf75ee;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_48a119065553024a787693e459bf75ee, codeobj_48a119065553024a787693e459bf75ee, module_pyasn1$compat$octets, sizeof(void *) );
    frame_48a119065553024a787693e459bf75ee = cache_frame_48a119065553024a787693e459bf75ee;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_48a119065553024a787693e459bf75ee );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_48a119065553024a787693e459bf75ee ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_s;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
    tmp_return_value = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_48a119065553024a787693e459bf75ee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_48a119065553024a787693e459bf75ee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_48a119065553024a787693e459bf75ee );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_48a119065553024a787693e459bf75ee, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_48a119065553024a787693e459bf75ee->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_48a119065553024a787693e459bf75ee, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_48a119065553024a787693e459bf75ee,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_48a119065553024a787693e459bf75ee == cache_frame_48a119065553024a787693e459bf75ee )
    {
        Py_DECREF( frame_48a119065553024a787693e459bf75ee );
    }
    cache_frame_48a119065553024a787693e459bf75ee = NULL;

    assertFrameObject( frame_48a119065553024a787693e459bf75ee );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_5_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_5_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_6_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_123998b78651c5d080b15a771584d711 = NULL;

    struct Nuitka_FrameObject *frame_123998b78651c5d080b15a771584d711;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_123998b78651c5d080b15a771584d711, codeobj_123998b78651c5d080b15a771584d711, module_pyasn1$compat$octets, sizeof(void *) );
    frame_123998b78651c5d080b15a771584d711 = cache_frame_123998b78651c5d080b15a771584d711;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_123998b78651c5d080b15a771584d711 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_123998b78651c5d080b15a771584d711 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_s;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_unicode );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_isinstance_cls_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_123998b78651c5d080b15a771584d711 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_123998b78651c5d080b15a771584d711 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_123998b78651c5d080b15a771584d711 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_123998b78651c5d080b15a771584d711, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_123998b78651c5d080b15a771584d711->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_123998b78651c5d080b15a771584d711, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_123998b78651c5d080b15a771584d711,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_123998b78651c5d080b15a771584d711 == cache_frame_123998b78651c5d080b15a771584d711 )
    {
        Py_DECREF( frame_123998b78651c5d080b15a771584d711 );
    }
    cache_frame_123998b78651c5d080b15a771584d711 = NULL;

    assertFrameObject( frame_123998b78651c5d080b15a771584d711 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_6_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_6_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_7_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_a8913c9ceb5901c054981e3c680b10f5 = NULL;

    struct Nuitka_FrameObject *frame_a8913c9ceb5901c054981e3c680b10f5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a8913c9ceb5901c054981e3c680b10f5, codeobj_a8913c9ceb5901c054981e3c680b10f5, module_pyasn1$compat$octets, sizeof(void *) );
    frame_a8913c9ceb5901c054981e3c680b10f5 = cache_frame_a8913c9ceb5901c054981e3c680b10f5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a8913c9ceb5901c054981e3c680b10f5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a8913c9ceb5901c054981e3c680b10f5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_ints2octs );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ints2octs );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ints2octs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_x;

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_args_element_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
    frame_a8913c9ceb5901c054981e3c680b10f5->m_frame.f_lineno = 31;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8913c9ceb5901c054981e3c680b10f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8913c9ceb5901c054981e3c680b10f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8913c9ceb5901c054981e3c680b10f5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a8913c9ceb5901c054981e3c680b10f5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a8913c9ceb5901c054981e3c680b10f5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a8913c9ceb5901c054981e3c680b10f5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a8913c9ceb5901c054981e3c680b10f5,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_a8913c9ceb5901c054981e3c680b10f5 == cache_frame_a8913c9ceb5901c054981e3c680b10f5 )
    {
        Py_DECREF( frame_a8913c9ceb5901c054981e3c680b10f5 );
    }
    cache_frame_a8913c9ceb5901c054981e3c680b10f5 = NULL;

    assertFrameObject( frame_a8913c9ceb5901c054981e3c680b10f5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_7_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_7_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_8_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_x;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_8_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_8_lambda );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pyasn1$compat$octets$$$function_9_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_x;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_9_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_9_lambda );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_pyasn1$compat$octets$$$function_10_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_2286637ff955547a762f4557a17aca17 = NULL;

    struct Nuitka_FrameObject *frame_2286637ff955547a762f4557a17aca17;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2286637ff955547a762f4557a17aca17, codeobj_2286637ff955547a762f4557a17aca17, module_pyasn1$compat$octets, sizeof(void *) );
    frame_2286637ff955547a762f4557a17aca17 = cache_frame_2286637ff955547a762f4557a17aca17;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2286637ff955547a762f4557a17aca17 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2286637ff955547a762f4557a17aca17 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_x;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_2286637ff955547a762f4557a17aca17->m_frame.f_lineno = 38;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_20861594150da1e43b5ee3f86b9deef6_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2286637ff955547a762f4557a17aca17 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2286637ff955547a762f4557a17aca17 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2286637ff955547a762f4557a17aca17 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2286637ff955547a762f4557a17aca17, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2286637ff955547a762f4557a17aca17->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2286637ff955547a762f4557a17aca17, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2286637ff955547a762f4557a17aca17,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_2286637ff955547a762f4557a17aca17 == cache_frame_2286637ff955547a762f4557a17aca17 )
    {
        Py_DECREF( frame_2286637ff955547a762f4557a17aca17 );
    }
    cache_frame_2286637ff955547a762f4557a17aca17 = NULL;

    assertFrameObject( frame_2286637ff955547a762f4557a17aca17 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_10_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_10_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_11_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_4c5b81a9f02625e48a72597cd506817c = NULL;

    struct Nuitka_FrameObject *frame_4c5b81a9f02625e48a72597cd506817c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4c5b81a9f02625e48a72597cd506817c, codeobj_4c5b81a9f02625e48a72597cd506817c, module_pyasn1$compat$octets, sizeof(void *) );
    frame_4c5b81a9f02625e48a72597cd506817c = cache_frame_4c5b81a9f02625e48a72597cd506817c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4c5b81a9f02625e48a72597cd506817c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4c5b81a9f02625e48a72597cd506817c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_x;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_4c5b81a9f02625e48a72597cd506817c->m_frame.f_lineno = 40;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_20861594150da1e43b5ee3f86b9deef6_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c5b81a9f02625e48a72597cd506817c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c5b81a9f02625e48a72597cd506817c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4c5b81a9f02625e48a72597cd506817c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4c5b81a9f02625e48a72597cd506817c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4c5b81a9f02625e48a72597cd506817c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4c5b81a9f02625e48a72597cd506817c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4c5b81a9f02625e48a72597cd506817c,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_4c5b81a9f02625e48a72597cd506817c == cache_frame_4c5b81a9f02625e48a72597cd506817c )
    {
        Py_DECREF( frame_4c5b81a9f02625e48a72597cd506817c );
    }
    cache_frame_4c5b81a9f02625e48a72597cd506817c = NULL;

    assertFrameObject( frame_4c5b81a9f02625e48a72597cd506817c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_11_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_11_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_12_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_0c914f8edd08f8446f2220444e046326 = NULL;

    struct Nuitka_FrameObject *frame_0c914f8edd08f8446f2220444e046326;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0c914f8edd08f8446f2220444e046326, codeobj_0c914f8edd08f8446f2220444e046326, module_pyasn1$compat$octets, sizeof(void *) );
    frame_0c914f8edd08f8446f2220444e046326 = cache_frame_0c914f8edd08f8446f2220444e046326;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0c914f8edd08f8446f2220444e046326 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0c914f8edd08f8446f2220444e046326 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_s;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
    tmp_return_value = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c914f8edd08f8446f2220444e046326 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c914f8edd08f8446f2220444e046326 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c914f8edd08f8446f2220444e046326 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0c914f8edd08f8446f2220444e046326, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0c914f8edd08f8446f2220444e046326->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0c914f8edd08f8446f2220444e046326, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0c914f8edd08f8446f2220444e046326,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_0c914f8edd08f8446f2220444e046326 == cache_frame_0c914f8edd08f8446f2220444e046326 )
    {
        Py_DECREF( frame_0c914f8edd08f8446f2220444e046326 );
    }
    cache_frame_0c914f8edd08f8446f2220444e046326 = NULL;

    assertFrameObject( frame_0c914f8edd08f8446f2220444e046326 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_12_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_12_lambda );
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


static PyObject *impl_pyasn1$compat$octets$$$function_13_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_517e19eac38e55b0f553e419bfd23112 = NULL;

    struct Nuitka_FrameObject *frame_517e19eac38e55b0f553e419bfd23112;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_517e19eac38e55b0f553e419bfd23112, codeobj_517e19eac38e55b0f553e419bfd23112, module_pyasn1$compat$octets, sizeof(void *) );
    frame_517e19eac38e55b0f553e419bfd23112 = cache_frame_517e19eac38e55b0f553e419bfd23112;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_517e19eac38e55b0f553e419bfd23112 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_517e19eac38e55b0f553e419bfd23112 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_s;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
    tmp_return_value = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_517e19eac38e55b0f553e419bfd23112 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_517e19eac38e55b0f553e419bfd23112 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_517e19eac38e55b0f553e419bfd23112 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_517e19eac38e55b0f553e419bfd23112, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_517e19eac38e55b0f553e419bfd23112->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_517e19eac38e55b0f553e419bfd23112, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_517e19eac38e55b0f553e419bfd23112,
        type_description_1,
        par_s
    );


    // Release cached frame.
    if ( frame_517e19eac38e55b0f553e419bfd23112 == cache_frame_517e19eac38e55b0f553e419bfd23112 )
    {
        Py_DECREF( frame_517e19eac38e55b0f553e419bfd23112 );
    }
    cache_frame_517e19eac38e55b0f553e419bfd23112 = NULL;

    assertFrameObject( frame_517e19eac38e55b0f553e419bfd23112 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_13_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$octets$$$function_13_lambda );
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



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_10_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_10_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2286637ff955547a762f4557a17aca17,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_11_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_11_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4c5b81a9f02625e48a72597cd506817c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_12_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_12_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0c914f8edd08f8446f2220444e046326,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_13_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_13_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_517e19eac38e55b0f553e419bfd23112,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a0412d173b9c3ba5faac5603ce048737,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_2_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4b09e5ca6f022e1c0d2240a84f9acf02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_3_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_3_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ff4f83c048bc27f32f23379fe2a8e999,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_4_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_4_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_87c98f8f6078e257eb24759cab0a530e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_5_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_5_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_48a119065553024a787693e459bf75ee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_6_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_6_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_123998b78651c5d080b15a771584d711,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_7_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_7_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a8913c9ceb5901c054981e3c680b10f5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_8_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_8_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_93e304c680a11037a1fef642c3ce8afb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$octets$$$function_9_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$octets$$$function_9_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_324ecc5133a69e820b9232325da1ef92,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$octets,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyasn1$compat$octets =
{
    PyModuleDef_HEAD_INIT,
    "pyasn1.compat.octets",   /* m_name */
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

MOD_INIT_DECL( pyasn1$compat$octets )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyasn1$compat$octets );
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
    puts("pyasn1.compat.octets: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.compat.octets: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.compat.octets: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpyasn1$compat$octets" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyasn1$compat$octets = Py_InitModule4(
        "pyasn1.compat.octets",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pyasn1$compat$octets = PyModule_Create( &mdef_pyasn1$compat$octets );
#endif

    moduledict_pyasn1$compat$octets = MODULE_DICT( module_pyasn1$compat$octets );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pyasn1$compat$octets,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$compat$octets,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$compat$octets,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pyasn1$compat$octets );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_60685fcea8bf95c3a304455958b7e27d, module_pyasn1$compat$octets );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_called_name_1;
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    struct Nuitka_FrameObject *frame_ef6d4754ac6da7b81a1dba083a77fee0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_70980fbda7ec531ebd1bb916648c3b9f;
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_pyasn1$compat$octets;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_version_info_tuple;
    tmp_level_name_1 = const_int_0;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( !(tmp_import_name_from_1 == NULL) );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_version_info );
    Py_DECREF( tmp_import_name_from_1 );
    assert( !(tmp_assign_source_4 == NULL) );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_version_info, tmp_assign_source_4 );
    // Frame without reuse.
    frame_ef6d4754ac6da7b81a1dba083a77fee0 = MAKE_MODULE_FRAME( codeobj_ef6d4754ac6da7b81a1dba083a77fee0, module_pyasn1$compat$octets );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ef6d4754ac6da7b81a1dba083a77fee0 );
    assert( Py_REFCNT( frame_ef6d4754ac6da7b81a1dba083a77fee0 ) == 2 );

    // Framed code:
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_version_info );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_version_info );
    }

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_LtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_5 = LOOKUP_BUILTIN( const_str_plain_chr );
    assert( tmp_assign_source_5 != NULL );
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_int2oct, tmp_assign_source_5 );
    tmp_assign_source_6 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_1_lambda(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_ints2octs, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_empty;
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_null, tmp_assign_source_7 );
    tmp_assign_source_8 = LOOKUP_BUILTIN( const_str_plain_ord );
    assert( tmp_assign_source_8 != NULL );
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_oct2int, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_2_lambda(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_octs2ints, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_3_lambda(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_str2octs, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_4_lambda(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_octs2str, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_5_lambda(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_isOctetsType, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_6_lambda(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_isStringType, tmp_assign_source_13 );
    tmp_assign_source_14 = (PyObject *)&PyUnicode_Type;
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_ensureString, tmp_assign_source_14 );
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_15 = (PyObject *)&PyBytes_Type;
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_ints2octs, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_7_lambda(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_int2oct, tmp_assign_source_16 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_ints2octs );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ints2octs );
    }

    CHECK_OBJECT( tmp_called_name_1 );
    frame_ef6d4754ac6da7b81a1dba083a77fee0->m_frame.f_lineno = 32;
    tmp_assign_source_17 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_null, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_8_lambda(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_oct2int, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_9_lambda(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_octs2ints, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_10_lambda(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_str2octs, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_11_lambda(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_octs2str, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_12_lambda(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_isOctetsType, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_pyasn1$compat$octets$$$function_13_lambda(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_isStringType, tmp_assign_source_23 );
    tmp_assign_source_24 = (PyObject *)&PyBytes_Type;
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$octets, (Nuitka_StringObject *)const_str_plain_ensureString, tmp_assign_source_24 );
    branch_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef6d4754ac6da7b81a1dba083a77fee0 );
#endif
    popFrameStack();

    assertFrameObject( frame_ef6d4754ac6da7b81a1dba083a77fee0 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef6d4754ac6da7b81a1dba083a77fee0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ef6d4754ac6da7b81a1dba083a77fee0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ef6d4754ac6da7b81a1dba083a77fee0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ef6d4754ac6da7b81a1dba083a77fee0, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_pyasn1$compat$octets );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

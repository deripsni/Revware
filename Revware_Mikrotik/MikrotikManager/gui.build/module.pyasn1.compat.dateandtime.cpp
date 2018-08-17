/* Generated code for Python source for module 'pyasn1.compat.dateandtime'
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

/* The _module_pyasn1$compat$dateandtime is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyasn1$compat$dateandtime;
PyDictObject *moduledict_pyasn1$compat$dateandtime;

/* The module constants used, if any. */
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_False;
static PyObject *const_list_str_plain_strptime_list;
static PyObject *const_str_digest_282a2fc8c3e8ead271b37e8a59171563;
static PyObject *const_str_plain_dateFormat;
extern PyObject *const_str_plain___all__;
extern PyObject *const_slice_none_int_pos_2_none;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_8180ef97d3cd650a4150cc7b8b834e5f;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_tuple_int_pos_2_int_pos_4_tuple;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_text_str_plain_dateFormat_tuple;
extern PyObject *const_slice_int_0_int_pos_6_none;
extern PyObject *const_str_plain_text;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_None;
extern PyObject *const_int_pos_6;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_strptime;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_datetime;
static PyObject *const_tuple_str_plain_datetime_tuple;
static PyObject *const_str_digest_b53df38eef39fe37c62bd4af646d6b6f;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_str_plain_version_info_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_str_plain_strptime_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_strptime_list, 0, const_str_plain_strptime ); Py_INCREF( const_str_plain_strptime );
    const_str_digest_282a2fc8c3e8ead271b37e8a59171563 = UNSTREAM_STRING( &constant_bin[ 630780 ], 34, 0 );
    const_str_plain_dateFormat = UNSTREAM_STRING( &constant_bin[ 630814 ], 10, 1 );
    const_str_digest_8180ef97d3cd650a4150cc7b8b834e5f = UNSTREAM_STRING( &constant_bin[ 630824 ], 100, 0 );
    const_tuple_str_plain_text_str_plain_dateFormat_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_text_str_plain_dateFormat_tuple, 0, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    PyTuple_SET_ITEM( const_tuple_str_plain_text_str_plain_dateFormat_tuple, 1, const_str_plain_dateFormat ); Py_INCREF( const_str_plain_dateFormat );
    const_tuple_str_plain_datetime_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_datetime_tuple, 0, const_str_plain_datetime ); Py_INCREF( const_str_plain_datetime );
    const_str_digest_b53df38eef39fe37c62bd4af646d6b6f = UNSTREAM_STRING( &constant_bin[ 630788 ], 25, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyasn1$compat$dateandtime( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_943cdd1da25b8e00f05f7f68ffbe27f2;
static PyCodeObject *codeobj_60a10ad3eef26a9d2f2e2c9189a102d9;
static PyCodeObject *codeobj_765f9dbd2105bc240c01148238f84cca;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_8180ef97d3cd650a4150cc7b8b834e5f;
    codeobj_943cdd1da25b8e00f05f7f68ffbe27f2 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_282a2fc8c3e8ead271b37e8a59171563, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_60a10ad3eef26a9d2f2e2c9189a102d9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_strptime, 16, const_tuple_str_plain_text_str_plain_dateFormat_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_765f9dbd2105bc240c01148238f84cca = MAKE_CODEOBJ( module_filename_obj, const_str_plain_strptime, 21, const_tuple_str_plain_text_str_plain_dateFormat_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_pyasn1$compat$dateandtime$$$function_1_strptime(  );


static PyObject *MAKE_FUNCTION_pyasn1$compat$dateandtime$$$function_2_strptime(  );


// The module function definitions.
static PyObject *impl_pyasn1$compat$dateandtime$$$function_1_strptime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[ 0 ];
    PyObject *par_dateFormat = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_60a10ad3eef26a9d2f2e2c9189a102d9 = NULL;

    struct Nuitka_FrameObject *frame_60a10ad3eef26a9d2f2e2c9189a102d9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_60a10ad3eef26a9d2f2e2c9189a102d9, codeobj_60a10ad3eef26a9d2f2e2c9189a102d9, module_pyasn1$compat$dateandtime, sizeof(void *)+sizeof(void *) );
    frame_60a10ad3eef26a9d2f2e2c9189a102d9 = cache_frame_60a10ad3eef26a9d2f2e2c9189a102d9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_60a10ad3eef26a9d2f2e2c9189a102d9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_60a10ad3eef26a9d2f2e2c9189a102d9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_strptime );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_text;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_dateFormat;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dateFormat" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_60a10ad3eef26a9d2f2e2c9189a102d9->m_frame.f_lineno = 17;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_slice_int_0_int_pos_6_none;
    tmp_dircall_arg2_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_dircall_arg2_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_dircall_arg1_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_return_value = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60a10ad3eef26a9d2f2e2c9189a102d9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_60a10ad3eef26a9d2f2e2c9189a102d9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_60a10ad3eef26a9d2f2e2c9189a102d9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_60a10ad3eef26a9d2f2e2c9189a102d9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_60a10ad3eef26a9d2f2e2c9189a102d9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_60a10ad3eef26a9d2f2e2c9189a102d9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_60a10ad3eef26a9d2f2e2c9189a102d9,
        type_description_1,
        par_text,
        par_dateFormat
    );


    // Release cached frame.
    if ( frame_60a10ad3eef26a9d2f2e2c9189a102d9 == cache_frame_60a10ad3eef26a9d2f2e2c9189a102d9 )
    {
        Py_DECREF( frame_60a10ad3eef26a9d2f2e2c9189a102d9 );
    }
    cache_frame_60a10ad3eef26a9d2f2e2c9189a102d9 = NULL;

    assertFrameObject( frame_60a10ad3eef26a9d2f2e2c9189a102d9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$dateandtime$$$function_1_strptime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_dateFormat );
    par_dateFormat = NULL;

    Py_XDECREF( par_text );
    par_text = NULL;

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

    Py_XDECREF( par_dateFormat );
    par_dateFormat = NULL;

    Py_XDECREF( par_text );
    par_text = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$dateandtime$$$function_1_strptime );
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


static PyObject *impl_pyasn1$compat$dateandtime$$$function_2_strptime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_text = python_pars[ 0 ];
    PyObject *par_dateFormat = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_765f9dbd2105bc240c01148238f84cca = NULL;

    struct Nuitka_FrameObject *frame_765f9dbd2105bc240c01148238f84cca;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_765f9dbd2105bc240c01148238f84cca, codeobj_765f9dbd2105bc240c01148238f84cca, module_pyasn1$compat$dateandtime, sizeof(void *)+sizeof(void *) );
    frame_765f9dbd2105bc240c01148238f84cca = cache_frame_765f9dbd2105bc240c01148238f84cca;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_765f9dbd2105bc240c01148238f84cca );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_765f9dbd2105bc240c01148238f84cca ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain_datetime );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_strptime );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_text;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "text" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_dateFormat;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dateFormat" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 22;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_765f9dbd2105bc240c01148238f84cca->m_frame.f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_765f9dbd2105bc240c01148238f84cca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_765f9dbd2105bc240c01148238f84cca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_765f9dbd2105bc240c01148238f84cca );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_765f9dbd2105bc240c01148238f84cca, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_765f9dbd2105bc240c01148238f84cca->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_765f9dbd2105bc240c01148238f84cca, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_765f9dbd2105bc240c01148238f84cca,
        type_description_1,
        par_text,
        par_dateFormat
    );


    // Release cached frame.
    if ( frame_765f9dbd2105bc240c01148238f84cca == cache_frame_765f9dbd2105bc240c01148238f84cca )
    {
        Py_DECREF( frame_765f9dbd2105bc240c01148238f84cca );
    }
    cache_frame_765f9dbd2105bc240c01148238f84cca = NULL;

    assertFrameObject( frame_765f9dbd2105bc240c01148238f84cca );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$dateandtime$$$function_2_strptime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_dateFormat );
    par_dateFormat = NULL;

    Py_XDECREF( par_text );
    par_text = NULL;

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

    Py_XDECREF( par_dateFormat );
    par_dateFormat = NULL;

    Py_XDECREF( par_text );
    par_text = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyasn1$compat$dateandtime$$$function_2_strptime );
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



static PyObject *MAKE_FUNCTION_pyasn1$compat$dateandtime$$$function_1_strptime(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$dateandtime$$$function_1_strptime,
        const_str_plain_strptime,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_60a10ad3eef26a9d2f2e2c9189a102d9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$dateandtime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyasn1$compat$dateandtime$$$function_2_strptime(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyasn1$compat$dateandtime$$$function_2_strptime,
        const_str_plain_strptime,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_765f9dbd2105bc240c01148238f84cca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyasn1$compat$dateandtime,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyasn1$compat$dateandtime =
{
    PyModuleDef_HEAD_INIT,
    "pyasn1.compat.dateandtime",   /* m_name */
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

MOD_INIT_DECL( pyasn1$compat$dateandtime )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyasn1$compat$dateandtime );
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
    puts("pyasn1.compat.dateandtime: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.compat.dateandtime: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyasn1.compat.dateandtime: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpyasn1$compat$dateandtime" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyasn1$compat$dateandtime = Py_InitModule4(
        "pyasn1.compat.dateandtime",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pyasn1$compat$dateandtime = PyModule_Create( &mdef_pyasn1$compat$dateandtime );
#endif

    moduledict_pyasn1$compat$dateandtime = MODULE_DICT( module_pyasn1$compat$dateandtime );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pyasn1$compat$dateandtime,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$compat$dateandtime,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyasn1$compat$dateandtime,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pyasn1$compat$dateandtime );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b53df38eef39fe37c62bd4af646d6b6f, module_pyasn1$compat$dateandtime );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    struct Nuitka_FrameObject *frame_943cdd1da25b8e00f05f7f68ffbe27f2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_8180ef97d3cd650a4150cc7b8b834e5f;
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_plain_time;
    tmp_globals_name_1 = (PyObject *)moduledict_pyasn1$compat$dateandtime;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( !(tmp_assign_source_4 == NULL) );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_4 );
    // Frame without reuse.
    frame_943cdd1da25b8e00f05f7f68ffbe27f2 = MAKE_MODULE_FRAME( codeobj_943cdd1da25b8e00f05f7f68ffbe27f2, module_pyasn1$compat$dateandtime );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_943cdd1da25b8e00f05f7f68ffbe27f2 );
    assert( Py_REFCNT( frame_943cdd1da25b8e00f05f7f68ffbe27f2 ) == 2 );

    // Framed code:
    tmp_name_name_2 = const_str_plain_datetime;
    tmp_globals_name_2 = (PyObject *)moduledict_pyasn1$compat$dateandtime;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_datetime_tuple;
    tmp_level_name_2 = const_int_0;
    frame_943cdd1da25b8e00f05f7f68ffbe27f2->m_frame.f_lineno = 8;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_datetime );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain_sys;
    tmp_globals_name_3 = (PyObject *)moduledict_pyasn1$compat$dateandtime;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_version_info_tuple;
    tmp_level_name_3 = const_int_0;
    frame_943cdd1da25b8e00f05f7f68ffbe27f2->m_frame.f_lineno = 9;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    assert( !(tmp_import_name_from_2 == NULL) );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_version_info );
    Py_DECREF( tmp_import_name_from_2 );
    assert( !(tmp_assign_source_6 == NULL) );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain_version_info, tmp_assign_source_6 );
    tmp_assign_source_7 = LIST_COPY( const_list_str_plain_strptime_list );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain_version_info );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_version_info );
    }

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_slice_none_int_pos_2_none;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_tuple_int_pos_2_int_pos_4_tuple;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

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
    tmp_assign_source_8 = MAKE_FUNCTION_pyasn1$compat$dateandtime$$$function_1_strptime(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain_strptime, tmp_assign_source_8 );
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_9 = MAKE_FUNCTION_pyasn1$compat$dateandtime$$$function_2_strptime(  );
    UPDATE_STRING_DICT1( moduledict_pyasn1$compat$dateandtime, (Nuitka_StringObject *)const_str_plain_strptime, tmp_assign_source_9 );
    branch_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_943cdd1da25b8e00f05f7f68ffbe27f2 );
#endif
    popFrameStack();

    assertFrameObject( frame_943cdd1da25b8e00f05f7f68ffbe27f2 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_943cdd1da25b8e00f05f7f68ffbe27f2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_943cdd1da25b8e00f05f7f68ffbe27f2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_943cdd1da25b8e00f05f7f68ffbe27f2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_943cdd1da25b8e00f05f7f68ffbe27f2, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_pyasn1$compat$dateandtime );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

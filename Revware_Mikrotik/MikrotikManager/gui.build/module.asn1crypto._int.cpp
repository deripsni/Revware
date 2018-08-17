/* Generated code for Python source for module 'asn1crypto._int'
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

/* The _module_asn1crypto$_int is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_asn1crypto$_int;
PyDictObject *moduledict_asn1crypto$_int;

/* The module constants used, if any. */
static PyObject *const_str_plain_a_bn;
static PyObject *const_str_plain_p_buf;
static PyObject *const_str_digest_6f64d8643fee6d4a11c1114731886737;
static PyObject *const_tuple_type_OSError_type_ImportError_tuple;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_fill_width;
static PyObject *const_str_plain_vd;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_python_implementation;
extern PyObject *const_str_plain_False;
static PyObject *const_str_plain_r_len_bits;
static PyObject *const_str_plain_r_bn;
extern PyObject *const_str_plain__ffi;
extern PyObject *const_str_plain_BN_bin2bn;
extern PyObject *const_str_plain_BN_free;
static PyObject *const_str_plain_bytes_;
static PyObject *const_str_plain_a_bytes;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_78a1ac9643c65c3d84c3f3d76bde4992;
extern PyObject *const_str_plain_null;
static PyObject *const_tuple_str_plain_int_to_bytes_str_plain_int_from_bytes_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_p_bytes;
static PyObject *const_str_digest_0b127fc5cd56dd7cfbe0ab00fea1ce6a;
extern PyObject *const_tuple_int_pos_1_int_0_int_0_int_pos_1_tuple;
extern PyObject *const_str_plain_buffer_from_bytes;
extern PyObject *const_str_plain_LibraryNotFoundError;
extern PyObject *const_str_plain_width;
static PyObject *const_str_plain_a_buf;
extern PyObject *const_str_plain_r_bytes;
extern PyObject *const_str_plain_BN_bn2bin;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_BN_set_negative;
extern PyObject *const_str_plain_p;
static PyObject *const_str_digest_9ceab3df8f8a56717fbfa382e539b839;
static PyObject *const_str_plain_r_buf;
static PyObject *const_str_plain_uc;
static PyObject *const_str_digest_6cfc33902a1a9f6df807e5937efcf625;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_ctx;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_b5d214519f6182c6a6e0b84a6f4aeef3_tuple;
static PyObject *const_tuple_f9bf33a1bfb9bbdca17c4f7d4694314a_tuple;
static PyObject *const_str_plain_ud;
extern PyObject *const_str_plain_BN_num_bits;
static PyObject *const_str_digest_ce95c0d92bef14c1d177b49a10fd6418;
extern PyObject *const_str_plain_inverse_mod;
extern PyObject *const_int_pos_8;
static PyObject *const_str_digest_9dd2466a5496f3274bf05f79c71ed9ed;
extern PyObject *const_str_plain_BN_CTX_free;
extern PyObject *const_str_plain_True;
extern PyObject *const_str_plain_libcrypto;
static PyObject *const_str_digest_1d7cbcb73a0a416ca58d07943fa94cbd;
extern PyObject *const_str_plain_BN_mod_inverse;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_q;
static PyObject *const_str_plain_PyPy;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_int_from_bytes;
static PyObject *const_str_plain_p_bn;
extern PyObject *const_str_plain_int_to_bytes;
static PyObject *const_str_plain_r_len;
extern PyObject *const_bytes_chr_0;
static PyObject *const_tuple_str_plain_bytes__str_plain_width_tuple;
extern PyObject *const_str_plain_BN_CTX_new;
extern PyObject *const_str_plain_bytes_from_buffer;
static PyObject *const_tuple_str_plain_libcrypto_tuple;
extern PyObject *const_str_plain_ceil;
extern PyObject *const_str_plain_platform;
extern PyObject *const_str_plain_FFIEngineError;
static PyObject *const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_util;
static PyObject *const_str_plain_vc;
extern PyObject *const_str_plain_math;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_a_bn = UNSTREAM_STRING( &constant_bin[ 12393 ], 4, 1 );
    const_str_plain_p_buf = UNSTREAM_STRING( &constant_bin[ 12397 ], 5, 1 );
    const_str_digest_6f64d8643fee6d4a11c1114731886737 = UNSTREAM_STRING( &constant_bin[ 12402 ], 267, 0 );
    const_tuple_type_OSError_type_ImportError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_type_OSError_type_ImportError_tuple, 0, (PyObject *)PyExc_OSError ); Py_INCREF( (PyObject *)PyExc_OSError );
    PyTuple_SET_ITEM( const_tuple_type_OSError_type_ImportError_tuple, 1, (PyObject *)PyExc_ImportError ); Py_INCREF( (PyObject *)PyExc_ImportError );
    const_str_plain_vd = UNSTREAM_STRING( &constant_bin[ 12669 ], 2, 1 );
    const_str_plain_r_len_bits = UNSTREAM_STRING( &constant_bin[ 12671 ], 10, 1 );
    const_str_plain_r_bn = UNSTREAM_STRING( &constant_bin[ 12681 ], 4, 1 );
    const_str_plain_bytes_ = UNSTREAM_STRING( &constant_bin[ 10751 ], 6, 1 );
    const_str_plain_a_bytes = UNSTREAM_STRING( &constant_bin[ 12685 ], 7, 1 );
    const_str_digest_78a1ac9643c65c3d84c3f3d76bde4992 = UNSTREAM_STRING( &constant_bin[ 12692 ], 90, 0 );
    const_tuple_str_plain_int_to_bytes_str_plain_int_from_bytes_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_int_to_bytes_str_plain_int_from_bytes_tuple, 0, const_str_plain_int_to_bytes ); Py_INCREF( const_str_plain_int_to_bytes );
    PyTuple_SET_ITEM( const_tuple_str_plain_int_to_bytes_str_plain_int_from_bytes_tuple, 1, const_str_plain_int_from_bytes ); Py_INCREF( const_str_plain_int_from_bytes );
    const_str_plain_p_bytes = UNSTREAM_STRING( &constant_bin[ 12782 ], 7, 1 );
    const_str_digest_0b127fc5cd56dd7cfbe0ab00fea1ce6a = UNSTREAM_STRING( &constant_bin[ 12789 ], 215, 0 );
    const_str_plain_a_buf = UNSTREAM_STRING( &constant_bin[ 13004 ], 5, 1 );
    const_str_digest_9ceab3df8f8a56717fbfa382e539b839 = UNSTREAM_STRING( &constant_bin[ 13009 ], 15, 0 );
    const_str_plain_r_buf = UNSTREAM_STRING( &constant_bin[ 13024 ], 5, 1 );
    const_str_plain_uc = UNSTREAM_STRING( &constant_bin[ 13029 ], 2, 1 );
    const_str_digest_6cfc33902a1a9f6df807e5937efcf625 = UNSTREAM_STRING( &constant_bin[ 13031 ], 183, 0 );
    const_tuple_b5d214519f6182c6a6e0b84a6f4aeef3_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b5d214519f6182c6a6e0b84a6f4aeef3_tuple, 0, const_str_plain_buffer_from_bytes ); Py_INCREF( const_str_plain_buffer_from_bytes );
    PyTuple_SET_ITEM( const_tuple_b5d214519f6182c6a6e0b84a6f4aeef3_tuple, 1, const_str_plain_bytes_from_buffer ); Py_INCREF( const_str_plain_bytes_from_buffer );
    PyTuple_SET_ITEM( const_tuple_b5d214519f6182c6a6e0b84a6f4aeef3_tuple, 2, const_str_plain_FFIEngineError ); Py_INCREF( const_str_plain_FFIEngineError );
    PyTuple_SET_ITEM( const_tuple_b5d214519f6182c6a6e0b84a6f4aeef3_tuple, 3, const_str_plain_LibraryNotFoundError ); Py_INCREF( const_str_plain_LibraryNotFoundError );
    PyTuple_SET_ITEM( const_tuple_b5d214519f6182c6a6e0b84a6f4aeef3_tuple, 4, const_str_plain_null ); Py_INCREF( const_str_plain_null );
    const_tuple_f9bf33a1bfb9bbdca17c4f7d4694314a_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_f9bf33a1bfb9bbdca17c4f7d4694314a_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_f9bf33a1bfb9bbdca17c4f7d4694314a_tuple, 1, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_str_plain_ud = UNSTREAM_STRING( &constant_bin[ 7631 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_f9bf33a1bfb9bbdca17c4f7d4694314a_tuple, 2, const_str_plain_ud ); Py_INCREF( const_str_plain_ud );
    PyTuple_SET_ITEM( const_tuple_f9bf33a1bfb9bbdca17c4f7d4694314a_tuple, 3, const_str_plain_uc ); Py_INCREF( const_str_plain_uc );
    PyTuple_SET_ITEM( const_tuple_f9bf33a1bfb9bbdca17c4f7d4694314a_tuple, 4, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_f9bf33a1bfb9bbdca17c4f7d4694314a_tuple, 5, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_f9bf33a1bfb9bbdca17c4f7d4694314a_tuple, 6, const_str_plain_vd ); Py_INCREF( const_str_plain_vd );
    const_str_plain_vc = UNSTREAM_STRING( &constant_bin[ 13214 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_f9bf33a1bfb9bbdca17c4f7d4694314a_tuple, 7, const_str_plain_vc ); Py_INCREF( const_str_plain_vc );
    PyTuple_SET_ITEM( const_tuple_f9bf33a1bfb9bbdca17c4f7d4694314a_tuple, 8, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_str_digest_ce95c0d92bef14c1d177b49a10fd6418 = UNSTREAM_STRING( &constant_bin[ 13216 ], 1358, 0 );
    const_str_digest_9dd2466a5496f3274bf05f79c71ed9ed = UNSTREAM_STRING( &constant_bin[ 14574 ], 21, 0 );
    const_str_digest_1d7cbcb73a0a416ca58d07943fa94cbd = UNSTREAM_STRING( &constant_bin[ 14595 ], 24, 0 );
    const_str_plain_PyPy = UNSTREAM_STRING( &constant_bin[ 14619 ], 4, 1 );
    const_str_plain_p_bn = UNSTREAM_STRING( &constant_bin[ 14623 ], 4, 1 );
    const_str_plain_r_len = UNSTREAM_STRING( &constant_bin[ 12671 ], 5, 1 );
    const_tuple_str_plain_bytes__str_plain_width_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_bytes__str_plain_width_tuple, 0, const_str_plain_bytes_ ); Py_INCREF( const_str_plain_bytes_ );
    PyTuple_SET_ITEM( const_tuple_str_plain_bytes__str_plain_width_tuple, 1, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    const_tuple_str_plain_libcrypto_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_libcrypto_tuple, 0, const_str_plain_libcrypto ); Py_INCREF( const_str_plain_libcrypto );
    const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 1, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 2, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 3, const_str_plain_r_buf ); Py_INCREF( const_str_plain_r_buf );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 4, const_str_plain_a_bytes ); Py_INCREF( const_str_plain_a_bytes );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 5, const_str_plain_p_bytes ); Py_INCREF( const_str_plain_p_bytes );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 6, const_str_plain_p_bn ); Py_INCREF( const_str_plain_p_bn );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 7, const_str_plain_r_bytes ); Py_INCREF( const_str_plain_r_bytes );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 8, const_str_plain_a_bn ); Py_INCREF( const_str_plain_a_bn );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 9, const_str_plain_ctx ); Py_INCREF( const_str_plain_ctx );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 10, const_str_plain_a_buf ); Py_INCREF( const_str_plain_a_buf );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 11, const_str_plain_r_len_bits ); Py_INCREF( const_str_plain_r_len_bits );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 12, const_str_plain_r_len ); Py_INCREF( const_str_plain_r_len );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 13, const_str_plain_p_buf ); Py_INCREF( const_str_plain_p_buf );
    PyTuple_SET_ITEM( const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 14, const_str_plain_r_bn ); Py_INCREF( const_str_plain_r_bn );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_asn1crypto$_int( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_41ce0b5ebc5a95872b860f7d3071907b;
static PyCodeObject *codeobj_679c62c24f1a99da47e026d58f752586;
static PyCodeObject *codeobj_794fb41070ef82de7e45d7c31bc68aa3;
static PyCodeObject *codeobj_dbcf6ef04bc876ddfad7f29745c26230;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_78a1ac9643c65c3d84c3f3d76bde4992;
    codeobj_41ce0b5ebc5a95872b860f7d3071907b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1d7cbcb73a0a416ca58d07943fa94cbd, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_679c62c24f1a99da47e026d58f752586 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fill_width, 142, const_tuple_str_plain_bytes__str_plain_width_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_794fb41070ef82de7e45d7c31bc68aa3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_inverse_mod, 58, const_tuple_2083be0b7a90d00dc0b4bc92b80ab78d_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
    codeobj_dbcf6ef04bc876ddfad7f29745c26230 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_inverse_mod, 107, const_tuple_f9bf33a1bfb9bbdca17c4f7d4694314a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_asn1crypto$_int$$$function_1_inverse_mod(  );


static PyObject *MAKE_FUNCTION_asn1crypto$_int$$$function_2_inverse_mod(  );


static PyObject *MAKE_FUNCTION_asn1crypto$_int$$$function_3_fill_width(  );


// The module function definitions.
static PyObject *impl_asn1crypto$_int$$$function_1_inverse_mod( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    PyObject *var_result = NULL;
    PyObject *var_r_buf = NULL;
    PyObject *var_a_bytes = NULL;
    PyObject *var_p_bytes = NULL;
    PyObject *var_p_bn = NULL;
    PyObject *var_r_bytes = NULL;
    PyObject *var_a_bn = NULL;
    PyObject *var_ctx = NULL;
    PyObject *var_a_buf = NULL;
    PyObject *var_r_len_bits = NULL;
    PyObject *var_r_len = NULL;
    PyObject *var_p_buf = NULL;
    PyObject *var_r_bn = NULL;
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
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_element_name_30;
    PyObject *tmp_args_element_name_31;
    PyObject *tmp_args_element_name_32;
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
    PyObject *tmp_called_instance_1;
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
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_794fb41070ef82de7e45d7c31bc68aa3 = NULL;

    struct Nuitka_FrameObject *frame_794fb41070ef82de7e45d7c31bc68aa3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_794fb41070ef82de7e45d7c31bc68aa3, codeobj_794fb41070ef82de7e45d7c31bc68aa3, module_asn1crypto$_int, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_794fb41070ef82de7e45d7c31bc68aa3 = cache_frame_794fb41070ef82de7e45d7c31bc68aa3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_794fb41070ef82de7e45d7c31bc68aa3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_794fb41070ef82de7e45d7c31bc68aa3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_libcrypto );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "libcrypto" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 72;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_BN_CTX_new );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ctx == NULL );
    var_ctx = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_int_to_bytes );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int_to_bytes );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "int_to_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = par_a;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_a_bytes == NULL );
    var_a_bytes = tmp_assign_source_2;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_int_to_bytes );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int_to_bytes );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "int_to_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_4 != NULL );
    tmp_args_element_name_4 = par_p;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_p_bytes == NULL );
    var_p_bytes = tmp_assign_source_3;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_buffer_from_bytes );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_buffer_from_bytes );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "buffer_from_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_a_bytes;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_a_buf == NULL );
    var_a_buf = tmp_assign_source_4;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_libcrypto );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "libcrypto" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_BN_bin2bn );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_a_buf;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a_buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_1 = var_a_bytes;

    if ( tmp_len_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 78;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_null );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_null );
    }

    if ( tmp_called_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "null" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 78;
    tmp_args_element_name_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 78;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_a_bn == NULL );
    var_a_bn = tmp_assign_source_5;

    tmp_compare_left_1 = par_a;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_libcrypto );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "libcrypto" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_BN_set_negative );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = var_a_bn;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a_bn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = const_int_pos_1;
    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_buffer_from_bytes );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_buffer_from_bytes );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "buffer_from_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_p_bytes;

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_p_buf == NULL );
    var_p_buf = tmp_assign_source_6;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_libcrypto );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "libcrypto" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_BN_bin2bn );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = var_p_buf;

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p_buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_2 = var_p_bytes;

    if ( tmp_len_arg_2 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 83;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_null );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_null );
    }

    if ( tmp_called_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "null" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 83;
    tmp_args_element_name_14 = CALL_FUNCTION_NO_ARGS( tmp_called_name_11 );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );
        Py_DECREF( tmp_args_element_name_13 );

        exception_lineno = 83;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_13 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_p_bn == NULL );
    var_p_bn = tmp_assign_source_7;

    tmp_compare_left_2 = par_p;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_libcrypto );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "libcrypto" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_BN_set_negative );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_15 = var_p_bn;

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p_bn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = const_int_pos_1;
    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_libcrypto );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "libcrypto" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_BN_mod_inverse );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_null );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_null );
    }

    if ( tmp_called_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "null" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 87;
    tmp_args_element_name_17 = CALL_FUNCTION_NO_ARGS( tmp_called_name_14 );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 87;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_18 = var_a_bn;

    if ( tmp_args_element_name_18 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a_bn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_19 = var_p_bn;

    if ( tmp_args_element_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p_bn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_20 = var_ctx;

    if ( tmp_args_element_name_20 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        Py_DECREF( tmp_args_element_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ctx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_r_bn == NULL );
    var_r_bn = tmp_assign_source_8;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_libcrypto );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "libcrypto" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_BN_num_bits );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_21 = var_r_bn;

    if ( tmp_args_element_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r_bn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_r_len_bits == NULL );
    var_r_len_bits = tmp_assign_source_9;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_math );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "math" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ceil );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = var_r_len_bits;

    if ( tmp_left_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r_len_bits" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_8;
    tmp_args_element_name_22 = BINARY_OPERATION_TRUEDIV( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 89;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 89;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_r_len == NULL );
    var_r_len = tmp_assign_source_10;

    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_buffer_from_bytes );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_buffer_from_bytes );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "buffer_from_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_23 = var_r_len;

    CHECK_OBJECT( tmp_args_element_name_23 );
    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_r_buf == NULL );
    var_r_buf = tmp_assign_source_11;

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_libcrypto );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "libcrypto" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_BN_bn2bin );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_24 = var_r_bn;

    if ( tmp_args_element_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r_bn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_25 = var_r_buf;

    if ( tmp_args_element_name_25 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r_buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_19 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_bytes_from_buffer );

    if (unlikely( tmp_called_name_19 == NULL ))
    {
        tmp_called_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes_from_buffer );
    }

    if ( tmp_called_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes_from_buffer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_26 = var_r_buf;

    if ( tmp_args_element_name_26 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r_buf" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_27 = var_r_len;

    if ( tmp_args_element_name_27 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r_len" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 92;
    {
        PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_19, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_r_bytes == NULL );
    var_r_bytes = tmp_assign_source_12;

    tmp_called_name_20 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_int_from_bytes );

    if (unlikely( tmp_called_name_20 == NULL ))
    {
        tmp_called_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_int_from_bytes );
    }

    if ( tmp_called_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "int_from_bytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_28 = var_r_bytes;

    CHECK_OBJECT( tmp_args_element_name_28 );
    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 93;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_13;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_libcrypto );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "libcrypto" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_BN_free );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_29 = var_a_bn;

    if ( tmp_args_element_name_29 == NULL )
    {
        Py_DECREF( tmp_called_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a_bn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_libcrypto );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "libcrypto" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_BN_free );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_30 = var_p_bn;

    if ( tmp_args_element_name_30 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p_bn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_libcrypto );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "libcrypto" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_BN_free );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_31 = var_r_bn;

    if ( tmp_args_element_name_31 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r_bn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_31 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_libcrypto );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_libcrypto );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "libcrypto" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_BN_CTX_free );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_32 = var_ctx;

    if ( tmp_args_element_name_32 == NULL )
    {
        Py_DECREF( tmp_called_name_24 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ctx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame.f_lineno = 98;
    {
        PyObject *call_args[] = { tmp_args_element_name_32 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_result;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_794fb41070ef82de7e45d7c31bc68aa3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_794fb41070ef82de7e45d7c31bc68aa3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_794fb41070ef82de7e45d7c31bc68aa3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_794fb41070ef82de7e45d7c31bc68aa3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_794fb41070ef82de7e45d7c31bc68aa3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_794fb41070ef82de7e45d7c31bc68aa3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_794fb41070ef82de7e45d7c31bc68aa3,
        type_description_1,
        par_a,
        par_p,
        var_result,
        var_r_buf,
        var_a_bytes,
        var_p_bytes,
        var_p_bn,
        var_r_bytes,
        var_a_bn,
        var_ctx,
        var_a_buf,
        var_r_len_bits,
        var_r_len,
        var_p_buf,
        var_r_bn
    );


    // Release cached frame.
    if ( frame_794fb41070ef82de7e45d7c31bc68aa3 == cache_frame_794fb41070ef82de7e45d7c31bc68aa3 )
    {
        Py_DECREF( frame_794fb41070ef82de7e45d7c31bc68aa3 );
    }
    cache_frame_794fb41070ef82de7e45d7c31bc68aa3 = NULL;

    assertFrameObject( frame_794fb41070ef82de7e45d7c31bc68aa3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_int$$$function_1_inverse_mod );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_r_buf );
    var_r_buf = NULL;

    Py_XDECREF( var_a_bytes );
    var_a_bytes = NULL;

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_p_bytes );
    var_p_bytes = NULL;

    Py_XDECREF( var_p_bn );
    var_p_bn = NULL;

    Py_XDECREF( var_r_bytes );
    var_r_bytes = NULL;

    Py_XDECREF( var_a_bn );
    var_a_bn = NULL;

    Py_XDECREF( var_ctx );
    var_ctx = NULL;

    Py_XDECREF( par_p );
    par_p = NULL;

    Py_XDECREF( var_a_buf );
    var_a_buf = NULL;

    Py_XDECREF( var_r_len_bits );
    var_r_len_bits = NULL;

    Py_XDECREF( var_r_len );
    var_r_len = NULL;

    Py_XDECREF( var_p_buf );
    var_p_buf = NULL;

    Py_XDECREF( var_r_bn );
    var_r_bn = NULL;

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

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_r_buf );
    var_r_buf = NULL;

    Py_XDECREF( var_a_bytes );
    var_a_bytes = NULL;

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( var_p_bytes );
    var_p_bytes = NULL;

    Py_XDECREF( var_p_bn );
    var_p_bn = NULL;

    Py_XDECREF( var_r_bytes );
    var_r_bytes = NULL;

    Py_XDECREF( var_a_bn );
    var_a_bn = NULL;

    Py_XDECREF( var_ctx );
    var_ctx = NULL;

    Py_XDECREF( par_p );
    par_p = NULL;

    Py_XDECREF( var_a_buf );
    var_a_buf = NULL;

    Py_XDECREF( var_r_len_bits );
    var_r_len_bits = NULL;

    Py_XDECREF( var_r_len );
    var_r_len = NULL;

    Py_XDECREF( var_p_buf );
    var_p_buf = NULL;

    Py_XDECREF( var_r_bn );
    var_r_bn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( asn1crypto$_int$$$function_1_inverse_mod );
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


static PyObject *impl_asn1crypto$_int$$$function_2_inverse_mod( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    PyObject *var_ud = NULL;
    PyObject *var_uc = NULL;
    PyObject *var_q = NULL;
    PyObject *var_c = NULL;
    PyObject *var_vd = NULL;
    PyObject *var_vc = NULL;
    PyObject *var_d = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__element_4 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
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
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
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
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    PyObject *tmp_unpack_8;
    PyObject *tmp_unpack_9;
    PyObject *tmp_unpack_10;
    PyObject *tmp_unpack_11;
    PyObject *tmp_unpack_12;
    PyObject *tmp_unpack_13;
    static struct Nuitka_FrameObject *cache_frame_dbcf6ef04bc876ddfad7f29745c26230 = NULL;

    struct Nuitka_FrameObject *frame_dbcf6ef04bc876ddfad7f29745c26230;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dbcf6ef04bc876ddfad7f29745c26230, codeobj_dbcf6ef04bc876ddfad7f29745c26230, module_asn1crypto$_int, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dbcf6ef04bc876ddfad7f29745c26230 = cache_frame_dbcf6ef04bc876ddfad7f29745c26230;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dbcf6ef04bc876ddfad7f29745c26230 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dbcf6ef04bc876ddfad7f29745c26230 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_a;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = const_int_0;
    tmp_or_left_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 121;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    Py_DECREF( tmp_or_left_value_1 );
    tmp_compexpr_left_2 = par_p;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = par_a;

    if ( tmp_compexpr_right_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = RICH_COMPARE_LE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 121;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = par_a;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = par_p;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a;
        par_a = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    // Tried code:
    tmp_tuple_element_1 = par_a;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    tmp_iter_arg_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_p;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        type_description_1 = "ooooooooo";
        exception_lineno = 126;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 126;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_c == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_c = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_6 );
    assert( var_d == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_d = tmp_assign_source_6;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_iter_arg_2 = const_tuple_int_pos_1_int_0_int_0_int_pos_1_tuple;
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    assert( !(tmp_assign_source_7 == NULL) );
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_7;

    // Tried code:
    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_3, 0, 4 );
    if ( tmp_assign_source_8 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 127;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_8;

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_4, 1, 4 );
    if ( tmp_assign_source_9 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 127;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_9;

    tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_5, 2, 4 );
    if ( tmp_assign_source_10 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 127;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_3 == NULL );
    tmp_tuple_unpack_2__element_3 = tmp_assign_source_10;

    tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_6, 3, 4 );
    if ( tmp_assign_source_11 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 127;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_4 == NULL );
    tmp_tuple_unpack_2__element_4 = tmp_assign_source_11;

    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_12 );
    assert( var_uc == NULL );
    Py_INCREF( tmp_assign_source_12 );
    var_uc = tmp_assign_source_12;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_13 );
    assert( var_vc == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_vc = tmp_assign_source_13;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_assign_source_14 = tmp_tuple_unpack_2__element_3;

    CHECK_OBJECT( tmp_assign_source_14 );
    assert( var_ud == NULL );
    Py_INCREF( tmp_assign_source_14 );
    var_ud = tmp_assign_source_14;

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    tmp_assign_source_15 = tmp_tuple_unpack_2__element_4;

    CHECK_OBJECT( tmp_assign_source_15 );
    assert( var_vd == NULL );
    Py_INCREF( tmp_assign_source_15 );
    var_vd = tmp_assign_source_15;

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    loop_start_1:;
    tmp_compare_left_1 = var_c;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    // Tried code:
    tmp_left_name_3 = var_d;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }

    tmp_right_name_2 = var_c;

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }

    tmp_left_name_2 = BUILTIN_DIVMOD( tmp_left_name_3, tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    tmp_tuple_element_2 = var_c;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }

    tmp_right_name_3 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_2 );
    tmp_iter_arg_3 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__source_iter;
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_7, 0, 3 );
    if ( tmp_assign_source_17 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 129;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_1;
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_8 );
    tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_8, 1, 3 );
    if ( tmp_assign_source_18 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 129;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_2;
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_9 );
    tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_9, 2, 3 );
    if ( tmp_assign_source_19 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 129;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_3__element_3;
        tmp_tuple_unpack_3__element_3 = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooo";
                exception_lineno = 129;
                goto try_except_handler_7;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooo";
        exception_lineno = 129;
        goto try_except_handler_7;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    tmp_assign_source_20 = tmp_tuple_unpack_3__element_1;

    CHECK_OBJECT( tmp_assign_source_20 );
    {
        PyObject *old = var_q;
        var_q = tmp_assign_source_20;
        Py_INCREF( var_q );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    tmp_assign_source_21 = tmp_tuple_unpack_3__element_2;

    CHECK_OBJECT( tmp_assign_source_21 );
    {
        PyObject *old = var_c;
        var_c = tmp_assign_source_21;
        Py_INCREF( var_c );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    tmp_assign_source_22 = tmp_tuple_unpack_3__element_3;

    CHECK_OBJECT( tmp_assign_source_22 );
    {
        PyObject *old = var_d;
        var_d = tmp_assign_source_22;
        Py_INCREF( var_d );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    // Tried code:
    tmp_left_name_4 = var_ud;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ud" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
    }

    tmp_left_name_5 = var_q;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "q" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
    }

    tmp_right_name_5 = var_uc;

    if ( tmp_right_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "uc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
    }

    tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
    }
    tmp_tuple_element_3 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
    }
    tmp_iter_arg_4 = PyTuple_New( 4 );
    PyTuple_SET_ITEM( tmp_iter_arg_4, 0, tmp_tuple_element_3 );
    tmp_left_name_6 = var_vd;

    if ( tmp_left_name_6 == NULL )
    {
        Py_DECREF( tmp_iter_arg_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "vd" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
    }

    tmp_left_name_7 = var_q;

    if ( tmp_left_name_7 == NULL )
    {
        Py_DECREF( tmp_iter_arg_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "q" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
    }

    tmp_right_name_7 = var_vc;

    if ( tmp_right_name_7 == NULL )
    {
        Py_DECREF( tmp_iter_arg_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "vc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
    }

    tmp_right_name_6 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_4 );

        exception_lineno = 130;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
    }
    tmp_tuple_element_3 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_4 );

        exception_lineno = 130;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_4, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_uc;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_iter_arg_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "uc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_iter_arg_4, 2, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_vc;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_iter_arg_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "vc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_iter_arg_4, 3, tmp_tuple_element_3 );
    tmp_assign_source_23 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_tuple_unpack_4__source_iter;
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_10 );
    tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_10, 0, 4 );
    if ( tmp_assign_source_24 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 130;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_4__element_1;
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_24;
        Py_XDECREF( old );
    }

    tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_11 );
    tmp_assign_source_25 = UNPACK_NEXT( tmp_unpack_11, 1, 4 );
    if ( tmp_assign_source_25 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 130;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_4__element_2;
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_12 );
    tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_12, 2, 4 );
    if ( tmp_assign_source_26 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 130;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_4__element_3;
        tmp_tuple_unpack_4__element_3 = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    tmp_unpack_13 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_13 );
    tmp_assign_source_27 = UNPACK_NEXT( tmp_unpack_13, 3, 4 );
    if ( tmp_assign_source_27 == NULL )
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


        type_description_1 = "ooooooooo";
        exception_lineno = 130;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_4__element_4;
        tmp_tuple_unpack_4__element_4 = tmp_assign_source_27;
        Py_XDECREF( old );
    }

    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_4 );
    tmp_tuple_unpack_4__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    tmp_assign_source_28 = tmp_tuple_unpack_4__element_1;

    CHECK_OBJECT( tmp_assign_source_28 );
    {
        PyObject *old = var_uc;
        var_uc = tmp_assign_source_28;
        Py_INCREF( var_uc );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    tmp_assign_source_29 = tmp_tuple_unpack_4__element_2;

    CHECK_OBJECT( tmp_assign_source_29 );
    {
        PyObject *old = var_vc;
        var_vc = tmp_assign_source_29;
        Py_INCREF( var_vc );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    tmp_assign_source_30 = tmp_tuple_unpack_4__element_3;

    CHECK_OBJECT( tmp_assign_source_30 );
    {
        PyObject *old = var_ud;
        var_ud = tmp_assign_source_30;
        Py_INCREF( var_ud );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    tmp_assign_source_31 = tmp_tuple_unpack_4__element_4;

    CHECK_OBJECT( tmp_assign_source_31 );
    {
        PyObject *old = var_vd;
        var_vd = tmp_assign_source_31;
        Py_INCREF( var_vd );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_4__element_4 );
    tmp_tuple_unpack_4__element_4 = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_compare_left_2 = var_d;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "d" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 135;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_compare_left_3 = var_ud;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ud" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_return_value = var_ud;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ud" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_left_name_8 = var_ud;

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ud" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_8 = par_p;

    if ( tmp_right_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbcf6ef04bc876ddfad7f29745c26230 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbcf6ef04bc876ddfad7f29745c26230 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dbcf6ef04bc876ddfad7f29745c26230 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dbcf6ef04bc876ddfad7f29745c26230, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dbcf6ef04bc876ddfad7f29745c26230->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dbcf6ef04bc876ddfad7f29745c26230, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dbcf6ef04bc876ddfad7f29745c26230,
        type_description_1,
        par_a,
        par_p,
        var_ud,
        var_uc,
        var_q,
        var_c,
        var_vd,
        var_vc,
        var_d
    );


    // Release cached frame.
    if ( frame_dbcf6ef04bc876ddfad7f29745c26230 == cache_frame_dbcf6ef04bc876ddfad7f29745c26230 )
    {
        Py_DECREF( frame_dbcf6ef04bc876ddfad7f29745c26230 );
    }
    cache_frame_dbcf6ef04bc876ddfad7f29745c26230 = NULL;

    assertFrameObject( frame_dbcf6ef04bc876ddfad7f29745c26230 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_int$$$function_2_inverse_mod );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_ud );
    var_ud = NULL;

    Py_XDECREF( var_uc );
    var_uc = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_vd );
    var_vd = NULL;

    Py_XDECREF( var_vc );
    var_vc = NULL;

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_p );
    par_p = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_ud );
    var_ud = NULL;

    Py_XDECREF( var_uc );
    var_uc = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_vd );
    var_vd = NULL;

    Py_XDECREF( var_vc );
    var_vc = NULL;

    Py_XDECREF( par_a );
    par_a = NULL;

    Py_XDECREF( par_p );
    par_p = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( asn1crypto$_int$$$function_2_inverse_mod );
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


static PyObject *impl_asn1crypto$_int$$$function_3_fill_width( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bytes_ = python_pars[ 0 ];
    PyObject *par_width = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static struct Nuitka_FrameObject *cache_frame_679c62c24f1a99da47e026d58f752586 = NULL;

    struct Nuitka_FrameObject *frame_679c62c24f1a99da47e026d58f752586;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_679c62c24f1a99da47e026d58f752586, codeobj_679c62c24f1a99da47e026d58f752586, module_asn1crypto$_int, sizeof(void *)+sizeof(void *) );
    frame_679c62c24f1a99da47e026d58f752586 = cache_frame_679c62c24f1a99da47e026d58f752586;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_679c62c24f1a99da47e026d58f752586 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_679c62c24f1a99da47e026d58f752586 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    tmp_len_arg_1 = par_bytes_;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bytes_" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = par_width;

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "width" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_left_name_1 = const_bytes_chr_0;
    tmp_right_name_1 = par_bytes_;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bytes_" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_bytes_;
        par_bytes_ = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = par_bytes_;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bytes_" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_679c62c24f1a99da47e026d58f752586 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_679c62c24f1a99da47e026d58f752586 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_679c62c24f1a99da47e026d58f752586 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_679c62c24f1a99da47e026d58f752586, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_679c62c24f1a99da47e026d58f752586->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_679c62c24f1a99da47e026d58f752586, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_679c62c24f1a99da47e026d58f752586,
        type_description_1,
        par_bytes_,
        par_width
    );


    // Release cached frame.
    if ( frame_679c62c24f1a99da47e026d58f752586 == cache_frame_679c62c24f1a99da47e026d58f752586 )
    {
        Py_DECREF( frame_679c62c24f1a99da47e026d58f752586 );
    }
    cache_frame_679c62c24f1a99da47e026d58f752586 = NULL;

    assertFrameObject( frame_679c62c24f1a99da47e026d58f752586 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_int$$$function_3_fill_width );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_width );
    par_width = NULL;

    Py_XDECREF( par_bytes_ );
    par_bytes_ = NULL;

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

    Py_XDECREF( par_width );
    par_width = NULL;

    Py_XDECREF( par_bytes_ );
    par_bytes_ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( asn1crypto$_int$$$function_3_fill_width );
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



static PyObject *MAKE_FUNCTION_asn1crypto$_int$$$function_1_inverse_mod(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_int$$$function_1_inverse_mod,
        const_str_plain_inverse_mod,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_794fb41070ef82de7e45d7c31bc68aa3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_int,
        const_str_digest_0b127fc5cd56dd7cfbe0ab00fea1ce6a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$_int$$$function_2_inverse_mod(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_int$$$function_2_inverse_mod,
        const_str_plain_inverse_mod,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dbcf6ef04bc876ddfad7f29745c26230,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_int,
        const_str_digest_6cfc33902a1a9f6df807e5937efcf625,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_asn1crypto$_int$$$function_3_fill_width(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_asn1crypto$_int$$$function_3_fill_width,
        const_str_plain_fill_width,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_679c62c24f1a99da47e026d58f752586,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_asn1crypto$_int,
        const_str_digest_6f64d8643fee6d4a11c1114731886737,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_asn1crypto$_int =
{
    PyModuleDef_HEAD_INIT,
    "asn1crypto._int",   /* m_name */
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

MOD_INIT_DECL( asn1crypto$_int )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_asn1crypto$_int );
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
    puts("asn1crypto._int: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("asn1crypto._int: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("asn1crypto._int: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initasn1crypto$_int" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_asn1crypto$_int = Py_InitModule4(
        "asn1crypto._int",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_asn1crypto$_int = PyModule_Create( &mdef_asn1crypto$_int );
#endif

    moduledict_asn1crypto$_int = MODULE_DICT( module_asn1crypto$_int );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_asn1crypto$_int,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_asn1crypto$_int,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_asn1crypto$_int,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_asn1crypto$_int );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_9ceab3df8f8a56717fbfa382e539b839, module_asn1crypto$_int );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *tmp_called_instance_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_tuple_element_1;
    struct Nuitka_FrameObject *frame_41ce0b5ebc5a95872b860f7d3071907b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_ce95c0d92bef14c1d177b49a10fd6418;
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_78a1ac9643c65c3d84c3f3d76bde4992;
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( !(tmp_assign_source_4 == NULL) );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_41ce0b5ebc5a95872b860f7d3071907b = MAKE_MODULE_FRAME( codeobj_41ce0b5ebc5a95872b860f7d3071907b, module_asn1crypto$_int );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_41ce0b5ebc5a95872b860f7d3071907b );
    assert( Py_REFCNT( frame_41ce0b5ebc5a95872b860f7d3071907b ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_unicode_literals );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_absolute_import );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_7 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_print_function );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_8 );
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

    tmp_name_name_1 = const_str_plain_math;
    tmp_globals_name_1 = (PyObject *)moduledict_asn1crypto$_int;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_41ce0b5ebc5a95872b860f7d3071907b->m_frame.f_lineno = 36;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( !(tmp_assign_source_9 == NULL) );
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_9 );
    tmp_name_name_2 = const_str_plain_platform;
    tmp_globals_name_2 = (PyObject *)moduledict_asn1crypto$_int;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_41ce0b5ebc5a95872b860f7d3071907b->m_frame.f_lineno = 37;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_platform, tmp_assign_source_10 );
    tmp_name_name_3 = const_str_plain_util;
    tmp_globals_name_3 = (PyObject *)moduledict_asn1crypto$_int;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_int_to_bytes_str_plain_int_from_bytes_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_41ce0b5ebc5a95872b860f7d3071907b->m_frame.f_lineno = 39;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_plain_int_to_bytes,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_int_to_bytes );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_int_to_bytes, tmp_assign_source_12 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    if ( PyModule_Check( tmp_import_name_from_6 ) )
    {
       tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_6,
            (PyObject *)MODULE_DICT(tmp_import_name_from_6),
            const_str_plain_int_from_bytes,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_int_from_bytes );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_int_from_bytes, tmp_assign_source_13 );
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

    // Tried code:
    tmp_name_name_4 = const_str_plain__ffi;
    tmp_globals_name_4 = (PyObject *)moduledict_asn1crypto$_int;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_b5d214519f6182c6a6e0b84a6f4aeef3_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_41ce0b5ebc5a95872b860f7d3071907b->m_frame.f_lineno = 43;
    tmp_assign_source_14 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_3;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_14;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    if ( PyModule_Check( tmp_import_name_from_7 ) )
    {
       tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_7,
            (PyObject *)MODULE_DICT(tmp_import_name_from_7),
            const_str_plain_buffer_from_bytes,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_buffer_from_bytes );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_buffer_from_bytes, tmp_assign_source_15 );
    tmp_import_name_from_8 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    if ( PyModule_Check( tmp_import_name_from_8 ) )
    {
       tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_8,
            (PyObject *)MODULE_DICT(tmp_import_name_from_8),
            const_str_plain_bytes_from_buffer,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_bytes_from_buffer );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_bytes_from_buffer, tmp_assign_source_16 );
    tmp_import_name_from_9 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    if ( PyModule_Check( tmp_import_name_from_9 ) )
    {
       tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_9,
            (PyObject *)MODULE_DICT(tmp_import_name_from_9),
            const_str_plain_FFIEngineError,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_FFIEngineError );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_FFIEngineError, tmp_assign_source_17 );
    tmp_import_name_from_10 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    if ( PyModule_Check( tmp_import_name_from_10 ) )
    {
       tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_10,
            (PyObject *)MODULE_DICT(tmp_import_name_from_10),
            const_str_plain_LibraryNotFoundError,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_LibraryNotFoundError );
    }

    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_LibraryNotFoundError, tmp_assign_source_18 );
    tmp_import_name_from_11 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    if ( PyModule_Check( tmp_import_name_from_11 ) )
    {
       tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_11,
            (PyObject *)MODULE_DICT(tmp_import_name_from_11),
            const_str_plain_null,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_null );
    }

    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_null, tmp_assign_source_19 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_platform );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_platform );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "platform" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;

        goto try_except_handler_3;
    }

    frame_41ce0b5ebc5a95872b860f7d3071907b->m_frame.f_lineno = 52;
    tmp_compare_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_python_implementation );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto try_except_handler_3;
    }
    tmp_compare_right_1 = const_str_plain_PyPy;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto try_except_handler_3;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    frame_41ce0b5ebc5a95872b860f7d3071907b->m_frame.f_lineno = 53;
    tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS( PyExc_EnvironmentError );
    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 53;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_3;
    branch_no_1:;
    // Tried code:
    tmp_name_name_5 = const_str_digest_9dd2466a5496f3274bf05f79c71ed9ed;
    tmp_globals_name_5 = (PyObject *)moduledict_asn1crypto$_int;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_libcrypto_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_41ce0b5ebc5a95872b860f7d3071907b->m_frame.f_lineno = 56;
    tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_5;
    }
    if ( PyModule_Check( tmp_import_name_from_12 ) )
    {
       tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_12,
            (PyObject *)MODULE_DICT(tmp_import_name_from_12),
            const_str_plain_libcrypto,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_libcrypto );
    }

    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_libcrypto, tmp_assign_source_20 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_41ce0b5ebc5a95872b860f7d3071907b, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_41ce0b5ebc5a95872b860f7d3071907b, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PyException_SetTraceback( exception_keeper_value_4, (PyObject *)exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    // Tried code:
    tmp_compare_left_2 = EXC_TYPE(PyThreadState_GET());
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_LibraryNotFoundError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LibraryNotFoundError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LibraryNotFoundError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;

        goto try_except_handler_6;
    }

    tmp_compare_right_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_FFIEngineError );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FFIEngineError );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_compare_right_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FFIEngineError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;

        goto try_except_handler_6;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto try_except_handler_6;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    frame_41ce0b5ebc5a95872b860f7d3071907b->m_frame.f_lineno = 102;
    tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS( PyExc_EnvironmentError );
    assert( !(tmp_raise_type_2 == NULL) );
    exception_type = tmp_raise_type_2;
    exception_lineno = 102;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

    goto try_except_handler_6;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 55;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_41ce0b5ebc5a95872b860f7d3071907b->m_frame) frame_41ce0b5ebc5a95872b860f7d3071907b->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_6;
    branch_end_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_int );
    return MOD_RETURN_VALUE( NULL );
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_3;
    // End of try:
    // End of try:
    try_end_4:;
    tmp_assign_source_21 = MAKE_FUNCTION_asn1crypto$_int$$$function_1_inverse_mod(  );
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_inverse_mod, tmp_assign_source_21 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_41ce0b5ebc5a95872b860f7d3071907b, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != 0 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_41ce0b5ebc5a95872b860f7d3071907b, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PyException_SetTraceback( exception_keeper_value_6, (PyObject *)exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    // Tried code:
    tmp_compare_left_3 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_3 = const_tuple_type_OSError_type_ImportError_tuple;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;

        goto try_except_handler_7;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_22 = MAKE_FUNCTION_asn1crypto$_int$$$function_2_inverse_mod(  );
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_inverse_mod, tmp_assign_source_22 );
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 42;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_41ce0b5ebc5a95872b860f7d3071907b->m_frame) frame_41ce0b5ebc5a95872b860f7d3071907b->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_7;
    branch_end_3:;
    goto try_end_6;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( asn1crypto$_int );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_41ce0b5ebc5a95872b860f7d3071907b );
#endif
    popFrameStack();

    assertFrameObject( frame_41ce0b5ebc5a95872b860f7d3071907b );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_41ce0b5ebc5a95872b860f7d3071907b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_41ce0b5ebc5a95872b860f7d3071907b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_41ce0b5ebc5a95872b860f7d3071907b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_41ce0b5ebc5a95872b860f7d3071907b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_23 = MAKE_FUNCTION_asn1crypto$_int$$$function_3_fill_width(  );
    UPDATE_STRING_DICT1( moduledict_asn1crypto$_int, (Nuitka_StringObject *)const_str_plain_fill_width, tmp_assign_source_23 );

    return MOD_RETURN_VALUE( module_asn1crypto$_int );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

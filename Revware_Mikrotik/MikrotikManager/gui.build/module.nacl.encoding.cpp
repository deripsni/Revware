/* Generated code for Python source for module 'nacl.encoding'
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

/* The _module_nacl$encoding is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_nacl$encoding;
PyDictObject *moduledict_nacl$encoding;

/* The module constants used, if any. */
static PyObject *const_str_digest_00753caabc16f82046d545cae61a96a3;
static PyObject *const_str_plain_b16decode;
extern PyObject *const_str_plain_data;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_fed0ba20d48df05cdebaf8c3fd961114;
static PyObject *const_str_plain_b32decode;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_unhexlify;
extern PyObject *const_str_plain_binascii;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_418d4b17c596715186d46a13f37e688a;
static PyObject *const_str_digest_c69e0f94cfcfffe027269bc411eefbc0;
static PyObject *const_str_plain_Base16Encoder;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_object;
static PyObject *const_str_digest_48270187f52ef7f04a7feaafd24820ca;
static PyObject *const_str_digest_fa191500e245e4479b79f244a89f0705;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_Encodable;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_digest_68a2e4c6b5716a2bcebd16e372321d2e;
static PyObject *const_tuple_str_plain_self_str_plain_encoder_tuple;
static PyObject *const_tuple_str_plain_RawEncoder_tuple_type_object_tuple_tuple;
static PyObject *const_str_plain_HexEncoder;
static PyObject *const_tuple_str_plain_Base32Encoder_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_89ca5ecf42bfdfe3222f70106cae8c2c;
static PyObject *const_tuple_str_plain_Encodable_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_b64decode;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_cedb8f30a6718f8731932fceea318546;
static PyObject *const_tuple_str_plain_Base64Encoder_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_bc94fc3a17bd4db395f31b5e7905a3e8;
static PyObject *const_str_plain_URLSafeBase64Encoder;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_encoder;
extern PyObject *const_str_plain_base64;
static PyObject *const_str_digest_3d15ecde3eeb85cf80a14a0bd6a4c964;
static PyObject *const_str_plain_urlsafe_b64decode;
static PyObject *const_str_digest_c9a6be82dbee333863e4ff0b7bee8707;
extern PyObject *const_str_plain_b64encode;
static PyObject *const_str_plain_urlsafe_b64encode;
extern PyObject *const_str_plain_staticmethod;
extern PyObject *const_str_plain_hexlify;
static PyObject *const_str_digest_ce1276fb5e47ea15573178c7291b0181;
static PyObject *const_str_plain_b16encode;
extern PyObject *const_str_plain_RawEncoder;
static PyObject *const_tuple_str_plain_URLSafeBase64Encoder_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_006974c6ea5e8bf4e53edc464d519f61;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_HexEncoder_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_89d95c2d012dd86fc865f2d6d16de486;
static PyObject *const_str_plain_Base32Encoder;
extern PyObject *const_tuple_str_plain_data_tuple;
static PyObject *const_tuple_str_plain_Base16Encoder_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_b32encode;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_f8e4b8e42315415f6e5ae53f3cc166b7;
static PyObject *const_str_plain_Base64Encoder;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_00753caabc16f82046d545cae61a96a3 = UNSTREAM_STRING( &constant_bin[ 372082 ], 20, 0 );
    const_str_plain_b16decode = UNSTREAM_STRING( &constant_bin[ 372102 ], 9, 1 );
    const_str_digest_fed0ba20d48df05cdebaf8c3fd961114 = UNSTREAM_STRING( &constant_bin[ 372111 ], 20, 0 );
    const_str_plain_b32decode = UNSTREAM_STRING( &constant_bin[ 372131 ], 9, 1 );
    const_str_digest_418d4b17c596715186d46a13f37e688a = UNSTREAM_STRING( &constant_bin[ 372140 ], 88, 0 );
    const_str_digest_c69e0f94cfcfffe027269bc411eefbc0 = UNSTREAM_STRING( &constant_bin[ 372228 ], 13, 0 );
    const_str_plain_Base16Encoder = UNSTREAM_STRING( &constant_bin[ 372241 ], 13, 1 );
    const_str_digest_48270187f52ef7f04a7feaafd24820ca = UNSTREAM_STRING( &constant_bin[ 372254 ], 16, 0 );
    const_str_digest_fa191500e245e4479b79f244a89f0705 = UNSTREAM_STRING( &constant_bin[ 372270 ], 22, 0 );
    const_str_digest_68a2e4c6b5716a2bcebd16e372321d2e = UNSTREAM_STRING( &constant_bin[ 372292 ], 20, 0 );
    const_tuple_str_plain_self_str_plain_encoder_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_encoder_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_encoder_tuple, 1, const_str_plain_encoder ); Py_INCREF( const_str_plain_encoder );
    const_tuple_str_plain_RawEncoder_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_RawEncoder_tuple_type_object_tuple_tuple, 0, const_str_plain_RawEncoder ); Py_INCREF( const_str_plain_RawEncoder );
    PyTuple_SET_ITEM( const_tuple_str_plain_RawEncoder_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_plain_HexEncoder = UNSTREAM_STRING( &constant_bin[ 372312 ], 10, 1 );
    const_tuple_str_plain_Base32Encoder_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    const_str_plain_Base32Encoder = UNSTREAM_STRING( &constant_bin[ 372082 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Base32Encoder_tuple_type_object_tuple_tuple, 0, const_str_plain_Base32Encoder ); Py_INCREF( const_str_plain_Base32Encoder );
    PyTuple_SET_ITEM( const_tuple_str_plain_Base32Encoder_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_89ca5ecf42bfdfe3222f70106cae8c2c = UNSTREAM_STRING( &constant_bin[ 372322 ], 27, 0 );
    const_tuple_str_plain_Encodable_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Encodable_tuple_type_object_tuple_tuple, 0, const_str_plain_Encodable ); Py_INCREF( const_str_plain_Encodable );
    PyTuple_SET_ITEM( const_tuple_str_plain_Encodable_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_cedb8f30a6718f8731932fceea318546 = UNSTREAM_STRING( &constant_bin[ 372349 ], 20, 0 );
    const_tuple_str_plain_Base64Encoder_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    const_str_plain_Base64Encoder = UNSTREAM_STRING( &constant_bin[ 372111 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Base64Encoder_tuple_type_object_tuple_tuple, 0, const_str_plain_Base64Encoder ); Py_INCREF( const_str_plain_Base64Encoder );
    PyTuple_SET_ITEM( const_tuple_str_plain_Base64Encoder_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_bc94fc3a17bd4db395f31b5e7905a3e8 = UNSTREAM_STRING( &constant_bin[ 372369 ], 20, 0 );
    const_str_plain_URLSafeBase64Encoder = UNSTREAM_STRING( &constant_bin[ 372322 ], 20, 1 );
    const_str_digest_3d15ecde3eeb85cf80a14a0bd6a4c964 = UNSTREAM_STRING( &constant_bin[ 372389 ], 20, 0 );
    const_str_plain_urlsafe_b64decode = UNSTREAM_STRING( &constant_bin[ 372409 ], 17, 1 );
    const_str_digest_c9a6be82dbee333863e4ff0b7bee8707 = UNSTREAM_STRING( &constant_bin[ 372426 ], 27, 0 );
    const_str_plain_urlsafe_b64encode = UNSTREAM_STRING( &constant_bin[ 372453 ], 17, 1 );
    const_str_digest_ce1276fb5e47ea15573178c7291b0181 = UNSTREAM_STRING( &constant_bin[ 372470 ], 17, 0 );
    const_str_plain_b16encode = UNSTREAM_STRING( &constant_bin[ 372487 ], 9, 1 );
    const_tuple_str_plain_URLSafeBase64Encoder_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_URLSafeBase64Encoder_tuple_type_object_tuple_tuple, 0, const_str_plain_URLSafeBase64Encoder ); Py_INCREF( const_str_plain_URLSafeBase64Encoder );
    PyTuple_SET_ITEM( const_tuple_str_plain_URLSafeBase64Encoder_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_006974c6ea5e8bf4e53edc464d519f61 = UNSTREAM_STRING( &constant_bin[ 372496 ], 17, 0 );
    const_tuple_str_plain_HexEncoder_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HexEncoder_tuple_type_object_tuple_tuple, 0, const_str_plain_HexEncoder ); Py_INCREF( const_str_plain_HexEncoder );
    PyTuple_SET_ITEM( const_tuple_str_plain_HexEncoder_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_89d95c2d012dd86fc865f2d6d16de486 = UNSTREAM_STRING( &constant_bin[ 372513 ], 17, 0 );
    const_tuple_str_plain_Base16Encoder_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Base16Encoder_tuple_type_object_tuple_tuple, 0, const_str_plain_Base16Encoder ); Py_INCREF( const_str_plain_Base16Encoder );
    PyTuple_SET_ITEM( const_tuple_str_plain_Base16Encoder_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_plain_b32encode = UNSTREAM_STRING( &constant_bin[ 372530 ], 9, 1 );
    const_str_digest_f8e4b8e42315415f6e5ae53f3cc166b7 = UNSTREAM_STRING( &constant_bin[ 372539 ], 17, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nacl$encoding( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_46d7cf8c473bb128a09e97517b4b0de4;
static PyCodeObject *codeobj_e6ff26de91ef401aa70f49c8d7acbce3;
static PyCodeObject *codeobj_b2433f790b3867ce9651f850d73314df;
static PyCodeObject *codeobj_f61c983a3afce6badb9af9adf4a3b654;
static PyCodeObject *codeobj_51d544e51248a3432735a244f2c4e53e;
static PyCodeObject *codeobj_8ff4b5477ef56e473430d91951ef46f1;
static PyCodeObject *codeobj_920538897dadee076b869cc311a4b388;
static PyCodeObject *codeobj_70d19a4f5234eab08ddbb89e13a6cb69;
static PyCodeObject *codeobj_9da37905b2da80786ae373219b788062;
static PyCodeObject *codeobj_b23b83909cb923aa14dda4342c8546fd;
static PyCodeObject *codeobj_c145ca986186327e5c746acc05e301c1;
static PyCodeObject *codeobj_37f9d1869f6ea05a594f72b9a1db280b;
static PyCodeObject *codeobj_82fe23375fe1070cdce2733c9da690f4;
static PyCodeObject *codeobj_f900b39895ba9a8adcee09de36eff92f;
static PyCodeObject *codeobj_5513b6d58815b565e7a400974db39275;
static PyCodeObject *codeobj_ec5218ca6d06d912a5fbb8e839679df5;
static PyCodeObject *codeobj_634f8027244bb23246e68dc9e8d3671a;
static PyCodeObject *codeobj_9ce5a1e9bc0077a56c662d22dcd34489;
static PyCodeObject *codeobj_09681d3a50a21863551e5b7c9af1095e;
static PyCodeObject *codeobj_ec1f8e7dc9b5a4f7e7737443e8e5d0c2;
static PyCodeObject *codeobj_95c4395fbdb657db9b82cc91d05b0d7e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_418d4b17c596715186d46a13f37e688a;
    codeobj_46d7cf8c473bb128a09e97517b4b0de4 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_fa191500e245e4479b79f244a89f0705, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e6ff26de91ef401aa70f49c8d7acbce3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Base16Encoder, 43, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_b2433f790b3867ce9651f850d73314df = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Base32Encoder, 54, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_f61c983a3afce6badb9af9adf4a3b654 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Base64Encoder, 65, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_51d544e51248a3432735a244f2c4e53e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Encodable, 87, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_8ff4b5477ef56e473430d91951ef46f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HexEncoder, 32, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_920538897dadee076b869cc311a4b388 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RawEncoder, 21, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_70d19a4f5234eab08ddbb89e13a6cb69 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_URLSafeBase64Encoder, 76, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_9da37905b2da80786ae373219b788062 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decode, 27, const_tuple_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b23b83909cb923aa14dda4342c8546fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decode, 38, const_tuple_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c145ca986186327e5c746acc05e301c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decode, 49, const_tuple_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_37f9d1869f6ea05a594f72b9a1db280b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decode, 60, const_tuple_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_82fe23375fe1070cdce2733c9da690f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decode, 71, const_tuple_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f900b39895ba9a8adcee09de36eff92f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decode, 82, const_tuple_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5513b6d58815b565e7a400974db39275 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode, 23, const_tuple_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ec5218ca6d06d912a5fbb8e839679df5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode, 34, const_tuple_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_634f8027244bb23246e68dc9e8d3671a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode, 45, const_tuple_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9ce5a1e9bc0077a56c662d22dcd34489 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode, 56, const_tuple_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_09681d3a50a21863551e5b7c9af1095e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode, 67, const_tuple_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ec1f8e7dc9b5a4f7e7737443e8e5d0c2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode, 78, const_tuple_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_95c4395fbdb657db9b82cc91d05b0d7e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode, 89, const_tuple_str_plain_self_str_plain_encoder_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_10_decode(  );


static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_11_encode(  );


static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_12_decode(  );


static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_13_encode( PyObject *defaults );


static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_1_encode(  );


static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_2_decode(  );


static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_3_encode(  );


static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_4_decode(  );


static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_5_encode(  );


static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_6_decode(  );


static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_7_encode(  );


static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_8_decode(  );


static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_9_encode(  );


// The module function definitions.
static PyObject *impl_nacl$encoding$$$function_1_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_data;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_1_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_1_encode );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_nacl$encoding$$$function_2_decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_data;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_2_decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_2_decode );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_nacl$encoding$$$function_3_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_ec5218ca6d06d912a5fbb8e839679df5 = NULL;

    struct Nuitka_FrameObject *frame_ec5218ca6d06d912a5fbb8e839679df5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ec5218ca6d06d912a5fbb8e839679df5, codeobj_ec5218ca6d06d912a5fbb8e839679df5, module_nacl$encoding, sizeof(void *) );
    frame_ec5218ca6d06d912a5fbb8e839679df5 = cache_frame_ec5218ca6d06d912a5fbb8e839679df5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ec5218ca6d06d912a5fbb8e839679df5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ec5218ca6d06d912a5fbb8e839679df5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_binascii );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_binascii );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "binascii" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hexlify );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "o";
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

        exception_lineno = 36;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_ec5218ca6d06d912a5fbb8e839679df5->m_frame.f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec5218ca6d06d912a5fbb8e839679df5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec5218ca6d06d912a5fbb8e839679df5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec5218ca6d06d912a5fbb8e839679df5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ec5218ca6d06d912a5fbb8e839679df5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ec5218ca6d06d912a5fbb8e839679df5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ec5218ca6d06d912a5fbb8e839679df5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ec5218ca6d06d912a5fbb8e839679df5,
        type_description_1,
        par_data
    );


    // Release cached frame.
    if ( frame_ec5218ca6d06d912a5fbb8e839679df5 == cache_frame_ec5218ca6d06d912a5fbb8e839679df5 )
    {
        Py_DECREF( frame_ec5218ca6d06d912a5fbb8e839679df5 );
    }
    cache_frame_ec5218ca6d06d912a5fbb8e839679df5 = NULL;

    assertFrameObject( frame_ec5218ca6d06d912a5fbb8e839679df5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_3_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_3_encode );
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


static PyObject *impl_nacl$encoding$$$function_4_decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_b23b83909cb923aa14dda4342c8546fd = NULL;

    struct Nuitka_FrameObject *frame_b23b83909cb923aa14dda4342c8546fd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b23b83909cb923aa14dda4342c8546fd, codeobj_b23b83909cb923aa14dda4342c8546fd, module_nacl$encoding, sizeof(void *) );
    frame_b23b83909cb923aa14dda4342c8546fd = cache_frame_b23b83909cb923aa14dda4342c8546fd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b23b83909cb923aa14dda4342c8546fd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b23b83909cb923aa14dda4342c8546fd ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_binascii );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_binascii );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "binascii" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_unhexlify );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "o";
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

        exception_lineno = 40;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_b23b83909cb923aa14dda4342c8546fd->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
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
    RESTORE_FRAME_EXCEPTION( frame_b23b83909cb923aa14dda4342c8546fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b23b83909cb923aa14dda4342c8546fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b23b83909cb923aa14dda4342c8546fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b23b83909cb923aa14dda4342c8546fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b23b83909cb923aa14dda4342c8546fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b23b83909cb923aa14dda4342c8546fd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b23b83909cb923aa14dda4342c8546fd,
        type_description_1,
        par_data
    );


    // Release cached frame.
    if ( frame_b23b83909cb923aa14dda4342c8546fd == cache_frame_b23b83909cb923aa14dda4342c8546fd )
    {
        Py_DECREF( frame_b23b83909cb923aa14dda4342c8546fd );
    }
    cache_frame_b23b83909cb923aa14dda4342c8546fd = NULL;

    assertFrameObject( frame_b23b83909cb923aa14dda4342c8546fd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_4_decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_4_decode );
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


static PyObject *impl_nacl$encoding$$$function_5_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_634f8027244bb23246e68dc9e8d3671a = NULL;

    struct Nuitka_FrameObject *frame_634f8027244bb23246e68dc9e8d3671a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_634f8027244bb23246e68dc9e8d3671a, codeobj_634f8027244bb23246e68dc9e8d3671a, module_nacl$encoding, sizeof(void *) );
    frame_634f8027244bb23246e68dc9e8d3671a = cache_frame_634f8027244bb23246e68dc9e8d3671a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_634f8027244bb23246e68dc9e8d3671a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_634f8027244bb23246e68dc9e8d3671a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_base64 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_b16encode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "o";
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

        exception_lineno = 47;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_634f8027244bb23246e68dc9e8d3671a->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_634f8027244bb23246e68dc9e8d3671a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_634f8027244bb23246e68dc9e8d3671a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_634f8027244bb23246e68dc9e8d3671a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_634f8027244bb23246e68dc9e8d3671a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_634f8027244bb23246e68dc9e8d3671a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_634f8027244bb23246e68dc9e8d3671a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_634f8027244bb23246e68dc9e8d3671a,
        type_description_1,
        par_data
    );


    // Release cached frame.
    if ( frame_634f8027244bb23246e68dc9e8d3671a == cache_frame_634f8027244bb23246e68dc9e8d3671a )
    {
        Py_DECREF( frame_634f8027244bb23246e68dc9e8d3671a );
    }
    cache_frame_634f8027244bb23246e68dc9e8d3671a = NULL;

    assertFrameObject( frame_634f8027244bb23246e68dc9e8d3671a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_5_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_5_encode );
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


static PyObject *impl_nacl$encoding$$$function_6_decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_c145ca986186327e5c746acc05e301c1 = NULL;

    struct Nuitka_FrameObject *frame_c145ca986186327e5c746acc05e301c1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c145ca986186327e5c746acc05e301c1, codeobj_c145ca986186327e5c746acc05e301c1, module_nacl$encoding, sizeof(void *) );
    frame_c145ca986186327e5c746acc05e301c1 = cache_frame_c145ca986186327e5c746acc05e301c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c145ca986186327e5c746acc05e301c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c145ca986186327e5c746acc05e301c1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_base64 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_b16decode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "o";
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

        exception_lineno = 51;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_c145ca986186327e5c746acc05e301c1->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c145ca986186327e5c746acc05e301c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c145ca986186327e5c746acc05e301c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c145ca986186327e5c746acc05e301c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c145ca986186327e5c746acc05e301c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c145ca986186327e5c746acc05e301c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c145ca986186327e5c746acc05e301c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c145ca986186327e5c746acc05e301c1,
        type_description_1,
        par_data
    );


    // Release cached frame.
    if ( frame_c145ca986186327e5c746acc05e301c1 == cache_frame_c145ca986186327e5c746acc05e301c1 )
    {
        Py_DECREF( frame_c145ca986186327e5c746acc05e301c1 );
    }
    cache_frame_c145ca986186327e5c746acc05e301c1 = NULL;

    assertFrameObject( frame_c145ca986186327e5c746acc05e301c1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_6_decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_6_decode );
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


static PyObject *impl_nacl$encoding$$$function_7_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_9ce5a1e9bc0077a56c662d22dcd34489 = NULL;

    struct Nuitka_FrameObject *frame_9ce5a1e9bc0077a56c662d22dcd34489;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9ce5a1e9bc0077a56c662d22dcd34489, codeobj_9ce5a1e9bc0077a56c662d22dcd34489, module_nacl$encoding, sizeof(void *) );
    frame_9ce5a1e9bc0077a56c662d22dcd34489 = cache_frame_9ce5a1e9bc0077a56c662d22dcd34489;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9ce5a1e9bc0077a56c662d22dcd34489 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9ce5a1e9bc0077a56c662d22dcd34489 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_base64 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_b32encode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "o";
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

        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_9ce5a1e9bc0077a56c662d22dcd34489->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ce5a1e9bc0077a56c662d22dcd34489 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ce5a1e9bc0077a56c662d22dcd34489 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9ce5a1e9bc0077a56c662d22dcd34489 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9ce5a1e9bc0077a56c662d22dcd34489, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9ce5a1e9bc0077a56c662d22dcd34489->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9ce5a1e9bc0077a56c662d22dcd34489, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9ce5a1e9bc0077a56c662d22dcd34489,
        type_description_1,
        par_data
    );


    // Release cached frame.
    if ( frame_9ce5a1e9bc0077a56c662d22dcd34489 == cache_frame_9ce5a1e9bc0077a56c662d22dcd34489 )
    {
        Py_DECREF( frame_9ce5a1e9bc0077a56c662d22dcd34489 );
    }
    cache_frame_9ce5a1e9bc0077a56c662d22dcd34489 = NULL;

    assertFrameObject( frame_9ce5a1e9bc0077a56c662d22dcd34489 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_7_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_7_encode );
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


static PyObject *impl_nacl$encoding$$$function_8_decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_37f9d1869f6ea05a594f72b9a1db280b = NULL;

    struct Nuitka_FrameObject *frame_37f9d1869f6ea05a594f72b9a1db280b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_37f9d1869f6ea05a594f72b9a1db280b, codeobj_37f9d1869f6ea05a594f72b9a1db280b, module_nacl$encoding, sizeof(void *) );
    frame_37f9d1869f6ea05a594f72b9a1db280b = cache_frame_37f9d1869f6ea05a594f72b9a1db280b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_37f9d1869f6ea05a594f72b9a1db280b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_37f9d1869f6ea05a594f72b9a1db280b ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_base64 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_b32decode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "o";
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

        exception_lineno = 62;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_37f9d1869f6ea05a594f72b9a1db280b->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37f9d1869f6ea05a594f72b9a1db280b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_37f9d1869f6ea05a594f72b9a1db280b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_37f9d1869f6ea05a594f72b9a1db280b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_37f9d1869f6ea05a594f72b9a1db280b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_37f9d1869f6ea05a594f72b9a1db280b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_37f9d1869f6ea05a594f72b9a1db280b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_37f9d1869f6ea05a594f72b9a1db280b,
        type_description_1,
        par_data
    );


    // Release cached frame.
    if ( frame_37f9d1869f6ea05a594f72b9a1db280b == cache_frame_37f9d1869f6ea05a594f72b9a1db280b )
    {
        Py_DECREF( frame_37f9d1869f6ea05a594f72b9a1db280b );
    }
    cache_frame_37f9d1869f6ea05a594f72b9a1db280b = NULL;

    assertFrameObject( frame_37f9d1869f6ea05a594f72b9a1db280b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_8_decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_8_decode );
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


static PyObject *impl_nacl$encoding$$$function_9_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_09681d3a50a21863551e5b7c9af1095e = NULL;

    struct Nuitka_FrameObject *frame_09681d3a50a21863551e5b7c9af1095e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_09681d3a50a21863551e5b7c9af1095e, codeobj_09681d3a50a21863551e5b7c9af1095e, module_nacl$encoding, sizeof(void *) );
    frame_09681d3a50a21863551e5b7c9af1095e = cache_frame_09681d3a50a21863551e5b7c9af1095e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_09681d3a50a21863551e5b7c9af1095e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_09681d3a50a21863551e5b7c9af1095e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_base64 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_b64encode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "o";
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

        exception_lineno = 69;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_09681d3a50a21863551e5b7c9af1095e->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_09681d3a50a21863551e5b7c9af1095e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_09681d3a50a21863551e5b7c9af1095e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_09681d3a50a21863551e5b7c9af1095e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_09681d3a50a21863551e5b7c9af1095e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_09681d3a50a21863551e5b7c9af1095e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_09681d3a50a21863551e5b7c9af1095e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_09681d3a50a21863551e5b7c9af1095e,
        type_description_1,
        par_data
    );


    // Release cached frame.
    if ( frame_09681d3a50a21863551e5b7c9af1095e == cache_frame_09681d3a50a21863551e5b7c9af1095e )
    {
        Py_DECREF( frame_09681d3a50a21863551e5b7c9af1095e );
    }
    cache_frame_09681d3a50a21863551e5b7c9af1095e = NULL;

    assertFrameObject( frame_09681d3a50a21863551e5b7c9af1095e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_9_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_9_encode );
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


static PyObject *impl_nacl$encoding$$$function_10_decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_82fe23375fe1070cdce2733c9da690f4 = NULL;

    struct Nuitka_FrameObject *frame_82fe23375fe1070cdce2733c9da690f4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_82fe23375fe1070cdce2733c9da690f4, codeobj_82fe23375fe1070cdce2733c9da690f4, module_nacl$encoding, sizeof(void *) );
    frame_82fe23375fe1070cdce2733c9da690f4 = cache_frame_82fe23375fe1070cdce2733c9da690f4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_82fe23375fe1070cdce2733c9da690f4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_82fe23375fe1070cdce2733c9da690f4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_base64 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_b64decode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "o";
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

        exception_lineno = 73;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_82fe23375fe1070cdce2733c9da690f4->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_82fe23375fe1070cdce2733c9da690f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_82fe23375fe1070cdce2733c9da690f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_82fe23375fe1070cdce2733c9da690f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_82fe23375fe1070cdce2733c9da690f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_82fe23375fe1070cdce2733c9da690f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_82fe23375fe1070cdce2733c9da690f4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_82fe23375fe1070cdce2733c9da690f4,
        type_description_1,
        par_data
    );


    // Release cached frame.
    if ( frame_82fe23375fe1070cdce2733c9da690f4 == cache_frame_82fe23375fe1070cdce2733c9da690f4 )
    {
        Py_DECREF( frame_82fe23375fe1070cdce2733c9da690f4 );
    }
    cache_frame_82fe23375fe1070cdce2733c9da690f4 = NULL;

    assertFrameObject( frame_82fe23375fe1070cdce2733c9da690f4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_10_decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_10_decode );
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


static PyObject *impl_nacl$encoding$$$function_11_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2 = NULL;

    struct Nuitka_FrameObject *frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2, codeobj_ec1f8e7dc9b5a4f7e7737443e8e5d0c2, module_nacl$encoding, sizeof(void *) );
    frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2 = cache_frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_base64 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_urlsafe_b64encode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "o";
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

        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2->m_frame.f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2,
        type_description_1,
        par_data
    );


    // Release cached frame.
    if ( frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2 == cache_frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2 )
    {
        Py_DECREF( frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2 );
    }
    cache_frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2 = NULL;

    assertFrameObject( frame_ec1f8e7dc9b5a4f7e7737443e8e5d0c2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_11_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_11_encode );
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


static PyObject *impl_nacl$encoding$$$function_12_decode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
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
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_f900b39895ba9a8adcee09de36eff92f = NULL;

    struct Nuitka_FrameObject *frame_f900b39895ba9a8adcee09de36eff92f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f900b39895ba9a8adcee09de36eff92f, codeobj_f900b39895ba9a8adcee09de36eff92f, module_nacl$encoding, sizeof(void *) );
    frame_f900b39895ba9a8adcee09de36eff92f = cache_frame_f900b39895ba9a8adcee09de36eff92f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f900b39895ba9a8adcee09de36eff92f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f900b39895ba9a8adcee09de36eff92f ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_base64 );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_base64 );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "base64" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_urlsafe_b64decode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "o";
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

        exception_lineno = 84;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_f900b39895ba9a8adcee09de36eff92f->m_frame.f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f900b39895ba9a8adcee09de36eff92f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f900b39895ba9a8adcee09de36eff92f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f900b39895ba9a8adcee09de36eff92f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f900b39895ba9a8adcee09de36eff92f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f900b39895ba9a8adcee09de36eff92f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f900b39895ba9a8adcee09de36eff92f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f900b39895ba9a8adcee09de36eff92f,
        type_description_1,
        par_data
    );


    // Release cached frame.
    if ( frame_f900b39895ba9a8adcee09de36eff92f == cache_frame_f900b39895ba9a8adcee09de36eff92f )
    {
        Py_DECREF( frame_f900b39895ba9a8adcee09de36eff92f );
    }
    cache_frame_f900b39895ba9a8adcee09de36eff92f = NULL;

    assertFrameObject( frame_f900b39895ba9a8adcee09de36eff92f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_12_decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_12_decode );
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


static PyObject *impl_nacl$encoding$$$function_13_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_encoder = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_bytes_arg_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_95c4395fbdb657db9b82cc91d05b0d7e = NULL;

    struct Nuitka_FrameObject *frame_95c4395fbdb657db9b82cc91d05b0d7e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_95c4395fbdb657db9b82cc91d05b0d7e, codeobj_95c4395fbdb657db9b82cc91d05b0d7e, module_nacl$encoding, sizeof(void *)+sizeof(void *) );
    frame_95c4395fbdb657db9b82cc91d05b0d7e = cache_frame_95c4395fbdb657db9b82cc91d05b0d7e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_95c4395fbdb657db9b82cc91d05b0d7e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_95c4395fbdb657db9b82cc91d05b0d7e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_encoder;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_encode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_bytes_arg_1 = par_self;

    if ( tmp_bytes_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = BUILTIN_BYTES1( tmp_bytes_arg_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 90;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_95c4395fbdb657db9b82cc91d05b0d7e->m_frame.f_lineno = 90;
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


        exception_lineno = 90;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95c4395fbdb657db9b82cc91d05b0d7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_95c4395fbdb657db9b82cc91d05b0d7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95c4395fbdb657db9b82cc91d05b0d7e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_95c4395fbdb657db9b82cc91d05b0d7e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_95c4395fbdb657db9b82cc91d05b0d7e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_95c4395fbdb657db9b82cc91d05b0d7e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_95c4395fbdb657db9b82cc91d05b0d7e,
        type_description_1,
        par_self,
        par_encoder
    );


    // Release cached frame.
    if ( frame_95c4395fbdb657db9b82cc91d05b0d7e == cache_frame_95c4395fbdb657db9b82cc91d05b0d7e )
    {
        Py_DECREF( frame_95c4395fbdb657db9b82cc91d05b0d7e );
    }
    cache_frame_95c4395fbdb657db9b82cc91d05b0d7e = NULL;

    assertFrameObject( frame_95c4395fbdb657db9b82cc91d05b0d7e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_13_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_encoder );
    par_encoder = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_encoder );
    par_encoder = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding$$$function_13_encode );
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



static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_10_decode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nacl$encoding$$$function_10_decode,
        const_str_plain_decode,
#if PYTHON_VERSION >= 300
        const_str_digest_bc94fc3a17bd4db395f31b5e7905a3e8,
#endif
        codeobj_82fe23375fe1070cdce2733c9da690f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_nacl$encoding,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_11_encode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nacl$encoding$$$function_11_encode,
        const_str_plain_encode,
#if PYTHON_VERSION >= 300
        const_str_digest_89ca5ecf42bfdfe3222f70106cae8c2c,
#endif
        codeobj_ec1f8e7dc9b5a4f7e7737443e8e5d0c2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_nacl$encoding,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_12_decode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nacl$encoding$$$function_12_decode,
        const_str_plain_decode,
#if PYTHON_VERSION >= 300
        const_str_digest_c9a6be82dbee333863e4ff0b7bee8707,
#endif
        codeobj_f900b39895ba9a8adcee09de36eff92f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_nacl$encoding,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_13_encode( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nacl$encoding$$$function_13_encode,
        const_str_plain_encode,
#if PYTHON_VERSION >= 300
        const_str_digest_48270187f52ef7f04a7feaafd24820ca,
#endif
        codeobj_95c4395fbdb657db9b82cc91d05b0d7e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_nacl$encoding,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_1_encode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nacl$encoding$$$function_1_encode,
        const_str_plain_encode,
#if PYTHON_VERSION >= 300
        const_str_digest_89d95c2d012dd86fc865f2d6d16de486,
#endif
        codeobj_5513b6d58815b565e7a400974db39275,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_nacl$encoding,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_2_decode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nacl$encoding$$$function_2_decode,
        const_str_plain_decode,
#if PYTHON_VERSION >= 300
        const_str_digest_f8e4b8e42315415f6e5ae53f3cc166b7,
#endif
        codeobj_9da37905b2da80786ae373219b788062,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_nacl$encoding,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_3_encode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nacl$encoding$$$function_3_encode,
        const_str_plain_encode,
#if PYTHON_VERSION >= 300
        const_str_digest_006974c6ea5e8bf4e53edc464d519f61,
#endif
        codeobj_ec5218ca6d06d912a5fbb8e839679df5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_nacl$encoding,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_4_decode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nacl$encoding$$$function_4_decode,
        const_str_plain_decode,
#if PYTHON_VERSION >= 300
        const_str_digest_ce1276fb5e47ea15573178c7291b0181,
#endif
        codeobj_b23b83909cb923aa14dda4342c8546fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_nacl$encoding,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_5_encode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nacl$encoding$$$function_5_encode,
        const_str_plain_encode,
#if PYTHON_VERSION >= 300
        const_str_digest_3d15ecde3eeb85cf80a14a0bd6a4c964,
#endif
        codeobj_634f8027244bb23246e68dc9e8d3671a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_nacl$encoding,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_6_decode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nacl$encoding$$$function_6_decode,
        const_str_plain_decode,
#if PYTHON_VERSION >= 300
        const_str_digest_68a2e4c6b5716a2bcebd16e372321d2e,
#endif
        codeobj_c145ca986186327e5c746acc05e301c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_nacl$encoding,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_7_encode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nacl$encoding$$$function_7_encode,
        const_str_plain_encode,
#if PYTHON_VERSION >= 300
        const_str_digest_00753caabc16f82046d545cae61a96a3,
#endif
        codeobj_9ce5a1e9bc0077a56c662d22dcd34489,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_nacl$encoding,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_8_decode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nacl$encoding$$$function_8_decode,
        const_str_plain_decode,
#if PYTHON_VERSION >= 300
        const_str_digest_cedb8f30a6718f8731932fceea318546,
#endif
        codeobj_37f9d1869f6ea05a594f72b9a1db280b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_nacl$encoding,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nacl$encoding$$$function_9_encode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nacl$encoding$$$function_9_encode,
        const_str_plain_encode,
#if PYTHON_VERSION >= 300
        const_str_digest_fed0ba20d48df05cdebaf8c3fd961114,
#endif
        codeobj_09681d3a50a21863551e5b7c9af1095e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_nacl$encoding,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nacl$encoding =
{
    PyModuleDef_HEAD_INIT,
    "nacl.encoding",   /* m_name */
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

MOD_INIT_DECL( nacl$encoding )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nacl$encoding );
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
    puts("nacl.encoding: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("nacl.encoding: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("nacl.encoding: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnacl$encoding" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nacl$encoding = Py_InitModule4(
        "nacl.encoding",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_nacl$encoding = PyModule_Create( &mdef_nacl$encoding );
#endif

    moduledict_nacl$encoding = MODULE_DICT( module_nacl$encoding );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_nacl$encoding,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_nacl$encoding,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_nacl$encoding,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_nacl$encoding );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c69e0f94cfcfffe027269bc411eefbc0, module_nacl$encoding );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
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
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
    PyObject *tmp_args_name_9;
    PyObject *tmp_args_name_10;
    PyObject *tmp_args_name_11;
    PyObject *tmp_args_name_12;
    PyObject *tmp_args_name_13;
    PyObject *tmp_args_name_14;
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
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
    PyObject *tmp_bases_name_7;
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
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    int tmp_cond_truth_18;
    int tmp_cond_truth_19;
    int tmp_cond_truth_20;
    int tmp_cond_truth_21;
    int tmp_cond_truth_22;
    int tmp_cond_truth_23;
    int tmp_cond_truth_24;
    int tmp_cond_truth_25;
    int tmp_cond_truth_26;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_cond_value_18;
    PyObject *tmp_cond_value_19;
    PyObject *tmp_cond_value_20;
    PyObject *tmp_cond_value_21;
    PyObject *tmp_cond_value_22;
    PyObject *tmp_cond_value_23;
    PyObject *tmp_cond_value_24;
    PyObject *tmp_cond_value_25;
    PyObject *tmp_cond_value_26;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_dict_name_9;
    PyObject *tmp_dict_name_10;
    PyObject *tmp_dict_name_11;
    PyObject *tmp_dict_name_12;
    PyObject *tmp_dict_name_13;
    PyObject *tmp_dict_name_14;
    PyObject *tmp_dict_name_15;
    PyObject *tmp_dict_name_16;
    PyObject *tmp_dict_name_17;
    PyObject *tmp_dict_name_18;
    PyObject *tmp_dict_name_19;
    PyObject *tmp_dict_name_20;
    PyObject *tmp_dict_name_21;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_attr_6;
    PyObject *tmp_hasattr_attr_7;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_hasattr_source_7;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_key_name_8;
    PyObject *tmp_key_name_9;
    PyObject *tmp_key_name_10;
    PyObject *tmp_key_name_11;
    PyObject *tmp_key_name_12;
    PyObject *tmp_key_name_13;
    PyObject *tmp_key_name_14;
    PyObject *tmp_key_name_15;
    PyObject *tmp_key_name_16;
    PyObject *tmp_key_name_17;
    PyObject *tmp_key_name_18;
    PyObject *tmp_key_name_19;
    PyObject *tmp_key_name_20;
    PyObject *tmp_key_name_21;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_kw_name_9;
    PyObject *tmp_kw_name_10;
    PyObject *tmp_kw_name_11;
    PyObject *tmp_kw_name_12;
    PyObject *tmp_kw_name_13;
    PyObject *tmp_kw_name_14;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
    PyObject *tmp_metaclass_name_6;
    PyObject *tmp_metaclass_name_7;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    PyObject *tmp_outline_return_value_7;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_staticmethod_arg_1;
    PyObject *tmp_staticmethod_arg_2;
    PyObject *tmp_staticmethod_arg_3;
    PyObject *tmp_staticmethod_arg_4;
    PyObject *tmp_staticmethod_arg_5;
    PyObject *tmp_staticmethod_arg_6;
    PyObject *tmp_staticmethod_arg_7;
    PyObject *tmp_staticmethod_arg_8;
    PyObject *tmp_staticmethod_arg_9;
    PyObject *tmp_staticmethod_arg_10;
    PyObject *tmp_staticmethod_arg_11;
    PyObject *tmp_staticmethod_arg_12;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    static struct Nuitka_FrameObject *cache_frame_920538897dadee076b869cc311a4b388_2 = NULL;

    struct Nuitka_FrameObject *frame_920538897dadee076b869cc311a4b388_2;

    static struct Nuitka_FrameObject *cache_frame_8ff4b5477ef56e473430d91951ef46f1_3 = NULL;

    struct Nuitka_FrameObject *frame_8ff4b5477ef56e473430d91951ef46f1_3;

    static struct Nuitka_FrameObject *cache_frame_e6ff26de91ef401aa70f49c8d7acbce3_4 = NULL;

    struct Nuitka_FrameObject *frame_e6ff26de91ef401aa70f49c8d7acbce3_4;

    static struct Nuitka_FrameObject *cache_frame_b2433f790b3867ce9651f850d73314df_5 = NULL;

    struct Nuitka_FrameObject *frame_b2433f790b3867ce9651f850d73314df_5;

    static struct Nuitka_FrameObject *cache_frame_f61c983a3afce6badb9af9adf4a3b654_6 = NULL;

    struct Nuitka_FrameObject *frame_f61c983a3afce6badb9af9adf4a3b654_6;

    static struct Nuitka_FrameObject *cache_frame_70d19a4f5234eab08ddbb89e13a6cb69_7 = NULL;

    struct Nuitka_FrameObject *frame_70d19a4f5234eab08ddbb89e13a6cb69_7;

    static struct Nuitka_FrameObject *cache_frame_51d544e51248a3432735a244f2c4e53e_8 = NULL;

    struct Nuitka_FrameObject *frame_51d544e51248a3432735a244f2c4e53e_8;

    struct Nuitka_FrameObject *frame_46d7cf8c473bb128a09e97517b4b0de4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    PyObject *locals_nacl$encoding_21 = NULL;
    PyObject *locals_nacl$encoding_65 = NULL;
    PyObject *locals_nacl$encoding_54 = NULL;
    PyObject *locals_nacl$encoding_76 = NULL;
    PyObject *locals_nacl$encoding_32 = NULL;
    PyObject *locals_nacl$encoding_43 = NULL;
    PyObject *locals_nacl$encoding_87 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_418d4b17c596715186d46a13f37e688a;
    UPDATE_STRING_DICT0( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( !(tmp_assign_source_4 == NULL) );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_46d7cf8c473bb128a09e97517b4b0de4 = MAKE_MODULE_FRAME( codeobj_46d7cf8c473bb128a09e97517b4b0de4, module_nacl$encoding );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_46d7cf8c473bb128a09e97517b4b0de4 );
    assert( Py_REFCNT( frame_46d7cf8c473bb128a09e97517b4b0de4 ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    tmp_name_name_1 = const_str_plain_base64;
    tmp_globals_name_1 = (PyObject *)moduledict_nacl$encoding;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 17;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_base64, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_binascii;
    tmp_globals_name_2 = (PyObject *)moduledict_nacl$encoding;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 18;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    assert( !(tmp_assign_source_9 == NULL) );
    UPDATE_STRING_DICT1( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_binascii, tmp_assign_source_9 );
    tmp_assign_source_10 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;

    // Tried code:
    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_2;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_2;
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


        exception_lineno = 21;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_1:;
    tmp_bases_name_1 = const_tuple_type_object_tuple;
    tmp_assign_source_11 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_11;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_2;
    }
    tmp_cond_value_2 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_2;
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


        exception_lineno = 21;

        goto try_except_handler_2;
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


        exception_lineno = 21;

        goto try_except_handler_2;
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


        exception_lineno = 21;

        goto try_except_handler_2;
    }
    tmp_args_name_1 = const_tuple_str_plain_RawEncoder_tuple_type_object_tuple_tuple;
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 21;
    tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_12 = PyDict_New();
    condexpr_end_2:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_12;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_nacl$encoding_21 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c69e0f94cfcfffe027269bc411eefbc0;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_21, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_4;
    }
    tmp_dictset_value = const_str_plain_RawEncoder;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_21, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_4;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_920538897dadee076b869cc311a4b388_2, codeobj_920538897dadee076b869cc311a4b388, module_nacl$encoding, sizeof(void *) );
    frame_920538897dadee076b869cc311a4b388_2 = cache_frame_920538897dadee076b869cc311a4b388_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_920538897dadee076b869cc311a4b388_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_920538897dadee076b869cc311a4b388_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_res = MAPPING_HAS_ITEM( locals_nacl$encoding_21, const_str_plain_staticmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
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
    tmp_called_name_2 = PyObject_GetItem( locals_nacl$encoding_21, const_str_plain_staticmethod );

    if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_1 = MAKE_FUNCTION_nacl$encoding$$$function_1_encode(  );
    frame_920538897dadee076b869cc311a4b388_2->m_frame.f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_staticmethod_arg_1 = MAKE_FUNCTION_nacl$encoding$$$function_1_encode(  );
    tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_1 );
    Py_DECREF( tmp_staticmethod_arg_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    condexpr_end_3:;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_21, const_str_plain_encode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_nacl$encoding_21, const_str_plain_staticmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_2 = "N";
        goto frame_exception_exit_2;
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
    tmp_called_name_3 = PyObject_GetItem( locals_nacl$encoding_21, const_str_plain_staticmethod );

    if ( tmp_called_name_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_2 = MAKE_FUNCTION_nacl$encoding$$$function_2_decode(  );
    frame_920538897dadee076b869cc311a4b388_2->m_frame.f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_staticmethod_arg_2 = MAKE_FUNCTION_nacl$encoding$$$function_2_decode(  );
    tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_2 );
    Py_DECREF( tmp_staticmethod_arg_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    condexpr_end_4:;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_21, const_str_plain_decode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_920538897dadee076b869cc311a4b388_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_920538897dadee076b869cc311a4b388_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_920538897dadee076b869cc311a4b388_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_920538897dadee076b869cc311a4b388_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_920538897dadee076b869cc311a4b388_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_920538897dadee076b869cc311a4b388_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_920538897dadee076b869cc311a4b388_2 == cache_frame_920538897dadee076b869cc311a4b388_2 )
    {
        Py_DECREF( frame_920538897dadee076b869cc311a4b388_2 );
    }
    cache_frame_920538897dadee076b869cc311a4b388_2 = NULL;

    assertFrameObject( frame_920538897dadee076b869cc311a4b388_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_4;
    skip_nested_handling_1:;
    tmp_called_name_4 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_tuple_element_1 = const_str_plain_RawEncoder;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_nacl$encoding_21;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_1 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 21;
    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_14;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    Py_DECREF( locals_nacl$encoding_21 );
    locals_nacl$encoding_21 = NULL;
    goto try_return_handler_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_nacl$encoding_21 );
    locals_nacl$encoding_21 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 21;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_13 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_RawEncoder, tmp_assign_source_13 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    tmp_assign_source_15 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_15;

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

        goto try_except_handler_5;
    }
    tmp_cond_value_5 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_5;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_2 != NULL );
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    tmp_bases_name_2 = const_tuple_type_object_tuple;
    tmp_assign_source_16 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_16;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_5;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_6 == 1 )
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

        goto try_except_handler_5;
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

        goto try_except_handler_5;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_source_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_5;
    }
    tmp_args_name_3 = const_tuple_str_plain_HexEncoder_tuple_type_object_tuple_tuple;
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 32;
    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_5;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_17 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_17;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_nacl$encoding_32 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c69e0f94cfcfffe027269bc411eefbc0;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_32, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    tmp_dictset_value = const_str_plain_HexEncoder;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_32, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_8ff4b5477ef56e473430d91951ef46f1_3, codeobj_8ff4b5477ef56e473430d91951ef46f1, module_nacl$encoding, sizeof(void *) );
    frame_8ff4b5477ef56e473430d91951ef46f1_3 = cache_frame_8ff4b5477ef56e473430d91951ef46f1_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8ff4b5477ef56e473430d91951ef46f1_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8ff4b5477ef56e473430d91951ef46f1_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_res = MAPPING_HAS_ITEM( locals_nacl$encoding_32, const_str_plain_staticmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_cond_value_7 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
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
    tmp_called_name_6 = PyObject_GetItem( locals_nacl$encoding_32, const_str_plain_staticmethod );

    if ( tmp_called_name_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_args_element_name_3 = MAKE_FUNCTION_nacl$encoding$$$function_3_encode(  );
    frame_8ff4b5477ef56e473430d91951ef46f1_3->m_frame.f_lineno = 34;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_staticmethod_arg_3 = MAKE_FUNCTION_nacl$encoding$$$function_3_encode(  );
    tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_3 );
    Py_DECREF( tmp_staticmethod_arg_3 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    condexpr_end_7:;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_32, const_str_plain_encode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_nacl$encoding_32, const_str_plain_staticmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_cond_value_8 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_called_name_7 = PyObject_GetItem( locals_nacl$encoding_32, const_str_plain_staticmethod );

    if ( tmp_called_name_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_args_element_name_4 = MAKE_FUNCTION_nacl$encoding$$$function_4_decode(  );
    frame_8ff4b5477ef56e473430d91951ef46f1_3->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_staticmethod_arg_4 = MAKE_FUNCTION_nacl$encoding$$$function_4_decode(  );
    tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_4 );
    Py_DECREF( tmp_staticmethod_arg_4 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    condexpr_end_8:;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_32, const_str_plain_decode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ff4b5477ef56e473430d91951ef46f1_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8ff4b5477ef56e473430d91951ef46f1_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8ff4b5477ef56e473430d91951ef46f1_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8ff4b5477ef56e473430d91951ef46f1_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8ff4b5477ef56e473430d91951ef46f1_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8ff4b5477ef56e473430d91951ef46f1_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_8ff4b5477ef56e473430d91951ef46f1_3 == cache_frame_8ff4b5477ef56e473430d91951ef46f1_3 )
    {
        Py_DECREF( frame_8ff4b5477ef56e473430d91951ef46f1_3 );
    }
    cache_frame_8ff4b5477ef56e473430d91951ef46f1_3 = NULL;

    assertFrameObject( frame_8ff4b5477ef56e473430d91951ef46f1_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_7;
    skip_nested_handling_2:;
    tmp_called_name_8 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_tuple_element_2 = const_str_plain_HexEncoder;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_nacl$encoding_32;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_2 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 32;
    tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_7;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_19;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    Py_DECREF( locals_nacl$encoding_32 );
    locals_nacl$encoding_32 = NULL;
    goto try_return_handler_6;
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

    Py_DECREF( locals_nacl$encoding_32 );
    locals_nacl$encoding_32 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    goto outline_result_2;
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

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 32;
    goto try_except_handler_5;
    outline_result_2:;
    tmp_assign_source_18 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_HexEncoder, tmp_assign_source_18 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    tmp_assign_source_20 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_20;

    // Tried code:
    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_8;
    }
    tmp_cond_value_9 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_8;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_8 );
    tmp_key_name_8 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_8;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_metaclass_name_3 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_3 != NULL );
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_9:;
    tmp_bases_name_3 = const_tuple_type_object_tuple;
    tmp_assign_source_21 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_21;

    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_8;
    }
    tmp_cond_value_10 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_8;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_8;
    }
    branch_no_3:;
    tmp_hasattr_source_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_3 );
    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_8;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_source_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_8;
    }
    tmp_args_name_5 = const_tuple_str_plain_Base16Encoder_tuple_type_object_tuple_tuple;
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 43;
    tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_9 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_8;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_assign_source_22 = PyDict_New();
    condexpr_end_10:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_22;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_nacl$encoding_43 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c69e0f94cfcfffe027269bc411eefbc0;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_43, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_10;
    }
    tmp_dictset_value = const_str_plain_Base16Encoder;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_43, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_10;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_e6ff26de91ef401aa70f49c8d7acbce3_4, codeobj_e6ff26de91ef401aa70f49c8d7acbce3, module_nacl$encoding, sizeof(void *) );
    frame_e6ff26de91ef401aa70f49c8d7acbce3_4 = cache_frame_e6ff26de91ef401aa70f49c8d7acbce3_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e6ff26de91ef401aa70f49c8d7acbce3_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e6ff26de91ef401aa70f49c8d7acbce3_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_res = MAPPING_HAS_ITEM( locals_nacl$encoding_43, const_str_plain_staticmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_cond_value_11 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    if ( tmp_cond_truth_11 == 1 )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_called_name_10 = PyObject_GetItem( locals_nacl$encoding_43, const_str_plain_staticmethod );

    if ( tmp_called_name_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }

    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_args_element_name_5 = MAKE_FUNCTION_nacl$encoding$$$function_5_encode(  );
    frame_e6ff26de91ef401aa70f49c8d7acbce3_4->m_frame.f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_staticmethod_arg_5 = MAKE_FUNCTION_nacl$encoding$$$function_5_encode(  );
    tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_5 );
    Py_DECREF( tmp_staticmethod_arg_5 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    condexpr_end_11:;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_43, const_str_plain_encode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_nacl$encoding_43, const_str_plain_staticmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_cond_value_12 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_called_name_11 = PyObject_GetItem( locals_nacl$encoding_43, const_str_plain_staticmethod );

    if ( tmp_called_name_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }

    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_args_element_name_6 = MAKE_FUNCTION_nacl$encoding$$$function_6_decode(  );
    frame_e6ff26de91ef401aa70f49c8d7acbce3_4->m_frame.f_lineno = 49;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_staticmethod_arg_6 = MAKE_FUNCTION_nacl$encoding$$$function_6_decode(  );
    tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_6 );
    Py_DECREF( tmp_staticmethod_arg_6 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    condexpr_end_12:;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_43, const_str_plain_decode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6ff26de91ef401aa70f49c8d7acbce3_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e6ff26de91ef401aa70f49c8d7acbce3_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e6ff26de91ef401aa70f49c8d7acbce3_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e6ff26de91ef401aa70f49c8d7acbce3_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e6ff26de91ef401aa70f49c8d7acbce3_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e6ff26de91ef401aa70f49c8d7acbce3_4,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_e6ff26de91ef401aa70f49c8d7acbce3_4 == cache_frame_e6ff26de91ef401aa70f49c8d7acbce3_4 )
    {
        Py_DECREF( frame_e6ff26de91ef401aa70f49c8d7acbce3_4 );
    }
    cache_frame_e6ff26de91ef401aa70f49c8d7acbce3_4 = NULL;

    assertFrameObject( frame_e6ff26de91ef401aa70f49c8d7acbce3_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_10;
    skip_nested_handling_3:;
    tmp_called_name_12 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_12 );
    tmp_tuple_element_3 = const_str_plain_Base16Encoder;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_nacl$encoding_43;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_3 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 43;
    tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto try_except_handler_10;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_24;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    Py_DECREF( locals_nacl$encoding_43 );
    locals_nacl$encoding_43 = NULL;
    goto try_return_handler_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_nacl$encoding_43 );
    locals_nacl$encoding_43 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 43;
    goto try_except_handler_8;
    outline_result_3:;
    tmp_assign_source_23 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_Base16Encoder, tmp_assign_source_23 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    tmp_assign_source_25 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_25;

    // Tried code:
    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_11;
    }
    tmp_cond_value_13 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_11;
    }
    if ( tmp_cond_truth_13 == 1 )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_11 );
    tmp_key_name_11 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_11;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_metaclass_name_4 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_4 != NULL );
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_13:;
    tmp_bases_name_4 = const_tuple_type_object_tuple;
    tmp_assign_source_26 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_11;
    }
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_26;

    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_11;
    }
    tmp_cond_value_14 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_11;
    }
    if ( tmp_cond_truth_14 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_11;
    }
    branch_no_4:;
    tmp_hasattr_source_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_4 );
    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_11;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_source_name_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_11;
    }
    tmp_args_name_7 = const_tuple_str_plain_Base32Encoder_tuple_type_object_tuple_tuple;
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 54;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_13 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_11;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_assign_source_27 = PyDict_New();
    condexpr_end_14:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_27;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_nacl$encoding_54 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c69e0f94cfcfffe027269bc411eefbc0;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_54, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_13;
    }
    tmp_dictset_value = const_str_plain_Base32Encoder;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_54, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_13;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_b2433f790b3867ce9651f850d73314df_5, codeobj_b2433f790b3867ce9651f850d73314df, module_nacl$encoding, sizeof(void *) );
    frame_b2433f790b3867ce9651f850d73314df_5 = cache_frame_b2433f790b3867ce9651f850d73314df_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b2433f790b3867ce9651f850d73314df_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b2433f790b3867ce9651f850d73314df_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_res = MAPPING_HAS_ITEM( locals_nacl$encoding_54, const_str_plain_staticmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_cond_value_15 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    if ( tmp_cond_truth_15 == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_called_name_14 = PyObject_GetItem( locals_nacl$encoding_54, const_str_plain_staticmethod );

    if ( tmp_called_name_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_args_element_name_7 = MAKE_FUNCTION_nacl$encoding$$$function_7_encode(  );
    frame_b2433f790b3867ce9651f850d73314df_5->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_staticmethod_arg_7 = MAKE_FUNCTION_nacl$encoding$$$function_7_encode(  );
    tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_7 );
    Py_DECREF( tmp_staticmethod_arg_7 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    condexpr_end_15:;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_54, const_str_plain_encode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_nacl$encoding_54, const_str_plain_staticmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_cond_value_16 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    if ( tmp_cond_truth_16 == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_called_name_15 = PyObject_GetItem( locals_nacl$encoding_54, const_str_plain_staticmethod );

    if ( tmp_called_name_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_args_element_name_8 = MAKE_FUNCTION_nacl$encoding$$$function_8_decode(  );
    frame_b2433f790b3867ce9651f850d73314df_5->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_staticmethod_arg_8 = MAKE_FUNCTION_nacl$encoding$$$function_8_decode(  );
    tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_8 );
    Py_DECREF( tmp_staticmethod_arg_8 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    condexpr_end_16:;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_54, const_str_plain_decode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2433f790b3867ce9651f850d73314df_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2433f790b3867ce9651f850d73314df_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b2433f790b3867ce9651f850d73314df_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b2433f790b3867ce9651f850d73314df_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b2433f790b3867ce9651f850d73314df_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b2433f790b3867ce9651f850d73314df_5,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_b2433f790b3867ce9651f850d73314df_5 == cache_frame_b2433f790b3867ce9651f850d73314df_5 )
    {
        Py_DECREF( frame_b2433f790b3867ce9651f850d73314df_5 );
    }
    cache_frame_b2433f790b3867ce9651f850d73314df_5 = NULL;

    assertFrameObject( frame_b2433f790b3867ce9651f850d73314df_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_13;
    skip_nested_handling_4:;
    tmp_called_name_16 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_16 );
    tmp_tuple_element_4 = const_str_plain_Base32Encoder;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_nacl$encoding_54;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_4 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 54;
    tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_13;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_29;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_13;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    Py_DECREF( locals_nacl$encoding_54 );
    locals_nacl$encoding_54 = NULL;
    goto try_return_handler_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_nacl$encoding_54 );
    locals_nacl$encoding_54 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    goto outline_result_4;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 54;
    goto try_except_handler_11;
    outline_result_4:;
    tmp_assign_source_28 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_Base32Encoder, tmp_assign_source_28 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    tmp_assign_source_30 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_30;

    // Tried code:
    tmp_key_name_13 = const_str_plain_metaclass;
    tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_13 );
    tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_14;
    }
    tmp_cond_value_17 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_14;
    }
    if ( tmp_cond_truth_17 == 1 )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_14 );
    tmp_key_name_14 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_14;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_metaclass_name_5 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_5 != NULL );
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_17:;
    tmp_bases_name_5 = const_tuple_type_object_tuple;
    tmp_assign_source_31 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    Py_DECREF( tmp_metaclass_name_5 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_31;

    tmp_key_name_15 = const_str_plain_metaclass;
    tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_15 );
    tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_14;
    }
    tmp_cond_value_18 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_14;
    }
    if ( tmp_cond_truth_18 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_14;
    }
    branch_no_5:;
    tmp_hasattr_source_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_5 );
    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_14;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    tmp_source_name_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_14;
    }
    tmp_args_name_9 = const_tuple_str_plain_Base64Encoder_tuple_type_object_tuple_tuple;
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 65;
    tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_17 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_14;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_32 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_32;

    tmp_set_locals = tmp_class_creation_5__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_nacl$encoding_65 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c69e0f94cfcfffe027269bc411eefbc0;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_65, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_16;
    }
    tmp_dictset_value = const_str_plain_Base64Encoder;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_65, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_16;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_f61c983a3afce6badb9af9adf4a3b654_6, codeobj_f61c983a3afce6badb9af9adf4a3b654, module_nacl$encoding, sizeof(void *) );
    frame_f61c983a3afce6badb9af9adf4a3b654_6 = cache_frame_f61c983a3afce6badb9af9adf4a3b654_6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f61c983a3afce6badb9af9adf4a3b654_6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f61c983a3afce6badb9af9adf4a3b654_6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_res = MAPPING_HAS_ITEM( locals_nacl$encoding_65, const_str_plain_staticmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_cond_value_19 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    if ( tmp_cond_truth_19 == 1 )
    {
        goto condexpr_true_19;
    }
    else
    {
        goto condexpr_false_19;
    }
    condexpr_true_19:;
    tmp_called_name_18 = PyObject_GetItem( locals_nacl$encoding_65, const_str_plain_staticmethod );

    if ( tmp_called_name_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }

    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_args_element_name_9 = MAKE_FUNCTION_nacl$encoding$$$function_9_encode(  );
    frame_f61c983a3afce6badb9af9adf4a3b654_6->m_frame.f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_staticmethod_arg_9 = MAKE_FUNCTION_nacl$encoding$$$function_9_encode(  );
    tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_9 );
    Py_DECREF( tmp_staticmethod_arg_9 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    condexpr_end_19:;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_65, const_str_plain_encode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_nacl$encoding_65, const_str_plain_staticmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_cond_value_20 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    if ( tmp_cond_truth_20 == 1 )
    {
        goto condexpr_true_20;
    }
    else
    {
        goto condexpr_false_20;
    }
    condexpr_true_20:;
    tmp_called_name_19 = PyObject_GetItem( locals_nacl$encoding_65, const_str_plain_staticmethod );

    if ( tmp_called_name_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }

    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_args_element_name_10 = MAKE_FUNCTION_nacl$encoding$$$function_10_decode(  );
    frame_f61c983a3afce6badb9af9adf4a3b654_6->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_staticmethod_arg_10 = MAKE_FUNCTION_nacl$encoding$$$function_10_decode(  );
    tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_10 );
    Py_DECREF( tmp_staticmethod_arg_10 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    condexpr_end_20:;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_65, const_str_plain_decode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f61c983a3afce6badb9af9adf4a3b654_6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;

    frame_exception_exit_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f61c983a3afce6badb9af9adf4a3b654_6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f61c983a3afce6badb9af9adf4a3b654_6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f61c983a3afce6badb9af9adf4a3b654_6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f61c983a3afce6badb9af9adf4a3b654_6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f61c983a3afce6badb9af9adf4a3b654_6,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_f61c983a3afce6badb9af9adf4a3b654_6 == cache_frame_f61c983a3afce6badb9af9adf4a3b654_6 )
    {
        Py_DECREF( frame_f61c983a3afce6badb9af9adf4a3b654_6 );
    }
    cache_frame_f61c983a3afce6badb9af9adf4a3b654_6 = NULL;

    assertFrameObject( frame_f61c983a3afce6badb9af9adf4a3b654_6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;

    frame_no_exception_5:;

    goto skip_nested_handling_5;
    nested_frame_exit_5:;

    goto try_except_handler_16;
    skip_nested_handling_5:;
    tmp_called_name_20 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_20 );
    tmp_tuple_element_5 = const_str_plain_Base64Encoder;
    tmp_args_name_10 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = locals_nacl$encoding_65;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_5 );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_10 );
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 65;
    tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_16;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_34;

    tmp_outline_return_value_5 = outline_4_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_5 );
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    Py_DECREF( locals_nacl$encoding_65 );
    locals_nacl$encoding_65 = NULL;
    goto try_return_handler_15;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_nacl$encoding_65 );
    locals_nacl$encoding_65 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    goto outline_result_5;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 65;
    goto try_except_handler_14;
    outline_result_5:;
    tmp_assign_source_33 = tmp_outline_return_value_5;
    UPDATE_STRING_DICT1( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_Base64Encoder, tmp_assign_source_33 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__prepared );
    Py_DECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    tmp_assign_source_35 = PyDict_New();
    assert( tmp_class_creation_6__class_decl_dict == NULL );
    tmp_class_creation_6__class_decl_dict = tmp_assign_source_35;

    // Tried code:
    tmp_key_name_16 = const_str_plain_metaclass;
    tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_16 );
    tmp_res = PyDict_Contains( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_17;
    }
    tmp_cond_value_21 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_21 = CHECK_IF_TRUE( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_17;
    }
    if ( tmp_cond_truth_21 == 1 )
    {
        goto condexpr_true_21;
    }
    else
    {
        goto condexpr_false_21;
    }
    condexpr_true_21:;
    tmp_dict_name_17 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_17 );
    tmp_key_name_17 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_17;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_metaclass_name_6 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_6 != NULL );
    Py_INCREF( tmp_metaclass_name_6 );
    condexpr_end_21:;
    tmp_bases_name_6 = const_tuple_type_object_tuple;
    tmp_assign_source_36 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    Py_DECREF( tmp_metaclass_name_6 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_36;

    tmp_key_name_18 = const_str_plain_metaclass;
    tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_18 );
    tmp_res = PyDict_Contains( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_17;
    }
    tmp_cond_value_22 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_22 = CHECK_IF_TRUE( tmp_cond_value_22 );
    if ( tmp_cond_truth_22 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_17;
    }
    if ( tmp_cond_truth_22 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_17;
    }
    branch_no_6:;
    tmp_hasattr_source_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_6 );
    tmp_hasattr_attr_6 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_6, tmp_hasattr_attr_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_17;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_22;
    }
    else
    {
        goto condexpr_false_22;
    }
    condexpr_true_22:;
    tmp_source_name_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_17;
    }
    tmp_args_name_11 = const_tuple_str_plain_URLSafeBase64Encoder_tuple_type_object_tuple_tuple;
    tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_11 );
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 76;
    tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_21 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_17;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_assign_source_37 = PyDict_New();
    condexpr_end_22:;
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_37;

    tmp_set_locals = tmp_class_creation_6__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_nacl$encoding_76 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c69e0f94cfcfffe027269bc411eefbc0;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_76, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_19;
    }
    tmp_dictset_value = const_str_plain_URLSafeBase64Encoder;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_76, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_19;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_70d19a4f5234eab08ddbb89e13a6cb69_7, codeobj_70d19a4f5234eab08ddbb89e13a6cb69, module_nacl$encoding, sizeof(void *) );
    frame_70d19a4f5234eab08ddbb89e13a6cb69_7 = cache_frame_70d19a4f5234eab08ddbb89e13a6cb69_7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_70d19a4f5234eab08ddbb89e13a6cb69_7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_70d19a4f5234eab08ddbb89e13a6cb69_7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_res = MAPPING_HAS_ITEM( locals_nacl$encoding_76, const_str_plain_staticmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_cond_value_23 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_23 = CHECK_IF_TRUE( tmp_cond_value_23 );
    if ( tmp_cond_truth_23 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    if ( tmp_cond_truth_23 == 1 )
    {
        goto condexpr_true_23;
    }
    else
    {
        goto condexpr_false_23;
    }
    condexpr_true_23:;
    tmp_called_name_22 = PyObject_GetItem( locals_nacl$encoding_76, const_str_plain_staticmethod );

    if ( tmp_called_name_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }

    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_args_element_name_11 = MAKE_FUNCTION_nacl$encoding$$$function_11_encode(  );
    frame_70d19a4f5234eab08ddbb89e13a6cb69_7->m_frame.f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_staticmethod_arg_11 = MAKE_FUNCTION_nacl$encoding$$$function_11_encode(  );
    tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_11 );
    Py_DECREF( tmp_staticmethod_arg_11 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    condexpr_end_23:;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_76, const_str_plain_encode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_nacl$encoding_76, const_str_plain_staticmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_cond_value_24 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_24 = CHECK_IF_TRUE( tmp_cond_value_24 );
    if ( tmp_cond_truth_24 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    if ( tmp_cond_truth_24 == 1 )
    {
        goto condexpr_true_24;
    }
    else
    {
        goto condexpr_false_24;
    }
    condexpr_true_24:;
    tmp_called_name_23 = PyObject_GetItem( locals_nacl$encoding_76, const_str_plain_staticmethod );

    if ( tmp_called_name_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "staticmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }

    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_args_element_name_12 = MAKE_FUNCTION_nacl$encoding$$$function_12_decode(  );
    frame_70d19a4f5234eab08ddbb89e13a6cb69_7->m_frame.f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_staticmethod_arg_12 = MAKE_FUNCTION_nacl$encoding$$$function_12_decode(  );
    tmp_dictset_value = BUILTIN_STATICMETHOD( tmp_staticmethod_arg_12 );
    Py_DECREF( tmp_staticmethod_arg_12 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    condexpr_end_24:;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_76, const_str_plain_decode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_70d19a4f5234eab08ddbb89e13a6cb69_7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;

    frame_exception_exit_7:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_70d19a4f5234eab08ddbb89e13a6cb69_7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_70d19a4f5234eab08ddbb89e13a6cb69_7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_70d19a4f5234eab08ddbb89e13a6cb69_7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_70d19a4f5234eab08ddbb89e13a6cb69_7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_70d19a4f5234eab08ddbb89e13a6cb69_7,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_70d19a4f5234eab08ddbb89e13a6cb69_7 == cache_frame_70d19a4f5234eab08ddbb89e13a6cb69_7 )
    {
        Py_DECREF( frame_70d19a4f5234eab08ddbb89e13a6cb69_7 );
    }
    cache_frame_70d19a4f5234eab08ddbb89e13a6cb69_7 = NULL;

    assertFrameObject( frame_70d19a4f5234eab08ddbb89e13a6cb69_7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_6;

    frame_no_exception_6:;

    goto skip_nested_handling_6;
    nested_frame_exit_6:;

    goto try_except_handler_19;
    skip_nested_handling_6:;
    tmp_called_name_24 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_24 );
    tmp_tuple_element_6 = const_str_plain_URLSafeBase64Encoder;
    tmp_args_name_12 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_6 );
    tmp_tuple_element_6 = locals_nacl$encoding_76;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_6 );
    tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_12 );
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 76;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto try_except_handler_19;
    }
    assert( outline_5_var___class__ == NULL );
    outline_5_var___class__ = tmp_assign_source_39;

    tmp_outline_return_value_6 = outline_5_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_6 );
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_19;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    Py_DECREF( locals_nacl$encoding_76 );
    locals_nacl$encoding_76 = NULL;
    goto try_return_handler_18;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_nacl$encoding_76 );
    locals_nacl$encoding_76 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_18;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
    Py_DECREF( outline_5_var___class__ );
    outline_5_var___class__ = NULL;

    goto outline_result_6;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 76;
    goto try_except_handler_17;
    outline_result_6:;
    tmp_assign_source_38 = tmp_outline_return_value_6;
    UPDATE_STRING_DICT1( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_URLSafeBase64Encoder, tmp_assign_source_38 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_decl_dict );
    Py_DECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_decl_dict );
    Py_DECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__prepared );
    Py_DECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    tmp_assign_source_40 = PyDict_New();
    assert( tmp_class_creation_7__class_decl_dict == NULL );
    tmp_class_creation_7__class_decl_dict = tmp_assign_source_40;

    // Tried code:
    tmp_key_name_19 = const_str_plain_metaclass;
    tmp_dict_name_19 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_19 );
    tmp_res = PyDict_Contains( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_20;
    }
    tmp_cond_value_25 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_25 = CHECK_IF_TRUE( tmp_cond_value_25 );
    if ( tmp_cond_truth_25 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_20;
    }
    if ( tmp_cond_truth_25 == 1 )
    {
        goto condexpr_true_25;
    }
    else
    {
        goto condexpr_false_25;
    }
    condexpr_true_25:;
    tmp_dict_name_20 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_20 );
    tmp_key_name_20 = const_str_plain_metaclass;
    tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_20;
    }
    goto condexpr_end_25;
    condexpr_false_25:;
    tmp_metaclass_name_7 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_7 != NULL );
    Py_INCREF( tmp_metaclass_name_7 );
    condexpr_end_25:;
    tmp_bases_name_7 = const_tuple_type_object_tuple;
    tmp_assign_source_41 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
    Py_DECREF( tmp_metaclass_name_7 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_20;
    }
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_41;

    tmp_key_name_21 = const_str_plain_metaclass;
    tmp_dict_name_21 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_21 );
    tmp_res = PyDict_Contains( tmp_dict_name_21, tmp_key_name_21 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_20;
    }
    tmp_cond_value_26 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_26 = CHECK_IF_TRUE( tmp_cond_value_26 );
    if ( tmp_cond_truth_26 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_20;
    }
    if ( tmp_cond_truth_26 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_20;
    }
    branch_no_7:;
    tmp_hasattr_source_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_7 );
    tmp_hasattr_attr_7 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_7, tmp_hasattr_attr_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_20;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_26;
    }
    else
    {
        goto condexpr_false_26;
    }
    condexpr_true_26:;
    tmp_source_name_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_20;
    }
    tmp_args_name_13 = const_tuple_str_plain_Encodable_tuple_type_object_tuple_tuple;
    tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_13 );
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 87;
    tmp_assign_source_42 = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_25 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_20;
    }
    goto condexpr_end_26;
    condexpr_false_26:;
    tmp_assign_source_42 = PyDict_New();
    condexpr_end_26:;
    assert( tmp_class_creation_7__prepared == NULL );
    tmp_class_creation_7__prepared = tmp_assign_source_42;

    tmp_set_locals = tmp_class_creation_7__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_nacl$encoding_87 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_c69e0f94cfcfffe027269bc411eefbc0;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_87, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_22;
    }
    tmp_dictset_value = const_str_plain_Encodable;
    tmp_res = PyObject_SetItem( locals_nacl$encoding_87, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_22;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_51d544e51248a3432735a244f2c4e53e_8, codeobj_51d544e51248a3432735a244f2c4e53e, module_nacl$encoding, sizeof(void *) );
    frame_51d544e51248a3432735a244f2c4e53e_8 = cache_frame_51d544e51248a3432735a244f2c4e53e_8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_51d544e51248a3432735a244f2c4e53e_8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_51d544e51248a3432735a244f2c4e53e_8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_tuple_element_7 = PyObject_GetItem( locals_nacl$encoding_87, const_str_plain_RawEncoder );

    if ( tmp_tuple_element_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_RawEncoder );

        if (unlikely( tmp_tuple_element_7 == NULL ))
        {
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RawEncoder );
        }

        if ( tmp_tuple_element_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RawEncoder" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 89;
            type_description_2 = "N";
            goto frame_exception_exit_8;
        }

        }
    }

    tmp_defaults_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_7 );
    tmp_dictset_value = MAKE_FUNCTION_nacl$encoding$$$function_13_encode( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_nacl$encoding_87, const_str_plain_encode, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_51d544e51248a3432735a244f2c4e53e_8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;

    frame_exception_exit_8:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_51d544e51248a3432735a244f2c4e53e_8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_51d544e51248a3432735a244f2c4e53e_8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_51d544e51248a3432735a244f2c4e53e_8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_51d544e51248a3432735a244f2c4e53e_8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_51d544e51248a3432735a244f2c4e53e_8,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_51d544e51248a3432735a244f2c4e53e_8 == cache_frame_51d544e51248a3432735a244f2c4e53e_8 )
    {
        Py_DECREF( frame_51d544e51248a3432735a244f2c4e53e_8 );
    }
    cache_frame_51d544e51248a3432735a244f2c4e53e_8 = NULL;

    assertFrameObject( frame_51d544e51248a3432735a244f2c4e53e_8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_7;

    frame_no_exception_7:;

    goto skip_nested_handling_7;
    nested_frame_exit_7:;

    goto try_except_handler_22;
    skip_nested_handling_7:;
    tmp_called_name_26 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_26 );
    tmp_tuple_element_8 = const_str_plain_Encodable;
    tmp_args_name_14 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = locals_nacl$encoding_87;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_8 );
    tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_14 );
    frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame.f_lineno = 87;
    tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_26, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_args_name_14 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;

        goto try_except_handler_22;
    }
    assert( outline_6_var___class__ == NULL );
    outline_6_var___class__ = tmp_assign_source_44;

    tmp_outline_return_value_7 = outline_6_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_7 );
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_22;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_22:;
    Py_DECREF( locals_nacl$encoding_87 );
    locals_nacl$encoding_87 = NULL;
    goto try_return_handler_21;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_nacl$encoding_87 );
    locals_nacl$encoding_87 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_21;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_21:;
    CHECK_OBJECT( (PyObject *)outline_6_var___class__ );
    Py_DECREF( outline_6_var___class__ );
    outline_6_var___class__ = NULL;

    goto outline_result_7;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto outline_exception_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nacl$encoding );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 87;
    goto try_except_handler_20;
    outline_result_7:;
    tmp_assign_source_43 = tmp_outline_return_value_7;
    UPDATE_STRING_DICT1( moduledict_nacl$encoding, (Nuitka_StringObject *)const_str_plain_Encodable, tmp_assign_source_43 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_decl_dict );
    Py_DECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_46d7cf8c473bb128a09e97517b4b0de4 );
#endif
    popFrameStack();

    assertFrameObject( frame_46d7cf8c473bb128a09e97517b4b0de4 );

    goto frame_no_exception_8;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_46d7cf8c473bb128a09e97517b4b0de4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_46d7cf8c473bb128a09e97517b4b0de4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_46d7cf8c473bb128a09e97517b4b0de4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_46d7cf8c473bb128a09e97517b4b0de4, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_8:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_decl_dict );
    Py_DECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__prepared );
    Py_DECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;


    return MOD_RETURN_VALUE( module_nacl$encoding );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

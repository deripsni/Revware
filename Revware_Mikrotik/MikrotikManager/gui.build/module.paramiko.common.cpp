/* Generated code for Python source for module 'paramiko.common'
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

/* The _module_paramiko$common is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_paramiko$common;
PyDictObject *moduledict_paramiko$common;

/* The module constants used, if any. */
static PyObject *const_tuple_int_pos_7_int_pos_13_int_pos_14_tuple;
extern PyObject *const_str_plain_cMSG_NEWKEYS;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_MSG_CHANNEL_OPEN_FAILURE;
extern PyObject *const_str_plain_max_byte;
extern PyObject *const_str_plain_MSG_CHANNEL_DATA;
extern PyObject *const_int_pos_20;
static PyObject *const_dict_2f3feb38cf4698993fe350df5eafa43b;
extern PyObject *const_str_plain_WARNING;
extern PyObject *const_str_plain_cMSG_USERAUTH_FAILURE;
extern PyObject *const_str_plain_cMSG_CHANNEL_CLOSE;
extern PyObject *const_tuple_int_pos_255_tuple;
extern PyObject *const_int_pos_420;
extern PyObject *const_str_plain_cMSG_CHANNEL_SUCCESS;
extern PyObject *const_int_pos_22;
static PyObject *const_str_plain_o660;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_x80000000;
static PyObject *const_str_plain_CRITICAL;
extern PyObject *const_str_plain_cMSG_CHANNEL_EOF;
extern PyObject *const_int_pos_2097152;
extern PyObject *const_str_plain_MSG_NEWKEYS;
extern PyObject *const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED;
extern PyObject *const_str_plain_one_byte;
extern PyObject *const_str_plain_AUTH_SUCCESSFUL;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_AUTH_PARTIALLY_SUCCESSFUL;
static PyObject *const_str_digest_00ee6b9e7b545ea5f01da8d00a80ec32;
extern PyObject *const_tuple_int_pos_10_tuple;
extern PyObject *const_int_pos_56;
extern PyObject *const_str_plain_ignore;
static PyObject *const_str_plain_cMSG_USERAUTH_GSSAPI_ERRTOK;
static PyObject *const_tuple_int_pos_4294967295_tuple;
extern PyObject *const_str_plain_HIGHEST_USERAUTH_MESSAGE_ID;
extern PyObject *const_int_pos_31;
extern PyObject *const_tuple_int_pos_13_tuple;
static PyObject *const_str_digest_76c8df24120d2b1949f3870a64a0f940;
static PyObject *const_str_digest_186f18ed4b019012e39aa1310b09ef20;
extern PyObject *const_int_pos_80;
static PyObject *const_str_digest_db5706f62a1019e0db7d295c38a809b4;
extern PyObject *const_str_plain_MSG_CHANNEL_EXTENDED_DATA;
static PyObject *const_xrange_80_83;
extern PyObject *const_str_plain_cMSG_USERAUTH_INFO_REQUEST;
extern PyObject *const_str_plain_AUTH_FAILED;
extern PyObject *const_str_plain_io_sleep;
static PyObject *const_int_pos_448;
extern PyObject *const_str_plain_cMSG_REQUEST_FAILURE;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_41;
extern PyObject *const_str_plain_cMSG_IGNORE;
static PyObject *const_tuple_b7fd7d2c1fe1b6662269ea8df5424031_tuple;
static PyObject *const_str_digest_b1735d9d474334b4fe16983aa16ede5a;
static PyObject *const_str_digest_b633102eb5c83343df21466439e32497;
extern PyObject *const_int_pos_101;
extern PyObject *const_str_plain_four_byte;
static PyObject *const_xrange_63_67;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_OPEN_FAILED_RESOURCE_SHORTAGE;
static PyObject *const_int_pos_33;
extern PyObject *const_int_pos_30;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_b50e455b0173ed2d6ad4605dd79a8baa;
extern PyObject *const_int_pos_32;
extern PyObject *const_str_plain_MSG_REQUEST_FAILURE;
extern PyObject *const_str_plain_cMSG_GLOBAL_REQUEST;
extern PyObject *const_str_plain_cMSG_CHANNEL_OPEN_SUCCESS;
extern PyObject *const_str_plain_MSG_USERAUTH_INFO_RESPONSE;
extern PyObject *const_str_plain_cMSG_CHANNEL_EXTENDED_DATA;
static PyObject *const_str_digest_cc65e74350041e6fd75c282555bd10cd;
extern PyObject *const_str_plain_cMSG_CHANNEL_REQUEST;
extern PyObject *const_str_plain_MSG_USERAUTH_SUCCESS;
extern PyObject *const_str_plain_cMSG_SERVICE_ACCEPT;
extern PyObject *const_str_plain_cMSG_USERAUTH_GSSAPI_MIC;
extern PyObject *const_str_plain_cMSG_KEXINIT;
extern PyObject *const_str_plain_cMSG_CHANNEL_OPEN;
extern PyObject *const_str_plain_cMSG_DISCONNECT;
static PyObject *const_int_pos_62;
static PyObject *const_str_plain_o644;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_cMSG_CHANNEL_DATA;
static PyObject *const_str_digest_591947d6e6a0c90b66f0f033a15ccf73;
static PyObject *const_str_digest_46ed528cce86c8ef57e6fcd759f69eb6;
static PyObject *const_str_digest_9629daf16003f6cad98fa628106840e0;
extern PyObject *const_str_plain_cr_byte;
extern PyObject *const_int_pos_63;
static PyObject *const_int_pos_432;
extern PyObject *const_tuple_int_pos_4_tuple;
static PyObject *const_str_digest_52d3fd085b8e0f7759387d21d761d6dd;
extern PyObject *const_str_plain_OPEN_FAILED_UNKNOWN_CHANNEL_TYPE;
extern PyObject *const_str_plain_MAX_WINDOW_SIZE;
static PyObject *const_str_plain_MSG_USERAUTH_PK_OK;
extern PyObject *const_str_plain_long;
extern PyObject *const_str_plain_cMSG_REQUEST_SUCCESS;
static PyObject *const_str_digest_0e2e9649fa6b73827d6f4cc17912f17c;
static PyObject *const_str_digest_a5845464038f6b6f2c2e9d81307cbcfc;
extern PyObject *const_str_plain_MSG_IGNORE;
static PyObject *const_str_plain_kexinit;
static PyObject *const_str_digest_4aa2d0aa97cfdd0ddbe57aa686b84ce6;
static PyObject *const_str_plain_cMSG_USERAUTH_GSSAPI_EXCHANGE_COMPLETE;
static PyObject *const_str_digest_2ca203a96a185861f409ff2a667ac4b2;
extern PyObject *const_str_plain_cMSG_SERVICE_REQUEST;
extern PyObject *const_str_digest_9a8c6cc831c838e9290e530598427e4a;
extern PyObject *const_str_plain_MSG_KEXINIT;
extern PyObject *const_str_plain_MSG_USERAUTH_GSSAPI_ERRTOK;
extern PyObject *const_int_pos_83;
static PyObject *const_str_digest_6270d2d12dded7ba3077409d411787e0;
extern PyObject *const_str_plain_cMSG_CHANNEL_OPEN_FAILURE;
extern PyObject *const_str_plain_o700;
extern PyObject *const_str_plain_MSG_USERAUTH_GSSAPI_ERROR;
static PyObject *const_xrange_1_7;
extern PyObject *const_int_pos_384;
extern PyObject *const_str_plain_MSG_REQUEST_SUCCESS;
static PyObject *const_str_plain_newkeys;
static PyObject *const_str_digest_8febd38d27015f3d41c300556b2ed9a7;
extern PyObject *const_str_plain_cMSG_UNIMPLEMENTED;
extern PyObject *const_str_plain_MSG_USERAUTH_REQUEST;
extern PyObject *const_str_plain_True;
extern PyObject *const_tuple_empty;
static PyObject *const_int_pos_34;
static PyObject *const_int_pos_438;
static PyObject *const_str_plain_DISCONNECT_AUTH_CANCELLED_BY_USER;
extern PyObject *const_str_digest_043a098e3c8c7e01497500bb854d02ab;
extern PyObject *const_str_plain_cMSG_USERAUTH_BANNER;
static PyObject *const_str_plain_cMSG_USERAUTH_GSSAPI_ERROR;
extern PyObject *const_str_plain_MSG_USERAUTH_GSSAPI_RESPONSE;
extern PyObject *const_str_plain_cMSG_CHANNEL_WINDOW_ADJUST;
static PyObject *const_str_digest_a73b2de1245b9e98f5999bcc5574dc9a;
extern PyObject *const_str_plain_MSG_NAMES;
static PyObject *const_str_digest_47d53fda6c78160bf7883d2da1ef9903;
static PyObject *const_str_plain_kex30;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_MSG_DEBUG;
extern PyObject *const_str_plain_MSG_CHANNEL_FAILURE;
extern PyObject *const_str_plain_cr_byte_value;
static PyObject *const_xrange_90_101;
extern PyObject *const_int_pos_60;
extern PyObject *const_str_plain_MSG_USERAUTH_GSSAPI_TOKEN;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_MSG_GLOBAL_REQUEST;
extern PyObject *const_str_plain_o777;
static PyObject *const_str_digest_89f59c81e279de6acf2cfd7c12641ccb;
extern PyObject *const_str_plain_cMSG_USERAUTH_PK_OK;
static PyObject *const_tuple_int_pos_2147483648_tuple;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_929abd662134ab2aae9a180d295883cd;
static PyObject *const_xrange_20_22;
extern PyObject *const_int_pos_4294967295;
extern PyObject *const_str_plain_cMSG_USERAUTH_REQUEST;
static PyObject *const_str_plain_cMSG_DEBUG;
static PyObject *const_str_digest_4438805fe250c57093cee33c5c242db0;
extern PyObject *const_xrange_0_3;
static PyObject *const_int_pos_67;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
static PyObject *const_str_digest_35acc9a5233b09d0dad38f7447e5e9f3;
static PyObject *const_str_digest_c2494a4dfb4ec690cc4dd4c32567b2c5;
extern PyObject *const_int_pos_4096;
static PyObject *const_str_digest_029bf3fa99f6dc75225e710ad4a34730;
extern PyObject *const_str_plain_MSG_USERAUTH_BANNER;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_cMSG_USERAUTH_SUCCESS;
static PyObject *const_str_plain_kex33;
static PyObject *const_str_plain_MSG_UNIMPLEMENTED;
extern PyObject *const_str_plain_MSG_CHANNEL_REQUEST;
extern PyObject *const_str_plain_cMSG_USERAUTH_INFO_RESPONSE;
static PyObject *const_str_plain_kex41;
extern PyObject *const_str_plain_OPEN_SUCCEEDED;
static PyObject *const_int_pos_54;
extern PyObject *const_str_plain_zero_byte;
extern PyObject *const_str_plain_CONNECTION_FAILED_CODE;
extern PyObject *const_str_plain_MSG_SERVICE_ACCEPT;
static PyObject *const_str_digest_419c2393b317612e83e0979cc66d01ca;
extern PyObject *const_str_plain_DISCONNECT_SERVICE_NOT_AVAILABLE;
extern PyObject *const_str_plain_MSG_CHANNEL_SUCCESS;
static PyObject *const_str_digest_1172898702a8748e00ee868b40c129c2;
static PyObject *const_str_digest_ae40cf39c81d3d83a722eef6e4efaeac;
extern PyObject *const_str_digest_af46dc626906b3459f8298b3797a94e5;
extern PyObject *const_str_plain_cMSG_USERAUTH_GSSAPI_TOKEN;
extern PyObject *const_str_plain_MIN_PACKET_SIZE;
extern PyObject *const_int_pos_79;
extern PyObject *const_str_plain_MSG_CHANNEL_EOF;
static PyObject *const_str_plain_unimplemented;
extern PyObject *const_str_plain_OPEN_FAILED_CONNECT_FAILED;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain_kex34;
extern PyObject *const_int_pos_32768;
extern PyObject *const_int_pos_50;
extern PyObject *const_int_pos_13;
extern PyObject *const_int_pos_90;
static PyObject *const_xrange_60_62;
static PyObject *const_str_digest_b0c0e3641044f6ffff36bfcc66ac116c;
static PyObject *const_int_pos_511;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_xffffffff;
extern PyObject *const_str_plain_cMSG_USERAUTH_GSSAPI_RESPONSE;
extern PyObject *const_str_plain_PY2;
static PyObject *const_xrange_50_54;
static PyObject *const_float_0_01;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_text_type;
static PyObject *const_xrange_0_5;
extern PyObject *const_str_plain_MSG_USERAUTH_INFO_REQUEST;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_DEFAULT_WINDOW_SIZE;
extern PyObject *const_str_plain_byte_chr;
static PyObject *const_str_digest_bd1ddce9e2766dcf5a0698eb48f8d831;
extern PyObject *const_str_plain_MSG_USERAUTH_FAILURE;
extern PyObject *const_str_plain_asbytes;
static PyObject *const_tuple_str_plain_s_str_plain_asbytes_tuple;
static PyObject *const_str_digest_8a7bf1168e04a88c17b45075b95f1b8f;
static PyObject *const_str_plain_MSG_USERAUTH_GSSAPI_EXCHANGE_COMPLETE;
extern PyObject *const_str_plain_MSG_CHANNEL_CLOSE;
static PyObject *const_str_digest_2f7a36184dad983441341840fa2953cc;
extern PyObject *const_str_plain_DEFAULT_MAX_PACKET_SIZE;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_ERROR;
extern PyObject *const_str_plain_MSG_USERAUTH_GSSAPI_MIC;
static PyObject *const_str_plain_o666;
extern PyObject *const_int_pos_2147483648;
extern PyObject *const_int_pos_255;
extern PyObject *const_str_plain_MSG_SERVICE_REQUEST;
static PyObject *const_str_digest_071421bf01a6e9ffe85977ab8327d579;
static PyObject *const_str_digest_3cc365e1850246564ad009c5ecfd6d2b;
extern PyObject *const_str_plain_o70;
extern PyObject *const_int_pos_40;
extern PyObject *const_int_pos_7;
static PyObject *const_str_plain_kex31;
extern PyObject *const_str_plain_bytes_types;
extern PyObject *const_str_plain_linefeed_byte_value;
extern PyObject *const_str_plain_o600;
extern PyObject *const_str_plain_DEBUG;
extern PyObject *const_str_plain_disconnect;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_kex40;
extern PyObject *const_str_plain_crlf;
extern PyObject *const_str_plain_MIN_WINDOW_SIZE;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_MSG_CHANNEL_OPEN;
extern PyObject *const_str_plain_MSG_CHANNEL_OPEN_SUCCESS;
extern PyObject *const_str_plain_INFO;
extern PyObject *const_str_plain_cMSG_CHANNEL_FAILURE;
extern PyObject *const_str_plain_MSG_DISCONNECT;
extern PyObject *const_str_plain_MSG_CHANNEL_WINDOW_ADJUST;
static PyObject *const_str_plain_kex32;
extern PyObject *const_str_plain_linefeed_byte;
static PyObject *const_str_digest_03e84f6126af9fe22524801baf0d033a;
extern PyObject *const_int_pos_14;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_int_pos_7_int_pos_13_int_pos_14_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_7_int_pos_13_int_pos_14_tuple, 0, const_int_pos_7 ); Py_INCREF( const_int_pos_7 );
    PyTuple_SET_ITEM( const_tuple_int_pos_7_int_pos_13_int_pos_14_tuple, 1, const_int_pos_13 ); Py_INCREF( const_int_pos_13 );
    PyTuple_SET_ITEM( const_tuple_int_pos_7_int_pos_13_int_pos_14_tuple, 2, const_int_pos_14 ); Py_INCREF( const_int_pos_14 );
    const_dict_2f3feb38cf4698993fe350df5eafa43b = _PyDict_NewPresized( 4 );
    const_str_digest_b50e455b0173ed2d6ad4605dd79a8baa = UNSTREAM_STRING( &constant_bin[ 430538 ], 27, 0 );
    PyDict_SetItem( const_dict_2f3feb38cf4698993fe350df5eafa43b, const_int_pos_1, const_str_digest_b50e455b0173ed2d6ad4605dd79a8baa );
    const_str_digest_9629daf16003f6cad98fa628106840e0 = UNSTREAM_STRING( &constant_bin[ 430565 ], 14, 0 );
    PyDict_SetItem( const_dict_2f3feb38cf4698993fe350df5eafa43b, const_int_pos_2, const_str_digest_9629daf16003f6cad98fa628106840e0 );
    const_str_digest_00ee6b9e7b545ea5f01da8d00a80ec32 = UNSTREAM_STRING( &constant_bin[ 430579 ], 20, 0 );
    PyDict_SetItem( const_dict_2f3feb38cf4698993fe350df5eafa43b, const_int_pos_3, const_str_digest_00ee6b9e7b545ea5f01da8d00a80ec32 );
    const_str_digest_a5845464038f6b6f2c2e9d81307cbcfc = UNSTREAM_STRING( &constant_bin[ 430599 ], 17, 0 );
    PyDict_SetItem( const_dict_2f3feb38cf4698993fe350df5eafa43b, const_int_pos_4, const_str_digest_a5845464038f6b6f2c2e9d81307cbcfc );
    assert( PyDict_Size( const_dict_2f3feb38cf4698993fe350df5eafa43b ) == 4 );
    const_str_plain_o660 = UNSTREAM_STRING( &constant_bin[ 430616 ], 4, 1 );
    const_str_plain_CRITICAL = UNSTREAM_STRING( &constant_bin[ 430620 ], 8, 1 );
    const_str_plain_cMSG_USERAUTH_GSSAPI_ERRTOK = UNSTREAM_STRING( &constant_bin[ 430628 ], 27, 1 );
    const_tuple_int_pos_4294967295_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_4294967295_tuple, 0, const_int_pos_4294967295 ); Py_INCREF( const_int_pos_4294967295 );
    const_str_digest_76c8df24120d2b1949f3870a64a0f940 = UNSTREAM_STRING( &constant_bin[ 430655 ], 48, 0 );
    const_str_digest_186f18ed4b019012e39aa1310b09ef20 = UNSTREAM_STRING( &constant_bin[ 430703 ], 18, 0 );
    const_str_digest_db5706f62a1019e0db7d295c38a809b4 = UNSTREAM_STRING( &constant_bin[ 430721 ], 40, 0 );
    const_xrange_80_83 = BUILTIN_XRANGE3( const_int_pos_80, const_int_pos_83, const_int_pos_1 );
    const_int_pos_448 = PyLong_FromUnsignedLong( 448ul );
    const_tuple_b7fd7d2c1fe1b6662269ea8df5424031_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b7fd7d2c1fe1b6662269ea8df5424031_tuple, 0, const_str_plain_byte_chr ); Py_INCREF( const_str_plain_byte_chr );
    PyTuple_SET_ITEM( const_tuple_b7fd7d2c1fe1b6662269ea8df5424031_tuple, 1, const_str_plain_PY2 ); Py_INCREF( const_str_plain_PY2 );
    PyTuple_SET_ITEM( const_tuple_b7fd7d2c1fe1b6662269ea8df5424031_tuple, 2, const_str_plain_bytes_types ); Py_INCREF( const_str_plain_bytes_types );
    PyTuple_SET_ITEM( const_tuple_b7fd7d2c1fe1b6662269ea8df5424031_tuple, 3, const_str_plain_text_type ); Py_INCREF( const_str_plain_text_type );
    PyTuple_SET_ITEM( const_tuple_b7fd7d2c1fe1b6662269ea8df5424031_tuple, 4, const_str_plain_long ); Py_INCREF( const_str_plain_long );
    const_str_digest_b1735d9d474334b4fe16983aa16ede5a = UNSTREAM_STRING( &constant_bin[ 430761 ], 24, 0 );
    const_str_digest_b633102eb5c83343df21466439e32497 = UNSTREAM_STRING( &constant_bin[ 430785 ], 12, 0 );
    const_int_pos_67 = PyLong_FromUnsignedLong( 67ul );
    const_xrange_63_67 = BUILTIN_XRANGE3( const_int_pos_63, const_int_pos_67, const_int_pos_1 );
    const_int_pos_33 = PyLong_FromUnsignedLong( 33ul );
    const_str_digest_cc65e74350041e6fd75c282555bd10cd = UNSTREAM_STRING( &constant_bin[ 430797 ], 15, 0 );
    const_int_pos_62 = PyLong_FromUnsignedLong( 62ul );
    const_str_plain_o644 = UNSTREAM_STRING( &constant_bin[ 430812 ], 4, 1 );
    const_str_digest_591947d6e6a0c90b66f0f033a15ccf73 = UNSTREAM_STRING( &constant_bin[ 430816 ], 20, 0 );
    const_str_digest_46ed528cce86c8ef57e6fcd759f69eb6 = UNSTREAM_STRING( &constant_bin[ 430836 ], 15, 0 );
    const_int_pos_432 = PyLong_FromUnsignedLong( 432ul );
    const_str_digest_52d3fd085b8e0f7759387d21d761d6dd = UNSTREAM_STRING( &constant_bin[ 430851 ], 15, 0 );
    const_str_plain_MSG_USERAUTH_PK_OK = UNSTREAM_STRING( &constant_bin[ 385380 ], 18, 1 );
    const_str_digest_0e2e9649fa6b73827d6f4cc17912f17c = UNSTREAM_STRING( &constant_bin[ 430866 ], 20, 0 );
    const_str_plain_kexinit = UNSTREAM_STRING( &constant_bin[ 430886 ], 7, 1 );
    const_str_digest_4aa2d0aa97cfdd0ddbe57aa686b84ce6 = UNSTREAM_STRING( &constant_bin[ 430893 ], 24, 0 );
    const_str_plain_cMSG_USERAUTH_GSSAPI_EXCHANGE_COMPLETE = UNSTREAM_STRING( &constant_bin[ 430917 ], 38, 1 );
    const_str_digest_2ca203a96a185861f409ff2a667ac4b2 = UNSTREAM_STRING( &constant_bin[ 430955 ], 13, 0 );
    const_str_digest_6270d2d12dded7ba3077409d411787e0 = UNSTREAM_STRING( &constant_bin[ 430968 ], 14, 0 );
    const_xrange_1_7 = BUILTIN_XRANGE3( const_int_pos_1, const_int_pos_7, const_int_pos_1 );
    const_str_plain_newkeys = UNSTREAM_STRING( &constant_bin[ 430982 ], 7, 1 );
    const_str_digest_8febd38d27015f3d41c300556b2ed9a7 = UNSTREAM_STRING( &constant_bin[ 430989 ], 19, 0 );
    const_int_pos_34 = PyLong_FromUnsignedLong( 34ul );
    const_int_pos_438 = PyLong_FromUnsignedLong( 438ul );
    const_str_plain_DISCONNECT_AUTH_CANCELLED_BY_USER = UNSTREAM_STRING( &constant_bin[ 431008 ], 33, 1 );
    const_str_plain_cMSG_USERAUTH_GSSAPI_ERROR = UNSTREAM_STRING( &constant_bin[ 431041 ], 26, 1 );
    const_str_digest_a73b2de1245b9e98f5999bcc5574dc9a = UNSTREAM_STRING( &constant_bin[ 431067 ], 11, 0 );
    const_str_digest_47d53fda6c78160bf7883d2da1ef9903 = UNSTREAM_STRING( &constant_bin[ 431078 ], 15, 0 );
    const_str_plain_kex30 = UNSTREAM_STRING( &constant_bin[ 431093 ], 5, 1 );
    const_xrange_90_101 = BUILTIN_XRANGE3( const_int_pos_90, const_int_pos_101, const_int_pos_1 );
    const_str_digest_89f59c81e279de6acf2cfd7c12641ccb = UNSTREAM_STRING( &constant_bin[ 431098 ], 16, 0 );
    const_tuple_int_pos_2147483648_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2147483648_tuple, 0, const_int_pos_2147483648 ); Py_INCREF( const_int_pos_2147483648 );
    const_str_digest_929abd662134ab2aae9a180d295883cd = UNSTREAM_STRING( &constant_bin[ 431114 ], 33, 0 );
    const_xrange_20_22 = BUILTIN_XRANGE3( const_int_pos_20, const_int_pos_22, const_int_pos_1 );
    const_str_plain_cMSG_DEBUG = UNSTREAM_STRING( &constant_bin[ 431147 ], 10, 1 );
    const_str_digest_4438805fe250c57093cee33c5c242db0 = UNSTREAM_STRING( &constant_bin[ 431157 ], 31, 0 );
    const_str_digest_35acc9a5233b09d0dad38f7447e5e9f3 = UNSTREAM_STRING( &constant_bin[ 431188 ], 15, 0 );
    const_str_digest_c2494a4dfb4ec690cc4dd4c32567b2c5 = UNSTREAM_STRING( &constant_bin[ 431203 ], 21, 0 );
    const_str_digest_029bf3fa99f6dc75225e710ad4a34730 = UNSTREAM_STRING( &constant_bin[ 431224 ], 16, 0 );
    const_str_plain_kex33 = UNSTREAM_STRING( &constant_bin[ 431240 ], 5, 1 );
    const_str_plain_MSG_UNIMPLEMENTED = UNSTREAM_STRING( &constant_bin[ 431245 ], 17, 1 );
    const_str_plain_kex41 = UNSTREAM_STRING( &constant_bin[ 431262 ], 5, 1 );
    const_int_pos_54 = PyLong_FromUnsignedLong( 54ul );
    const_str_digest_419c2393b317612e83e0979cc66d01ca = UNSTREAM_STRING( &constant_bin[ 431267 ], 21, 0 );
    const_str_digest_1172898702a8748e00ee868b40c129c2 = UNSTREAM_STRING( &constant_bin[ 431288 ], 16, 0 );
    const_str_digest_ae40cf39c81d3d83a722eef6e4efaeac = UNSTREAM_STRING( &constant_bin[ 431304 ], 14, 0 );
    const_str_plain_unimplemented = UNSTREAM_STRING( &constant_bin[ 431318 ], 13, 1 );
    const_str_plain_kex34 = UNSTREAM_STRING( &constant_bin[ 431331 ], 5, 1 );
    const_xrange_60_62 = BUILTIN_XRANGE3( const_int_pos_60, const_int_pos_62, const_int_pos_1 );
    const_str_digest_b0c0e3641044f6ffff36bfcc66ac116c = UNSTREAM_STRING( &constant_bin[ 431336 ], 16, 0 );
    const_int_pos_511 = PyLong_FromUnsignedLong( 511ul );
    const_xrange_50_54 = BUILTIN_XRANGE3( const_int_pos_50, const_int_pos_54, const_int_pos_1 );
    const_float_0_01 = UNSTREAM_FLOAT( &constant_bin[ 431352 ] );
    const_xrange_0_5 = BUILTIN_XRANGE3( const_int_0, const_int_pos_5, const_int_pos_1 );
    const_str_digest_bd1ddce9e2766dcf5a0698eb48f8d831 = UNSTREAM_STRING( &constant_bin[ 431360 ], 21, 0 );
    const_tuple_str_plain_s_str_plain_asbytes_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_asbytes_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_asbytes_tuple, 1, const_str_plain_asbytes ); Py_INCREF( const_str_plain_asbytes );
    const_str_digest_8a7bf1168e04a88c17b45075b95f1b8f = UNSTREAM_STRING( &constant_bin[ 431381 ], 12, 0 );
    const_str_plain_MSG_USERAUTH_GSSAPI_EXCHANGE_COMPLETE = UNSTREAM_STRING( &constant_bin[ 430918 ], 37, 1 );
    const_str_digest_2f7a36184dad983441341840fa2953cc = UNSTREAM_STRING( &constant_bin[ 431393 ], 22, 0 );
    const_str_plain_o666 = UNSTREAM_STRING( &constant_bin[ 431415 ], 4, 1 );
    const_str_digest_071421bf01a6e9ffe85977ab8327d579 = UNSTREAM_STRING( &constant_bin[ 431419 ], 15, 0 );
    const_str_digest_3cc365e1850246564ad009c5ecfd6d2b = UNSTREAM_STRING( &constant_bin[ 431434 ], 21, 0 );
    const_str_plain_kex31 = UNSTREAM_STRING( &constant_bin[ 431455 ], 5, 1 );
    const_str_plain_kex40 = UNSTREAM_STRING( &constant_bin[ 431460 ], 5, 1 );
    const_str_plain_kex32 = UNSTREAM_STRING( &constant_bin[ 431465 ], 5, 1 );
    const_str_digest_03e84f6126af9fe22524801baf0d033a = UNSTREAM_STRING( &constant_bin[ 431470 ], 27, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_paramiko$common( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d4c98d164cdf3f2c7b5b0ee49938bf66;
static PyCodeObject *codeobj_829742968ba076875cd423b04a0a7081;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_186f18ed4b019012e39aa1310b09ef20 );
    codeobj_d4c98d164cdf3f2c7b5b0ee49938bf66 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4aa2d0aa97cfdd0ddbe57aa686b84ce6, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_829742968ba076875cd423b04a0a7081 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_asbytes, 164, const_tuple_str_plain_s_str_plain_asbytes_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_paramiko$common$$$function_1_asbytes(  );


// The module function definitions.
static PyObject *impl_paramiko$common$$$function_1_asbytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *var_asbytes = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    bool tmp_isnot_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_829742968ba076875cd423b04a0a7081 = NULL;

    struct Nuitka_FrameObject *frame_829742968ba076875cd423b04a0a7081;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_829742968ba076875cd423b04a0a7081, codeobj_829742968ba076875cd423b04a0a7081, module_paramiko$common, sizeof(void *)+sizeof(void *) );
    frame_829742968ba076875cd423b04a0a7081 = cache_frame_829742968ba076875cd423b04a0a7081;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_829742968ba076875cd423b04a0a7081 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_829742968ba076875cd423b04a0a7081 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_s;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_bytes_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "bytes_types" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = par_s;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_s;

    CHECK_OBJECT( tmp_isinstance_inst_2 );
    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_text_type );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_text_type );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "text_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_1 = par_s;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_829742968ba076875cd423b04a0a7081->m_frame.f_lineno = 170;
    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_getattr_target_1 = par_s;

    CHECK_OBJECT( tmp_getattr_target_1 );
    tmp_getattr_attr_1 = const_str_plain_asbytes;
    tmp_getattr_default_1 = Py_None;
    tmp_assign_source_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_asbytes == NULL );
    var_asbytes = tmp_assign_source_1;

    tmp_compare_left_1 = var_asbytes;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_1 = var_asbytes;

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "asbytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_829742968ba076875cd423b04a0a7081->m_frame.f_lineno = 173;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_return_value = par_s;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_829742968ba076875cd423b04a0a7081 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_829742968ba076875cd423b04a0a7081 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_829742968ba076875cd423b04a0a7081 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_829742968ba076875cd423b04a0a7081, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_829742968ba076875cd423b04a0a7081->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_829742968ba076875cd423b04a0a7081, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_829742968ba076875cd423b04a0a7081,
        type_description_1,
        par_s,
        var_asbytes
    );


    // Release cached frame.
    if ( frame_829742968ba076875cd423b04a0a7081 == cache_frame_829742968ba076875cd423b04a0a7081 )
    {
        Py_DECREF( frame_829742968ba076875cd423b04a0a7081 );
    }
    cache_frame_829742968ba076875cd423b04a0a7081 = NULL;

    assertFrameObject( frame_829742968ba076875cd423b04a0a7081 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$common$$$function_1_asbytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_asbytes );
    var_asbytes = NULL;

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

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_asbytes );
    var_asbytes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$common$$$function_1_asbytes );
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



static PyObject *MAKE_FUNCTION_paramiko$common$$$function_1_asbytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$common$$$function_1_asbytes,
        const_str_plain_asbytes,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_829742968ba076875cd423b04a0a7081,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$common,
        const_str_digest_76c8df24120d2b1949f3870a64a0f940,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_paramiko$common =
{
    PyModuleDef_HEAD_INIT,
    "paramiko.common",   /* m_name */
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

MOD_INIT_DECL( paramiko$common )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_paramiko$common );
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
    puts("paramiko.common: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("paramiko.common: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("paramiko.common: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initparamiko$common" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_paramiko$common = Py_InitModule4(
        "paramiko.common",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_paramiko$common = PyModule_Create( &mdef_paramiko$common );
#endif

    moduledict_paramiko$common = MODULE_DICT( module_paramiko$common );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_paramiko$common,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_paramiko$common,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_paramiko$common,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_paramiko$common );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_043a098e3c8c7e01497500bb854d02ab, module_paramiko$common );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_tuple_unpack_10__element_1 = NULL;
    PyObject *tmp_tuple_unpack_10__element_2 = NULL;
    PyObject *tmp_tuple_unpack_10__element_3 = NULL;
    PyObject *tmp_tuple_unpack_10__element_4 = NULL;
    PyObject *tmp_tuple_unpack_10__element_5 = NULL;
    PyObject *tmp_tuple_unpack_10__source_iter = NULL;
    PyObject *tmp_tuple_unpack_11__element_1 = NULL;
    PyObject *tmp_tuple_unpack_11__element_2 = NULL;
    PyObject *tmp_tuple_unpack_11__element_3 = NULL;
    PyObject *tmp_tuple_unpack_11__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__element_4 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_tuple_unpack_6__element_1 = NULL;
    PyObject *tmp_tuple_unpack_6__element_2 = NULL;
    PyObject *tmp_tuple_unpack_6__element_3 = NULL;
    PyObject *tmp_tuple_unpack_6__element_4 = NULL;
    PyObject *tmp_tuple_unpack_6__source_iter = NULL;
    PyObject *tmp_tuple_unpack_7__element_1 = NULL;
    PyObject *tmp_tuple_unpack_7__element_2 = NULL;
    PyObject *tmp_tuple_unpack_7__element_3 = NULL;
    PyObject *tmp_tuple_unpack_7__source_iter = NULL;
    PyObject *tmp_tuple_unpack_8__element_1 = NULL;
    PyObject *tmp_tuple_unpack_8__element_10 = NULL;
    PyObject *tmp_tuple_unpack_8__element_11 = NULL;
    PyObject *tmp_tuple_unpack_8__element_2 = NULL;
    PyObject *tmp_tuple_unpack_8__element_3 = NULL;
    PyObject *tmp_tuple_unpack_8__element_4 = NULL;
    PyObject *tmp_tuple_unpack_8__element_5 = NULL;
    PyObject *tmp_tuple_unpack_8__element_6 = NULL;
    PyObject *tmp_tuple_unpack_8__element_7 = NULL;
    PyObject *tmp_tuple_unpack_8__element_8 = NULL;
    PyObject *tmp_tuple_unpack_8__element_9 = NULL;
    PyObject *tmp_tuple_unpack_8__source_iter = NULL;
    PyObject *tmp_tuple_unpack_9__element_1 = NULL;
    PyObject *tmp_tuple_unpack_9__element_2 = NULL;
    PyObject *tmp_tuple_unpack_9__element_3 = NULL;
    PyObject *tmp_tuple_unpack_9__source_iter = NULL;
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
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
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
    PyObject *tmp_args_element_name_33;
    PyObject *tmp_args_element_name_34;
    PyObject *tmp_args_element_name_35;
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
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_assign_source_117;
    PyObject *tmp_assign_source_118;
    PyObject *tmp_assign_source_119;
    PyObject *tmp_assign_source_120;
    PyObject *tmp_assign_source_121;
    PyObject *tmp_assign_source_122;
    PyObject *tmp_assign_source_123;
    PyObject *tmp_assign_source_124;
    PyObject *tmp_assign_source_125;
    PyObject *tmp_assign_source_126;
    PyObject *tmp_assign_source_127;
    PyObject *tmp_assign_source_128;
    PyObject *tmp_assign_source_129;
    PyObject *tmp_assign_source_130;
    PyObject *tmp_assign_source_131;
    PyObject *tmp_assign_source_132;
    PyObject *tmp_assign_source_133;
    PyObject *tmp_assign_source_134;
    PyObject *tmp_assign_source_135;
    PyObject *tmp_assign_source_136;
    PyObject *tmp_assign_source_137;
    PyObject *tmp_assign_source_138;
    PyObject *tmp_assign_source_139;
    PyObject *tmp_assign_source_140;
    PyObject *tmp_assign_source_141;
    PyObject *tmp_assign_source_142;
    PyObject *tmp_assign_source_143;
    PyObject *tmp_assign_source_144;
    PyObject *tmp_assign_source_145;
    PyObject *tmp_assign_source_146;
    PyObject *tmp_assign_source_147;
    PyObject *tmp_assign_source_148;
    PyObject *tmp_assign_source_149;
    PyObject *tmp_assign_source_150;
    PyObject *tmp_assign_source_151;
    PyObject *tmp_assign_source_152;
    PyObject *tmp_assign_source_153;
    PyObject *tmp_assign_source_154;
    PyObject *tmp_assign_source_155;
    PyObject *tmp_assign_source_156;
    PyObject *tmp_assign_source_157;
    PyObject *tmp_assign_source_158;
    PyObject *tmp_assign_source_159;
    PyObject *tmp_assign_source_160;
    PyObject *tmp_assign_source_161;
    PyObject *tmp_assign_source_162;
    PyObject *tmp_assign_source_163;
    PyObject *tmp_assign_source_164;
    PyObject *tmp_assign_source_165;
    PyObject *tmp_assign_source_166;
    PyObject *tmp_assign_source_167;
    PyObject *tmp_assign_source_168;
    PyObject *tmp_assign_source_169;
    PyObject *tmp_assign_source_170;
    PyObject *tmp_assign_source_171;
    PyObject *tmp_assign_source_172;
    PyObject *tmp_assign_source_173;
    PyObject *tmp_assign_source_174;
    PyObject *tmp_assign_source_175;
    PyObject *tmp_assign_source_176;
    PyObject *tmp_assign_source_177;
    PyObject *tmp_assign_source_178;
    PyObject *tmp_assign_source_179;
    PyObject *tmp_assign_source_180;
    PyObject *tmp_assign_source_181;
    PyObject *tmp_assign_source_182;
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
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_key_22;
    PyObject *tmp_dict_key_23;
    PyObject *tmp_dict_key_24;
    PyObject *tmp_dict_key_25;
    PyObject *tmp_dict_key_26;
    PyObject *tmp_dict_key_27;
    PyObject *tmp_dict_key_28;
    PyObject *tmp_dict_key_29;
    PyObject *tmp_dict_key_30;
    PyObject *tmp_dict_key_31;
    PyObject *tmp_dict_key_32;
    PyObject *tmp_dict_key_33;
    PyObject *tmp_dict_key_34;
    PyObject *tmp_dict_key_35;
    PyObject *tmp_dict_key_36;
    PyObject *tmp_dict_key_37;
    PyObject *tmp_dict_key_38;
    PyObject *tmp_dict_key_39;
    PyObject *tmp_dict_key_40;
    PyObject *tmp_dict_key_41;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_dict_value_21;
    PyObject *tmp_dict_value_22;
    PyObject *tmp_dict_value_23;
    PyObject *tmp_dict_value_24;
    PyObject *tmp_dict_value_25;
    PyObject *tmp_dict_value_26;
    PyObject *tmp_dict_value_27;
    PyObject *tmp_dict_value_28;
    PyObject *tmp_dict_value_29;
    PyObject *tmp_dict_value_30;
    PyObject *tmp_dict_value_31;
    PyObject *tmp_dict_value_32;
    PyObject *tmp_dict_value_33;
    PyObject *tmp_dict_value_34;
    PyObject *tmp_dict_value_35;
    PyObject *tmp_dict_value_36;
    PyObject *tmp_dict_value_37;
    PyObject *tmp_dict_value_38;
    PyObject *tmp_dict_value_39;
    PyObject *tmp_dict_value_40;
    PyObject *tmp_dict_value_41;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iter_arg_8;
    PyObject *tmp_iter_arg_9;
    PyObject *tmp_iter_arg_10;
    PyObject *tmp_iter_arg_11;
    PyObject *tmp_left_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    int tmp_res;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
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
    PyObject *tmp_unpack_14;
    PyObject *tmp_unpack_15;
    PyObject *tmp_unpack_16;
    PyObject *tmp_unpack_17;
    PyObject *tmp_unpack_18;
    PyObject *tmp_unpack_19;
    PyObject *tmp_unpack_20;
    PyObject *tmp_unpack_21;
    PyObject *tmp_unpack_22;
    PyObject *tmp_unpack_23;
    PyObject *tmp_unpack_24;
    PyObject *tmp_unpack_25;
    PyObject *tmp_unpack_26;
    PyObject *tmp_unpack_27;
    PyObject *tmp_unpack_28;
    PyObject *tmp_unpack_29;
    PyObject *tmp_unpack_30;
    PyObject *tmp_unpack_31;
    PyObject *tmp_unpack_32;
    PyObject *tmp_unpack_33;
    PyObject *tmp_unpack_34;
    PyObject *tmp_unpack_35;
    PyObject *tmp_unpack_36;
    PyObject *tmp_unpack_37;
    PyObject *tmp_unpack_38;
    PyObject *tmp_unpack_39;
    PyObject *tmp_unpack_40;
    PyObject *tmp_unpack_41;
    PyObject *tmp_unpack_42;
    PyObject *tmp_unpack_43;
    PyObject *tmp_unpack_44;
    PyObject *tmp_unpack_45;
    struct Nuitka_FrameObject *frame_d4c98d164cdf3f2c7b5b0ee49938bf66;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_db5706f62a1019e0db7d295c38a809b4;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_d4c98d164cdf3f2c7b5b0ee49938bf66 = MAKE_MODULE_FRAME( codeobj_d4c98d164cdf3f2c7b5b0ee49938bf66, module_paramiko$common );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d4c98d164cdf3f2c7b5b0ee49938bf66 );
    assert( Py_REFCNT( frame_d4c98d164cdf3f2c7b5b0ee49938bf66 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_logging;
    tmp_globals_name_1 = (PyObject *)moduledict_paramiko$common;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 22;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_digest_af46dc626906b3459f8298b3797a94e5;
    tmp_globals_name_2 = (PyObject *)moduledict_paramiko$common;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_b7fd7d2c1fe1b6662269ea8df5424031_tuple;
    tmp_level_name_2 = const_int_0;
    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 23;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_5;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_byte_chr );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr, tmp_assign_source_6 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_PY2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_PY2, tmp_assign_source_7 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_bytes_types );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_bytes_types, tmp_assign_source_8 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_text_type );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_9 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_long );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_long, tmp_assign_source_10 );
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

    tmp_iter_arg_1 = const_xrange_1_7;
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( !(tmp_assign_source_11 == NULL) );
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;

    // Tried code:
    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_1, 0, 6 );
    if ( tmp_assign_source_12 == NULL )
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



        exception_lineno = 25;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_2, 1, 6 );
    if ( tmp_assign_source_13 == NULL )
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



        exception_lineno = 25;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_3, 2, 6 );
    if ( tmp_assign_source_14 == NULL )
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



        exception_lineno = 25;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_14;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_4, 3, 6 );
    if ( tmp_assign_source_15 == NULL )
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



        exception_lineno = 25;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_15;

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_5, 4, 6 );
    if ( tmp_assign_source_16 == NULL )
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



        exception_lineno = 25;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_5 == NULL );
    tmp_tuple_unpack_1__element_5 = tmp_assign_source_16;

    tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_6, 5, 6 );
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



        exception_lineno = 25;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_6 == NULL );
    tmp_tuple_unpack_1__element_6 = tmp_assign_source_17;

    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    goto try_end_3;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_18 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_18 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_DISCONNECT, tmp_assign_source_18 );
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_19 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_19 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_IGNORE, tmp_assign_source_19 );
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_20 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_20 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_UNIMPLEMENTED, tmp_assign_source_20 );
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_assign_source_21 = tmp_tuple_unpack_1__element_4;

    CHECK_OBJECT( tmp_assign_source_21 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_DEBUG, tmp_assign_source_21 );
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    tmp_assign_source_22 = tmp_tuple_unpack_1__element_5;

    CHECK_OBJECT( tmp_assign_source_22 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_SERVICE_REQUEST, tmp_assign_source_22 );
    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    tmp_assign_source_23 = tmp_tuple_unpack_1__element_6;

    CHECK_OBJECT( tmp_assign_source_23 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_SERVICE_ACCEPT, tmp_assign_source_23 );
    Py_XDECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    tmp_iter_arg_2 = const_xrange_20_22;
    tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_2 );
    assert( !(tmp_assign_source_24 == NULL) );
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_24;

    // Tried code:
    // Tried code:
    tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_25 = UNPACK_NEXT( tmp_unpack_7, 0, 2 );
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



        exception_lineno = 27;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_25;

    tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_8 );
    tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_8, 1, 2 );
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



        exception_lineno = 27;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_26;

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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_27 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_27 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_KEXINIT, tmp_assign_source_27 );
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_28 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_28 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_NEWKEYS, tmp_assign_source_28 );
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_iter_arg_3 = const_xrange_50_54;
    tmp_assign_source_29 = MAKE_ITERATOR( tmp_iter_arg_3 );
    assert( !(tmp_assign_source_29 == NULL) );
    assert( tmp_tuple_unpack_3__source_iter == NULL );
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_29;

    // Tried code:
    // Tried code:
    tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_9 );
    tmp_assign_source_30 = UNPACK_NEXT( tmp_unpack_9, 0, 4 );
    if ( tmp_assign_source_30 == NULL )
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



        exception_lineno = 28;
        goto try_except_handler_7;
    }
    assert( tmp_tuple_unpack_3__element_1 == NULL );
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_30;

    tmp_unpack_10 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_10 );
    tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_10, 1, 4 );
    if ( tmp_assign_source_31 == NULL )
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



        exception_lineno = 28;
        goto try_except_handler_7;
    }
    assert( tmp_tuple_unpack_3__element_2 == NULL );
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_31;

    tmp_unpack_11 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_11 );
    tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_11, 2, 4 );
    if ( tmp_assign_source_32 == NULL )
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



        exception_lineno = 28;
        goto try_except_handler_7;
    }
    assert( tmp_tuple_unpack_3__element_3 == NULL );
    tmp_tuple_unpack_3__element_3 = tmp_assign_source_32;

    tmp_unpack_12 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_12 );
    tmp_assign_source_33 = UNPACK_NEXT( tmp_unpack_12, 3, 4 );
    if ( tmp_assign_source_33 == NULL )
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



        exception_lineno = 28;
        goto try_except_handler_7;
    }
    assert( tmp_tuple_unpack_3__element_4 == NULL );
    tmp_tuple_unpack_3__element_4 = tmp_assign_source_33;

    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    tmp_assign_source_34 = tmp_tuple_unpack_3__element_1;

    CHECK_OBJECT( tmp_assign_source_34 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_REQUEST, tmp_assign_source_34 );
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    tmp_assign_source_35 = tmp_tuple_unpack_3__element_2;

    CHECK_OBJECT( tmp_assign_source_35 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_FAILURE, tmp_assign_source_35 );
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    tmp_assign_source_36 = tmp_tuple_unpack_3__element_3;

    CHECK_OBJECT( tmp_assign_source_36 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_SUCCESS, tmp_assign_source_36 );
    Py_XDECREF( tmp_tuple_unpack_3__element_3 );
    tmp_tuple_unpack_3__element_3 = NULL;

    tmp_assign_source_37 = tmp_tuple_unpack_3__element_4;

    CHECK_OBJECT( tmp_assign_source_37 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_BANNER, tmp_assign_source_37 );
    Py_XDECREF( tmp_tuple_unpack_3__element_4 );
    tmp_tuple_unpack_3__element_4 = NULL;

    tmp_assign_source_38 = const_int_pos_60;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_PK_OK, tmp_assign_source_38 );
    tmp_iter_arg_4 = const_xrange_60_62;
    tmp_assign_source_39 = MAKE_ITERATOR( tmp_iter_arg_4 );
    assert( !(tmp_assign_source_39 == NULL) );
    assert( tmp_tuple_unpack_4__source_iter == NULL );
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_39;

    // Tried code:
    // Tried code:
    tmp_unpack_13 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_13 );
    tmp_assign_source_40 = UNPACK_NEXT( tmp_unpack_13, 0, 2 );
    if ( tmp_assign_source_40 == NULL )
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



        exception_lineno = 31;
        goto try_except_handler_9;
    }
    assert( tmp_tuple_unpack_4__element_1 == NULL );
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_40;

    tmp_unpack_14 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_14 );
    tmp_assign_source_41 = UNPACK_NEXT( tmp_unpack_14, 1, 2 );
    if ( tmp_assign_source_41 == NULL )
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



        exception_lineno = 31;
        goto try_except_handler_9;
    }
    assert( tmp_tuple_unpack_4__element_2 == NULL );
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_41;

    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    tmp_assign_source_42 = tmp_tuple_unpack_4__element_1;

    CHECK_OBJECT( tmp_assign_source_42 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_INFO_REQUEST, tmp_assign_source_42 );
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    tmp_assign_source_43 = tmp_tuple_unpack_4__element_2;

    CHECK_OBJECT( tmp_assign_source_43 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_INFO_RESPONSE, tmp_assign_source_43 );
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    tmp_iter_arg_5 = const_xrange_60_62;
    tmp_assign_source_44 = MAKE_ITERATOR( tmp_iter_arg_5 );
    assert( !(tmp_assign_source_44 == NULL) );
    assert( tmp_tuple_unpack_5__source_iter == NULL );
    tmp_tuple_unpack_5__source_iter = tmp_assign_source_44;

    // Tried code:
    // Tried code:
    tmp_unpack_15 = tmp_tuple_unpack_5__source_iter;

    CHECK_OBJECT( tmp_unpack_15 );
    tmp_assign_source_45 = UNPACK_NEXT( tmp_unpack_15, 0, 2 );
    if ( tmp_assign_source_45 == NULL )
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



        exception_lineno = 32;
        goto try_except_handler_11;
    }
    assert( tmp_tuple_unpack_5__element_1 == NULL );
    tmp_tuple_unpack_5__element_1 = tmp_assign_source_45;

    tmp_unpack_16 = tmp_tuple_unpack_5__source_iter;

    CHECK_OBJECT( tmp_unpack_16 );
    tmp_assign_source_46 = UNPACK_NEXT( tmp_unpack_16, 1, 2 );
    if ( tmp_assign_source_46 == NULL )
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



        exception_lineno = 32;
        goto try_except_handler_11;
    }
    assert( tmp_tuple_unpack_5__element_2 == NULL );
    tmp_tuple_unpack_5__element_2 = tmp_assign_source_46;

    goto try_end_10;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_10;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_5__source_iter );
    Py_DECREF( tmp_tuple_unpack_5__source_iter );
    tmp_tuple_unpack_5__source_iter = NULL;

    tmp_assign_source_47 = tmp_tuple_unpack_5__element_1;

    CHECK_OBJECT( tmp_assign_source_47 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_RESPONSE, tmp_assign_source_47 );
    Py_XDECREF( tmp_tuple_unpack_5__element_1 );
    tmp_tuple_unpack_5__element_1 = NULL;

    tmp_assign_source_48 = tmp_tuple_unpack_5__element_2;

    CHECK_OBJECT( tmp_assign_source_48 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_TOKEN, tmp_assign_source_48 );
    Py_XDECREF( tmp_tuple_unpack_5__element_2 );
    tmp_tuple_unpack_5__element_2 = NULL;

    tmp_iter_arg_6 = const_xrange_63_67;
    tmp_assign_source_49 = MAKE_ITERATOR( tmp_iter_arg_6 );
    assert( !(tmp_assign_source_49 == NULL) );
    assert( tmp_tuple_unpack_6__source_iter == NULL );
    tmp_tuple_unpack_6__source_iter = tmp_assign_source_49;

    // Tried code:
    // Tried code:
    tmp_unpack_17 = tmp_tuple_unpack_6__source_iter;

    CHECK_OBJECT( tmp_unpack_17 );
    tmp_assign_source_50 = UNPACK_NEXT( tmp_unpack_17, 0, 4 );
    if ( tmp_assign_source_50 == NULL )
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



        exception_lineno = 33;
        goto try_except_handler_13;
    }
    assert( tmp_tuple_unpack_6__element_1 == NULL );
    tmp_tuple_unpack_6__element_1 = tmp_assign_source_50;

    tmp_unpack_18 = tmp_tuple_unpack_6__source_iter;

    CHECK_OBJECT( tmp_unpack_18 );
    tmp_assign_source_51 = UNPACK_NEXT( tmp_unpack_18, 1, 4 );
    if ( tmp_assign_source_51 == NULL )
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



        exception_lineno = 33;
        goto try_except_handler_13;
    }
    assert( tmp_tuple_unpack_6__element_2 == NULL );
    tmp_tuple_unpack_6__element_2 = tmp_assign_source_51;

    tmp_unpack_19 = tmp_tuple_unpack_6__source_iter;

    CHECK_OBJECT( tmp_unpack_19 );
    tmp_assign_source_52 = UNPACK_NEXT( tmp_unpack_19, 2, 4 );
    if ( tmp_assign_source_52 == NULL )
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



        exception_lineno = 33;
        goto try_except_handler_13;
    }
    assert( tmp_tuple_unpack_6__element_3 == NULL );
    tmp_tuple_unpack_6__element_3 = tmp_assign_source_52;

    tmp_unpack_20 = tmp_tuple_unpack_6__source_iter;

    CHECK_OBJECT( tmp_unpack_20 );
    tmp_assign_source_53 = UNPACK_NEXT( tmp_unpack_20, 3, 4 );
    if ( tmp_assign_source_53 == NULL )
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



        exception_lineno = 33;
        goto try_except_handler_13;
    }
    assert( tmp_tuple_unpack_6__element_4 == NULL );
    tmp_tuple_unpack_6__element_4 = tmp_assign_source_53;

    goto try_end_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
    Py_DECREF( tmp_tuple_unpack_6__source_iter );
    tmp_tuple_unpack_6__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_12;
    // End of try:
    try_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_6__element_1 );
    tmp_tuple_unpack_6__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_2 );
    tmp_tuple_unpack_6__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_6__element_3 );
    tmp_tuple_unpack_6__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_6__source_iter );
    Py_DECREF( tmp_tuple_unpack_6__source_iter );
    tmp_tuple_unpack_6__source_iter = NULL;

    tmp_assign_source_54 = tmp_tuple_unpack_6__element_1;

    CHECK_OBJECT( tmp_assign_source_54 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_EXCHANGE_COMPLETE, tmp_assign_source_54 );
    Py_XDECREF( tmp_tuple_unpack_6__element_1 );
    tmp_tuple_unpack_6__element_1 = NULL;

    tmp_assign_source_55 = tmp_tuple_unpack_6__element_2;

    CHECK_OBJECT( tmp_assign_source_55 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_ERROR, tmp_assign_source_55 );
    Py_XDECREF( tmp_tuple_unpack_6__element_2 );
    tmp_tuple_unpack_6__element_2 = NULL;

    tmp_assign_source_56 = tmp_tuple_unpack_6__element_3;

    CHECK_OBJECT( tmp_assign_source_56 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_ERRTOK, tmp_assign_source_56 );
    Py_XDECREF( tmp_tuple_unpack_6__element_3 );
    tmp_tuple_unpack_6__element_3 = NULL;

    tmp_assign_source_57 = tmp_tuple_unpack_6__element_4;

    CHECK_OBJECT( tmp_assign_source_57 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_MIC, tmp_assign_source_57 );
    Py_XDECREF( tmp_tuple_unpack_6__element_4 );
    tmp_tuple_unpack_6__element_4 = NULL;

    tmp_assign_source_58 = const_int_pos_79;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_HIGHEST_USERAUTH_MESSAGE_ID, tmp_assign_source_58 );
    tmp_iter_arg_7 = const_xrange_80_83;
    tmp_assign_source_59 = MAKE_ITERATOR( tmp_iter_arg_7 );
    assert( !(tmp_assign_source_59 == NULL) );
    assert( tmp_tuple_unpack_7__source_iter == NULL );
    tmp_tuple_unpack_7__source_iter = tmp_assign_source_59;

    // Tried code:
    // Tried code:
    tmp_unpack_21 = tmp_tuple_unpack_7__source_iter;

    CHECK_OBJECT( tmp_unpack_21 );
    tmp_assign_source_60 = UNPACK_NEXT( tmp_unpack_21, 0, 3 );
    if ( tmp_assign_source_60 == NULL )
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



        exception_lineno = 36;
        goto try_except_handler_15;
    }
    assert( tmp_tuple_unpack_7__element_1 == NULL );
    tmp_tuple_unpack_7__element_1 = tmp_assign_source_60;

    tmp_unpack_22 = tmp_tuple_unpack_7__source_iter;

    CHECK_OBJECT( tmp_unpack_22 );
    tmp_assign_source_61 = UNPACK_NEXT( tmp_unpack_22, 1, 3 );
    if ( tmp_assign_source_61 == NULL )
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



        exception_lineno = 36;
        goto try_except_handler_15;
    }
    assert( tmp_tuple_unpack_7__element_2 == NULL );
    tmp_tuple_unpack_7__element_2 = tmp_assign_source_61;

    tmp_unpack_23 = tmp_tuple_unpack_7__source_iter;

    CHECK_OBJECT( tmp_unpack_23 );
    tmp_assign_source_62 = UNPACK_NEXT( tmp_unpack_23, 2, 3 );
    if ( tmp_assign_source_62 == NULL )
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



        exception_lineno = 36;
        goto try_except_handler_15;
    }
    assert( tmp_tuple_unpack_7__element_3 == NULL );
    tmp_tuple_unpack_7__element_3 = tmp_assign_source_62;

    goto try_end_14;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_14;
    // End of try:
    try_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_7__source_iter );
    Py_DECREF( tmp_tuple_unpack_7__source_iter );
    tmp_tuple_unpack_7__source_iter = NULL;

    tmp_assign_source_63 = tmp_tuple_unpack_7__element_1;

    CHECK_OBJECT( tmp_assign_source_63 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_GLOBAL_REQUEST, tmp_assign_source_63 );
    Py_XDECREF( tmp_tuple_unpack_7__element_1 );
    tmp_tuple_unpack_7__element_1 = NULL;

    tmp_assign_source_64 = tmp_tuple_unpack_7__element_2;

    CHECK_OBJECT( tmp_assign_source_64 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_REQUEST_SUCCESS, tmp_assign_source_64 );
    Py_XDECREF( tmp_tuple_unpack_7__element_2 );
    tmp_tuple_unpack_7__element_2 = NULL;

    tmp_assign_source_65 = tmp_tuple_unpack_7__element_3;

    CHECK_OBJECT( tmp_assign_source_65 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_REQUEST_FAILURE, tmp_assign_source_65 );
    Py_XDECREF( tmp_tuple_unpack_7__element_3 );
    tmp_tuple_unpack_7__element_3 = NULL;

    tmp_iter_arg_8 = const_xrange_90_101;
    tmp_assign_source_66 = MAKE_ITERATOR( tmp_iter_arg_8 );
    assert( !(tmp_assign_source_66 == NULL) );
    assert( tmp_tuple_unpack_8__source_iter == NULL );
    tmp_tuple_unpack_8__source_iter = tmp_assign_source_66;

    // Tried code:
    // Tried code:
    tmp_unpack_24 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_24 );
    tmp_assign_source_67 = UNPACK_NEXT( tmp_unpack_24, 0, 11 );
    if ( tmp_assign_source_67 == NULL )
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



        exception_lineno = 37;
        goto try_except_handler_17;
    }
    assert( tmp_tuple_unpack_8__element_1 == NULL );
    tmp_tuple_unpack_8__element_1 = tmp_assign_source_67;

    tmp_unpack_25 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_25 );
    tmp_assign_source_68 = UNPACK_NEXT( tmp_unpack_25, 1, 11 );
    if ( tmp_assign_source_68 == NULL )
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



        exception_lineno = 37;
        goto try_except_handler_17;
    }
    assert( tmp_tuple_unpack_8__element_2 == NULL );
    tmp_tuple_unpack_8__element_2 = tmp_assign_source_68;

    tmp_unpack_26 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_26 );
    tmp_assign_source_69 = UNPACK_NEXT( tmp_unpack_26, 2, 11 );
    if ( tmp_assign_source_69 == NULL )
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



        exception_lineno = 37;
        goto try_except_handler_17;
    }
    assert( tmp_tuple_unpack_8__element_3 == NULL );
    tmp_tuple_unpack_8__element_3 = tmp_assign_source_69;

    tmp_unpack_27 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_27 );
    tmp_assign_source_70 = UNPACK_NEXT( tmp_unpack_27, 3, 11 );
    if ( tmp_assign_source_70 == NULL )
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



        exception_lineno = 37;
        goto try_except_handler_17;
    }
    assert( tmp_tuple_unpack_8__element_4 == NULL );
    tmp_tuple_unpack_8__element_4 = tmp_assign_source_70;

    tmp_unpack_28 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_28 );
    tmp_assign_source_71 = UNPACK_NEXT( tmp_unpack_28, 4, 11 );
    if ( tmp_assign_source_71 == NULL )
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



        exception_lineno = 37;
        goto try_except_handler_17;
    }
    assert( tmp_tuple_unpack_8__element_5 == NULL );
    tmp_tuple_unpack_8__element_5 = tmp_assign_source_71;

    tmp_unpack_29 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_29 );
    tmp_assign_source_72 = UNPACK_NEXT( tmp_unpack_29, 5, 11 );
    if ( tmp_assign_source_72 == NULL )
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



        exception_lineno = 37;
        goto try_except_handler_17;
    }
    assert( tmp_tuple_unpack_8__element_6 == NULL );
    tmp_tuple_unpack_8__element_6 = tmp_assign_source_72;

    tmp_unpack_30 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_30 );
    tmp_assign_source_73 = UNPACK_NEXT( tmp_unpack_30, 6, 11 );
    if ( tmp_assign_source_73 == NULL )
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



        exception_lineno = 37;
        goto try_except_handler_17;
    }
    assert( tmp_tuple_unpack_8__element_7 == NULL );
    tmp_tuple_unpack_8__element_7 = tmp_assign_source_73;

    tmp_unpack_31 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_31 );
    tmp_assign_source_74 = UNPACK_NEXT( tmp_unpack_31, 7, 11 );
    if ( tmp_assign_source_74 == NULL )
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



        exception_lineno = 37;
        goto try_except_handler_17;
    }
    assert( tmp_tuple_unpack_8__element_8 == NULL );
    tmp_tuple_unpack_8__element_8 = tmp_assign_source_74;

    tmp_unpack_32 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_32 );
    tmp_assign_source_75 = UNPACK_NEXT( tmp_unpack_32, 8, 11 );
    if ( tmp_assign_source_75 == NULL )
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



        exception_lineno = 37;
        goto try_except_handler_17;
    }
    assert( tmp_tuple_unpack_8__element_9 == NULL );
    tmp_tuple_unpack_8__element_9 = tmp_assign_source_75;

    tmp_unpack_33 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_33 );
    tmp_assign_source_76 = UNPACK_NEXT( tmp_unpack_33, 9, 11 );
    if ( tmp_assign_source_76 == NULL )
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



        exception_lineno = 37;
        goto try_except_handler_17;
    }
    assert( tmp_tuple_unpack_8__element_10 == NULL );
    tmp_tuple_unpack_8__element_10 = tmp_assign_source_76;

    tmp_unpack_34 = tmp_tuple_unpack_8__source_iter;

    CHECK_OBJECT( tmp_unpack_34 );
    tmp_assign_source_77 = UNPACK_NEXT( tmp_unpack_34, 10, 11 );
    if ( tmp_assign_source_77 == NULL )
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



        exception_lineno = 37;
        goto try_except_handler_17;
    }
    assert( tmp_tuple_unpack_8__element_11 == NULL );
    tmp_tuple_unpack_8__element_11 = tmp_assign_source_77;

    goto try_end_16;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
    Py_DECREF( tmp_tuple_unpack_8__source_iter );
    tmp_tuple_unpack_8__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_16;
    // End of try:
    try_end_16:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_8__element_1 );
    tmp_tuple_unpack_8__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_2 );
    tmp_tuple_unpack_8__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_3 );
    tmp_tuple_unpack_8__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_4 );
    tmp_tuple_unpack_8__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_5 );
    tmp_tuple_unpack_8__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_6 );
    tmp_tuple_unpack_8__element_6 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_7 );
    tmp_tuple_unpack_8__element_7 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_8 );
    tmp_tuple_unpack_8__element_8 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_9 );
    tmp_tuple_unpack_8__element_9 = NULL;

    Py_XDECREF( tmp_tuple_unpack_8__element_10 );
    tmp_tuple_unpack_8__element_10 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_8__source_iter );
    Py_DECREF( tmp_tuple_unpack_8__source_iter );
    tmp_tuple_unpack_8__source_iter = NULL;

    tmp_assign_source_78 = tmp_tuple_unpack_8__element_1;

    CHECK_OBJECT( tmp_assign_source_78 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN, tmp_assign_source_78 );
    Py_XDECREF( tmp_tuple_unpack_8__element_1 );
    tmp_tuple_unpack_8__element_1 = NULL;

    tmp_assign_source_79 = tmp_tuple_unpack_8__element_2;

    CHECK_OBJECT( tmp_assign_source_79 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN_SUCCESS, tmp_assign_source_79 );
    Py_XDECREF( tmp_tuple_unpack_8__element_2 );
    tmp_tuple_unpack_8__element_2 = NULL;

    tmp_assign_source_80 = tmp_tuple_unpack_8__element_3;

    CHECK_OBJECT( tmp_assign_source_80 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN_FAILURE, tmp_assign_source_80 );
    Py_XDECREF( tmp_tuple_unpack_8__element_3 );
    tmp_tuple_unpack_8__element_3 = NULL;

    tmp_assign_source_81 = tmp_tuple_unpack_8__element_4;

    CHECK_OBJECT( tmp_assign_source_81 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_WINDOW_ADJUST, tmp_assign_source_81 );
    Py_XDECREF( tmp_tuple_unpack_8__element_4 );
    tmp_tuple_unpack_8__element_4 = NULL;

    tmp_assign_source_82 = tmp_tuple_unpack_8__element_5;

    CHECK_OBJECT( tmp_assign_source_82 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_DATA, tmp_assign_source_82 );
    Py_XDECREF( tmp_tuple_unpack_8__element_5 );
    tmp_tuple_unpack_8__element_5 = NULL;

    tmp_assign_source_83 = tmp_tuple_unpack_8__element_6;

    CHECK_OBJECT( tmp_assign_source_83 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_EXTENDED_DATA, tmp_assign_source_83 );
    Py_XDECREF( tmp_tuple_unpack_8__element_6 );
    tmp_tuple_unpack_8__element_6 = NULL;

    tmp_assign_source_84 = tmp_tuple_unpack_8__element_7;

    CHECK_OBJECT( tmp_assign_source_84 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_EOF, tmp_assign_source_84 );
    Py_XDECREF( tmp_tuple_unpack_8__element_7 );
    tmp_tuple_unpack_8__element_7 = NULL;

    tmp_assign_source_85 = tmp_tuple_unpack_8__element_8;

    CHECK_OBJECT( tmp_assign_source_85 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_CLOSE, tmp_assign_source_85 );
    Py_XDECREF( tmp_tuple_unpack_8__element_8 );
    tmp_tuple_unpack_8__element_8 = NULL;

    tmp_assign_source_86 = tmp_tuple_unpack_8__element_9;

    CHECK_OBJECT( tmp_assign_source_86 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_REQUEST, tmp_assign_source_86 );
    Py_XDECREF( tmp_tuple_unpack_8__element_9 );
    tmp_tuple_unpack_8__element_9 = NULL;

    tmp_assign_source_87 = tmp_tuple_unpack_8__element_10;

    CHECK_OBJECT( tmp_assign_source_87 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_SUCCESS, tmp_assign_source_87 );
    Py_XDECREF( tmp_tuple_unpack_8__element_10 );
    tmp_tuple_unpack_8__element_10 = NULL;

    tmp_assign_source_88 = tmp_tuple_unpack_8__element_11;

    CHECK_OBJECT( tmp_assign_source_88 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_FAILURE, tmp_assign_source_88 );
    Py_XDECREF( tmp_tuple_unpack_8__element_11 );
    tmp_tuple_unpack_8__element_11 = NULL;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_DISCONNECT );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_DISCONNECT );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_DISCONNECT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_89 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_DISCONNECT, tmp_assign_source_89 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_IGNORE );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_IGNORE );
    }

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_IGNORE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 43;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_90 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_90 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_IGNORE, tmp_assign_source_90 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_UNIMPLEMENTED );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_UNIMPLEMENTED );
    }

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_UNIMPLEMENTED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 44;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_91 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_UNIMPLEMENTED, tmp_assign_source_91 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_DEBUG );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_DEBUG );
    }

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_DEBUG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_92 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_DEBUG, tmp_assign_source_92 );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_SERVICE_REQUEST );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_SERVICE_REQUEST );
    }

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_SERVICE_REQUEST" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 46;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_93 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_SERVICE_REQUEST, tmp_assign_source_93 );
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_SERVICE_ACCEPT );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_SERVICE_ACCEPT );
    }

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_SERVICE_ACCEPT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_94 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_94 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_SERVICE_ACCEPT, tmp_assign_source_94 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_KEXINIT );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_KEXINIT );
    }

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_KEXINIT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_95 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_95 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_KEXINIT, tmp_assign_source_95 );
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_NEWKEYS );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_NEWKEYS );
    }

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_NEWKEYS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 49;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_96 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_assign_source_96 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_NEWKEYS, tmp_assign_source_96 );
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_REQUEST );

    if (unlikely( tmp_args_element_name_9 == NULL ))
    {
        tmp_args_element_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_REQUEST );
    }

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_REQUEST" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_97 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    if ( tmp_assign_source_97 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_USERAUTH_REQUEST, tmp_assign_source_97 );
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_FAILURE );

    if (unlikely( tmp_args_element_name_10 == NULL ))
    {
        tmp_args_element_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_FAILURE );
    }

    if ( tmp_args_element_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_FAILURE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_98 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_USERAUTH_FAILURE, tmp_assign_source_98 );
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_SUCCESS );

    if (unlikely( tmp_args_element_name_11 == NULL ))
    {
        tmp_args_element_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_SUCCESS );
    }

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_SUCCESS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_99 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    if ( tmp_assign_source_99 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_USERAUTH_SUCCESS, tmp_assign_source_99 );
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_BANNER );

    if (unlikely( tmp_args_element_name_12 == NULL ))
    {
        tmp_args_element_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_BANNER );
    }

    if ( tmp_args_element_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_BANNER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assign_source_100 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_USERAUTH_BANNER, tmp_assign_source_100 );
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_PK_OK );

    if (unlikely( tmp_args_element_name_13 == NULL ))
    {
        tmp_args_element_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_PK_OK );
    }

    if ( tmp_args_element_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_PK_OK" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assign_source_101 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    if ( tmp_assign_source_101 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_USERAUTH_PK_OK, tmp_assign_source_101 );
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_INFO_REQUEST );

    if (unlikely( tmp_args_element_name_14 == NULL ))
    {
        tmp_args_element_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_INFO_REQUEST );
    }

    if ( tmp_args_element_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_INFO_REQUEST" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_assign_source_102 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    if ( tmp_assign_source_102 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_USERAUTH_INFO_REQUEST, tmp_assign_source_102 );
    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_INFO_RESPONSE );

    if (unlikely( tmp_args_element_name_15 == NULL ))
    {
        tmp_args_element_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_INFO_RESPONSE );
    }

    if ( tmp_args_element_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_INFO_RESPONSE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_assign_source_103 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    if ( tmp_assign_source_103 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_USERAUTH_INFO_RESPONSE, tmp_assign_source_103 );
    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_16 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_RESPONSE );

    if (unlikely( tmp_args_element_name_16 == NULL ))
    {
        tmp_args_element_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_RESPONSE );
    }

    if ( tmp_args_element_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_GSSAPI_RESPONSE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_assign_source_104 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    if ( tmp_assign_source_104 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_USERAUTH_GSSAPI_RESPONSE, tmp_assign_source_104 );
    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_17 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_TOKEN );

    if (unlikely( tmp_args_element_name_17 == NULL ))
    {
        tmp_args_element_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_TOKEN );
    }

    if ( tmp_args_element_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_GSSAPI_TOKEN" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_assign_source_105 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    if ( tmp_assign_source_105 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_USERAUTH_GSSAPI_TOKEN, tmp_assign_source_105 );
    tmp_called_name_18 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_18 == NULL ))
    {
        tmp_called_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_18 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_EXCHANGE_COMPLETE );

    if (unlikely( tmp_args_element_name_18 == NULL ))
    {
        tmp_args_element_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_EXCHANGE_COMPLETE );
    }

    if ( tmp_args_element_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_GSSAPI_EXCHANGE_COMPLETE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_assign_source_106 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    if ( tmp_assign_source_106 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_USERAUTH_GSSAPI_EXCHANGE_COMPLETE, tmp_assign_source_106 );
    tmp_called_name_19 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_19 == NULL ))
    {
        tmp_called_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_19 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_ERROR );

    if (unlikely( tmp_args_element_name_19 == NULL ))
    {
        tmp_args_element_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_ERROR );
    }

    if ( tmp_args_element_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_GSSAPI_ERROR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_assign_source_107 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    if ( tmp_assign_source_107 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_USERAUTH_GSSAPI_ERROR, tmp_assign_source_107 );
    tmp_called_name_20 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_20 == NULL ))
    {
        tmp_called_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_20 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_ERRTOK );

    if (unlikely( tmp_args_element_name_20 == NULL ))
    {
        tmp_args_element_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_ERRTOK );
    }

    if ( tmp_args_element_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_GSSAPI_ERRTOK" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_assign_source_108 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    if ( tmp_assign_source_108 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_USERAUTH_GSSAPI_ERRTOK, tmp_assign_source_108 );
    tmp_called_name_21 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_21 == NULL ))
    {
        tmp_called_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_21 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_MIC );

    if (unlikely( tmp_args_element_name_21 == NULL ))
    {
        tmp_args_element_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_MIC );
    }

    if ( tmp_args_element_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_GSSAPI_MIC" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 63;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_assign_source_109 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    if ( tmp_assign_source_109 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_USERAUTH_GSSAPI_MIC, tmp_assign_source_109 );
    tmp_called_name_22 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_22 == NULL ))
    {
        tmp_called_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_22 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_GLOBAL_REQUEST );

    if (unlikely( tmp_args_element_name_22 == NULL ))
    {
        tmp_args_element_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_GLOBAL_REQUEST );
    }

    if ( tmp_args_element_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_GLOBAL_REQUEST" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_assign_source_110 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    if ( tmp_assign_source_110 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_GLOBAL_REQUEST, tmp_assign_source_110 );
    tmp_called_name_23 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_23 == NULL ))
    {
        tmp_called_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_23 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_REQUEST_SUCCESS );

    if (unlikely( tmp_args_element_name_23 == NULL ))
    {
        tmp_args_element_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_REQUEST_SUCCESS );
    }

    if ( tmp_args_element_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_REQUEST_SUCCESS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_assign_source_111 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    if ( tmp_assign_source_111 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_REQUEST_SUCCESS, tmp_assign_source_111 );
    tmp_called_name_24 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_24 == NULL ))
    {
        tmp_called_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_24 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_REQUEST_FAILURE );

    if (unlikely( tmp_args_element_name_24 == NULL ))
    {
        tmp_args_element_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_REQUEST_FAILURE );
    }

    if ( tmp_args_element_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_REQUEST_FAILURE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 66;
    {
        PyObject *call_args[] = { tmp_args_element_name_24 };
        tmp_assign_source_112 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_REQUEST_FAILURE, tmp_assign_source_112 );
    tmp_called_name_25 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_25 == NULL ))
    {
        tmp_called_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_25 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN );

    if (unlikely( tmp_args_element_name_25 == NULL ))
    {
        tmp_args_element_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN );
    }

    if ( tmp_args_element_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_OPEN" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_assign_source_113 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
    }

    if ( tmp_assign_source_113 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_CHANNEL_OPEN, tmp_assign_source_113 );
    tmp_called_name_26 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_26 == NULL ))
    {
        tmp_called_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_26 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN_SUCCESS );

    if (unlikely( tmp_args_element_name_26 == NULL ))
    {
        tmp_args_element_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN_SUCCESS );
    }

    if ( tmp_args_element_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_OPEN_SUCCESS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_26 };
        tmp_assign_source_114 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    if ( tmp_assign_source_114 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_CHANNEL_OPEN_SUCCESS, tmp_assign_source_114 );
    tmp_called_name_27 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_27 == NULL ))
    {
        tmp_called_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_27 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN_FAILURE );

    if (unlikely( tmp_args_element_name_27 == NULL ))
    {
        tmp_args_element_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN_FAILURE );
    }

    if ( tmp_args_element_name_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_OPEN_FAILURE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_assign_source_115 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_CHANNEL_OPEN_FAILURE, tmp_assign_source_115 );
    tmp_called_name_28 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_28 == NULL ))
    {
        tmp_called_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_28 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_WINDOW_ADJUST );

    if (unlikely( tmp_args_element_name_28 == NULL ))
    {
        tmp_args_element_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_WINDOW_ADJUST );
    }

    if ( tmp_args_element_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_WINDOW_ADJUST" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_assign_source_116 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
    }

    if ( tmp_assign_source_116 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_CHANNEL_WINDOW_ADJUST, tmp_assign_source_116 );
    tmp_called_name_29 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_29 == NULL ))
    {
        tmp_called_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_29 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_DATA );

    if (unlikely( tmp_args_element_name_29 == NULL ))
    {
        tmp_args_element_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_DATA );
    }

    if ( tmp_args_element_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_DATA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_assign_source_117 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
    }

    if ( tmp_assign_source_117 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_CHANNEL_DATA, tmp_assign_source_117 );
    tmp_called_name_30 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_30 == NULL ))
    {
        tmp_called_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_30 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_EXTENDED_DATA );

    if (unlikely( tmp_args_element_name_30 == NULL ))
    {
        tmp_args_element_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_EXTENDED_DATA );
    }

    if ( tmp_args_element_name_30 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_EXTENDED_DATA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_assign_source_118 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    if ( tmp_assign_source_118 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_CHANNEL_EXTENDED_DATA, tmp_assign_source_118 );
    tmp_called_name_31 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_31 == NULL ))
    {
        tmp_called_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_31 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_EOF );

    if (unlikely( tmp_args_element_name_31 == NULL ))
    {
        tmp_args_element_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_EOF );
    }

    if ( tmp_args_element_name_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_EOF" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_31 };
        tmp_assign_source_119 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
    }

    if ( tmp_assign_source_119 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_CHANNEL_EOF, tmp_assign_source_119 );
    tmp_called_name_32 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_32 == NULL ))
    {
        tmp_called_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_32 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_32 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_CLOSE );

    if (unlikely( tmp_args_element_name_32 == NULL ))
    {
        tmp_args_element_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_CLOSE );
    }

    if ( tmp_args_element_name_32 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_CLOSE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_32 };
        tmp_assign_source_120 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
    }

    if ( tmp_assign_source_120 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_CHANNEL_CLOSE, tmp_assign_source_120 );
    tmp_called_name_33 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_33 == NULL ))
    {
        tmp_called_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_33 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_REQUEST );

    if (unlikely( tmp_args_element_name_33 == NULL ))
    {
        tmp_args_element_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_REQUEST );
    }

    if ( tmp_args_element_name_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_REQUEST" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_33 };
        tmp_assign_source_121 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, call_args );
    }

    if ( tmp_assign_source_121 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_CHANNEL_REQUEST, tmp_assign_source_121 );
    tmp_called_name_34 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_34 == NULL ))
    {
        tmp_called_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_34 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_34 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_SUCCESS );

    if (unlikely( tmp_args_element_name_34 == NULL ))
    {
        tmp_args_element_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_SUCCESS );
    }

    if ( tmp_args_element_name_34 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_SUCCESS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_34 };
        tmp_assign_source_122 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
    }

    if ( tmp_assign_source_122 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_CHANNEL_SUCCESS, tmp_assign_source_122 );
    tmp_called_name_35 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_35 == NULL ))
    {
        tmp_called_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_35 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_FAILURE );

    if (unlikely( tmp_args_element_name_35 == NULL ))
    {
        tmp_args_element_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_FAILURE );
    }

    if ( tmp_args_element_name_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_FAILURE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_assign_source_123 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, call_args );
    }

    if ( tmp_assign_source_123 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cMSG_CHANNEL_FAILURE, tmp_assign_source_123 );
    tmp_dict_key_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_DISCONNECT );

    if (unlikely( tmp_dict_key_1 == NULL ))
    {
        tmp_dict_key_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_DISCONNECT );
    }

    if ( tmp_dict_key_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_DISCONNECT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = const_str_plain_disconnect;
    tmp_assign_source_124 = _PyDict_NewPresized( 41 );
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_1, tmp_dict_value_1 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_IGNORE );

    if (unlikely( tmp_dict_key_2 == NULL ))
    {
        tmp_dict_key_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_IGNORE );
    }

    if ( tmp_dict_key_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_IGNORE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = const_str_plain_ignore;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_2, tmp_dict_value_2 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_UNIMPLEMENTED );

    if (unlikely( tmp_dict_key_3 == NULL ))
    {
        tmp_dict_key_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_UNIMPLEMENTED );
    }

    if ( tmp_dict_key_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_UNIMPLEMENTED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = const_str_plain_unimplemented;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_3, tmp_dict_value_3 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_DEBUG );

    if (unlikely( tmp_dict_key_4 == NULL ))
    {
        tmp_dict_key_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_DEBUG );
    }

    if ( tmp_dict_key_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_DEBUG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = const_str_plain_debug;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_4, tmp_dict_value_4 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_SERVICE_REQUEST );

    if (unlikely( tmp_dict_key_5 == NULL ))
    {
        tmp_dict_key_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_SERVICE_REQUEST );
    }

    if ( tmp_dict_key_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_SERVICE_REQUEST" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = const_str_digest_47d53fda6c78160bf7883d2da1ef9903;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_5, tmp_dict_value_5 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_6 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_SERVICE_ACCEPT );

    if (unlikely( tmp_dict_key_6 == NULL ))
    {
        tmp_dict_key_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_SERVICE_ACCEPT );
    }

    if ( tmp_dict_key_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_SERVICE_ACCEPT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_6 = const_str_digest_ae40cf39c81d3d83a722eef6e4efaeac;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_6, tmp_dict_value_6 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_KEXINIT );

    if (unlikely( tmp_dict_key_7 == NULL ))
    {
        tmp_dict_key_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_KEXINIT );
    }

    if ( tmp_dict_key_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_KEXINIT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_7 = const_str_plain_kexinit;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_7, tmp_dict_value_7 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_NEWKEYS );

    if (unlikely( tmp_dict_key_8 == NULL ))
    {
        tmp_dict_key_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_NEWKEYS );
    }

    if ( tmp_dict_key_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_NEWKEYS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_8 = const_str_plain_newkeys;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_8, tmp_dict_value_8 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_9 = const_int_pos_30;
    tmp_dict_value_9 = const_str_plain_kex30;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_10 = const_int_pos_31;
    tmp_dict_value_10 = const_str_plain_kex31;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_11 = const_int_pos_32;
    tmp_dict_value_11 = const_str_plain_kex32;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_12 = const_int_pos_33;
    tmp_dict_value_12 = const_str_plain_kex33;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_13 = const_int_pos_34;
    tmp_dict_value_13 = const_str_plain_kex34;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_14 = const_int_pos_40;
    tmp_dict_value_14 = const_str_plain_kex40;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_15 = const_int_pos_41;
    tmp_dict_value_15 = const_str_plain_kex41;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_16 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_REQUEST );

    if (unlikely( tmp_dict_key_16 == NULL ))
    {
        tmp_dict_key_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_REQUEST );
    }

    if ( tmp_dict_key_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_REQUEST" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_16 = const_str_digest_89f59c81e279de6acf2cfd7c12641ccb;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_16, tmp_dict_value_16 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_17 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_FAILURE );

    if (unlikely( tmp_dict_key_17 == NULL ))
    {
        tmp_dict_key_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_FAILURE );
    }

    if ( tmp_dict_key_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_FAILURE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_17 = const_str_digest_b0c0e3641044f6ffff36bfcc66ac116c;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_17, tmp_dict_value_17 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_18 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_SUCCESS );

    if (unlikely( tmp_dict_key_18 == NULL ))
    {
        tmp_dict_key_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_SUCCESS );
    }

    if ( tmp_dict_key_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_SUCCESS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_18 = const_str_digest_029bf3fa99f6dc75225e710ad4a34730;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_18, tmp_dict_value_18 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_19 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_BANNER );

    if (unlikely( tmp_dict_key_19 == NULL ))
    {
        tmp_dict_key_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_BANNER );
    }

    if ( tmp_dict_key_19 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_BANNER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_19 = const_str_digest_1172898702a8748e00ee868b40c129c2;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_19, tmp_dict_value_19 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_20 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_PK_OK );

    if (unlikely( tmp_dict_key_20 == NULL ))
    {
        tmp_dict_key_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_PK_OK );
    }

    if ( tmp_dict_key_20 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_PK_OK" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_20 = const_str_digest_4438805fe250c57093cee33c5c242db0;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_20, tmp_dict_value_20 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_21 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_INFO_RESPONSE );

    if (unlikely( tmp_dict_key_21 == NULL ))
    {
        tmp_dict_key_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_INFO_RESPONSE );
    }

    if ( tmp_dict_key_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_INFO_RESPONSE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_21 = const_str_digest_2f7a36184dad983441341840fa2953cc;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_21, tmp_dict_value_21 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_22 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_GLOBAL_REQUEST );

    if (unlikely( tmp_dict_key_22 == NULL ))
    {
        tmp_dict_key_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_GLOBAL_REQUEST );
    }

    if ( tmp_dict_key_22 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_GLOBAL_REQUEST" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_22 = const_str_digest_6270d2d12dded7ba3077409d411787e0;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_22, tmp_dict_value_22 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_23 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_REQUEST_SUCCESS );

    if (unlikely( tmp_dict_key_23 == NULL ))
    {
        tmp_dict_key_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_REQUEST_SUCCESS );
    }

    if ( tmp_dict_key_23 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_REQUEST_SUCCESS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_23 = const_str_digest_cc65e74350041e6fd75c282555bd10cd;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_23, tmp_dict_value_23 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_24 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_REQUEST_FAILURE );

    if (unlikely( tmp_dict_key_24 == NULL ))
    {
        tmp_dict_key_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_REQUEST_FAILURE );
    }

    if ( tmp_dict_key_24 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_REQUEST_FAILURE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_24 = const_str_digest_35acc9a5233b09d0dad38f7447e5e9f3;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_24, tmp_dict_value_24 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_25 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN );

    if (unlikely( tmp_dict_key_25 == NULL ))
    {
        tmp_dict_key_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN );
    }

    if ( tmp_dict_key_25 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_OPEN" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_25 = const_str_digest_b633102eb5c83343df21466439e32497;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_25, tmp_dict_value_25 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_26 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN_SUCCESS );

    if (unlikely( tmp_dict_key_26 == NULL ))
    {
        tmp_dict_key_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN_SUCCESS );
    }

    if ( tmp_dict_key_26 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_OPEN_SUCCESS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_26 = const_str_digest_0e2e9649fa6b73827d6f4cc17912f17c;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_26, tmp_dict_value_26 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_27 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN_FAILURE );

    if (unlikely( tmp_dict_key_27 == NULL ))
    {
        tmp_dict_key_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_OPEN_FAILURE );
    }

    if ( tmp_dict_key_27 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_OPEN_FAILURE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_27 = const_str_digest_591947d6e6a0c90b66f0f033a15ccf73;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_27, tmp_dict_value_27 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_28 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_WINDOW_ADJUST );

    if (unlikely( tmp_dict_key_28 == NULL ))
    {
        tmp_dict_key_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_WINDOW_ADJUST );
    }

    if ( tmp_dict_key_28 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_WINDOW_ADJUST" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_28 = const_str_digest_419c2393b317612e83e0979cc66d01ca;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_28, tmp_dict_value_28 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_29 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_DATA );

    if (unlikely( tmp_dict_key_29 == NULL ))
    {
        tmp_dict_key_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_DATA );
    }

    if ( tmp_dict_key_29 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_DATA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_29 = const_str_digest_8a7bf1168e04a88c17b45075b95f1b8f;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_29, tmp_dict_value_29 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_30 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_EXTENDED_DATA );

    if (unlikely( tmp_dict_key_30 == NULL ))
    {
        tmp_dict_key_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_EXTENDED_DATA );
    }

    if ( tmp_dict_key_30 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_EXTENDED_DATA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_30 = const_str_digest_bd1ddce9e2766dcf5a0698eb48f8d831;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_30, tmp_dict_value_30 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_31 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_EOF );

    if (unlikely( tmp_dict_key_31 == NULL ))
    {
        tmp_dict_key_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_EOF );
    }

    if ( tmp_dict_key_31 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_EOF" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_31 = const_str_digest_a73b2de1245b9e98f5999bcc5574dc9a;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_31, tmp_dict_value_31 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_32 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_CLOSE );

    if (unlikely( tmp_dict_key_32 == NULL ))
    {
        tmp_dict_key_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_CLOSE );
    }

    if ( tmp_dict_key_32 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_CLOSE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_32 = const_str_digest_2ca203a96a185861f409ff2a667ac4b2;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_32, tmp_dict_value_32 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_33 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_REQUEST );

    if (unlikely( tmp_dict_key_33 == NULL ))
    {
        tmp_dict_key_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_REQUEST );
    }

    if ( tmp_dict_key_33 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_REQUEST" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_33 = const_str_digest_52d3fd085b8e0f7759387d21d761d6dd;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_33, tmp_dict_value_33 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_34 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_SUCCESS );

    if (unlikely( tmp_dict_key_34 == NULL ))
    {
        tmp_dict_key_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_SUCCESS );
    }

    if ( tmp_dict_key_34 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_SUCCESS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_34 = const_str_digest_46ed528cce86c8ef57e6fcd759f69eb6;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_34, tmp_dict_value_34 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_35 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_FAILURE );

    if (unlikely( tmp_dict_key_35 == NULL ))
    {
        tmp_dict_key_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_CHANNEL_FAILURE );
    }

    if ( tmp_dict_key_35 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_CHANNEL_FAILURE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_35 = const_str_digest_071421bf01a6e9ffe85977ab8327d579;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_35, tmp_dict_value_35 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_36 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_RESPONSE );

    if (unlikely( tmp_dict_key_36 == NULL ))
    {
        tmp_dict_key_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_RESPONSE );
    }

    if ( tmp_dict_key_36 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_GSSAPI_RESPONSE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_36 = const_str_digest_b1735d9d474334b4fe16983aa16ede5a;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_36, tmp_dict_value_36 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_37 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_TOKEN );

    if (unlikely( tmp_dict_key_37 == NULL ))
    {
        tmp_dict_key_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_TOKEN );
    }

    if ( tmp_dict_key_37 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_GSSAPI_TOKEN" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_37 = const_str_digest_3cc365e1850246564ad009c5ecfd6d2b;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_37, tmp_dict_value_37 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_38 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_EXCHANGE_COMPLETE );

    if (unlikely( tmp_dict_key_38 == NULL ))
    {
        tmp_dict_key_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_EXCHANGE_COMPLETE );
    }

    if ( tmp_dict_key_38 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_GSSAPI_EXCHANGE_COMPLETE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_38 = const_str_digest_929abd662134ab2aae9a180d295883cd;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_38, tmp_dict_value_38 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_39 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_ERROR );

    if (unlikely( tmp_dict_key_39 == NULL ))
    {
        tmp_dict_key_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_ERROR );
    }

    if ( tmp_dict_key_39 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_GSSAPI_ERROR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_39 = const_str_digest_c2494a4dfb4ec690cc4dd4c32567b2c5;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_39, tmp_dict_value_39 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_40 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_ERRTOK );

    if (unlikely( tmp_dict_key_40 == NULL ))
    {
        tmp_dict_key_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_ERRTOK );
    }

    if ( tmp_dict_key_40 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_GSSAPI_ERRTOK" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_40 = const_str_digest_03e84f6126af9fe22524801baf0d033a;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_40, tmp_dict_value_40 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_41 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_MIC );

    if (unlikely( tmp_dict_key_41 == NULL ))
    {
        tmp_dict_key_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG_USERAUTH_GSSAPI_MIC );
    }

    if ( tmp_dict_key_41 == NULL )
    {
        Py_DECREF( tmp_assign_source_124 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG_USERAUTH_GSSAPI_MIC" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_41 = const_str_digest_8febd38d27015f3d41c300556b2ed9a7;
    tmp_res = PyDict_SetItem( tmp_assign_source_124, tmp_dict_key_41, tmp_dict_value_41 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_124 );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MSG_NAMES, tmp_assign_source_124 );
    tmp_iter_arg_9 = const_xrange_0_3;
    tmp_assign_source_125 = MAKE_ITERATOR( tmp_iter_arg_9 );
    assert( !(tmp_assign_source_125 == NULL) );
    assert( tmp_tuple_unpack_9__source_iter == NULL );
    tmp_tuple_unpack_9__source_iter = tmp_assign_source_125;

    // Tried code:
    // Tried code:
    tmp_unpack_35 = tmp_tuple_unpack_9__source_iter;

    CHECK_OBJECT( tmp_unpack_35 );
    tmp_assign_source_126 = UNPACK_NEXT( tmp_unpack_35, 0, 3 );
    if ( tmp_assign_source_126 == NULL )
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



        exception_lineno = 126;
        goto try_except_handler_19;
    }
    assert( tmp_tuple_unpack_9__element_1 == NULL );
    tmp_tuple_unpack_9__element_1 = tmp_assign_source_126;

    tmp_unpack_36 = tmp_tuple_unpack_9__source_iter;

    CHECK_OBJECT( tmp_unpack_36 );
    tmp_assign_source_127 = UNPACK_NEXT( tmp_unpack_36, 1, 3 );
    if ( tmp_assign_source_127 == NULL )
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



        exception_lineno = 126;
        goto try_except_handler_19;
    }
    assert( tmp_tuple_unpack_9__element_2 == NULL );
    tmp_tuple_unpack_9__element_2 = tmp_assign_source_127;

    tmp_unpack_37 = tmp_tuple_unpack_9__source_iter;

    CHECK_OBJECT( tmp_unpack_37 );
    tmp_assign_source_128 = UNPACK_NEXT( tmp_unpack_37, 2, 3 );
    if ( tmp_assign_source_128 == NULL )
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



        exception_lineno = 126;
        goto try_except_handler_19;
    }
    assert( tmp_tuple_unpack_9__element_3 == NULL );
    tmp_tuple_unpack_9__element_3 = tmp_assign_source_128;

    goto try_end_18;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_9__source_iter );
    Py_DECREF( tmp_tuple_unpack_9__source_iter );
    tmp_tuple_unpack_9__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_18;
    // End of try:
    try_end_18:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_9__element_1 );
    tmp_tuple_unpack_9__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_9__element_2 );
    tmp_tuple_unpack_9__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_9__source_iter );
    Py_DECREF( tmp_tuple_unpack_9__source_iter );
    tmp_tuple_unpack_9__source_iter = NULL;

    tmp_assign_source_129 = tmp_tuple_unpack_9__element_1;

    CHECK_OBJECT( tmp_assign_source_129 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_AUTH_SUCCESSFUL, tmp_assign_source_129 );
    Py_XDECREF( tmp_tuple_unpack_9__element_1 );
    tmp_tuple_unpack_9__element_1 = NULL;

    tmp_assign_source_130 = tmp_tuple_unpack_9__element_2;

    CHECK_OBJECT( tmp_assign_source_130 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_AUTH_PARTIALLY_SUCCESSFUL, tmp_assign_source_130 );
    Py_XDECREF( tmp_tuple_unpack_9__element_2 );
    tmp_tuple_unpack_9__element_2 = NULL;

    tmp_assign_source_131 = tmp_tuple_unpack_9__element_3;

    CHECK_OBJECT( tmp_assign_source_131 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED, tmp_assign_source_131 );
    Py_XDECREF( tmp_tuple_unpack_9__element_3 );
    tmp_tuple_unpack_9__element_3 = NULL;

    tmp_iter_arg_10 = const_xrange_0_5;
    tmp_assign_source_132 = MAKE_ITERATOR( tmp_iter_arg_10 );
    assert( !(tmp_assign_source_132 == NULL) );
    assert( tmp_tuple_unpack_10__source_iter == NULL );
    tmp_tuple_unpack_10__source_iter = tmp_assign_source_132;

    // Tried code:
    // Tried code:
    tmp_unpack_38 = tmp_tuple_unpack_10__source_iter;

    CHECK_OBJECT( tmp_unpack_38 );
    tmp_assign_source_133 = UNPACK_NEXT( tmp_unpack_38, 0, 5 );
    if ( tmp_assign_source_133 == NULL )
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



        exception_lineno = 130;
        goto try_except_handler_21;
    }
    assert( tmp_tuple_unpack_10__element_1 == NULL );
    tmp_tuple_unpack_10__element_1 = tmp_assign_source_133;

    tmp_unpack_39 = tmp_tuple_unpack_10__source_iter;

    CHECK_OBJECT( tmp_unpack_39 );
    tmp_assign_source_134 = UNPACK_NEXT( tmp_unpack_39, 1, 5 );
    if ( tmp_assign_source_134 == NULL )
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



        exception_lineno = 130;
        goto try_except_handler_21;
    }
    assert( tmp_tuple_unpack_10__element_2 == NULL );
    tmp_tuple_unpack_10__element_2 = tmp_assign_source_134;

    tmp_unpack_40 = tmp_tuple_unpack_10__source_iter;

    CHECK_OBJECT( tmp_unpack_40 );
    tmp_assign_source_135 = UNPACK_NEXT( tmp_unpack_40, 2, 5 );
    if ( tmp_assign_source_135 == NULL )
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



        exception_lineno = 130;
        goto try_except_handler_21;
    }
    assert( tmp_tuple_unpack_10__element_3 == NULL );
    tmp_tuple_unpack_10__element_3 = tmp_assign_source_135;

    tmp_unpack_41 = tmp_tuple_unpack_10__source_iter;

    CHECK_OBJECT( tmp_unpack_41 );
    tmp_assign_source_136 = UNPACK_NEXT( tmp_unpack_41, 3, 5 );
    if ( tmp_assign_source_136 == NULL )
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



        exception_lineno = 130;
        goto try_except_handler_21;
    }
    assert( tmp_tuple_unpack_10__element_4 == NULL );
    tmp_tuple_unpack_10__element_4 = tmp_assign_source_136;

    tmp_unpack_42 = tmp_tuple_unpack_10__source_iter;

    CHECK_OBJECT( tmp_unpack_42 );
    tmp_assign_source_137 = UNPACK_NEXT( tmp_unpack_42, 4, 5 );
    if ( tmp_assign_source_137 == NULL )
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



        exception_lineno = 130;
        goto try_except_handler_21;
    }
    assert( tmp_tuple_unpack_10__element_5 == NULL );
    tmp_tuple_unpack_10__element_5 = tmp_assign_source_137;

    goto try_end_20;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_10__source_iter );
    Py_DECREF( tmp_tuple_unpack_10__source_iter );
    tmp_tuple_unpack_10__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_20;
    // End of try:
    try_end_20:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_10__element_1 );
    tmp_tuple_unpack_10__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_10__element_2 );
    tmp_tuple_unpack_10__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_10__element_3 );
    tmp_tuple_unpack_10__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_10__element_4 );
    tmp_tuple_unpack_10__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_10__source_iter );
    Py_DECREF( tmp_tuple_unpack_10__source_iter );
    tmp_tuple_unpack_10__source_iter = NULL;

    tmp_assign_source_138 = tmp_tuple_unpack_10__element_1;

    CHECK_OBJECT( tmp_assign_source_138 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_OPEN_SUCCEEDED, tmp_assign_source_138 );
    Py_XDECREF( tmp_tuple_unpack_10__element_1 );
    tmp_tuple_unpack_10__element_1 = NULL;

    tmp_assign_source_139 = tmp_tuple_unpack_10__element_2;

    CHECK_OBJECT( tmp_assign_source_139 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED, tmp_assign_source_139 );
    Py_XDECREF( tmp_tuple_unpack_10__element_2 );
    tmp_tuple_unpack_10__element_2 = NULL;

    tmp_assign_source_140 = tmp_tuple_unpack_10__element_3;

    CHECK_OBJECT( tmp_assign_source_140 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_OPEN_FAILED_CONNECT_FAILED, tmp_assign_source_140 );
    Py_XDECREF( tmp_tuple_unpack_10__element_3 );
    tmp_tuple_unpack_10__element_3 = NULL;

    tmp_assign_source_141 = tmp_tuple_unpack_10__element_4;

    CHECK_OBJECT( tmp_assign_source_141 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_OPEN_FAILED_UNKNOWN_CHANNEL_TYPE, tmp_assign_source_141 );
    Py_XDECREF( tmp_tuple_unpack_10__element_4 );
    tmp_tuple_unpack_10__element_4 = NULL;

    tmp_assign_source_142 = tmp_tuple_unpack_10__element_5;

    CHECK_OBJECT( tmp_assign_source_142 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_OPEN_FAILED_RESOURCE_SHORTAGE, tmp_assign_source_142 );
    Py_XDECREF( tmp_tuple_unpack_10__element_5 );
    tmp_tuple_unpack_10__element_5 = NULL;

    tmp_assign_source_143 = PyDict_Copy( const_dict_2f3feb38cf4698993fe350df5eafa43b );
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_CONNECTION_FAILED_CODE, tmp_assign_source_143 );
    tmp_iter_arg_11 = const_tuple_int_pos_7_int_pos_13_int_pos_14_tuple;
    tmp_assign_source_144 = MAKE_ITERATOR( tmp_iter_arg_11 );
    assert( !(tmp_assign_source_144 == NULL) );
    assert( tmp_tuple_unpack_11__source_iter == NULL );
    tmp_tuple_unpack_11__source_iter = tmp_assign_source_144;

    // Tried code:
    // Tried code:
    tmp_unpack_43 = tmp_tuple_unpack_11__source_iter;

    CHECK_OBJECT( tmp_unpack_43 );
    tmp_assign_source_145 = UNPACK_NEXT( tmp_unpack_43, 0, 3 );
    if ( tmp_assign_source_145 == NULL )
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



        exception_lineno = 145;
        goto try_except_handler_23;
    }
    assert( tmp_tuple_unpack_11__element_1 == NULL );
    tmp_tuple_unpack_11__element_1 = tmp_assign_source_145;

    tmp_unpack_44 = tmp_tuple_unpack_11__source_iter;

    CHECK_OBJECT( tmp_unpack_44 );
    tmp_assign_source_146 = UNPACK_NEXT( tmp_unpack_44, 1, 3 );
    if ( tmp_assign_source_146 == NULL )
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



        exception_lineno = 145;
        goto try_except_handler_23;
    }
    assert( tmp_tuple_unpack_11__element_2 == NULL );
    tmp_tuple_unpack_11__element_2 = tmp_assign_source_146;

    tmp_unpack_45 = tmp_tuple_unpack_11__source_iter;

    CHECK_OBJECT( tmp_unpack_45 );
    tmp_assign_source_147 = UNPACK_NEXT( tmp_unpack_45, 2, 3 );
    if ( tmp_assign_source_147 == NULL )
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



        exception_lineno = 145;
        goto try_except_handler_23;
    }
    assert( tmp_tuple_unpack_11__element_3 == NULL );
    tmp_tuple_unpack_11__element_3 = tmp_assign_source_147;

    goto try_end_22;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_11__source_iter );
    Py_DECREF( tmp_tuple_unpack_11__source_iter );
    tmp_tuple_unpack_11__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_22;
    // End of try:
    try_end_22:;
    goto try_end_23;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_11__element_1 );
    tmp_tuple_unpack_11__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_11__element_2 );
    tmp_tuple_unpack_11__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_11__source_iter );
    Py_DECREF( tmp_tuple_unpack_11__source_iter );
    tmp_tuple_unpack_11__source_iter = NULL;

    tmp_assign_source_148 = tmp_tuple_unpack_11__element_1;

    CHECK_OBJECT( tmp_assign_source_148 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_DISCONNECT_SERVICE_NOT_AVAILABLE, tmp_assign_source_148 );
    Py_XDECREF( tmp_tuple_unpack_11__element_1 );
    tmp_tuple_unpack_11__element_1 = NULL;

    tmp_assign_source_149 = tmp_tuple_unpack_11__element_2;

    CHECK_OBJECT( tmp_assign_source_149 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_DISCONNECT_AUTH_CANCELLED_BY_USER, tmp_assign_source_149 );
    Py_XDECREF( tmp_tuple_unpack_11__element_2 );
    tmp_tuple_unpack_11__element_2 = NULL;

    tmp_assign_source_150 = tmp_tuple_unpack_11__element_3;

    CHECK_OBJECT( tmp_assign_source_150 );
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_digest_9a8c6cc831c838e9290e530598427e4a, tmp_assign_source_150 );
    Py_XDECREF( tmp_tuple_unpack_11__element_3 );
    tmp_tuple_unpack_11__element_3 = NULL;

    tmp_called_name_36 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_36 == NULL ))
    {
        tmp_called_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_36 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 148;
    tmp_assign_source_151 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    if ( tmp_assign_source_151 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_zero_byte, tmp_assign_source_151 );
    tmp_called_name_37 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_37 == NULL ))
    {
        tmp_called_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_37 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 149;
    tmp_assign_source_152 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    if ( tmp_assign_source_152 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_one_byte, tmp_assign_source_152 );
    tmp_called_name_38 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_38 == NULL ))
    {
        tmp_called_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_38 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 150;
    tmp_assign_source_153 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

    if ( tmp_assign_source_153 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_four_byte, tmp_assign_source_153 );
    tmp_called_name_39 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_39 == NULL ))
    {
        tmp_called_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_39 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 151;
    tmp_assign_source_154 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_39, &PyTuple_GET_ITEM( const_tuple_int_pos_255_tuple, 0 ) );

    if ( tmp_assign_source_154 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_max_byte, tmp_assign_source_154 );
    tmp_called_name_40 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_40 == NULL ))
    {
        tmp_called_name_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_40 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 152;
    tmp_assign_source_155 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_40, &PyTuple_GET_ITEM( const_tuple_int_pos_13_tuple, 0 ) );

    if ( tmp_assign_source_155 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cr_byte, tmp_assign_source_155 );
    tmp_called_name_41 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_41 == NULL ))
    {
        tmp_called_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_41 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 153;
    tmp_assign_source_156 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_41, &PyTuple_GET_ITEM( const_tuple_int_pos_10_tuple, 0 ) );

    if ( tmp_assign_source_156 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_linefeed_byte, tmp_assign_source_156 );
    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cr_byte );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cr_byte );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cr_byte" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;

        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_linefeed_byte );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linefeed_byte );
    }

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_157 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_157 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_crlf, tmp_assign_source_157 );
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_PY2 );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PY2 );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PY2" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;

        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;

        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_158 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cr_byte );

    if (unlikely( tmp_assign_source_158 == NULL ))
    {
        tmp_assign_source_158 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cr_byte );
    }

    if ( tmp_assign_source_158 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "cr_byte" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cr_byte_value, tmp_assign_source_158 );
    tmp_assign_source_159 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_linefeed_byte );

    if (unlikely( tmp_assign_source_159 == NULL ))
    {
        tmp_assign_source_159 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linefeed_byte );
    }

    if ( tmp_assign_source_159 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "linefeed_byte" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_linefeed_byte_value, tmp_assign_source_159 );
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_160 = const_int_pos_13;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_cr_byte_value, tmp_assign_source_160 );
    tmp_assign_source_161 = const_int_pos_10;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_linefeed_byte_value, tmp_assign_source_161 );
    branch_end_1:;
    tmp_assign_source_162 = MAKE_FUNCTION_paramiko$common$$$function_1_asbytes(  );
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_asbytes, tmp_assign_source_162 );
    tmp_called_name_42 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_long );

    if (unlikely( tmp_called_name_42 == NULL ))
    {
        tmp_called_name_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_long );
    }

    if ( tmp_called_name_42 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "long" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 178;
    tmp_assign_source_163 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_42, &PyTuple_GET_ITEM( const_tuple_int_pos_4294967295_tuple, 0 ) );

    if ( tmp_assign_source_163 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_xffffffff, tmp_assign_source_163 );
    tmp_called_name_43 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_long );

    if (unlikely( tmp_called_name_43 == NULL ))
    {
        tmp_called_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_long );
    }

    if ( tmp_called_name_43 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "long" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;

        goto frame_exception_exit_1;
    }

    frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame.f_lineno = 179;
    tmp_assign_source_164 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_43, &PyTuple_GET_ITEM( const_tuple_int_pos_2147483648_tuple, 0 ) );

    if ( tmp_assign_source_164 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_x80000000, tmp_assign_source_164 );
    tmp_assign_source_165 = const_int_pos_438;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_o666, tmp_assign_source_165 );
    tmp_assign_source_166 = const_int_pos_432;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_o660, tmp_assign_source_166 );
    tmp_assign_source_167 = const_int_pos_420;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_o644, tmp_assign_source_167 );
    tmp_assign_source_168 = const_int_pos_384;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_o600, tmp_assign_source_168 );
    tmp_assign_source_169 = const_int_pos_511;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_o777, tmp_assign_source_169 );
    tmp_assign_source_170 = const_int_pos_448;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_o700, tmp_assign_source_170 );
    tmp_assign_source_171 = const_int_pos_56;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_o70, tmp_assign_source_171 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_172 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DEBUG );
    if ( tmp_assign_source_172 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_DEBUG, tmp_assign_source_172 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_173 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_INFO );
    if ( tmp_assign_source_173 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_INFO, tmp_assign_source_173 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_174 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_WARNING );
    if ( tmp_assign_source_174 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_WARNING, tmp_assign_source_174 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_175 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ERROR );
    if ( tmp_assign_source_175 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_ERROR, tmp_assign_source_175 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_176 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_CRITICAL );
    if ( tmp_assign_source_176 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_CRITICAL, tmp_assign_source_176 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d4c98d164cdf3f2c7b5b0ee49938bf66 );
#endif
    popFrameStack();

    assertFrameObject( frame_d4c98d164cdf3f2c7b5b0ee49938bf66 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d4c98d164cdf3f2c7b5b0ee49938bf66 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d4c98d164cdf3f2c7b5b0ee49938bf66, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d4c98d164cdf3f2c7b5b0ee49938bf66->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d4c98d164cdf3f2c7b5b0ee49938bf66, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_177 = const_float_0_01;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_io_sleep, tmp_assign_source_177 );
    tmp_assign_source_178 = const_int_pos_2097152;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_DEFAULT_WINDOW_SIZE, tmp_assign_source_178 );
    tmp_assign_source_179 = const_int_pos_32768;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_DEFAULT_MAX_PACKET_SIZE, tmp_assign_source_179 );
    tmp_assign_source_180 = const_int_pos_32768;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MIN_WINDOW_SIZE, tmp_assign_source_180 );
    tmp_assign_source_181 = const_int_pos_4096;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MIN_PACKET_SIZE, tmp_assign_source_181 );
    tmp_assign_source_182 = const_int_pos_4294967295;
    UPDATE_STRING_DICT0( moduledict_paramiko$common, (Nuitka_StringObject *)const_str_plain_MAX_WINDOW_SIZE, tmp_assign_source_182 );

    return MOD_RETURN_VALUE( module_paramiko$common );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

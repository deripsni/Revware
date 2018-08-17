/* Generated code for Python source for module 'paramiko.sftp'
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

/* The _module_paramiko$sftp is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_paramiko$sftp;
PyDictObject *moduledict_paramiko$sftp;

/* The module constants used, if any. */
extern PyObject *const_str_plain__send_version;
static PyObject *const_str_digest_770954b0fbfd2ac4355070a30e42e1ce;
extern PyObject *const_str_plain_CMD_REALPATH;
extern PyObject *const_str_plain_CMD_MKDIR;
extern PyObject *const_str_plain_SFTP_EOF;
static PyObject *const_str_plain_CMD_INIT;
static PyObject *const_str_plain_readdir;
extern PyObject *const_str_plain_CMD_CLOSE;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_802538bab7f9b141c36e98e1ea3bb766;
static PyObject *const_str_plain_extended;
static PyObject *const_str_digest_8e719bf01bc3bd854beda335dff27d98;
extern PyObject *const_str_plain_CMD_FSTAT;
extern PyObject *const_str_plain_Message;
static PyObject *const_int_pos_106;
extern PyObject *const_str_plain_SFTP_DESC;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_str_plain__VERSION;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_int_pos_9;
extern PyObject *const_str_plain___file__;
static PyObject *const_list_54e530178ddae1c28730cf3da41d25bf_list;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_mkdir;
static PyObject *const_str_digest_c0db3405894db0d8e774d18f49496dcb;
extern PyObject *const_str_plain_CMD_SETSTAT;
extern PyObject *const_str_plain_BaseSFTP;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_CMD_LSTAT;
extern PyObject *const_str_plain_struct;
extern PyObject *const_str_plain_unpack;
extern PyObject *const_str_plain_err;
static PyObject *const_str_digest_14d15b72415e66102dbe59c09c43ce6b;
extern PyObject *const_str_plain_size;
static PyObject *const_str_plain_fsetstat;
extern PyObject *const_str_plain_get_logger;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_CMD_EXTENDED;
extern PyObject *const_str_plain_stat;
extern PyObject *const_str_plain_SFTP_FLAG_READ;
static PyObject *const_str_digest_edad67fb1e072db523528a17ca68b436;
static PyObject *const_str_plain_fstat;
extern PyObject *const_str_plain_CMD_HANDLE;
extern PyObject *const_str_plain_read;
extern PyObject *const_int_pos_101;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain___doc__;
static PyObject *const_xrange_1_9;
extern PyObject *const_int_pos_32;
static PyObject *const_xrange_200_202;
extern PyObject *const_str_plain_attrs;
extern PyObject *const_str_plain_SFTP_NO_CONNECTION;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_add;
static PyObject *const_str_digest_4d6d58c4da656db2728bdea1017b31c8;
extern PyObject *const_float_0_1;
extern PyObject *const_str_plain_status;
static PyObject *const_str_plain_extended_reply;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_1f1d5cf4e98d518b3da22694619820cf;
extern PyObject *const_tuple_int_pos_4_tuple;
extern PyObject *const_str_plain_packet;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_n;
static PyObject *const_tuple_fefd504b680b346f0cbf105d731b87ef_tuple;
static PyObject *const_str_digest_f69f36a92802e8c69b7c050ce48ed38f;
extern PyObject *const_str_plain_SFTPError;
extern PyObject *const_str_plain_SFTP_CONNECTION_LOST;
extern PyObject *const_str_plain_sock;
static PyObject *const_tuple_str_plain_BaseSFTP_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_SFTP_OK;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_CMD_FSETSTAT;
static PyObject *const_str_digest_13c76b6db167de893c9cdbc98ab749a0;
extern PyObject *const_str_plain_SFTP_FLAG_CREATE;
extern PyObject *const_str_plain_init;
extern PyObject *const_str_digest_fc9bba76f16a493244df27637725391e;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_CMD_STATUS;
static PyObject *const_str_digest_8a788cfa19b2d3a694d3e7a78fd87321;
extern PyObject *const_str_digest_ca7e5e90f0864b38180ee052c924615f;
extern PyObject *const_str_plain_True;
extern PyObject *const_str_plain_CMD_STAT;
extern PyObject *const_str_plain_CMD_NAMES;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_opendir;
static PyObject *const_tuple_int_0_bytes_empty_tuple;
static PyObject *const_str_plain_Success;
extern PyObject *const_str_digest_043a098e3c8c7e01497500bb854d02ab;
extern PyObject *const_str_plain_out;
extern PyObject *const_str_plain__send_server_version;
extern PyObject *const_str_plain_SFTP_FLAG_WRITE;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_byte_ord;
extern PyObject *const_str_plain_handle;
extern PyObject *const_str_plain_SFTP_NO_SUCH_FILE;
extern PyObject *const_str_plain__write_all;
extern PyObject *const_str_plain_send;
static PyObject *const_tuple_str_digest_13c76b6db167de893c9cdbc98ab749a0_tuple;
static PyObject *const_int_pos_202;
extern PyObject *const_str_plain_util;
extern PyObject *const_tuple_str_plain_Message_tuple;
extern PyObject *const_str_plain_CMD_RENAME;
extern PyObject *const_str_plain_remove;
static PyObject *const_tuple_str_digest_ca7e5e90f0864b38180ee052c924615f_tuple;
static PyObject *const_tuple_e1371bf6735e045532e062af3f8c2723_tuple;
static PyObject *const_str_plain_realpath;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_SFTP_FLAG_EXCL;
extern PyObject *const_str_plain_pack;
extern PyObject *const_str_digest_7b52c270f480f57450d385a0aa52d302;
static PyObject *const_str_digest_22ec886c4d212c118649c8f3d3ea2277;
extern PyObject *const_str_plain_paramiko;
extern PyObject *const_str_plain__read_all;
extern PyObject *const_str_plain_CMD_ATTRS;
static PyObject *const_str_plain_Failure;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_CMD_DATA;
static PyObject *const_str_plain_setstat;
static PyObject *const_str_plain_extension_pairs;
extern PyObject *const_str_plain_CMD_READ;
static PyObject *const_tuple_str_plain_SFTPError_tuple_type_Exception_tuple_tuple;
static PyObject *const_tuple_str_digest_8d5d6df84a46bb439d6f959e9c2f1ef4_tuple;
extern PyObject *const_str_plain_SFTP_PERMISSION_DENIED;
extern PyObject *const_str_plain_msg;
extern PyObject *const_int_pos_21;
static PyObject *const_str_digest_aaba259efeedeb26bd4f9cf76b40f0c5;
extern PyObject *const_str_plain_lstat;
static PyObject *const_str_digest_e9863dbba329afcfb0bf24930e654e5d;
extern PyObject *const_str_plain_SFTP_FLAG_APPEND;
extern PyObject *const_str_plain_rename;
extern PyObject *const_str_digest_af46dc626906b3459f8298b3797a94e5;
extern PyObject *const_tuple_str_plain_util_tuple;
static PyObject *const_tuple_1b90f55e04e9924ae824d6f3d308d641_tuple;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain_x;
extern PyObject *const_slice_none_int_pos_4_none;
static PyObject *const_str_plain_CMD_VERSION;
static PyObject *const_str_digest_8d5d6df84a46bb439d6f959e9c2f1ef4;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_CMD_READDIR;
extern PyObject *const_str_plain_CMD_NAME;
extern PyObject *const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
extern PyObject *const_str_plain_recv;
static PyObject *const_tuple_str_plain_self_str_plain_t_str_plain_packet_str_plain_out_tuple;
extern PyObject *const_int_pos_200;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_select;
extern PyObject *const_bytes_empty;
static PyObject *const_list_1da6c81fb2a879280c0044abe7a0c196_list;
static PyObject *const_str_digest_c0de84da4d245b9d85eddc43f8b3cdf9;
extern PyObject *const_str_plain_CMD_WRITE;
extern PyObject *const_str_plain_SFTP_FAILURE;
extern PyObject *const_str_plain_CMD_OPENDIR;
extern PyObject *const_str_plain__log;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_tuple_str_plain_byte_chr_str_plain_byte_ord_tuple;
static PyObject *const_str_digest_3646aa0b63676b99c535f73838db8130;
extern PyObject *const_str_plain_SFTP_BAD_MESSAGE;
extern PyObject *const_tuple_type_Exception_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_out_str_plain_n_tuple;
extern PyObject *const_str_plain_add_int;
static PyObject *const_str_digest_da8c3b73a609e381c0db64149422f427;
extern PyObject *const_str_digest_746af75643f8e62b6c336a287b3768fd;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_byte_chr;
extern PyObject *const_str_plain_open;
extern PyObject *const_str_plain_asbytes;
extern PyObject *const_str_plain_logger;
extern PyObject *const_str_plain__send_packet;
extern PyObject *const_tuple_str_plain_self_str_plain_level_str_plain_msg_str_plain_args_tuple;
extern PyObject *const_str_plain_CMD_READLINK;
extern PyObject *const_int_pos_3;
static PyObject *const_tuple_str_plain_asbytes_str_plain_DEBUG_tuple;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_level;
extern PyObject *const_str_plain_CMD_REMOVE;
extern PyObject *const_str_plain_rmdir;
static PyObject *const_tuple_str_plain_self_str_plain_version_str_plain_t_str_plain_data_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_ultra_debug;
static PyObject *const_xrange_101_106;
extern PyObject *const_str_plain_write;
extern PyObject *const_str_plain_CMD_OPEN;
extern PyObject *const_str_plain_CMD_RMDIR;
extern PyObject *const_str_plain_SFTP_OP_UNSUPPORTED;
extern PyObject *const_str_plain_SFTP_FLAG_TRUNC;
static PyObject *const_xrange_1_21;
extern PyObject *const_str_plain_symlink;
extern PyObject *const_str_plain_DEBUG;
extern PyObject *const_str_plain_CMD_SYMLINK;
extern PyObject *const_str_plain_version;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_readlink;
static PyObject *const_str_digest_c32a018a98d001297bb853becd982891;
extern PyObject *const_str_plain__read_packet;
extern PyObject *const_str_digest_acb4778c07d51a3672ce81487578b9c2;
extern PyObject *const_str_plain_CMD_EXTENDED_REPLY;
static PyObject *const_str_digest_7d9cb2d2c655b1b54c73b581e3030ee8;
extern PyObject *const_str_plain_format_binary;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_770954b0fbfd2ac4355070a30e42e1ce = UNSTREAM_STRING( &constant_bin[ 516130 ], 88, 0 );
    const_str_plain_CMD_INIT = UNSTREAM_STRING( &constant_bin[ 516218 ], 8, 1 );
    const_str_plain_readdir = UNSTREAM_STRING( &constant_bin[ 516226 ], 7, 1 );
    const_str_digest_802538bab7f9b141c36e98e1ea3bb766 = UNSTREAM_STRING( &constant_bin[ 516233 ], 13, 0 );
    const_str_plain_extended = UNSTREAM_STRING( &constant_bin[ 46178 ], 8, 1 );
    const_str_digest_8e719bf01bc3bd854beda335dff27d98 = UNSTREAM_STRING( &constant_bin[ 516246 ], 22, 0 );
    const_int_pos_106 = PyLong_FromUnsignedLong( 106ul );
    const_str_plain__VERSION = UNSTREAM_STRING( &constant_bin[ 115438 ], 8, 1 );
    const_list_54e530178ddae1c28730cf3da41d25bf_list = PyList_New( 9 );
    const_str_plain_Success = UNSTREAM_STRING( &constant_bin[ 516268 ], 7, 1 );
    PyList_SET_ITEM( const_list_54e530178ddae1c28730cf3da41d25bf_list, 0, const_str_plain_Success ); Py_INCREF( const_str_plain_Success );
    const_str_digest_3646aa0b63676b99c535f73838db8130 = UNSTREAM_STRING( &constant_bin[ 516275 ], 11, 0 );
    PyList_SET_ITEM( const_list_54e530178ddae1c28730cf3da41d25bf_list, 1, const_str_digest_3646aa0b63676b99c535f73838db8130 ); Py_INCREF( const_str_digest_3646aa0b63676b99c535f73838db8130 );
    const_str_digest_c32a018a98d001297bb853becd982891 = UNSTREAM_STRING( &constant_bin[ 516286 ], 12, 0 );
    PyList_SET_ITEM( const_list_54e530178ddae1c28730cf3da41d25bf_list, 2, const_str_digest_c32a018a98d001297bb853becd982891 ); Py_INCREF( const_str_digest_c32a018a98d001297bb853becd982891 );
    const_str_digest_8a788cfa19b2d3a694d3e7a78fd87321 = UNSTREAM_STRING( &constant_bin[ 516298 ], 17, 0 );
    PyList_SET_ITEM( const_list_54e530178ddae1c28730cf3da41d25bf_list, 3, const_str_digest_8a788cfa19b2d3a694d3e7a78fd87321 ); Py_INCREF( const_str_digest_8a788cfa19b2d3a694d3e7a78fd87321 );
    const_str_plain_Failure = UNSTREAM_STRING( &constant_bin[ 383864 ], 7, 1 );
    PyList_SET_ITEM( const_list_54e530178ddae1c28730cf3da41d25bf_list, 4, const_str_plain_Failure ); Py_INCREF( const_str_plain_Failure );
    const_str_digest_da8c3b73a609e381c0db64149422f427 = UNSTREAM_STRING( &constant_bin[ 516315 ], 11, 0 );
    PyList_SET_ITEM( const_list_54e530178ddae1c28730cf3da41d25bf_list, 5, const_str_digest_da8c3b73a609e381c0db64149422f427 ); Py_INCREF( const_str_digest_da8c3b73a609e381c0db64149422f427 );
    PyList_SET_ITEM( const_list_54e530178ddae1c28730cf3da41d25bf_list, 6, const_str_digest_802538bab7f9b141c36e98e1ea3bb766 ); Py_INCREF( const_str_digest_802538bab7f9b141c36e98e1ea3bb766 );
    const_str_digest_7d9cb2d2c655b1b54c73b581e3030ee8 = UNSTREAM_STRING( &constant_bin[ 516326 ], 15, 0 );
    PyList_SET_ITEM( const_list_54e530178ddae1c28730cf3da41d25bf_list, 7, const_str_digest_7d9cb2d2c655b1b54c73b581e3030ee8 ); Py_INCREF( const_str_digest_7d9cb2d2c655b1b54c73b581e3030ee8 );
    const_str_digest_c0de84da4d245b9d85eddc43f8b3cdf9 = UNSTREAM_STRING( &constant_bin[ 516341 ], 21, 0 );
    PyList_SET_ITEM( const_list_54e530178ddae1c28730cf3da41d25bf_list, 8, const_str_digest_c0de84da4d245b9d85eddc43f8b3cdf9 ); Py_INCREF( const_str_digest_c0de84da4d245b9d85eddc43f8b3cdf9 );
    const_str_digest_c0db3405894db0d8e774d18f49496dcb = UNSTREAM_STRING( &constant_bin[ 516362 ], 8, 0 );
    const_str_digest_14d15b72415e66102dbe59c09c43ce6b = UNSTREAM_STRING( &constant_bin[ 516370 ], 13, 0 );
    const_str_plain_fsetstat = UNSTREAM_STRING( &constant_bin[ 516383 ], 8, 1 );
    const_str_digest_edad67fb1e072db523528a17ca68b436 = UNSTREAM_STRING( &constant_bin[ 516391 ], 17, 0 );
    const_str_plain_fstat = UNSTREAM_STRING( &constant_bin[ 516408 ], 5, 1 );
    const_xrange_1_9 = BUILTIN_XRANGE3( const_int_pos_1, const_int_pos_9, const_int_pos_1 );
    const_int_pos_202 = PyLong_FromUnsignedLong( 202ul );
    const_xrange_200_202 = BUILTIN_XRANGE3( const_int_pos_200, const_int_pos_202, const_int_pos_1 );
    const_str_digest_4d6d58c4da656db2728bdea1017b31c8 = UNSTREAM_STRING( &constant_bin[ 516413 ], 19, 0 );
    const_str_plain_extended_reply = UNSTREAM_STRING( &constant_bin[ 516432 ], 14, 1 );
    const_str_digest_1f1d5cf4e98d518b3da22694619820cf = UNSTREAM_STRING( &constant_bin[ 516446 ], 29, 0 );
    const_tuple_fefd504b680b346f0cbf105d731b87ef_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_fefd504b680b346f0cbf105d731b87ef_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_fefd504b680b346f0cbf105d731b87ef_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_fefd504b680b346f0cbf105d731b87ef_tuple, 2, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_plain_extension_pairs = UNSTREAM_STRING( &constant_bin[ 516475 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_fefd504b680b346f0cbf105d731b87ef_tuple, 3, const_str_plain_extension_pairs ); Py_INCREF( const_str_plain_extension_pairs );
    PyTuple_SET_ITEM( const_tuple_fefd504b680b346f0cbf105d731b87ef_tuple, 4, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_fefd504b680b346f0cbf105d731b87ef_tuple, 5, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_digest_f69f36a92802e8c69b7c050ce48ed38f = UNSTREAM_STRING( &constant_bin[ 516490 ], 21, 0 );
    const_tuple_str_plain_BaseSFTP_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BaseSFTP_tuple_type_object_tuple_tuple, 0, const_str_plain_BaseSFTP ); Py_INCREF( const_str_plain_BaseSFTP );
    PyTuple_SET_ITEM( const_tuple_str_plain_BaseSFTP_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_13c76b6db167de893c9cdbc98ab749a0 = UNSTREAM_STRING( &constant_bin[ 516511 ], 26, 0 );
    const_str_plain_opendir = UNSTREAM_STRING( &constant_bin[ 516537 ], 7, 1 );
    const_tuple_int_0_bytes_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_bytes_empty_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_bytes_empty_tuple, 1, const_bytes_empty ); Py_INCREF( const_bytes_empty );
    const_tuple_str_digest_13c76b6db167de893c9cdbc98ab749a0_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_13c76b6db167de893c9cdbc98ab749a0_tuple, 0, const_str_digest_13c76b6db167de893c9cdbc98ab749a0 ); Py_INCREF( const_str_digest_13c76b6db167de893c9cdbc98ab749a0 );
    const_tuple_str_digest_ca7e5e90f0864b38180ee052c924615f_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_ca7e5e90f0864b38180ee052c924615f_tuple, 0, const_str_digest_ca7e5e90f0864b38180ee052c924615f ); Py_INCREF( const_str_digest_ca7e5e90f0864b38180ee052c924615f );
    const_tuple_e1371bf6735e045532e062af3f8c2723_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_e1371bf6735e045532e062af3f8c2723_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e1371bf6735e045532e062af3f8c2723_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_e1371bf6735e045532e062af3f8c2723_tuple, 2, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_e1371bf6735e045532e062af3f8c2723_tuple, 3, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_e1371bf6735e045532e062af3f8c2723_tuple, 4, const_str_plain_read ); Py_INCREF( const_str_plain_read );
    PyTuple_SET_ITEM( const_tuple_e1371bf6735e045532e062af3f8c2723_tuple, 5, const_str_plain_write ); Py_INCREF( const_str_plain_write );
    PyTuple_SET_ITEM( const_tuple_e1371bf6735e045532e062af3f8c2723_tuple, 6, const_str_plain_err ); Py_INCREF( const_str_plain_err );
    const_str_plain_realpath = UNSTREAM_STRING( &constant_bin[ 516544 ], 8, 1 );
    const_str_digest_22ec886c4d212c118649c8f3d3ea2277 = UNSTREAM_STRING( &constant_bin[ 516552 ], 18, 0 );
    const_str_plain_setstat = UNSTREAM_STRING( &constant_bin[ 516384 ], 7, 1 );
    const_tuple_str_plain_SFTPError_tuple_type_Exception_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SFTPError_tuple_type_Exception_tuple_tuple, 0, const_str_plain_SFTPError ); Py_INCREF( const_str_plain_SFTPError );
    PyTuple_SET_ITEM( const_tuple_str_plain_SFTPError_tuple_type_Exception_tuple_tuple, 1, const_tuple_type_Exception_tuple ); Py_INCREF( const_tuple_type_Exception_tuple );
    const_tuple_str_digest_8d5d6df84a46bb439d6f959e9c2f1ef4_tuple = PyTuple_New( 1 );
    const_str_digest_8d5d6df84a46bb439d6f959e9c2f1ef4 = UNSTREAM_STRING( &constant_bin[ 516570 ], 23, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_8d5d6df84a46bb439d6f959e9c2f1ef4_tuple, 0, const_str_digest_8d5d6df84a46bb439d6f959e9c2f1ef4 ); Py_INCREF( const_str_digest_8d5d6df84a46bb439d6f959e9c2f1ef4 );
    const_str_digest_aaba259efeedeb26bd4f9cf76b40f0c5 = UNSTREAM_STRING( &constant_bin[ 516593 ], 22, 0 );
    const_str_digest_e9863dbba329afcfb0bf24930e654e5d = UNSTREAM_STRING( &constant_bin[ 516615 ], 21, 0 );
    const_tuple_1b90f55e04e9924ae824d6f3d308d641_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_1b90f55e04e9924ae824d6f3d308d641_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_1b90f55e04e9924ae824d6f3d308d641_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_1b90f55e04e9924ae824d6f3d308d641_tuple, 2, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_1b90f55e04e9924ae824d6f3d308d641_tuple, 3, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_1b90f55e04e9924ae824d6f3d308d641_tuple, 4, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_plain_CMD_VERSION = UNSTREAM_STRING( &constant_bin[ 516636 ], 11, 1 );
    const_tuple_str_plain_self_str_plain_t_str_plain_packet_str_plain_out_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_t_str_plain_packet_str_plain_out_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_t_str_plain_packet_str_plain_out_tuple, 1, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_t_str_plain_packet_str_plain_out_tuple, 2, const_str_plain_packet ); Py_INCREF( const_str_plain_packet );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_t_str_plain_packet_str_plain_out_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    const_list_1da6c81fb2a879280c0044abe7a0c196_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_1da6c81fb2a879280c0044abe7a0c196_list, 0, const_str_digest_746af75643f8e62b6c336a287b3768fd ); Py_INCREF( const_str_digest_746af75643f8e62b6c336a287b3768fd );
    PyList_SET_ITEM( const_list_1da6c81fb2a879280c0044abe7a0c196_list, 1, const_str_digest_c0db3405894db0d8e774d18f49496dcb ); Py_INCREF( const_str_digest_c0db3405894db0d8e774d18f49496dcb );
    const_tuple_str_plain_byte_chr_str_plain_byte_ord_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_byte_chr_str_plain_byte_ord_tuple, 0, const_str_plain_byte_chr ); Py_INCREF( const_str_plain_byte_chr );
    PyTuple_SET_ITEM( const_tuple_str_plain_byte_chr_str_plain_byte_ord_tuple, 1, const_str_plain_byte_ord ); Py_INCREF( const_str_plain_byte_ord );
    const_tuple_str_plain_self_str_plain_out_str_plain_n_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_out_str_plain_n_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_out_str_plain_n_tuple, 1, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_out_str_plain_n_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_tuple_str_plain_asbytes_str_plain_DEBUG_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_asbytes_str_plain_DEBUG_tuple, 0, const_str_plain_asbytes ); Py_INCREF( const_str_plain_asbytes );
    PyTuple_SET_ITEM( const_tuple_str_plain_asbytes_str_plain_DEBUG_tuple, 1, const_str_plain_DEBUG ); Py_INCREF( const_str_plain_DEBUG );
    const_tuple_str_plain_self_str_plain_version_str_plain_t_str_plain_data_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_version_str_plain_t_str_plain_data_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_version_str_plain_t_str_plain_data_tuple, 1, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_version_str_plain_t_str_plain_data_tuple, 2, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_version_str_plain_t_str_plain_data_tuple, 3, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_xrange_101_106 = BUILTIN_XRANGE3( const_int_pos_101, const_int_pos_106, const_int_pos_1 );
    const_xrange_1_21 = BUILTIN_XRANGE3( const_int_pos_1, const_int_pos_21, const_int_pos_1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_paramiko$sftp( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d4c22045921ea21b01013ef48a4c1b9c;
static PyCodeObject *codeobj_3c5e2089da4ef2b01d17a3d59679edfd;
static PyCodeObject *codeobj_f1430a642eb7cbfc1b275ccd82cd2c09;
static PyCodeObject *codeobj_f553bd9bc0d3a2befc5958ecae4d8099;
static PyCodeObject *codeobj_a8ffe38d27e221849b31372b2947c279;
static PyCodeObject *codeobj_98c7c899db95f90e41bf326a17718328;
static PyCodeObject *codeobj_eb84f82e0c6ef044dfddd69f10e69c6b;
static PyCodeObject *codeobj_5c38d724c7ac8480b766627f0de59ef7;
static PyCodeObject *codeobj_92ad57a3a4e668cf073e8c4093d16417;
static PyCodeObject *codeobj_cb0151fd03f659280f9ff4015d5a2fe0;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_770954b0fbfd2ac4355070a30e42e1ce;
    codeobj_d4c22045921ea21b01013ef48a4c1b9c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8e719bf01bc3bd854beda335dff27d98, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3c5e2089da4ef2b01d17a3d59679edfd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_BaseSFTP, 97, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_f1430a642eb7cbfc1b275ccd82cd2c09 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 98, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f553bd9bc0d3a2befc5958ecae4d8099 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__log, 130, const_tuple_str_plain_self_str_plain_level_str_plain_msg_str_plain_args_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_a8ffe38d27e221849b31372b2947c279 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__read_all, 143, const_tuple_e1371bf6735e045532e062af3f8c2723_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_98c7c899db95f90e41bf326a17718328 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__read_packet, 173, const_tuple_1b90f55e04e9924ae824d6f3d308d641_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eb84f82e0c6ef044dfddd69f10e69c6b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__send_packet, 166, const_tuple_str_plain_self_str_plain_t_str_plain_packet_str_plain_out_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5c38d724c7ac8480b766627f0de59ef7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__send_server_version, 115, const_tuple_fefd504b680b346f0cbf105d731b87ef_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_92ad57a3a4e668cf073e8c4093d16417 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__send_version, 105, const_tuple_str_plain_self_str_plain_version_str_plain_t_str_plain_data_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cb0151fd03f659280f9ff4015d5a2fe0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__write_all, 133, const_tuple_str_plain_self_str_plain_out_str_plain_n_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_pos_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_2__send_version(  );


static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_3__send_server_version(  );


static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_4__log(  );


static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_5__write_all(  );


static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_6__read_all(  );


static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_7__send_packet(  );


static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_8__read_packet(  );


// The module function definitions.
static PyObject *impl_paramiko$sftp$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_called_instance_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_f1430a642eb7cbfc1b275ccd82cd2c09 = NULL;

    struct Nuitka_FrameObject *frame_f1430a642eb7cbfc1b275ccd82cd2c09;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f1430a642eb7cbfc1b275ccd82cd2c09, codeobj_f1430a642eb7cbfc1b275ccd82cd2c09, module_paramiko$sftp, sizeof(void *) );
    frame_f1430a642eb7cbfc1b275ccd82cd2c09 = cache_frame_f1430a642eb7cbfc1b275ccd82cd2c09;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f1430a642eb7cbfc1b275ccd82cd2c09 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f1430a642eb7cbfc1b275ccd82cd2c09 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_util );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_f1430a642eb7cbfc1b275ccd82cd2c09->m_frame.f_lineno = 99;
    tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_logger, &PyTuple_GET_ITEM( const_tuple_str_digest_ca7e5e90f0864b38180ee052c924615f_tuple, 0 ) );

    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_logger, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_sock, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = Py_False;
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_ultra_debug, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1430a642eb7cbfc1b275ccd82cd2c09 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1430a642eb7cbfc1b275ccd82cd2c09 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f1430a642eb7cbfc1b275ccd82cd2c09, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f1430a642eb7cbfc1b275ccd82cd2c09->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f1430a642eb7cbfc1b275ccd82cd2c09, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f1430a642eb7cbfc1b275ccd82cd2c09,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_f1430a642eb7cbfc1b275ccd82cd2c09 == cache_frame_f1430a642eb7cbfc1b275ccd82cd2c09 )
    {
        Py_DECREF( frame_f1430a642eb7cbfc1b275ccd82cd2c09 );
    }
    cache_frame_f1430a642eb7cbfc1b275ccd82cd2c09 = NULL;

    assertFrameObject( frame_f1430a642eb7cbfc1b275ccd82cd2c09 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_1___init__ );
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


static PyObject *impl_paramiko$sftp$$$function_2__send_version( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_version = NULL;
    PyObject *var_t = NULL;
    PyObject *var_data = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_92ad57a3a4e668cf073e8c4093d16417 = NULL;

    struct Nuitka_FrameObject *frame_92ad57a3a4e668cf073e8c4093d16417;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_92ad57a3a4e668cf073e8c4093d16417, codeobj_92ad57a3a4e668cf073e8c4093d16417, module_paramiko$sftp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_92ad57a3a4e668cf073e8c4093d16417 = cache_frame_92ad57a3a4e668cf073e8c4093d16417;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_92ad57a3a4e668cf073e8c4093d16417 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_92ad57a3a4e668cf073e8c4093d16417 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__send_packet );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_INIT );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_INIT );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_INIT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_struct );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "struct" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pack );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 106;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain__VERSION );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__VERSION );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_VERSION" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_92ad57a3a4e668cf073e8c4093d16417->m_frame.f_lineno = 106;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 106;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_92ad57a3a4e668cf073e8c4093d16417->m_frame.f_lineno = 106;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_called_instance_1 = par_self;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_92ad57a3a4e668cf073e8c4093d16417->m_frame.f_lineno = 107;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__read_packet );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description_1 = "oooo";
        exception_lineno = 107;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "oooo";
        exception_lineno = 107;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

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

                type_description_1 = "oooo";
                exception_lineno = 107;
                goto try_except_handler_3;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooo";
        exception_lineno = 107;
        goto try_except_handler_3;
    }
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

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

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

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_t == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_t = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_data == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_data = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_1 = var_t;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_VERSION );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_VERSION );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_VERSION" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTPError );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SFTPError );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SFTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_92ad57a3a4e668cf073e8c4093d16417->m_frame.f_lineno = 109;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_13c76b6db167de893c9cdbc98ab749a0_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 109;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_struct );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "struct" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_unpack );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
    tmp_subscribed_name_2 = var_data;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_slice_none_int_pos_4_none;
    tmp_args_element_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 110;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_92ad57a3a4e668cf073e8c4093d16417->m_frame.f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_version == NULL );
    var_version = tmp_assign_source_6;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_92ad57a3a4e668cf073e8c4093d16417 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_92ad57a3a4e668cf073e8c4093d16417 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_92ad57a3a4e668cf073e8c4093d16417, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_92ad57a3a4e668cf073e8c4093d16417->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_92ad57a3a4e668cf073e8c4093d16417, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_92ad57a3a4e668cf073e8c4093d16417,
        type_description_1,
        par_self,
        var_version,
        var_t,
        var_data
    );


    // Release cached frame.
    if ( frame_92ad57a3a4e668cf073e8c4093d16417 == cache_frame_92ad57a3a4e668cf073e8c4093d16417 )
    {
        Py_DECREF( frame_92ad57a3a4e668cf073e8c4093d16417 );
    }
    cache_frame_92ad57a3a4e668cf073e8c4093d16417 = NULL;

    assertFrameObject( frame_92ad57a3a4e668cf073e8c4093d16417 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_version;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_2__send_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_version );
    var_version = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_2__send_version );
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


static PyObject *impl_paramiko$sftp$$$function_3__send_server_version( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_data = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_extension_pairs = NULL;
    PyObject *var_version = NULL;
    PyObject *var_t = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5c38d724c7ac8480b766627f0de59ef7 = NULL;

    struct Nuitka_FrameObject *frame_5c38d724c7ac8480b766627f0de59ef7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5c38d724c7ac8480b766627f0de59ef7, codeobj_5c38d724c7ac8480b766627f0de59ef7, module_paramiko$sftp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5c38d724c7ac8480b766627f0de59ef7 = cache_frame_5c38d724c7ac8480b766627f0de59ef7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5c38d724c7ac8480b766627f0de59ef7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5c38d724c7ac8480b766627f0de59ef7 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_5c38d724c7ac8480b766627f0de59ef7->m_frame.f_lineno = 118;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__read_packet );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description_1 = "oooooo";
        exception_lineno = 118;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "oooooo";
        exception_lineno = 118;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

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

                type_description_1 = "oooooo";
                exception_lineno = 118;
                goto try_except_handler_3;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooo";
        exception_lineno = 118;
        goto try_except_handler_3;
    }
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

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

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

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_t == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_t = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_data == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_data = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_1 = var_t;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_INIT );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_INIT );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_INIT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTPError );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SFTPError );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SFTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_5c38d724c7ac8480b766627f0de59ef7->m_frame.f_lineno = 120;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_13c76b6db167de893c9cdbc98ab749a0_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 120;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_struct );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "struct" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_unpack );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
    tmp_subscribed_name_2 = var_data;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_slice_none_int_pos_4_none;
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 121;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    frame_5c38d724c7ac8480b766627f0de59ef7->m_frame.f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_version == NULL );
    var_version = tmp_assign_source_6;

    tmp_assign_source_7 = LIST_COPY( const_list_1da6c81fb2a879280c0044abe7a0c196_list );
    assert( var_extension_pairs == NULL );
    var_extension_pairs = tmp_assign_source_7;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_Message );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Message );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Message" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_5c38d724c7ac8480b766627f0de59ef7->m_frame.f_lineno = 124;
    tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_msg == NULL );
    var_msg = tmp_assign_source_8;

    tmp_source_name_2 = var_msg;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_add_int );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain__VERSION );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__VERSION );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_VERSION" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_5c38d724c7ac8480b766627f0de59ef7->m_frame.f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = var_msg;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_add );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = var_extension_pairs;

    if ( tmp_dircall_arg2_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "extension_pairs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_unused = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__send_packet );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_VERSION );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_VERSION );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_VERSION" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_msg;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_5c38d724c7ac8480b766627f0de59ef7->m_frame.f_lineno = 127;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_version;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "version" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c38d724c7ac8480b766627f0de59ef7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c38d724c7ac8480b766627f0de59ef7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5c38d724c7ac8480b766627f0de59ef7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5c38d724c7ac8480b766627f0de59ef7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5c38d724c7ac8480b766627f0de59ef7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5c38d724c7ac8480b766627f0de59ef7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5c38d724c7ac8480b766627f0de59ef7,
        type_description_1,
        par_self,
        var_data,
        var_msg,
        var_extension_pairs,
        var_version,
        var_t
    );


    // Release cached frame.
    if ( frame_5c38d724c7ac8480b766627f0de59ef7 == cache_frame_5c38d724c7ac8480b766627f0de59ef7 )
    {
        Py_DECREF( frame_5c38d724c7ac8480b766627f0de59ef7 );
    }
    cache_frame_5c38d724c7ac8480b766627f0de59ef7 = NULL;

    assertFrameObject( frame_5c38d724c7ac8480b766627f0de59ef7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_3__send_server_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    Py_XDECREF( var_extension_pairs );
    var_extension_pairs = NULL;

    Py_XDECREF( var_version );
    var_version = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    Py_XDECREF( var_extension_pairs );
    var_extension_pairs = NULL;

    Py_XDECREF( var_version );
    var_version = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_3__send_server_version );
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


static PyObject *impl_paramiko$sftp$$$function_4__log( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_level = python_pars[ 1 ];
    PyObject *par_msg = python_pars[ 2 ];
    PyObject *par_args = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f553bd9bc0d3a2befc5958ecae4d8099 = NULL;

    struct Nuitka_FrameObject *frame_f553bd9bc0d3a2befc5958ecae4d8099;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f553bd9bc0d3a2befc5958ecae4d8099, codeobj_f553bd9bc0d3a2befc5958ecae4d8099, module_paramiko$sftp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f553bd9bc0d3a2befc5958ecae4d8099 = cache_frame_f553bd9bc0d3a2befc5958ecae4d8099;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f553bd9bc0d3a2befc5958ecae4d8099 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f553bd9bc0d3a2befc5958ecae4d8099 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_logger );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_log );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = par_level;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "level" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_msg;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_args;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl___internal__$$$function_7_complex_call_helper_pos_star_list( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f553bd9bc0d3a2befc5958ecae4d8099 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f553bd9bc0d3a2befc5958ecae4d8099 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f553bd9bc0d3a2befc5958ecae4d8099, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f553bd9bc0d3a2befc5958ecae4d8099->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f553bd9bc0d3a2befc5958ecae4d8099, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f553bd9bc0d3a2befc5958ecae4d8099,
        type_description_1,
        par_self,
        par_level,
        par_msg,
        par_args
    );


    // Release cached frame.
    if ( frame_f553bd9bc0d3a2befc5958ecae4d8099 == cache_frame_f553bd9bc0d3a2befc5958ecae4d8099 )
    {
        Py_DECREF( frame_f553bd9bc0d3a2befc5958ecae4d8099 );
    }
    cache_frame_f553bd9bc0d3a2befc5958ecae4d8099 = NULL;

    assertFrameObject( frame_f553bd9bc0d3a2befc5958ecae4d8099 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_4__log );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( par_level );
    par_level = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

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

    Py_XDECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( par_level );
    par_level = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_4__log );
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


static PyObject *impl_paramiko$sftp$$$function_5__write_all( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_out = python_pars[ 1 ];
    PyObject *var_n = NULL;
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static struct Nuitka_FrameObject *cache_frame_cb0151fd03f659280f9ff4015d5a2fe0 = NULL;

    struct Nuitka_FrameObject *frame_cb0151fd03f659280f9ff4015d5a2fe0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cb0151fd03f659280f9ff4015d5a2fe0, codeobj_cb0151fd03f659280f9ff4015d5a2fe0, module_paramiko$sftp, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cb0151fd03f659280f9ff4015d5a2fe0 = cache_frame_cb0151fd03f659280f9ff4015d5a2fe0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cb0151fd03f659280f9ff4015d5a2fe0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cb0151fd03f659280f9ff4015d5a2fe0 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    tmp_len_arg_1 = par_out;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "out" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sock );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_send );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_out;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "out" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_cb0151fd03f659280f9ff4015d5a2fe0->m_frame.f_lineno = 135;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_n;
        var_n = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_n;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_LtE_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    frame_cb0151fd03f659280f9ff4015d5a2fe0->m_frame.f_lineno = 137;
    tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS( PyExc_EOFError );
    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 137;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_compare_left_3 = var_n;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 138;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_2 = par_out;

    if ( tmp_len_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "out" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 138;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_3:;
    tmp_subscribed_name_1 = par_out;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "out" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_1 = var_n;

    if ( tmp_start_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_stop_name_1 = Py_None;
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    assert( !(tmp_subscript_name_1 == NULL) );
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_out;
        par_out = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb0151fd03f659280f9ff4015d5a2fe0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb0151fd03f659280f9ff4015d5a2fe0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb0151fd03f659280f9ff4015d5a2fe0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb0151fd03f659280f9ff4015d5a2fe0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb0151fd03f659280f9ff4015d5a2fe0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb0151fd03f659280f9ff4015d5a2fe0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb0151fd03f659280f9ff4015d5a2fe0,
        type_description_1,
        par_self,
        par_out,
        var_n
    );


    // Release cached frame.
    if ( frame_cb0151fd03f659280f9ff4015d5a2fe0 == cache_frame_cb0151fd03f659280f9ff4015d5a2fe0 )
    {
        Py_DECREF( frame_cb0151fd03f659280f9ff4015d5a2fe0 );
    }
    cache_frame_cb0151fd03f659280f9ff4015d5a2fe0 = NULL;

    assertFrameObject( frame_cb0151fd03f659280f9ff4015d5a2fe0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_5__write_all );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_out );
    par_out = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

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

    Py_XDECREF( par_out );
    par_out = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_5__write_all );
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


static PyObject *impl_paramiko$sftp$$$function_6__read_all( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *var_out = NULL;
    PyObject *var_x = NULL;
    PyObject *var_read = NULL;
    PyObject *var_write = NULL;
    PyObject *var_err = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_list_element_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    static struct Nuitka_FrameObject *cache_frame_a8ffe38d27e221849b31372b2947c279 = NULL;

    struct Nuitka_FrameObject *frame_a8ffe38d27e221849b31372b2947c279;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_bytes_empty;
    assert( var_out == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_out = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a8ffe38d27e221849b31372b2947c279, codeobj_a8ffe38d27e221849b31372b2947c279, module_paramiko$sftp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a8ffe38d27e221849b31372b2947c279 = cache_frame_a8ffe38d27e221849b31372b2947c279;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a8ffe38d27e221849b31372b2947c279 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a8ffe38d27e221849b31372b2947c279 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    tmp_compare_left_1 = par_n;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
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
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sock );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_isinstance_inst_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_socket );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_isinstance_inst_1 );

        exception_lineno = 146;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooooooo";
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
    loop_start_2:;
    // Tried code:
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_select );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "select" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_select );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sock );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 153;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = PyList_New( 1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    tmp_args_element_name_2 = PyList_New( 0 );
    tmp_args_element_name_3 = PyList_New( 0 );
    tmp_args_element_name_4 = const_float_0_1;
    frame_a8ffe38d27e221849b31372b2947c279->m_frame.f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0, 3 );
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


        type_description_1 = "ooooooo";
        exception_lineno = 153;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1, 3 );
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


        type_description_1 = "ooooooo";
        exception_lineno = 153;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2, 3 );
    if ( tmp_assign_source_5 == NULL )
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


        type_description_1 = "ooooooo";
        exception_lineno = 153;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_3;
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

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

                type_description_1 = "ooooooo";
                exception_lineno = 153;
                goto try_except_handler_3;
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

        type_description_1 = "ooooooo";
        exception_lineno = 153;
        goto try_except_handler_3;
    }
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

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

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

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_6 );
    {
        PyObject *old = var_read;
        var_read = tmp_assign_source_6;
        Py_INCREF( var_read );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_write;
        var_write = tmp_assign_source_7;
        Py_INCREF( var_write );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_err;
        var_err = tmp_assign_source_8;
        Py_INCREF( var_err );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_len_arg_1 = var_read;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "read" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sock );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_recv );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_n;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_a8ffe38d27e221849b31372b2947c279->m_frame.f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    goto loop_end_2;
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_sock );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_recv );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_n;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_a8ffe38d27e221849b31372b2947c279->m_frame.f_lineno = 158;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    branch_end_2:;
    tmp_len_arg_2 = var_x;

    CHECK_OBJECT( tmp_len_arg_2 );
    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    frame_a8ffe38d27e221849b31372b2947c279->m_frame.f_lineno = 161;
    tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS( PyExc_EOFError );
    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 161;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_left_name_1 = var_out;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "out" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = var_x;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_11 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    var_out = tmp_assign_source_11;

    tmp_left_name_2 = par_n;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_3 = var_x;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_12 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    par_n = tmp_assign_source_12;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = var_out;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "out" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8ffe38d27e221849b31372b2947c279 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8ffe38d27e221849b31372b2947c279 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8ffe38d27e221849b31372b2947c279 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a8ffe38d27e221849b31372b2947c279, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a8ffe38d27e221849b31372b2947c279->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a8ffe38d27e221849b31372b2947c279, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a8ffe38d27e221849b31372b2947c279,
        type_description_1,
        par_self,
        par_n,
        var_out,
        var_x,
        var_read,
        var_write,
        var_err
    );


    // Release cached frame.
    if ( frame_a8ffe38d27e221849b31372b2947c279 == cache_frame_a8ffe38d27e221849b31372b2947c279 )
    {
        Py_DECREF( frame_a8ffe38d27e221849b31372b2947c279 );
    }
    cache_frame_a8ffe38d27e221849b31372b2947c279 = NULL;

    assertFrameObject( frame_a8ffe38d27e221849b31372b2947c279 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_6__read_all );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_out );
    var_out = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_write );
    var_write = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_out );
    var_out = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    Py_XDECREF( var_write );
    var_write = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_6__read_all );
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


static PyObject *impl_paramiko$sftp$$$function_7__send_packet( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_t = python_pars[ 1 ];
    PyObject *par_packet = python_pars[ 2 ];
    PyObject *var_out = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_eb84f82e0c6ef044dfddd69f10e69c6b = NULL;

    struct Nuitka_FrameObject *frame_eb84f82e0c6ef044dfddd69f10e69c6b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eb84f82e0c6ef044dfddd69f10e69c6b, codeobj_eb84f82e0c6ef044dfddd69f10e69c6b, module_paramiko$sftp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eb84f82e0c6ef044dfddd69f10e69c6b = cache_frame_eb84f82e0c6ef044dfddd69f10e69c6b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eb84f82e0c6ef044dfddd69f10e69c6b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eb84f82e0c6ef044dfddd69f10e69c6b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_asbytes );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asbytes );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "asbytes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_packet;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_eb84f82e0c6ef044dfddd69f10e69c6b->m_frame.f_lineno = 167;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_packet;
        par_packet = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_struct );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "struct" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_pack );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
    tmp_len_arg_1 = par_packet;

    if ( tmp_len_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "packet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_args_element_name_3 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_eb84f82e0c6ef044dfddd69f10e69c6b->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_byte_chr );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_chr );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_chr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_t;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_eb84f82e0c6ef044dfddd69f10e69c6b->m_frame.f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = par_packet;

    if ( tmp_right_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "packet" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_out == NULL );
    var_out = tmp_assign_source_2;

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 169;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ultra_debug );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 169;
        type_description_1 = "oooo";
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
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__log );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_DEBUG );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEBUG );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEBUG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_util );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_format_binary );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = var_out;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "out" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = const_str_digest_acb4778c07d51a3672ce81487578b9c2;
    frame_eb84f82e0c6ef044dfddd69f10e69c6b->m_frame.f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_eb84f82e0c6ef044dfddd69f10e69c6b->m_frame.f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__write_all );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = var_out;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "out" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_eb84f82e0c6ef044dfddd69f10e69c6b->m_frame.f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb84f82e0c6ef044dfddd69f10e69c6b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eb84f82e0c6ef044dfddd69f10e69c6b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb84f82e0c6ef044dfddd69f10e69c6b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb84f82e0c6ef044dfddd69f10e69c6b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb84f82e0c6ef044dfddd69f10e69c6b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eb84f82e0c6ef044dfddd69f10e69c6b,
        type_description_1,
        par_self,
        par_t,
        par_packet,
        var_out
    );


    // Release cached frame.
    if ( frame_eb84f82e0c6ef044dfddd69f10e69c6b == cache_frame_eb84f82e0c6ef044dfddd69f10e69c6b )
    {
        Py_DECREF( frame_eb84f82e0c6ef044dfddd69f10e69c6b );
    }
    cache_frame_eb84f82e0c6ef044dfddd69f10e69c6b = NULL;

    assertFrameObject( frame_eb84f82e0c6ef044dfddd69f10e69c6b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_7__send_packet );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_out );
    var_out = NULL;

    Py_XDECREF( par_t );
    par_t = NULL;

    Py_XDECREF( par_packet );
    par_packet = NULL;

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

    Py_XDECREF( var_out );
    var_out = NULL;

    Py_XDECREF( par_t );
    par_t = NULL;

    Py_XDECREF( par_packet );
    par_packet = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_7__send_packet );
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


static PyObject *impl_paramiko$sftp$$$function_8__read_packet( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_data = NULL;
    PyObject *var_size = NULL;
    PyObject *var_x = NULL;
    PyObject *var_t = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_98c7c899db95f90e41bf326a17718328 = NULL;

    struct Nuitka_FrameObject *frame_98c7c899db95f90e41bf326a17718328;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_98c7c899db95f90e41bf326a17718328, codeobj_98c7c899db95f90e41bf326a17718328, module_paramiko$sftp, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_98c7c899db95f90e41bf326a17718328 = cache_frame_98c7c899db95f90e41bf326a17718328;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_98c7c899db95f90e41bf326a17718328 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_98c7c899db95f90e41bf326a17718328 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_self;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_98c7c899db95f90e41bf326a17718328->m_frame.f_lineno = 174;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__read_all, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_x == NULL );
    var_x = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_byte_ord );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_ord );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_ord" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = var_x;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_98c7c899db95f90e41bf326a17718328->m_frame.f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 177;
        type_description_1 = "ooooo";
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTPError );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SFTPError );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SFTPError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_98c7c899db95f90e41bf326a17718328->m_frame.f_lineno = 178;
    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_8d5d6df84a46bb439d6f959e9c2f1ef4_tuple, 0 ) );

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 178;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_struct );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_struct );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "struct" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_unpack );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_str_digest_e32643bbdc087df0169bdbc4edb2d9da;
    tmp_args_element_name_3 = var_x;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_98c7c899db95f90e41bf326a17718328->m_frame.f_lineno = 179;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_subscribed_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_size == NULL );
    var_size = tmp_assign_source_2;

    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__read_all );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_size;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_98c7c899db95f90e41bf326a17718328->m_frame.f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_data == NULL );
    var_data = tmp_assign_source_3;

    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ultra_debug );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 181;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__log );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_DEBUG );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEBUG );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEBUG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_util );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_format_binary );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 182;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = var_data;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = const_str_digest_fc9bba76f16a493244df27637725391e;
    frame_98c7c899db95f90e41bf326a17718328->m_frame.f_lineno = 182;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 182;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_98c7c899db95f90e41bf326a17718328->m_frame.f_lineno = 182;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_compare_left_1 = var_size;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_byte_ord );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_byte_ord );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "byte_ord" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_3 = var_data;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_3 = const_int_0;
    tmp_args_element_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_98c7c899db95f90e41bf326a17718328->m_frame.f_lineno = 184;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_t == NULL );
    var_t = tmp_assign_source_4;

    tmp_tuple_element_1 = var_t;

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_return_value = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_subscribed_name_4 = var_data;

    if ( tmp_subscribed_name_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_4 = const_slice_int_pos_1_none_none;
    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 185;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;
    branch_no_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_98c7c899db95f90e41bf326a17718328 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_98c7c899db95f90e41bf326a17718328 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_98c7c899db95f90e41bf326a17718328 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_98c7c899db95f90e41bf326a17718328, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_98c7c899db95f90e41bf326a17718328->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_98c7c899db95f90e41bf326a17718328, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_98c7c899db95f90e41bf326a17718328,
        type_description_1,
        par_self,
        var_data,
        var_size,
        var_x,
        var_t
    );


    // Release cached frame.
    if ( frame_98c7c899db95f90e41bf326a17718328 == cache_frame_98c7c899db95f90e41bf326a17718328 )
    {
        Py_DECREF( frame_98c7c899db95f90e41bf326a17718328 );
    }
    cache_frame_98c7c899db95f90e41bf326a17718328 = NULL;

    assertFrameObject( frame_98c7c899db95f90e41bf326a17718328 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = const_tuple_int_0_bytes_empty_tuple;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_8__read_packet );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

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

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$sftp$$$function_8__read_packet );
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



static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$sftp$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_edad67fb1e072db523528a17ca68b436,
#endif
        codeobj_f1430a642eb7cbfc1b275ccd82cd2c09,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$sftp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_2__send_version(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$sftp$$$function_2__send_version,
        const_str_plain__send_version,
#if PYTHON_VERSION >= 300
        const_str_digest_aaba259efeedeb26bd4f9cf76b40f0c5,
#endif
        codeobj_92ad57a3a4e668cf073e8c4093d16417,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$sftp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_3__send_server_version(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$sftp$$$function_3__send_server_version,
        const_str_plain__send_server_version,
#if PYTHON_VERSION >= 300
        const_str_digest_1f1d5cf4e98d518b3da22694619820cf,
#endif
        codeobj_5c38d724c7ac8480b766627f0de59ef7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$sftp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_4__log(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$sftp$$$function_4__log,
        const_str_plain__log,
#if PYTHON_VERSION >= 300
        const_str_digest_14d15b72415e66102dbe59c09c43ce6b,
#endif
        codeobj_f553bd9bc0d3a2befc5958ecae4d8099,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$sftp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_5__write_all(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$sftp$$$function_5__write_all,
        const_str_plain__write_all,
#if PYTHON_VERSION >= 300
        const_str_digest_4d6d58c4da656db2728bdea1017b31c8,
#endif
        codeobj_cb0151fd03f659280f9ff4015d5a2fe0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$sftp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_6__read_all(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$sftp$$$function_6__read_all,
        const_str_plain__read_all,
#if PYTHON_VERSION >= 300
        const_str_digest_22ec886c4d212c118649c8f3d3ea2277,
#endif
        codeobj_a8ffe38d27e221849b31372b2947c279,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$sftp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_7__send_packet(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$sftp$$$function_7__send_packet,
        const_str_plain__send_packet,
#if PYTHON_VERSION >= 300
        const_str_digest_e9863dbba329afcfb0bf24930e654e5d,
#endif
        codeobj_eb84f82e0c6ef044dfddd69f10e69c6b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$sftp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$sftp$$$function_8__read_packet(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$sftp$$$function_8__read_packet,
        const_str_plain__read_packet,
#if PYTHON_VERSION >= 300
        const_str_digest_f69f36a92802e8c69b7c050ce48ed38f,
#endif
        codeobj_98c7c899db95f90e41bf326a17718328,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$sftp,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_paramiko$sftp =
{
    PyModuleDef_HEAD_INIT,
    "paramiko.sftp",   /* m_name */
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

MOD_INIT_DECL( paramiko$sftp )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_paramiko$sftp );
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
    puts("paramiko.sftp: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("paramiko.sftp: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("paramiko.sftp: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initparamiko$sftp" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_paramiko$sftp = Py_InitModule4(
        "paramiko.sftp",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_paramiko$sftp = PyModule_Create( &mdef_paramiko$sftp );
#endif

    moduledict_paramiko$sftp = MODULE_DICT( module_paramiko$sftp );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_paramiko$sftp,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_paramiko$sftp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_paramiko$sftp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_paramiko$sftp );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_ca7e5e90f0864b38180ee052c924615f, module_paramiko$sftp );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_10 = NULL;
    PyObject *tmp_tuple_unpack_1__element_11 = NULL;
    PyObject *tmp_tuple_unpack_1__element_12 = NULL;
    PyObject *tmp_tuple_unpack_1__element_13 = NULL;
    PyObject *tmp_tuple_unpack_1__element_14 = NULL;
    PyObject *tmp_tuple_unpack_1__element_15 = NULL;
    PyObject *tmp_tuple_unpack_1__element_16 = NULL;
    PyObject *tmp_tuple_unpack_1__element_17 = NULL;
    PyObject *tmp_tuple_unpack_1__element_18 = NULL;
    PyObject *tmp_tuple_unpack_1__element_19 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_20 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
    PyObject *tmp_tuple_unpack_1__element_7 = NULL;
    PyObject *tmp_tuple_unpack_1__element_8 = NULL;
    PyObject *tmp_tuple_unpack_1__element_9 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__element_5 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__element_4 = NULL;
    PyObject *tmp_tuple_unpack_4__element_5 = NULL;
    PyObject *tmp_tuple_unpack_4__element_6 = NULL;
    PyObject *tmp_tuple_unpack_4__element_7 = NULL;
    PyObject *tmp_tuple_unpack_4__element_8 = NULL;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
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
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
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
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
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
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
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
    static struct Nuitka_FrameObject *cache_frame_3c5e2089da4ef2b01d17a3d59679edfd_2 = NULL;

    struct Nuitka_FrameObject *frame_3c5e2089da4ef2b01d17a3d59679edfd_2;

    struct Nuitka_FrameObject *frame_d4c22045921ea21b01013ef48a4c1b9c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    PyObject *locals_paramiko$sftp_93 = NULL;
    PyObject *locals_paramiko$sftp_97 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_770954b0fbfd2ac4355070a30e42e1ce;
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_d4c22045921ea21b01013ef48a4c1b9c = MAKE_MODULE_FRAME( codeobj_d4c22045921ea21b01013ef48a4c1b9c, module_paramiko$sftp );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d4c22045921ea21b01013ef48a4c1b9c );
    assert( Py_REFCNT( frame_d4c22045921ea21b01013ef48a4c1b9c ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_select;
    tmp_globals_name_1 = (PyObject *)moduledict_paramiko$sftp;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_d4c22045921ea21b01013ef48a4c1b9c->m_frame.f_lineno = 19;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_select, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_socket;
    tmp_globals_name_2 = (PyObject *)moduledict_paramiko$sftp;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_d4c22045921ea21b01013ef48a4c1b9c->m_frame.f_lineno = 20;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain_struct;
    tmp_globals_name_3 = (PyObject *)moduledict_paramiko$sftp;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_d4c22045921ea21b01013ef48a4c1b9c->m_frame.f_lineno = 21;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_struct, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_plain_paramiko;
    tmp_globals_name_4 = (PyObject *)moduledict_paramiko$sftp;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_util_tuple;
    tmp_level_name_4 = const_int_0;
    frame_d4c22045921ea21b01013ef48a4c1b9c->m_frame.f_lineno = 23;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_util );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_util, tmp_assign_source_7 );
    tmp_name_name_5 = const_str_digest_043a098e3c8c7e01497500bb854d02ab;
    tmp_globals_name_5 = (PyObject *)moduledict_paramiko$sftp;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_asbytes_str_plain_DEBUG_tuple;
    tmp_level_name_5 = const_int_0;
    frame_d4c22045921ea21b01013ef48a4c1b9c->m_frame.f_lineno = 24;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_asbytes );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_asbytes, tmp_assign_source_9 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_DEBUG );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_DEBUG, tmp_assign_source_10 );
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

    tmp_name_name_6 = const_str_digest_7b52c270f480f57450d385a0aa52d302;
    tmp_globals_name_6 = (PyObject *)moduledict_paramiko$sftp;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_Message_tuple;
    tmp_level_name_6 = const_int_0;
    frame_d4c22045921ea21b01013ef48a4c1b9c->m_frame.f_lineno = 25;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Message );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_Message, tmp_assign_source_11 );
    tmp_name_name_7 = const_str_digest_af46dc626906b3459f8298b3797a94e5;
    tmp_globals_name_7 = (PyObject *)moduledict_paramiko$sftp;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_byte_chr_str_plain_byte_ord_tuple;
    tmp_level_name_7 = const_int_0;
    frame_d4c22045921ea21b01013ef48a4c1b9c->m_frame.f_lineno = 26;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_12;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_byte_chr );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_byte_chr, tmp_assign_source_13 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_byte_ord );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_byte_ord, tmp_assign_source_14 );
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

    tmp_iter_arg_1 = const_xrange_1_21;
    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( !(tmp_assign_source_15 == NULL) );
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_15;

    // Tried code:
    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_1, 0, 20 );
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_16;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_2, 1, 20 );
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_17;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_3, 2, 20 );
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_18;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_19 = UNPACK_NEXT( tmp_unpack_4, 3, 20 );
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_19;

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_5, 4, 20 );
    if ( tmp_assign_source_20 == NULL )
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_5 == NULL );
    tmp_tuple_unpack_1__element_5 = tmp_assign_source_20;

    tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_6, 5, 20 );
    if ( tmp_assign_source_21 == NULL )
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_6 == NULL );
    tmp_tuple_unpack_1__element_6 = tmp_assign_source_21;

    tmp_unpack_7 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_7, 6, 20 );
    if ( tmp_assign_source_22 == NULL )
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_7 == NULL );
    tmp_tuple_unpack_1__element_7 = tmp_assign_source_22;

    tmp_unpack_8 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_8 );
    tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_8, 7, 20 );
    if ( tmp_assign_source_23 == NULL )
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_8 == NULL );
    tmp_tuple_unpack_1__element_8 = tmp_assign_source_23;

    tmp_unpack_9 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_9 );
    tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_9, 8, 20 );
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_9 == NULL );
    tmp_tuple_unpack_1__element_9 = tmp_assign_source_24;

    tmp_unpack_10 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_10 );
    tmp_assign_source_25 = UNPACK_NEXT( tmp_unpack_10, 9, 20 );
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_10 == NULL );
    tmp_tuple_unpack_1__element_10 = tmp_assign_source_25;

    tmp_unpack_11 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_11 );
    tmp_assign_source_26 = UNPACK_NEXT( tmp_unpack_11, 10, 20 );
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_11 == NULL );
    tmp_tuple_unpack_1__element_11 = tmp_assign_source_26;

    tmp_unpack_12 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_12 );
    tmp_assign_source_27 = UNPACK_NEXT( tmp_unpack_12, 11, 20 );
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_12 == NULL );
    tmp_tuple_unpack_1__element_12 = tmp_assign_source_27;

    tmp_unpack_13 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_13 );
    tmp_assign_source_28 = UNPACK_NEXT( tmp_unpack_13, 12, 20 );
    if ( tmp_assign_source_28 == NULL )
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_13 == NULL );
    tmp_tuple_unpack_1__element_13 = tmp_assign_source_28;

    tmp_unpack_14 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_14 );
    tmp_assign_source_29 = UNPACK_NEXT( tmp_unpack_14, 13, 20 );
    if ( tmp_assign_source_29 == NULL )
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_14 == NULL );
    tmp_tuple_unpack_1__element_14 = tmp_assign_source_29;

    tmp_unpack_15 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_15 );
    tmp_assign_source_30 = UNPACK_NEXT( tmp_unpack_15, 14, 20 );
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_15 == NULL );
    tmp_tuple_unpack_1__element_15 = tmp_assign_source_30;

    tmp_unpack_16 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_16 );
    tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_16, 15, 20 );
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_16 == NULL );
    tmp_tuple_unpack_1__element_16 = tmp_assign_source_31;

    tmp_unpack_17 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_17 );
    tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_17, 16, 20 );
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_17 == NULL );
    tmp_tuple_unpack_1__element_17 = tmp_assign_source_32;

    tmp_unpack_18 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_18 );
    tmp_assign_source_33 = UNPACK_NEXT( tmp_unpack_18, 17, 20 );
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_18 == NULL );
    tmp_tuple_unpack_1__element_18 = tmp_assign_source_33;

    tmp_unpack_19 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_19 );
    tmp_assign_source_34 = UNPACK_NEXT( tmp_unpack_19, 18, 20 );
    if ( tmp_assign_source_34 == NULL )
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_19 == NULL );
    tmp_tuple_unpack_1__element_19 = tmp_assign_source_34;

    tmp_unpack_20 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_20 );
    tmp_assign_source_35 = UNPACK_NEXT( tmp_unpack_20, 19, 20 );
    if ( tmp_assign_source_35 == NULL )
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



        exception_lineno = 29;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_20 == NULL );
    tmp_tuple_unpack_1__element_20 = tmp_assign_source_35;

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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_7 );
    tmp_tuple_unpack_1__element_7 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_8 );
    tmp_tuple_unpack_1__element_8 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_9 );
    tmp_tuple_unpack_1__element_9 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_10 );
    tmp_tuple_unpack_1__element_10 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_11 );
    tmp_tuple_unpack_1__element_11 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_12 );
    tmp_tuple_unpack_1__element_12 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_13 );
    tmp_tuple_unpack_1__element_13 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_14 );
    tmp_tuple_unpack_1__element_14 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_15 );
    tmp_tuple_unpack_1__element_15 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_16 );
    tmp_tuple_unpack_1__element_16 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_17 );
    tmp_tuple_unpack_1__element_17 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_18 );
    tmp_tuple_unpack_1__element_18 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_19 );
    tmp_tuple_unpack_1__element_19 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_36 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_36 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_INIT, tmp_assign_source_36 );
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_37 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_37 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_VERSION, tmp_assign_source_37 );
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_38 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_38 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_OPEN, tmp_assign_source_38 );
    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_assign_source_39 = tmp_tuple_unpack_1__element_4;

    CHECK_OBJECT( tmp_assign_source_39 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_CLOSE, tmp_assign_source_39 );
    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    tmp_assign_source_40 = tmp_tuple_unpack_1__element_5;

    CHECK_OBJECT( tmp_assign_source_40 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_READ, tmp_assign_source_40 );
    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    tmp_assign_source_41 = tmp_tuple_unpack_1__element_6;

    CHECK_OBJECT( tmp_assign_source_41 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_WRITE, tmp_assign_source_41 );
    Py_XDECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    tmp_assign_source_42 = tmp_tuple_unpack_1__element_7;

    CHECK_OBJECT( tmp_assign_source_42 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_LSTAT, tmp_assign_source_42 );
    Py_XDECREF( tmp_tuple_unpack_1__element_7 );
    tmp_tuple_unpack_1__element_7 = NULL;

    tmp_assign_source_43 = tmp_tuple_unpack_1__element_8;

    CHECK_OBJECT( tmp_assign_source_43 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_FSTAT, tmp_assign_source_43 );
    Py_XDECREF( tmp_tuple_unpack_1__element_8 );
    tmp_tuple_unpack_1__element_8 = NULL;

    tmp_assign_source_44 = tmp_tuple_unpack_1__element_9;

    CHECK_OBJECT( tmp_assign_source_44 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_SETSTAT, tmp_assign_source_44 );
    Py_XDECREF( tmp_tuple_unpack_1__element_9 );
    tmp_tuple_unpack_1__element_9 = NULL;

    tmp_assign_source_45 = tmp_tuple_unpack_1__element_10;

    CHECK_OBJECT( tmp_assign_source_45 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_FSETSTAT, tmp_assign_source_45 );
    Py_XDECREF( tmp_tuple_unpack_1__element_10 );
    tmp_tuple_unpack_1__element_10 = NULL;

    tmp_assign_source_46 = tmp_tuple_unpack_1__element_11;

    CHECK_OBJECT( tmp_assign_source_46 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_OPENDIR, tmp_assign_source_46 );
    Py_XDECREF( tmp_tuple_unpack_1__element_11 );
    tmp_tuple_unpack_1__element_11 = NULL;

    tmp_assign_source_47 = tmp_tuple_unpack_1__element_12;

    CHECK_OBJECT( tmp_assign_source_47 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_READDIR, tmp_assign_source_47 );
    Py_XDECREF( tmp_tuple_unpack_1__element_12 );
    tmp_tuple_unpack_1__element_12 = NULL;

    tmp_assign_source_48 = tmp_tuple_unpack_1__element_13;

    CHECK_OBJECT( tmp_assign_source_48 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_REMOVE, tmp_assign_source_48 );
    Py_XDECREF( tmp_tuple_unpack_1__element_13 );
    tmp_tuple_unpack_1__element_13 = NULL;

    tmp_assign_source_49 = tmp_tuple_unpack_1__element_14;

    CHECK_OBJECT( tmp_assign_source_49 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_MKDIR, tmp_assign_source_49 );
    Py_XDECREF( tmp_tuple_unpack_1__element_14 );
    tmp_tuple_unpack_1__element_14 = NULL;

    tmp_assign_source_50 = tmp_tuple_unpack_1__element_15;

    CHECK_OBJECT( tmp_assign_source_50 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_RMDIR, tmp_assign_source_50 );
    Py_XDECREF( tmp_tuple_unpack_1__element_15 );
    tmp_tuple_unpack_1__element_15 = NULL;

    tmp_assign_source_51 = tmp_tuple_unpack_1__element_16;

    CHECK_OBJECT( tmp_assign_source_51 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_REALPATH, tmp_assign_source_51 );
    Py_XDECREF( tmp_tuple_unpack_1__element_16 );
    tmp_tuple_unpack_1__element_16 = NULL;

    tmp_assign_source_52 = tmp_tuple_unpack_1__element_17;

    CHECK_OBJECT( tmp_assign_source_52 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_STAT, tmp_assign_source_52 );
    Py_XDECREF( tmp_tuple_unpack_1__element_17 );
    tmp_tuple_unpack_1__element_17 = NULL;

    tmp_assign_source_53 = tmp_tuple_unpack_1__element_18;

    CHECK_OBJECT( tmp_assign_source_53 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_RENAME, tmp_assign_source_53 );
    Py_XDECREF( tmp_tuple_unpack_1__element_18 );
    tmp_tuple_unpack_1__element_18 = NULL;

    tmp_assign_source_54 = tmp_tuple_unpack_1__element_19;

    CHECK_OBJECT( tmp_assign_source_54 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_READLINK, tmp_assign_source_54 );
    Py_XDECREF( tmp_tuple_unpack_1__element_19 );
    tmp_tuple_unpack_1__element_19 = NULL;

    tmp_assign_source_55 = tmp_tuple_unpack_1__element_20;

    CHECK_OBJECT( tmp_assign_source_55 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_SYMLINK, tmp_assign_source_55 );
    Py_XDECREF( tmp_tuple_unpack_1__element_20 );
    tmp_tuple_unpack_1__element_20 = NULL;

    tmp_iter_arg_2 = const_xrange_101_106;
    tmp_assign_source_56 = MAKE_ITERATOR( tmp_iter_arg_2 );
    assert( !(tmp_assign_source_56 == NULL) );
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_56;

    // Tried code:
    // Tried code:
    tmp_unpack_21 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_21 );
    tmp_assign_source_57 = UNPACK_NEXT( tmp_unpack_21, 0, 5 );
    if ( tmp_assign_source_57 == NULL )
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
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_57;

    tmp_unpack_22 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_22 );
    tmp_assign_source_58 = UNPACK_NEXT( tmp_unpack_22, 1, 5 );
    if ( tmp_assign_source_58 == NULL )
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
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_58;

    tmp_unpack_23 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_23 );
    tmp_assign_source_59 = UNPACK_NEXT( tmp_unpack_23, 2, 5 );
    if ( tmp_assign_source_59 == NULL )
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
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_2__element_3 == NULL );
    tmp_tuple_unpack_2__element_3 = tmp_assign_source_59;

    tmp_unpack_24 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_24 );
    tmp_assign_source_60 = UNPACK_NEXT( tmp_unpack_24, 3, 5 );
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



        exception_lineno = 33;
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_2__element_4 == NULL );
    tmp_tuple_unpack_2__element_4 = tmp_assign_source_60;

    tmp_unpack_25 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_25 );
    tmp_assign_source_61 = UNPACK_NEXT( tmp_unpack_25, 4, 5 );
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



        exception_lineno = 33;
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_2__element_5 == NULL );
    tmp_tuple_unpack_2__element_5 = tmp_assign_source_61;

    goto try_end_5;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_62 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_62 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_STATUS, tmp_assign_source_62 );
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_63 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_63 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_HANDLE, tmp_assign_source_63 );
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_assign_source_64 = tmp_tuple_unpack_2__element_3;

    CHECK_OBJECT( tmp_assign_source_64 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_DATA, tmp_assign_source_64 );
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    tmp_assign_source_65 = tmp_tuple_unpack_2__element_4;

    CHECK_OBJECT( tmp_assign_source_65 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_NAME, tmp_assign_source_65 );
    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    tmp_assign_source_66 = tmp_tuple_unpack_2__element_5;

    CHECK_OBJECT( tmp_assign_source_66 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_ATTRS, tmp_assign_source_66 );
    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    tmp_iter_arg_3 = const_xrange_200_202;
    tmp_assign_source_67 = MAKE_ITERATOR( tmp_iter_arg_3 );
    assert( !(tmp_assign_source_67 == NULL) );
    assert( tmp_tuple_unpack_3__source_iter == NULL );
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_67;

    // Tried code:
    // Tried code:
    tmp_unpack_26 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_26 );
    tmp_assign_source_68 = UNPACK_NEXT( tmp_unpack_26, 0, 2 );
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



        exception_lineno = 34;
        goto try_except_handler_8;
    }
    assert( tmp_tuple_unpack_3__element_1 == NULL );
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_68;

    tmp_unpack_27 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_27 );
    tmp_assign_source_69 = UNPACK_NEXT( tmp_unpack_27, 1, 2 );
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



        exception_lineno = 34;
        goto try_except_handler_8;
    }
    assert( tmp_tuple_unpack_3__element_2 == NULL );
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_69;

    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    tmp_assign_source_70 = tmp_tuple_unpack_3__element_1;

    CHECK_OBJECT( tmp_assign_source_70 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_EXTENDED, tmp_assign_source_70 );
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    tmp_assign_source_71 = tmp_tuple_unpack_3__element_2;

    CHECK_OBJECT( tmp_assign_source_71 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_EXTENDED_REPLY, tmp_assign_source_71 );
    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    tmp_assign_source_72 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_OK, tmp_assign_source_72 );
    tmp_iter_arg_4 = const_xrange_1_9;
    tmp_assign_source_73 = MAKE_ITERATOR( tmp_iter_arg_4 );
    assert( !(tmp_assign_source_73 == NULL) );
    assert( tmp_tuple_unpack_4__source_iter == NULL );
    tmp_tuple_unpack_4__source_iter = tmp_assign_source_73;

    // Tried code:
    // Tried code:
    tmp_unpack_28 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_28 );
    tmp_assign_source_74 = UNPACK_NEXT( tmp_unpack_28, 0, 8 );
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
        goto try_except_handler_10;
    }
    assert( tmp_tuple_unpack_4__element_1 == NULL );
    tmp_tuple_unpack_4__element_1 = tmp_assign_source_74;

    tmp_unpack_29 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_29 );
    tmp_assign_source_75 = UNPACK_NEXT( tmp_unpack_29, 1, 8 );
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
        goto try_except_handler_10;
    }
    assert( tmp_tuple_unpack_4__element_2 == NULL );
    tmp_tuple_unpack_4__element_2 = tmp_assign_source_75;

    tmp_unpack_30 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_30 );
    tmp_assign_source_76 = UNPACK_NEXT( tmp_unpack_30, 2, 8 );
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
        goto try_except_handler_10;
    }
    assert( tmp_tuple_unpack_4__element_3 == NULL );
    tmp_tuple_unpack_4__element_3 = tmp_assign_source_76;

    tmp_unpack_31 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_31 );
    tmp_assign_source_77 = UNPACK_NEXT( tmp_unpack_31, 3, 8 );
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
        goto try_except_handler_10;
    }
    assert( tmp_tuple_unpack_4__element_4 == NULL );
    tmp_tuple_unpack_4__element_4 = tmp_assign_source_77;

    tmp_unpack_32 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_32 );
    tmp_assign_source_78 = UNPACK_NEXT( tmp_unpack_32, 4, 8 );
    if ( tmp_assign_source_78 == NULL )
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
        goto try_except_handler_10;
    }
    assert( tmp_tuple_unpack_4__element_5 == NULL );
    tmp_tuple_unpack_4__element_5 = tmp_assign_source_78;

    tmp_unpack_33 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_33 );
    tmp_assign_source_79 = UNPACK_NEXT( tmp_unpack_33, 5, 8 );
    if ( tmp_assign_source_79 == NULL )
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
        goto try_except_handler_10;
    }
    assert( tmp_tuple_unpack_4__element_6 == NULL );
    tmp_tuple_unpack_4__element_6 = tmp_assign_source_79;

    tmp_unpack_34 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_34 );
    tmp_assign_source_80 = UNPACK_NEXT( tmp_unpack_34, 6, 8 );
    if ( tmp_assign_source_80 == NULL )
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
        goto try_except_handler_10;
    }
    assert( tmp_tuple_unpack_4__element_7 == NULL );
    tmp_tuple_unpack_4__element_7 = tmp_assign_source_80;

    tmp_unpack_35 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_35 );
    tmp_assign_source_81 = UNPACK_NEXT( tmp_unpack_35, 7, 8 );
    if ( tmp_assign_source_81 == NULL )
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
        goto try_except_handler_10;
    }
    assert( tmp_tuple_unpack_4__element_8 == NULL );
    tmp_tuple_unpack_4__element_8 = tmp_assign_source_81;

    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_9;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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

    Py_XDECREF( tmp_tuple_unpack_4__element_5 );
    tmp_tuple_unpack_4__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_6 );
    tmp_tuple_unpack_4__element_6 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_7 );
    tmp_tuple_unpack_4__element_7 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    tmp_assign_source_82 = tmp_tuple_unpack_4__element_1;

    CHECK_OBJECT( tmp_assign_source_82 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_EOF, tmp_assign_source_82 );
    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    tmp_assign_source_83 = tmp_tuple_unpack_4__element_2;

    CHECK_OBJECT( tmp_assign_source_83 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_NO_SUCH_FILE, tmp_assign_source_83 );
    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    tmp_assign_source_84 = tmp_tuple_unpack_4__element_3;

    CHECK_OBJECT( tmp_assign_source_84 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_PERMISSION_DENIED, tmp_assign_source_84 );
    Py_XDECREF( tmp_tuple_unpack_4__element_3 );
    tmp_tuple_unpack_4__element_3 = NULL;

    tmp_assign_source_85 = tmp_tuple_unpack_4__element_4;

    CHECK_OBJECT( tmp_assign_source_85 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_FAILURE, tmp_assign_source_85 );
    Py_XDECREF( tmp_tuple_unpack_4__element_4 );
    tmp_tuple_unpack_4__element_4 = NULL;

    tmp_assign_source_86 = tmp_tuple_unpack_4__element_5;

    CHECK_OBJECT( tmp_assign_source_86 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_BAD_MESSAGE, tmp_assign_source_86 );
    Py_XDECREF( tmp_tuple_unpack_4__element_5 );
    tmp_tuple_unpack_4__element_5 = NULL;

    tmp_assign_source_87 = tmp_tuple_unpack_4__element_6;

    CHECK_OBJECT( tmp_assign_source_87 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_NO_CONNECTION, tmp_assign_source_87 );
    Py_XDECREF( tmp_tuple_unpack_4__element_6 );
    tmp_tuple_unpack_4__element_6 = NULL;

    tmp_assign_source_88 = tmp_tuple_unpack_4__element_7;

    CHECK_OBJECT( tmp_assign_source_88 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_CONNECTION_LOST, tmp_assign_source_88 );
    Py_XDECREF( tmp_tuple_unpack_4__element_7 );
    tmp_tuple_unpack_4__element_7 = NULL;

    tmp_assign_source_89 = tmp_tuple_unpack_4__element_8;

    CHECK_OBJECT( tmp_assign_source_89 );
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_OP_UNSUPPORTED, tmp_assign_source_89 );
    Py_XDECREF( tmp_tuple_unpack_4__element_8 );
    tmp_tuple_unpack_4__element_8 = NULL;

    tmp_assign_source_90 = LIST_COPY( const_list_54e530178ddae1c28730cf3da41d25bf_list );
    UPDATE_STRING_DICT1( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_DESC, tmp_assign_source_90 );
    tmp_assign_source_91 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_FLAG_READ, tmp_assign_source_91 );
    tmp_assign_source_92 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_FLAG_WRITE, tmp_assign_source_92 );
    tmp_assign_source_93 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_FLAG_APPEND, tmp_assign_source_93 );
    tmp_assign_source_94 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_FLAG_CREATE, tmp_assign_source_94 );
    tmp_assign_source_95 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_FLAG_TRUNC, tmp_assign_source_95 );
    tmp_assign_source_96 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTP_FLAG_EXCL, tmp_assign_source_96 );
    tmp_assign_source_97 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain__VERSION, tmp_assign_source_97 );
    tmp_dict_key_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_INIT );

    if (unlikely( tmp_dict_key_1 == NULL ))
    {
        tmp_dict_key_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_INIT );
    }

    if ( tmp_dict_key_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_INIT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = const_str_plain_init;
    tmp_assign_source_98 = _PyDict_NewPresized( 27 );
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_1, tmp_dict_value_1 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_VERSION );

    if (unlikely( tmp_dict_key_2 == NULL ))
    {
        tmp_dict_key_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_VERSION );
    }

    if ( tmp_dict_key_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_VERSION" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = const_str_plain_version;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_2, tmp_dict_value_2 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_OPEN );

    if (unlikely( tmp_dict_key_3 == NULL ))
    {
        tmp_dict_key_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_OPEN );
    }

    if ( tmp_dict_key_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_OPEN" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = const_str_plain_open;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_3, tmp_dict_value_3 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_CLOSE );

    if (unlikely( tmp_dict_key_4 == NULL ))
    {
        tmp_dict_key_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_CLOSE );
    }

    if ( tmp_dict_key_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_CLOSE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = const_str_plain_close;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_4, tmp_dict_value_4 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_READ );

    if (unlikely( tmp_dict_key_5 == NULL ))
    {
        tmp_dict_key_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_READ );
    }

    if ( tmp_dict_key_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_READ" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = const_str_plain_read;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_5, tmp_dict_value_5 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_6 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_WRITE );

    if (unlikely( tmp_dict_key_6 == NULL ))
    {
        tmp_dict_key_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_WRITE );
    }

    if ( tmp_dict_key_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_WRITE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_6 = const_str_plain_write;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_6, tmp_dict_value_6 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_LSTAT );

    if (unlikely( tmp_dict_key_7 == NULL ))
    {
        tmp_dict_key_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_LSTAT );
    }

    if ( tmp_dict_key_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_LSTAT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_7 = const_str_plain_lstat;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_7, tmp_dict_value_7 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_FSTAT );

    if (unlikely( tmp_dict_key_8 == NULL ))
    {
        tmp_dict_key_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_FSTAT );
    }

    if ( tmp_dict_key_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_FSTAT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_8 = const_str_plain_fstat;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_8, tmp_dict_value_8 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_9 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_SETSTAT );

    if (unlikely( tmp_dict_key_9 == NULL ))
    {
        tmp_dict_key_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_SETSTAT );
    }

    if ( tmp_dict_key_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_SETSTAT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_9 = const_str_plain_setstat;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_9, tmp_dict_value_9 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_10 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_FSETSTAT );

    if (unlikely( tmp_dict_key_10 == NULL ))
    {
        tmp_dict_key_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_FSETSTAT );
    }

    if ( tmp_dict_key_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_FSETSTAT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_10 = const_str_plain_fsetstat;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_10, tmp_dict_value_10 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_11 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_OPENDIR );

    if (unlikely( tmp_dict_key_11 == NULL ))
    {
        tmp_dict_key_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_OPENDIR );
    }

    if ( tmp_dict_key_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_OPENDIR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_11 = const_str_plain_opendir;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_11, tmp_dict_value_11 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_12 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_READDIR );

    if (unlikely( tmp_dict_key_12 == NULL ))
    {
        tmp_dict_key_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_READDIR );
    }

    if ( tmp_dict_key_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_READDIR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_12 = const_str_plain_readdir;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_12, tmp_dict_value_12 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_13 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_REMOVE );

    if (unlikely( tmp_dict_key_13 == NULL ))
    {
        tmp_dict_key_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_REMOVE );
    }

    if ( tmp_dict_key_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_REMOVE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_13 = const_str_plain_remove;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_13, tmp_dict_value_13 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_14 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_MKDIR );

    if (unlikely( tmp_dict_key_14 == NULL ))
    {
        tmp_dict_key_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_MKDIR );
    }

    if ( tmp_dict_key_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_MKDIR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_14 = const_str_plain_mkdir;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_14, tmp_dict_value_14 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_15 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_RMDIR );

    if (unlikely( tmp_dict_key_15 == NULL ))
    {
        tmp_dict_key_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_RMDIR );
    }

    if ( tmp_dict_key_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_RMDIR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_15 = const_str_plain_rmdir;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_15, tmp_dict_value_15 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_16 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_REALPATH );

    if (unlikely( tmp_dict_key_16 == NULL ))
    {
        tmp_dict_key_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_REALPATH );
    }

    if ( tmp_dict_key_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_REALPATH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_16 = const_str_plain_realpath;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_16, tmp_dict_value_16 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_17 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_STAT );

    if (unlikely( tmp_dict_key_17 == NULL ))
    {
        tmp_dict_key_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_STAT );
    }

    if ( tmp_dict_key_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_STAT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_17 = const_str_plain_stat;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_17, tmp_dict_value_17 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_18 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_RENAME );

    if (unlikely( tmp_dict_key_18 == NULL ))
    {
        tmp_dict_key_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_RENAME );
    }

    if ( tmp_dict_key_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_RENAME" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_18 = const_str_plain_rename;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_18, tmp_dict_value_18 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_19 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_READLINK );

    if (unlikely( tmp_dict_key_19 == NULL ))
    {
        tmp_dict_key_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_READLINK );
    }

    if ( tmp_dict_key_19 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_READLINK" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_19 = const_str_plain_readlink;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_19, tmp_dict_value_19 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_20 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_SYMLINK );

    if (unlikely( tmp_dict_key_20 == NULL ))
    {
        tmp_dict_key_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_SYMLINK );
    }

    if ( tmp_dict_key_20 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_SYMLINK" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_20 = const_str_plain_symlink;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_20, tmp_dict_value_20 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_21 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_STATUS );

    if (unlikely( tmp_dict_key_21 == NULL ))
    {
        tmp_dict_key_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_STATUS );
    }

    if ( tmp_dict_key_21 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_STATUS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_21 = const_str_plain_status;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_21, tmp_dict_value_21 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_22 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_HANDLE );

    if (unlikely( tmp_dict_key_22 == NULL ))
    {
        tmp_dict_key_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_HANDLE );
    }

    if ( tmp_dict_key_22 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_22 = const_str_plain_handle;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_22, tmp_dict_value_22 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_23 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_DATA );

    if (unlikely( tmp_dict_key_23 == NULL ))
    {
        tmp_dict_key_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_DATA );
    }

    if ( tmp_dict_key_23 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_DATA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_23 = const_str_plain_data;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_23, tmp_dict_value_23 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_24 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_NAME );

    if (unlikely( tmp_dict_key_24 == NULL ))
    {
        tmp_dict_key_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_NAME );
    }

    if ( tmp_dict_key_24 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_NAME" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_24 = const_str_plain_name;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_24, tmp_dict_value_24 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_25 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_ATTRS );

    if (unlikely( tmp_dict_key_25 == NULL ))
    {
        tmp_dict_key_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_ATTRS );
    }

    if ( tmp_dict_key_25 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_ATTRS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_25 = const_str_plain_attrs;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_25, tmp_dict_value_25 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_26 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_EXTENDED );

    if (unlikely( tmp_dict_key_26 == NULL ))
    {
        tmp_dict_key_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_EXTENDED );
    }

    if ( tmp_dict_key_26 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_EXTENDED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_26 = const_str_plain_extended;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_26, tmp_dict_value_26 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    tmp_dict_key_27 = GET_STRING_DICT_VALUE( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_EXTENDED_REPLY );

    if (unlikely( tmp_dict_key_27 == NULL ))
    {
        tmp_dict_key_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CMD_EXTENDED_REPLY );
    }

    if ( tmp_dict_key_27 == NULL )
    {
        Py_DECREF( tmp_assign_source_98 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CMD_EXTENDED_REPLY" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;

        goto frame_exception_exit_1;
    }

    tmp_dict_value_27 = const_str_plain_extended_reply;
    tmp_res = PyDict_SetItem( tmp_assign_source_98, tmp_dict_key_27, tmp_dict_value_27 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_98 );

        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_CMD_NAMES, tmp_assign_source_98 );
    tmp_assign_source_99 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_99;

    // Tried code:
    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto try_except_handler_11;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto try_except_handler_11;
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


        exception_lineno = 93;

        goto try_except_handler_11;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_1:;
    tmp_bases_name_1 = const_tuple_type_Exception_tuple;
    tmp_assign_source_100 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto try_except_handler_11;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_100;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto try_except_handler_11;
    }
    tmp_cond_value_2 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto try_except_handler_11;
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


        exception_lineno = 93;

        goto try_except_handler_11;
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


        exception_lineno = 93;

        goto try_except_handler_11;
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


        exception_lineno = 93;

        goto try_except_handler_11;
    }
    tmp_args_name_1 = const_tuple_str_plain_SFTPError_tuple_type_Exception_tuple_tuple;
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_d4c22045921ea21b01013ef48a4c1b9c->m_frame.f_lineno = 93;
    tmp_assign_source_101 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_101 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto try_except_handler_11;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_101 = PyDict_New();
    condexpr_end_2:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_101;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_paramiko$sftp_93 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_ca7e5e90f0864b38180ee052c924615f;
    tmp_res = PyObject_SetItem( locals_paramiko$sftp_93, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto try_except_handler_13;
    }
    tmp_dictset_value = const_str_plain_SFTPError;
    tmp_res = PyObject_SetItem( locals_paramiko$sftp_93, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto try_except_handler_13;
    }
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_1 = const_str_plain_SFTPError;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_tuple_type_Exception_tuple;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_paramiko$sftp_93;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_1 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_d4c22045921ea21b01013ef48a4c1b9c->m_frame.f_lineno = 93;
    tmp_assign_source_103 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_103 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;

        goto try_except_handler_13;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_103;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_13;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$sftp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    Py_DECREF( locals_paramiko$sftp_93 );
    locals_paramiko$sftp_93 = NULL;
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

    Py_DECREF( locals_paramiko$sftp_93 );
    locals_paramiko$sftp_93 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$sftp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
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

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$sftp );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 93;
    goto try_except_handler_11;
    outline_result_1:;
    tmp_assign_source_102 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_SFTPError, tmp_assign_source_102 );
    goto try_end_11;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    tmp_assign_source_104 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_104;

    // Tried code:
    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_14;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_14;
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
    tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_14;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_metaclass_name_2 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_2 != NULL );
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_3:;
    tmp_bases_name_2 = const_tuple_type_object_tuple;
    tmp_assign_source_105 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_105 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_105;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_14;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_14;
    }
    if ( tmp_cond_truth_4 == 1 )
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


        exception_lineno = 97;

        goto try_except_handler_14;
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


        exception_lineno = 97;

        goto try_except_handler_14;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_source_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_14;
    }
    tmp_args_name_3 = const_tuple_str_plain_BaseSFTP_tuple_type_object_tuple_tuple;
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_d4c22045921ea21b01013ef48a4c1b9c->m_frame.f_lineno = 97;
    tmp_assign_source_106 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_106 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_14;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_106 = PyDict_New();
    condexpr_end_4:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_106;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_paramiko$sftp_97 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_ca7e5e90f0864b38180ee052c924615f;
    tmp_res = PyObject_SetItem( locals_paramiko$sftp_97, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_16;
    }
    tmp_dictset_value = const_str_plain_BaseSFTP;
    tmp_res = PyObject_SetItem( locals_paramiko$sftp_97, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_16;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_3c5e2089da4ef2b01d17a3d59679edfd_2, codeobj_3c5e2089da4ef2b01d17a3d59679edfd, module_paramiko$sftp, sizeof(void *) );
    frame_3c5e2089da4ef2b01d17a3d59679edfd_2 = cache_frame_3c5e2089da4ef2b01d17a3d59679edfd_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3c5e2089da4ef2b01d17a3d59679edfd_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3c5e2089da4ef2b01d17a3d59679edfd_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_paramiko$sftp$$$function_1___init__(  );
    tmp_res = PyObject_SetItem( locals_paramiko$sftp_97, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$sftp$$$function_2__send_version(  );
    tmp_res = PyObject_SetItem( locals_paramiko$sftp_97, const_str_plain__send_version, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$sftp$$$function_3__send_server_version(  );
    tmp_res = PyObject_SetItem( locals_paramiko$sftp_97, const_str_plain__send_server_version, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$sftp$$$function_4__log(  );
    tmp_res = PyObject_SetItem( locals_paramiko$sftp_97, const_str_plain__log, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$sftp$$$function_5__write_all(  );
    tmp_res = PyObject_SetItem( locals_paramiko$sftp_97, const_str_plain__write_all, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$sftp$$$function_6__read_all(  );
    tmp_res = PyObject_SetItem( locals_paramiko$sftp_97, const_str_plain__read_all, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$sftp$$$function_7__send_packet(  );
    tmp_res = PyObject_SetItem( locals_paramiko$sftp_97, const_str_plain__send_packet, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$sftp$$$function_8__read_packet(  );
    tmp_res = PyObject_SetItem( locals_paramiko$sftp_97, const_str_plain__read_packet, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c5e2089da4ef2b01d17a3d59679edfd_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c5e2089da4ef2b01d17a3d59679edfd_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3c5e2089da4ef2b01d17a3d59679edfd_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3c5e2089da4ef2b01d17a3d59679edfd_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3c5e2089da4ef2b01d17a3d59679edfd_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3c5e2089da4ef2b01d17a3d59679edfd_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_3c5e2089da4ef2b01d17a3d59679edfd_2 == cache_frame_3c5e2089da4ef2b01d17a3d59679edfd_2 )
    {
        Py_DECREF( frame_3c5e2089da4ef2b01d17a3d59679edfd_2 );
    }
    cache_frame_3c5e2089da4ef2b01d17a3d59679edfd_2 = NULL;

    assertFrameObject( frame_3c5e2089da4ef2b01d17a3d59679edfd_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_16;
    skip_nested_handling_1:;
    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_tuple_element_2 = const_str_plain_BaseSFTP;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_paramiko$sftp_97;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_2 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_d4c22045921ea21b01013ef48a4c1b9c->m_frame.f_lineno = 97;
    tmp_assign_source_108 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_108 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_16;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_108;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$sftp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    Py_DECREF( locals_paramiko$sftp_97 );
    locals_paramiko$sftp_97 = NULL;
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

    Py_DECREF( locals_paramiko$sftp_97 );
    locals_paramiko$sftp_97 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$sftp );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    goto outline_result_2;
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

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$sftp );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 97;
    goto try_except_handler_14;
    outline_result_2:;
    tmp_assign_source_107 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_paramiko$sftp, (Nuitka_StringObject *)const_str_plain_BaseSFTP, tmp_assign_source_107 );
    goto try_end_12;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d4c22045921ea21b01013ef48a4c1b9c );
#endif
    popFrameStack();

    assertFrameObject( frame_d4c22045921ea21b01013ef48a4c1b9c );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d4c22045921ea21b01013ef48a4c1b9c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d4c22045921ea21b01013ef48a4c1b9c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d4c22045921ea21b01013ef48a4c1b9c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d4c22045921ea21b01013ef48a4c1b9c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;


    return MOD_RETURN_VALUE( module_paramiko$sftp );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

/* Generated code for Python source for module 'paramiko'
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

/* The _module_paramiko is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_paramiko;
PyDictObject *moduledict_paramiko;

/* The module constants used, if any. */
extern PyObject *const_str_plain_WarningPolicy;
extern PyObject *const_str_plain_SFTP_EOF;
extern PyObject *const_tuple_str_plain_HostKeys_tuple;
extern PyObject *const_str_plain_Message;
static PyObject *const_list_e092e9d1b5a947ed4f3da6ee4528b25e_list;
extern PyObject *const_str_digest_bb8bc94d89fb57480df2659e82281530;
extern PyObject *const_str_plain_ChannelException;
extern PyObject *const_str_plain___file__;
static PyObject *const_list_str_digest_32e9c67eb17042720b4632060d8102b2_list;
extern PyObject *const_tuple_str_plain_Ed25519Key_tuple;
extern PyObject *const_str_plain_BaseSFTP;
extern PyObject *const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED;
extern PyObject *const_str_plain_AUTH_SUCCESSFUL;
extern PyObject *const_str_plain_AUTH_PARTIALLY_SUCCESSFUL;
extern PyObject *const_str_digest_54696a10c8d522abbc0752d1f0cde10f;
extern PyObject *const_tuple_str_plain_AuthHandler_tuple;
static PyObject *const_tuple_b3ec56acb8e0d55f58f13251f7afdc16_tuple;
extern PyObject *const_tuple_str_plain_ECDSAKey_tuple;
extern PyObject *const_str_digest_a8dc7c3a2a4e78bc49871c823364caa0;
extern PyObject *const_str_plain___license__;
extern PyObject *const_str_plain_AUTH_FAILED;
extern PyObject *const_str_plain_io_sleep;
extern PyObject *const_str_digest_c0620ec36a8cd5cad9ac8850d0bb5bee;
extern PyObject *const_str_digest_feb28feb532acaa5ef4b80fdc1d25c83;
static PyObject *const_tuple_9b1068fa21e43909ccc002c0c33e1f3d_tuple;
extern PyObject *const_str_plain_GSS_EXCEPTIONS;
extern PyObject *const_str_plain_Ed25519Key;
extern PyObject *const_tuple_str_plain_SFTPAttributes_tuple;
extern PyObject *const_str_plain_OPEN_FAILED_RESOURCE_SHORTAGE;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_str_plain_BufferedFile_tuple;
extern PyObject *const_str_plain_ECDSAKey;
extern PyObject *const_str_plain_Channel;
extern PyObject *const_str_plain_SFTPServerInterface;
extern PyObject *const_str_plain_SFTP_NO_CONNECTION;
extern PyObject *const_str_digest_6c798e982d09b84f3b5b37b409594e71;
extern PyObject *const_str_digest_1b46ff4cbbbd233e4fe77d234767f0e6;
extern PyObject *const_str_plain_SFTPHandle;
extern PyObject *const_str_plain_PKey;
extern PyObject *const_str_plain_OPEN_FAILED_UNKNOWN_CHANNEL_TYPE;
extern PyObject *const_tuple_str_plain_RSAKey_tuple;
extern PyObject *const_str_plain_SecurityOptions;
extern PyObject *const_str_plain_SFTPError;
extern PyObject *const_str_plain_SFTP_CONNECTION_LOST;
extern PyObject *const_tuple_str_plain___version___str_plain___version_info___tuple;
extern PyObject *const_str_digest_377ce7846e0f5871c80e88c27c40a3cc;
extern PyObject *const_str_digest_18e732c5b74160f934dca4e0f09b4721;
extern PyObject *const_str_plain_SFTP_OK;
static PyObject *const_str_digest_32e9c67eb17042720b4632060d8102b2;
static PyObject *const_str_digest_6dc7255153c6828bd23320f8af42430f;
static PyObject *const_tuple_str_plain_SFTPError_str_plain_BaseSFTP_tuple;
extern PyObject *const_str_plain_AgentKey;
extern PyObject *const_str_plain_RejectPolicy;
extern PyObject *const_str_plain_DSSKey;
extern PyObject *const_str_plain_ProxyCommandFailure;
static PyObject *const_tuple_str_plain_Channel_str_plain_ChannelFile_tuple;
extern PyObject *const_str_digest_ca7e5e90f0864b38180ee052c924615f;
static PyObject *const_tuple_8e2632c4e27baba6265e1c4c20310308_tuple;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_BadAuthenticationType;
extern PyObject *const_str_plain_BufferedFile;
extern PyObject *const_str_plain_ServerInterface;
extern PyObject *const_str_digest_8f2488a9b1a09b5004380be01694df85;
extern PyObject *const_str_digest_6ac368d59ca291f01caa6acdfb3826a1;
extern PyObject *const_str_plain_SFTPServer;
extern PyObject *const_str_digest_043a098e3c8c7e01497500bb854d02ab;
extern PyObject *const_str_digest_874f199f8c615b74b51fea192429a12d;
extern PyObject *const_str_digest_c9783714a145c70c37c4efbd57c939be;
extern PyObject *const_str_plain_SFTP_NO_SUCH_FILE;
extern PyObject *const_str_plain_GSSAuth;
extern PyObject *const_str_plain_SubsystemHandler;
extern PyObject *const_str_plain_PublicBlob;
extern PyObject *const_str_plain_SSHException;
static PyObject *const_tuple_str_plain_ProxyCommand_tuple;
static PyObject *const_tuple_str_plain_SecurityOptions_str_plain_Transport_tuple;
extern PyObject *const_tuple_str_plain_Message_tuple;
static PyObject *const_tuple_str_plain_Packetizer_tuple;
extern PyObject *const_str_digest_5ee67fa6fdaaa14d18297a729785cb77;
extern PyObject *const_str_digest_e18dd42ea54538915d35524da5d1de49;
extern PyObject *const_str_plain_InteractiveQuery;
extern PyObject *const_str_plain_AutoAddPolicy;
extern PyObject *const_str_plain_SFTPFile;
extern PyObject *const_str_digest_7b52c270f480f57450d385a0aa52d302;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_digest_716869a6690b951be544b69d090c22dd;
extern PyObject *const_str_plain_paramiko;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_digest_bef16ce8b162f6a92438de8918fc29a9;
extern PyObject *const_str_plain_Transport;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_ea4545ce436c53c4b49eb5bf04d640b4;
extern PyObject *const_str_plain_BadHostKeyException;
extern PyObject *const_str_plain_AuthHandler;
extern PyObject *const_str_plain_OPEN_SUCCEEDED;
extern PyObject *const_str_plain_SFTP_PERMISSION_DENIED;
extern PyObject *const_tuple_str_plain_SFTPServerInterface_tuple;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_OPEN_FAILED_CONNECT_FAILED;
static PyObject *const_tuple_str_plain_PKey_str_plain_PublicBlob_tuple;
extern PyObject *const_str_plain_ProxyCommand;
extern PyObject *const_str_plain_RSAKey;
extern PyObject *const_str_plain_ChannelFile;
extern PyObject *const_str_plain_SFTP_FAILURE;
extern PyObject *const_tuple_str_plain_SSHConfig_tuple;
extern PyObject *const_str_plain_Packetizer;
static PyObject *const_str_digest_cfe91fc4d0ca2579b0d9d40131dfb78c;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_GSS_AUTH_AVAILABLE;
static PyObject *const_tuple_str_plain_io_sleep_tuple;
extern PyObject *const_str_digest_d71cd37fc49ebaeda20fd188f876dc13;
extern PyObject *const_str_plain_SFTP_BAD_MESSAGE;
extern PyObject *const_str_plain_MissingHostKeyPolicy;
static PyObject *const_tuple_d575bf3c333066d9293690a629f277b6_tuple;
extern PyObject *const_str_digest_a627c70231a50942c6d356263a0ffbcb;
extern PyObject *const_str_plain_SSHClient;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_AuthenticationException;
extern PyObject *const_tuple_str_plain_SFTPFile_tuple;
extern PyObject *const_str_plain___version_info__;
extern PyObject *const_str_digest_526ca0498ee44f4a5e670bc6b1c946a1;
static PyObject *const_str_digest_512387e87b3af62589a6dd18e88fd6f4;
extern PyObject *const_str_digest_da5436ddaea39fe339e6d8cf1a16e1b0;
static PyObject *const_tuple_c1f0bda8f2a7c179b1a5b0ff0c9cf0e5_tuple;
extern PyObject *const_str_plain_SFTP;
extern PyObject *const_str_digest_11ba6382faf5515e4e143075ca650637;
static PyObject *const_tuple_aae5e2f3f2721015d0ada14e0665f0a1_tuple;
extern PyObject *const_str_digest_17d934cba47c439459f681bdee6dbc70;
extern PyObject *const_str_plain_HostKeys;
extern PyObject *const_str_plain_SFTPAttributes;
extern PyObject *const_str_digest_ce3edf68c8854adb57c9a3c9f342ea07;
static PyObject *const_tuple_str_plain_Agent_str_plain_AgentKey_tuple;
extern PyObject *const_str_plain_PasswordRequiredException;
extern PyObject *const_str_plain_SFTP_OP_UNSUPPORTED;
extern PyObject *const_tuple_str_plain_SFTPHandle_tuple;
extern PyObject *const_str_plain_SSHConfig;
extern PyObject *const_tuple_str_plain_DSSKey_tuple;
static PyObject *const_tuple_str_plain_SFTP_str_plain_SFTPClient_tuple;
static PyObject *const_str_digest_8781a6305faae7bb50408bd7e4d22828;
extern PyObject *const_tuple_str_plain_SFTPServer_tuple;
extern PyObject *const_str_plain_SFTPClient;
extern PyObject *const_str_plain_Agent;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_e092e9d1b5a947ed4f3da6ee4528b25e_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 383540 ], 516 );
    const_list_str_digest_32e9c67eb17042720b4632060d8102b2_list = PyList_New( 1 );
    const_str_digest_32e9c67eb17042720b4632060d8102b2 = UNSTREAM_STRING( &constant_bin[ 384056 ], 80, 0 );
    PyList_SET_ITEM( const_list_str_digest_32e9c67eb17042720b4632060d8102b2_list, 0, const_str_digest_32e9c67eb17042720b4632060d8102b2 ); Py_INCREF( const_str_digest_32e9c67eb17042720b4632060d8102b2 );
    const_tuple_b3ec56acb8e0d55f58f13251f7afdc16_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_b3ec56acb8e0d55f58f13251f7afdc16_tuple, 0, const_str_plain_GSSAuth ); Py_INCREF( const_str_plain_GSSAuth );
    PyTuple_SET_ITEM( const_tuple_b3ec56acb8e0d55f58f13251f7afdc16_tuple, 1, const_str_plain_GSS_AUTH_AVAILABLE ); Py_INCREF( const_str_plain_GSS_AUTH_AVAILABLE );
    PyTuple_SET_ITEM( const_tuple_b3ec56acb8e0d55f58f13251f7afdc16_tuple, 2, const_str_plain_GSS_EXCEPTIONS ); Py_INCREF( const_str_plain_GSS_EXCEPTIONS );
    const_tuple_9b1068fa21e43909ccc002c0c33e1f3d_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_9b1068fa21e43909ccc002c0c33e1f3d_tuple, 0, const_str_plain_SSHClient ); Py_INCREF( const_str_plain_SSHClient );
    PyTuple_SET_ITEM( const_tuple_9b1068fa21e43909ccc002c0c33e1f3d_tuple, 1, const_str_plain_MissingHostKeyPolicy ); Py_INCREF( const_str_plain_MissingHostKeyPolicy );
    PyTuple_SET_ITEM( const_tuple_9b1068fa21e43909ccc002c0c33e1f3d_tuple, 2, const_str_plain_AutoAddPolicy ); Py_INCREF( const_str_plain_AutoAddPolicy );
    PyTuple_SET_ITEM( const_tuple_9b1068fa21e43909ccc002c0c33e1f3d_tuple, 3, const_str_plain_RejectPolicy ); Py_INCREF( const_str_plain_RejectPolicy );
    PyTuple_SET_ITEM( const_tuple_9b1068fa21e43909ccc002c0c33e1f3d_tuple, 4, const_str_plain_WarningPolicy ); Py_INCREF( const_str_plain_WarningPolicy );
    const_str_digest_6dc7255153c6828bd23320f8af42430f = UNSTREAM_STRING( &constant_bin[ 384136 ], 17, 0 );
    const_tuple_str_plain_SFTPError_str_plain_BaseSFTP_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SFTPError_str_plain_BaseSFTP_tuple, 0, const_str_plain_SFTPError ); Py_INCREF( const_str_plain_SFTPError );
    PyTuple_SET_ITEM( const_tuple_str_plain_SFTPError_str_plain_BaseSFTP_tuple, 1, const_str_plain_BaseSFTP ); Py_INCREF( const_str_plain_BaseSFTP );
    const_tuple_str_plain_Channel_str_plain_ChannelFile_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Channel_str_plain_ChannelFile_tuple, 0, const_str_plain_Channel ); Py_INCREF( const_str_plain_Channel );
    PyTuple_SET_ITEM( const_tuple_str_plain_Channel_str_plain_ChannelFile_tuple, 1, const_str_plain_ChannelFile ); Py_INCREF( const_str_plain_ChannelFile );
    const_tuple_8e2632c4e27baba6265e1c4c20310308_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_8e2632c4e27baba6265e1c4c20310308_tuple, 0, const_str_plain_SFTP_OK ); Py_INCREF( const_str_plain_SFTP_OK );
    PyTuple_SET_ITEM( const_tuple_8e2632c4e27baba6265e1c4c20310308_tuple, 1, const_str_plain_SFTP_EOF ); Py_INCREF( const_str_plain_SFTP_EOF );
    PyTuple_SET_ITEM( const_tuple_8e2632c4e27baba6265e1c4c20310308_tuple, 2, const_str_plain_SFTP_NO_SUCH_FILE ); Py_INCREF( const_str_plain_SFTP_NO_SUCH_FILE );
    PyTuple_SET_ITEM( const_tuple_8e2632c4e27baba6265e1c4c20310308_tuple, 3, const_str_plain_SFTP_PERMISSION_DENIED ); Py_INCREF( const_str_plain_SFTP_PERMISSION_DENIED );
    PyTuple_SET_ITEM( const_tuple_8e2632c4e27baba6265e1c4c20310308_tuple, 4, const_str_plain_SFTP_FAILURE ); Py_INCREF( const_str_plain_SFTP_FAILURE );
    PyTuple_SET_ITEM( const_tuple_8e2632c4e27baba6265e1c4c20310308_tuple, 5, const_str_plain_SFTP_BAD_MESSAGE ); Py_INCREF( const_str_plain_SFTP_BAD_MESSAGE );
    PyTuple_SET_ITEM( const_tuple_8e2632c4e27baba6265e1c4c20310308_tuple, 6, const_str_plain_SFTP_NO_CONNECTION ); Py_INCREF( const_str_plain_SFTP_NO_CONNECTION );
    PyTuple_SET_ITEM( const_tuple_8e2632c4e27baba6265e1c4c20310308_tuple, 7, const_str_plain_SFTP_CONNECTION_LOST ); Py_INCREF( const_str_plain_SFTP_CONNECTION_LOST );
    PyTuple_SET_ITEM( const_tuple_8e2632c4e27baba6265e1c4c20310308_tuple, 8, const_str_plain_SFTP_OP_UNSUPPORTED ); Py_INCREF( const_str_plain_SFTP_OP_UNSUPPORTED );
    const_tuple_str_plain_ProxyCommand_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ProxyCommand_tuple, 0, const_str_plain_ProxyCommand ); Py_INCREF( const_str_plain_ProxyCommand );
    const_tuple_str_plain_SecurityOptions_str_plain_Transport_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SecurityOptions_str_plain_Transport_tuple, 0, const_str_plain_SecurityOptions ); Py_INCREF( const_str_plain_SecurityOptions );
    PyTuple_SET_ITEM( const_tuple_str_plain_SecurityOptions_str_plain_Transport_tuple, 1, const_str_plain_Transport ); Py_INCREF( const_str_plain_Transport );
    const_tuple_str_plain_Packetizer_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Packetizer_tuple, 0, const_str_plain_Packetizer ); Py_INCREF( const_str_plain_Packetizer );
    const_tuple_str_plain_PKey_str_plain_PublicBlob_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PKey_str_plain_PublicBlob_tuple, 0, const_str_plain_PKey ); Py_INCREF( const_str_plain_PKey );
    PyTuple_SET_ITEM( const_tuple_str_plain_PKey_str_plain_PublicBlob_tuple, 1, const_str_plain_PublicBlob ); Py_INCREF( const_str_plain_PublicBlob );
    const_str_digest_cfe91fc4d0ca2579b0d9d40131dfb78c = UNSTREAM_STRING( &constant_bin[ 384153 ], 92, 0 );
    const_tuple_str_plain_io_sleep_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_io_sleep_tuple, 0, const_str_plain_io_sleep ); Py_INCREF( const_str_plain_io_sleep );
    const_tuple_d575bf3c333066d9293690a629f277b6_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_d575bf3c333066d9293690a629f277b6_tuple, 0, const_str_plain_ServerInterface ); Py_INCREF( const_str_plain_ServerInterface );
    PyTuple_SET_ITEM( const_tuple_d575bf3c333066d9293690a629f277b6_tuple, 1, const_str_plain_SubsystemHandler ); Py_INCREF( const_str_plain_SubsystemHandler );
    PyTuple_SET_ITEM( const_tuple_d575bf3c333066d9293690a629f277b6_tuple, 2, const_str_plain_InteractiveQuery ); Py_INCREF( const_str_plain_InteractiveQuery );
    const_str_digest_512387e87b3af62589a6dd18e88fd6f4 = UNSTREAM_STRING( &constant_bin[ 384245 ], 40, 0 );
    const_tuple_c1f0bda8f2a7c179b1a5b0ff0c9cf0e5_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_c1f0bda8f2a7c179b1a5b0ff0c9cf0e5_tuple, 0, const_str_plain_AUTH_SUCCESSFUL ); Py_INCREF( const_str_plain_AUTH_SUCCESSFUL );
    PyTuple_SET_ITEM( const_tuple_c1f0bda8f2a7c179b1a5b0ff0c9cf0e5_tuple, 1, const_str_plain_AUTH_PARTIALLY_SUCCESSFUL ); Py_INCREF( const_str_plain_AUTH_PARTIALLY_SUCCESSFUL );
    PyTuple_SET_ITEM( const_tuple_c1f0bda8f2a7c179b1a5b0ff0c9cf0e5_tuple, 2, const_str_plain_AUTH_FAILED ); Py_INCREF( const_str_plain_AUTH_FAILED );
    PyTuple_SET_ITEM( const_tuple_c1f0bda8f2a7c179b1a5b0ff0c9cf0e5_tuple, 3, const_str_plain_OPEN_SUCCEEDED ); Py_INCREF( const_str_plain_OPEN_SUCCEEDED );
    PyTuple_SET_ITEM( const_tuple_c1f0bda8f2a7c179b1a5b0ff0c9cf0e5_tuple, 4, const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED ); Py_INCREF( const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED );
    PyTuple_SET_ITEM( const_tuple_c1f0bda8f2a7c179b1a5b0ff0c9cf0e5_tuple, 5, const_str_plain_OPEN_FAILED_CONNECT_FAILED ); Py_INCREF( const_str_plain_OPEN_FAILED_CONNECT_FAILED );
    PyTuple_SET_ITEM( const_tuple_c1f0bda8f2a7c179b1a5b0ff0c9cf0e5_tuple, 6, const_str_plain_OPEN_FAILED_UNKNOWN_CHANNEL_TYPE ); Py_INCREF( const_str_plain_OPEN_FAILED_UNKNOWN_CHANNEL_TYPE );
    PyTuple_SET_ITEM( const_tuple_c1f0bda8f2a7c179b1a5b0ff0c9cf0e5_tuple, 7, const_str_plain_OPEN_FAILED_RESOURCE_SHORTAGE ); Py_INCREF( const_str_plain_OPEN_FAILED_RESOURCE_SHORTAGE );
    const_tuple_aae5e2f3f2721015d0ada14e0665f0a1_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_aae5e2f3f2721015d0ada14e0665f0a1_tuple, 0, const_str_plain_SSHException ); Py_INCREF( const_str_plain_SSHException );
    PyTuple_SET_ITEM( const_tuple_aae5e2f3f2721015d0ada14e0665f0a1_tuple, 1, const_str_plain_PasswordRequiredException ); Py_INCREF( const_str_plain_PasswordRequiredException );
    PyTuple_SET_ITEM( const_tuple_aae5e2f3f2721015d0ada14e0665f0a1_tuple, 2, const_str_plain_BadAuthenticationType ); Py_INCREF( const_str_plain_BadAuthenticationType );
    PyTuple_SET_ITEM( const_tuple_aae5e2f3f2721015d0ada14e0665f0a1_tuple, 3, const_str_plain_ChannelException ); Py_INCREF( const_str_plain_ChannelException );
    PyTuple_SET_ITEM( const_tuple_aae5e2f3f2721015d0ada14e0665f0a1_tuple, 4, const_str_plain_BadHostKeyException ); Py_INCREF( const_str_plain_BadHostKeyException );
    PyTuple_SET_ITEM( const_tuple_aae5e2f3f2721015d0ada14e0665f0a1_tuple, 5, const_str_plain_AuthenticationException ); Py_INCREF( const_str_plain_AuthenticationException );
    PyTuple_SET_ITEM( const_tuple_aae5e2f3f2721015d0ada14e0665f0a1_tuple, 6, const_str_plain_ProxyCommandFailure ); Py_INCREF( const_str_plain_ProxyCommandFailure );
    const_tuple_str_plain_Agent_str_plain_AgentKey_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Agent_str_plain_AgentKey_tuple, 0, const_str_plain_Agent ); Py_INCREF( const_str_plain_Agent );
    PyTuple_SET_ITEM( const_tuple_str_plain_Agent_str_plain_AgentKey_tuple, 1, const_str_plain_AgentKey ); Py_INCREF( const_str_plain_AgentKey );
    const_tuple_str_plain_SFTP_str_plain_SFTPClient_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SFTP_str_plain_SFTPClient_tuple, 0, const_str_plain_SFTP ); Py_INCREF( const_str_plain_SFTP );
    PyTuple_SET_ITEM( const_tuple_str_plain_SFTP_str_plain_SFTPClient_tuple, 1, const_str_plain_SFTPClient ); Py_INCREF( const_str_plain_SFTPClient );
    const_str_digest_8781a6305faae7bb50408bd7e4d22828 = UNSTREAM_STRING( &constant_bin[ 384285 ], 34, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_paramiko( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_983c531d7fbf1d42efc5fe069f5077de;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_cfe91fc4d0ca2579b0d9d40131dfb78c;
    codeobj_983c531d7fbf1d42efc5fe069f5077de = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6dc7255153c6828bd23320f8af42430f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_paramiko =
{
    PyModuleDef_HEAD_INIT,
    "paramiko",   /* m_name */
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

MOD_INIT_DECL( paramiko )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_paramiko );
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
    puts("paramiko: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("paramiko: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("paramiko: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initparamiko" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_paramiko = Py_InitModule4(
        "paramiko",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_paramiko = PyModule_Create( &mdef_paramiko );
#endif

    moduledict_paramiko = MODULE_DICT( module_paramiko );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_paramiko,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_paramiko,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_paramiko,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_paramiko );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_paramiko, module_paramiko );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_10__module = NULL;
    PyObject *tmp_import_from_11__module = NULL;
    PyObject *tmp_import_from_12__module = NULL;
    PyObject *tmp_import_from_13__module = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_import_from_8__module = NULL;
    PyObject *tmp_import_from_9__module = NULL;
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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_fromlist_name_11;
    PyObject *tmp_fromlist_name_12;
    PyObject *tmp_fromlist_name_13;
    PyObject *tmp_fromlist_name_14;
    PyObject *tmp_fromlist_name_15;
    PyObject *tmp_fromlist_name_16;
    PyObject *tmp_fromlist_name_17;
    PyObject *tmp_fromlist_name_18;
    PyObject *tmp_fromlist_name_19;
    PyObject *tmp_fromlist_name_20;
    PyObject *tmp_fromlist_name_21;
    PyObject *tmp_fromlist_name_22;
    PyObject *tmp_fromlist_name_23;
    PyObject *tmp_fromlist_name_24;
    PyObject *tmp_fromlist_name_25;
    PyObject *tmp_fromlist_name_26;
    PyObject *tmp_fromlist_name_27;
    PyObject *tmp_fromlist_name_28;
    PyObject *tmp_fromlist_name_29;
    PyObject *tmp_fromlist_name_30;
    PyObject *tmp_fromlist_name_31;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_globals_name_10;
    PyObject *tmp_globals_name_11;
    PyObject *tmp_globals_name_12;
    PyObject *tmp_globals_name_13;
    PyObject *tmp_globals_name_14;
    PyObject *tmp_globals_name_15;
    PyObject *tmp_globals_name_16;
    PyObject *tmp_globals_name_17;
    PyObject *tmp_globals_name_18;
    PyObject *tmp_globals_name_19;
    PyObject *tmp_globals_name_20;
    PyObject *tmp_globals_name_21;
    PyObject *tmp_globals_name_22;
    PyObject *tmp_globals_name_23;
    PyObject *tmp_globals_name_24;
    PyObject *tmp_globals_name_25;
    PyObject *tmp_globals_name_26;
    PyObject *tmp_globals_name_27;
    PyObject *tmp_globals_name_28;
    PyObject *tmp_globals_name_29;
    PyObject *tmp_globals_name_30;
    PyObject *tmp_globals_name_31;
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
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_import_name_from_24;
    PyObject *tmp_import_name_from_25;
    PyObject *tmp_import_name_from_26;
    PyObject *tmp_import_name_from_27;
    PyObject *tmp_import_name_from_28;
    PyObject *tmp_import_name_from_29;
    PyObject *tmp_import_name_from_30;
    PyObject *tmp_import_name_from_31;
    PyObject *tmp_import_name_from_32;
    PyObject *tmp_import_name_from_33;
    PyObject *tmp_import_name_from_34;
    PyObject *tmp_import_name_from_35;
    PyObject *tmp_import_name_from_36;
    PyObject *tmp_import_name_from_37;
    PyObject *tmp_import_name_from_38;
    PyObject *tmp_import_name_from_39;
    PyObject *tmp_import_name_from_40;
    PyObject *tmp_import_name_from_41;
    PyObject *tmp_import_name_from_42;
    PyObject *tmp_import_name_from_43;
    PyObject *tmp_import_name_from_44;
    PyObject *tmp_import_name_from_45;
    PyObject *tmp_import_name_from_46;
    PyObject *tmp_import_name_from_47;
    PyObject *tmp_import_name_from_48;
    PyObject *tmp_import_name_from_49;
    PyObject *tmp_import_name_from_50;
    PyObject *tmp_import_name_from_51;
    PyObject *tmp_import_name_from_52;
    PyObject *tmp_import_name_from_53;
    PyObject *tmp_import_name_from_54;
    PyObject *tmp_import_name_from_55;
    PyObject *tmp_import_name_from_56;
    PyObject *tmp_import_name_from_57;
    PyObject *tmp_import_name_from_58;
    PyObject *tmp_import_name_from_59;
    PyObject *tmp_import_name_from_60;
    PyObject *tmp_import_name_from_61;
    PyObject *tmp_import_name_from_62;
    PyObject *tmp_import_name_from_63;
    PyObject *tmp_import_name_from_64;
    PyObject *tmp_import_name_from_65;
    PyObject *tmp_import_name_from_66;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_level_name_10;
    PyObject *tmp_level_name_11;
    PyObject *tmp_level_name_12;
    PyObject *tmp_level_name_13;
    PyObject *tmp_level_name_14;
    PyObject *tmp_level_name_15;
    PyObject *tmp_level_name_16;
    PyObject *tmp_level_name_17;
    PyObject *tmp_level_name_18;
    PyObject *tmp_level_name_19;
    PyObject *tmp_level_name_20;
    PyObject *tmp_level_name_21;
    PyObject *tmp_level_name_22;
    PyObject *tmp_level_name_23;
    PyObject *tmp_level_name_24;
    PyObject *tmp_level_name_25;
    PyObject *tmp_level_name_26;
    PyObject *tmp_level_name_27;
    PyObject *tmp_level_name_28;
    PyObject *tmp_level_name_29;
    PyObject *tmp_level_name_30;
    PyObject *tmp_level_name_31;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_locals_name_10;
    PyObject *tmp_locals_name_11;
    PyObject *tmp_locals_name_12;
    PyObject *tmp_locals_name_13;
    PyObject *tmp_locals_name_14;
    PyObject *tmp_locals_name_15;
    PyObject *tmp_locals_name_16;
    PyObject *tmp_locals_name_17;
    PyObject *tmp_locals_name_18;
    PyObject *tmp_locals_name_19;
    PyObject *tmp_locals_name_20;
    PyObject *tmp_locals_name_21;
    PyObject *tmp_locals_name_22;
    PyObject *tmp_locals_name_23;
    PyObject *tmp_locals_name_24;
    PyObject *tmp_locals_name_25;
    PyObject *tmp_locals_name_26;
    PyObject *tmp_locals_name_27;
    PyObject *tmp_locals_name_28;
    PyObject *tmp_locals_name_29;
    PyObject *tmp_locals_name_30;
    PyObject *tmp_locals_name_31;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_name_name_10;
    PyObject *tmp_name_name_11;
    PyObject *tmp_name_name_12;
    PyObject *tmp_name_name_13;
    PyObject *tmp_name_name_14;
    PyObject *tmp_name_name_15;
    PyObject *tmp_name_name_16;
    PyObject *tmp_name_name_17;
    PyObject *tmp_name_name_18;
    PyObject *tmp_name_name_19;
    PyObject *tmp_name_name_20;
    PyObject *tmp_name_name_21;
    PyObject *tmp_name_name_22;
    PyObject *tmp_name_name_23;
    PyObject *tmp_name_name_24;
    PyObject *tmp_name_name_25;
    PyObject *tmp_name_name_26;
    PyObject *tmp_name_name_27;
    PyObject *tmp_name_name_28;
    PyObject *tmp_name_name_29;
    PyObject *tmp_name_name_30;
    PyObject *tmp_name_name_31;
    struct Nuitka_FrameObject *frame_983c531d7fbf1d42efc5fe069f5077de;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_cfe91fc4d0ca2579b0d9d40131dfb78c;
    UPDATE_STRING_DICT0( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_32e9c67eb17042720b4632060d8102b2_list );
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( !(tmp_assign_source_5 == NULL) );
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    // Frame without reuse.
    frame_983c531d7fbf1d42efc5fe069f5077de = MAKE_MODULE_FRAME( codeobj_983c531d7fbf1d42efc5fe069f5077de, module_paramiko );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_983c531d7fbf1d42efc5fe069f5077de );
    assert( Py_REFCNT( frame_983c531d7fbf1d42efc5fe069f5077de ) == 2 );

    // Framed code:
    tmp_name_name_2 = const_str_digest_6ac368d59ca291f01caa6acdfb3826a1;
    tmp_globals_name_2 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain___version___str_plain___version_info___tuple;
    tmp_level_name_2 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 21;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_6;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain___version__ );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_7 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain___version_info__ );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___version_info__, tmp_assign_source_8 );
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

    tmp_name_name_3 = const_str_digest_8f2488a9b1a09b5004380be01694df85;
    tmp_globals_name_3 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_SecurityOptions_str_plain_Transport_tuple;
    tmp_level_name_3 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 22;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_9;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_SecurityOptions );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SecurityOptions, tmp_assign_source_10 );
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Transport );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_Transport, tmp_assign_source_11 );
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

    tmp_name_name_4 = const_str_digest_377ce7846e0f5871c80e88c27c40a3cc;
    tmp_globals_name_4 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_9b1068fa21e43909ccc002c0c33e1f3d_tuple;
    tmp_level_name_4 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 23;
    tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_12;

    // Tried code:
    tmp_import_name_from_5 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_SSHClient );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SSHClient, tmp_assign_source_13 );
    tmp_import_name_from_6 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_MissingHostKeyPolicy );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_MissingHostKeyPolicy, tmp_assign_source_14 );
    tmp_import_name_from_7 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_AutoAddPolicy );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_AutoAddPolicy, tmp_assign_source_15 );
    tmp_import_name_from_8 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_RejectPolicy );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_RejectPolicy, tmp_assign_source_16 );
    tmp_import_name_from_9 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_WarningPolicy );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_WarningPolicy, tmp_assign_source_17 );
    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_name_name_5 = const_str_digest_bb8bc94d89fb57480df2659e82281530;
    tmp_globals_name_5 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_AuthHandler_tuple;
    tmp_level_name_5 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 27;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_AuthHandler );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_AuthHandler, tmp_assign_source_18 );
    tmp_name_name_6 = const_str_digest_d71cd37fc49ebaeda20fd188f876dc13;
    tmp_globals_name_6 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_b3ec56acb8e0d55f58f13251f7afdc16_tuple;
    tmp_level_name_6 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 28;
    tmp_assign_source_19 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_19;

    // Tried code:
    tmp_import_name_from_11 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_GSSAuth );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_GSSAuth, tmp_assign_source_20 );
    tmp_import_name_from_12 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_GSS_AUTH_AVAILABLE );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_GSS_AUTH_AVAILABLE, tmp_assign_source_21 );
    tmp_import_name_from_13 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_GSS_EXCEPTIONS );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_GSS_EXCEPTIONS, tmp_assign_source_22 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    tmp_name_name_7 = const_str_digest_1b46ff4cbbbd233e4fe77d234767f0e6;
    tmp_globals_name_7 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_Channel_str_plain_ChannelFile_tuple;
    tmp_level_name_7 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 29;
    tmp_assign_source_23 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_5__module == NULL );
    tmp_import_from_5__module = tmp_assign_source_23;

    // Tried code:
    tmp_import_name_from_14 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_Channel );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_Channel, tmp_assign_source_24 );
    tmp_import_name_from_15 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_ChannelFile );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_ChannelFile, tmp_assign_source_25 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    tmp_name_name_8 = const_str_digest_5ee67fa6fdaaa14d18297a729785cb77;
    tmp_globals_name_8 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_aae5e2f3f2721015d0ada14e0665f0a1_tuple;
    tmp_level_name_8 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 30;
    tmp_assign_source_26 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_6__module == NULL );
    tmp_import_from_6__module = tmp_assign_source_26;

    // Tried code:
    tmp_import_name_from_16 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_SSHException );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SSHException, tmp_assign_source_27 );
    tmp_import_name_from_17 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_PasswordRequiredException );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_PasswordRequiredException, tmp_assign_source_28 );
    tmp_import_name_from_18 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_BadAuthenticationType );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_BadAuthenticationType, tmp_assign_source_29 );
    tmp_import_name_from_19 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_ChannelException );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_ChannelException, tmp_assign_source_30 );
    tmp_import_name_from_20 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_BadHostKeyException );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_BadHostKeyException, tmp_assign_source_31 );
    tmp_import_name_from_21 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_AuthenticationException );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_AuthenticationException, tmp_assign_source_32 );
    tmp_import_name_from_22 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_22 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_ProxyCommandFailure );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_ProxyCommandFailure, tmp_assign_source_33 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    tmp_name_name_9 = const_str_digest_ea4545ce436c53c4b49eb5bf04d640b4;
    tmp_globals_name_9 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_d575bf3c333066d9293690a629f277b6_tuple;
    tmp_level_name_9 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 35;
    tmp_assign_source_34 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_7__module == NULL );
    tmp_import_from_7__module = tmp_assign_source_34;

    // Tried code:
    tmp_import_name_from_23 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_23 );
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_ServerInterface );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_ServerInterface, tmp_assign_source_35 );
    tmp_import_name_from_24 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_24 );
    tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_SubsystemHandler );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SubsystemHandler, tmp_assign_source_36 );
    tmp_import_name_from_25 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_25 );
    tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_InteractiveQuery );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_InteractiveQuery, tmp_assign_source_37 );
    goto try_end_7;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_7__module );
    Py_DECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_7__module );
    Py_DECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    tmp_name_name_10 = const_str_digest_c9783714a145c70c37c4efbd57c939be;
    tmp_globals_name_10 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_RSAKey_tuple;
    tmp_level_name_10 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 36;
    tmp_import_name_from_26 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_RSAKey );
    Py_DECREF( tmp_import_name_from_26 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_RSAKey, tmp_assign_source_38 );
    tmp_name_name_11 = const_str_digest_874f199f8c615b74b51fea192429a12d;
    tmp_globals_name_11 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_DSSKey_tuple;
    tmp_level_name_11 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 37;
    tmp_import_name_from_27 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_import_name_from_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_39 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_DSSKey );
    Py_DECREF( tmp_import_name_from_27 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_DSSKey, tmp_assign_source_39 );
    tmp_name_name_12 = const_str_digest_17d934cba47c439459f681bdee6dbc70;
    tmp_globals_name_12 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_str_plain_ECDSAKey_tuple;
    tmp_level_name_12 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 38;
    tmp_import_name_from_28 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_import_name_from_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_ECDSAKey );
    Py_DECREF( tmp_import_name_from_28 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_ECDSAKey, tmp_assign_source_40 );
    tmp_name_name_13 = const_str_digest_11ba6382faf5515e4e143075ca650637;
    tmp_globals_name_13 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_13 = Py_None;
    tmp_fromlist_name_13 = const_tuple_str_plain_Ed25519Key_tuple;
    tmp_level_name_13 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 39;
    tmp_import_name_from_29 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
    if ( tmp_import_name_from_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_Ed25519Key );
    Py_DECREF( tmp_import_name_from_29 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_Ed25519Key, tmp_assign_source_41 );
    tmp_name_name_14 = const_str_digest_ca7e5e90f0864b38180ee052c924615f;
    tmp_globals_name_14 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_14 = Py_None;
    tmp_fromlist_name_14 = const_tuple_str_plain_SFTPError_str_plain_BaseSFTP_tuple;
    tmp_level_name_14 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 40;
    tmp_assign_source_42 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_8__module == NULL );
    tmp_import_from_8__module = tmp_assign_source_42;

    // Tried code:
    tmp_import_name_from_30 = tmp_import_from_8__module;

    CHECK_OBJECT( tmp_import_name_from_30 );
    tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain_SFTPError );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTPError, tmp_assign_source_43 );
    tmp_import_name_from_31 = tmp_import_from_8__module;

    CHECK_OBJECT( tmp_import_name_from_31 );
    tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_31, const_str_plain_BaseSFTP );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_BaseSFTP, tmp_assign_source_44 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_8__module );
    Py_DECREF( tmp_import_from_8__module );
    tmp_import_from_8__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_8__module );
    Py_DECREF( tmp_import_from_8__module );
    tmp_import_from_8__module = NULL;

    tmp_name_name_15 = const_str_digest_18e732c5b74160f934dca4e0f09b4721;
    tmp_globals_name_15 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_15 = Py_None;
    tmp_fromlist_name_15 = const_tuple_str_plain_SFTP_str_plain_SFTPClient_tuple;
    tmp_level_name_15 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 41;
    tmp_assign_source_45 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_9__module == NULL );
    tmp_import_from_9__module = tmp_assign_source_45;

    // Tried code:
    tmp_import_name_from_32 = tmp_import_from_9__module;

    CHECK_OBJECT( tmp_import_name_from_32 );
    tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_32, const_str_plain_SFTP );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTP, tmp_assign_source_46 );
    tmp_import_name_from_33 = tmp_import_from_9__module;

    CHECK_OBJECT( tmp_import_name_from_33 );
    tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_33, const_str_plain_SFTPClient );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;

        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTPClient, tmp_assign_source_47 );
    goto try_end_9;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_9__module );
    Py_DECREF( tmp_import_from_9__module );
    tmp_import_from_9__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_9__module );
    Py_DECREF( tmp_import_from_9__module );
    tmp_import_from_9__module = NULL;

    tmp_name_name_16 = const_str_digest_c0620ec36a8cd5cad9ac8850d0bb5bee;
    tmp_globals_name_16 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_16 = Py_None;
    tmp_fromlist_name_16 = const_tuple_str_plain_SFTPServer_tuple;
    tmp_level_name_16 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 42;
    tmp_import_name_from_34 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
    if ( tmp_import_name_from_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_48 = IMPORT_NAME( tmp_import_name_from_34, const_str_plain_SFTPServer );
    Py_DECREF( tmp_import_name_from_34 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTPServer, tmp_assign_source_48 );
    tmp_name_name_17 = const_str_digest_a8dc7c3a2a4e78bc49871c823364caa0;
    tmp_globals_name_17 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_17 = Py_None;
    tmp_fromlist_name_17 = const_tuple_str_plain_SFTPAttributes_tuple;
    tmp_level_name_17 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 43;
    tmp_import_name_from_35 = IMPORT_MODULE5( tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17 );
    if ( tmp_import_name_from_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_49 = IMPORT_NAME( tmp_import_name_from_35, const_str_plain_SFTPAttributes );
    Py_DECREF( tmp_import_name_from_35 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTPAttributes, tmp_assign_source_49 );
    tmp_name_name_18 = const_str_digest_716869a6690b951be544b69d090c22dd;
    tmp_globals_name_18 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_18 = Py_None;
    tmp_fromlist_name_18 = const_tuple_str_plain_SFTPHandle_tuple;
    tmp_level_name_18 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 44;
    tmp_import_name_from_36 = IMPORT_MODULE5( tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18 );
    if ( tmp_import_name_from_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_50 = IMPORT_NAME( tmp_import_name_from_36, const_str_plain_SFTPHandle );
    Py_DECREF( tmp_import_name_from_36 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTPHandle, tmp_assign_source_50 );
    tmp_name_name_19 = const_str_digest_e18dd42ea54538915d35524da5d1de49;
    tmp_globals_name_19 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_19 = Py_None;
    tmp_fromlist_name_19 = const_tuple_str_plain_SFTPServerInterface_tuple;
    tmp_level_name_19 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 45;
    tmp_import_name_from_37 = IMPORT_MODULE5( tmp_name_name_19, tmp_globals_name_19, tmp_locals_name_19, tmp_fromlist_name_19, tmp_level_name_19 );
    if ( tmp_import_name_from_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_51 = IMPORT_NAME( tmp_import_name_from_37, const_str_plain_SFTPServerInterface );
    Py_DECREF( tmp_import_name_from_37 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTPServerInterface, tmp_assign_source_51 );
    tmp_name_name_20 = const_str_digest_54696a10c8d522abbc0752d1f0cde10f;
    tmp_globals_name_20 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_20 = Py_None;
    tmp_fromlist_name_20 = const_tuple_str_plain_SFTPFile_tuple;
    tmp_level_name_20 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 46;
    tmp_import_name_from_38 = IMPORT_MODULE5( tmp_name_name_20, tmp_globals_name_20, tmp_locals_name_20, tmp_fromlist_name_20, tmp_level_name_20 );
    if ( tmp_import_name_from_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_52 = IMPORT_NAME( tmp_import_name_from_38, const_str_plain_SFTPFile );
    Py_DECREF( tmp_import_name_from_38 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTPFile, tmp_assign_source_52 );
    tmp_name_name_21 = const_str_digest_7b52c270f480f57450d385a0aa52d302;
    tmp_globals_name_21 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_21 = Py_None;
    tmp_fromlist_name_21 = const_tuple_str_plain_Message_tuple;
    tmp_level_name_21 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 47;
    tmp_import_name_from_39 = IMPORT_MODULE5( tmp_name_name_21, tmp_globals_name_21, tmp_locals_name_21, tmp_fromlist_name_21, tmp_level_name_21 );
    if ( tmp_import_name_from_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_53 = IMPORT_NAME( tmp_import_name_from_39, const_str_plain_Message );
    Py_DECREF( tmp_import_name_from_39 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_Message, tmp_assign_source_53 );
    tmp_name_name_22 = const_str_digest_6c798e982d09b84f3b5b37b409594e71;
    tmp_globals_name_22 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_22 = Py_None;
    tmp_fromlist_name_22 = const_tuple_str_plain_Packetizer_tuple;
    tmp_level_name_22 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 48;
    tmp_import_name_from_40 = IMPORT_MODULE5( tmp_name_name_22, tmp_globals_name_22, tmp_locals_name_22, tmp_fromlist_name_22, tmp_level_name_22 );
    if ( tmp_import_name_from_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_54 = IMPORT_NAME( tmp_import_name_from_40, const_str_plain_Packetizer );
    Py_DECREF( tmp_import_name_from_40 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_Packetizer, tmp_assign_source_54 );
    tmp_name_name_23 = const_str_digest_bef16ce8b162f6a92438de8918fc29a9;
    tmp_globals_name_23 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_23 = Py_None;
    tmp_fromlist_name_23 = const_tuple_str_plain_BufferedFile_tuple;
    tmp_level_name_23 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 49;
    tmp_import_name_from_41 = IMPORT_MODULE5( tmp_name_name_23, tmp_globals_name_23, tmp_locals_name_23, tmp_fromlist_name_23, tmp_level_name_23 );
    if ( tmp_import_name_from_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_55 = IMPORT_NAME( tmp_import_name_from_41, const_str_plain_BufferedFile );
    Py_DECREF( tmp_import_name_from_41 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_BufferedFile, tmp_assign_source_55 );
    tmp_name_name_24 = const_str_digest_ce3edf68c8854adb57c9a3c9f342ea07;
    tmp_globals_name_24 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_24 = Py_None;
    tmp_fromlist_name_24 = const_tuple_str_plain_Agent_str_plain_AgentKey_tuple;
    tmp_level_name_24 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 50;
    tmp_assign_source_56 = IMPORT_MODULE5( tmp_name_name_24, tmp_globals_name_24, tmp_locals_name_24, tmp_fromlist_name_24, tmp_level_name_24 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_10__module == NULL );
    tmp_import_from_10__module = tmp_assign_source_56;

    // Tried code:
    tmp_import_name_from_42 = tmp_import_from_10__module;

    CHECK_OBJECT( tmp_import_name_from_42 );
    tmp_assign_source_57 = IMPORT_NAME( tmp_import_name_from_42, const_str_plain_Agent );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_Agent, tmp_assign_source_57 );
    tmp_import_name_from_43 = tmp_import_from_10__module;

    CHECK_OBJECT( tmp_import_name_from_43 );
    tmp_assign_source_58 = IMPORT_NAME( tmp_import_name_from_43, const_str_plain_AgentKey );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;

        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_AgentKey, tmp_assign_source_58 );
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_10__module );
    Py_DECREF( tmp_import_from_10__module );
    tmp_import_from_10__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_10__module );
    Py_DECREF( tmp_import_from_10__module );
    tmp_import_from_10__module = NULL;

    tmp_name_name_25 = const_str_digest_da5436ddaea39fe339e6d8cf1a16e1b0;
    tmp_globals_name_25 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_25 = Py_None;
    tmp_fromlist_name_25 = const_tuple_str_plain_PKey_str_plain_PublicBlob_tuple;
    tmp_level_name_25 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 51;
    tmp_assign_source_59 = IMPORT_MODULE5( tmp_name_name_25, tmp_globals_name_25, tmp_locals_name_25, tmp_fromlist_name_25, tmp_level_name_25 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_11__module == NULL );
    tmp_import_from_11__module = tmp_assign_source_59;

    // Tried code:
    tmp_import_name_from_44 = tmp_import_from_11__module;

    CHECK_OBJECT( tmp_import_name_from_44 );
    tmp_assign_source_60 = IMPORT_NAME( tmp_import_name_from_44, const_str_plain_PKey );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto try_except_handler_11;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_PKey, tmp_assign_source_60 );
    tmp_import_name_from_45 = tmp_import_from_11__module;

    CHECK_OBJECT( tmp_import_name_from_45 );
    tmp_assign_source_61 = IMPORT_NAME( tmp_import_name_from_45, const_str_plain_PublicBlob );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;

        goto try_except_handler_11;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_PublicBlob, tmp_assign_source_61 );
    goto try_end_11;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_11__module );
    Py_DECREF( tmp_import_from_11__module );
    tmp_import_from_11__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_11__module );
    Py_DECREF( tmp_import_from_11__module );
    tmp_import_from_11__module = NULL;

    tmp_name_name_26 = const_str_digest_a627c70231a50942c6d356263a0ffbcb;
    tmp_globals_name_26 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_26 = Py_None;
    tmp_fromlist_name_26 = const_tuple_str_plain_HostKeys_tuple;
    tmp_level_name_26 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 52;
    tmp_import_name_from_46 = IMPORT_MODULE5( tmp_name_name_26, tmp_globals_name_26, tmp_locals_name_26, tmp_fromlist_name_26, tmp_level_name_26 );
    if ( tmp_import_name_from_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_62 = IMPORT_NAME( tmp_import_name_from_46, const_str_plain_HostKeys );
    Py_DECREF( tmp_import_name_from_46 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_HostKeys, tmp_assign_source_62 );
    tmp_name_name_27 = const_str_digest_526ca0498ee44f4a5e670bc6b1c946a1;
    tmp_globals_name_27 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_27 = Py_None;
    tmp_fromlist_name_27 = const_tuple_str_plain_SSHConfig_tuple;
    tmp_level_name_27 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 53;
    tmp_import_name_from_47 = IMPORT_MODULE5( tmp_name_name_27, tmp_globals_name_27, tmp_locals_name_27, tmp_fromlist_name_27, tmp_level_name_27 );
    if ( tmp_import_name_from_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_63 = IMPORT_NAME( tmp_import_name_from_47, const_str_plain_SSHConfig );
    Py_DECREF( tmp_import_name_from_47 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SSHConfig, tmp_assign_source_63 );
    tmp_name_name_28 = const_str_digest_feb28feb532acaa5ef4b80fdc1d25c83;
    tmp_globals_name_28 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_28 = Py_None;
    tmp_fromlist_name_28 = const_tuple_str_plain_ProxyCommand_tuple;
    tmp_level_name_28 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 54;
    tmp_import_name_from_48 = IMPORT_MODULE5( tmp_name_name_28, tmp_globals_name_28, tmp_locals_name_28, tmp_fromlist_name_28, tmp_level_name_28 );
    if ( tmp_import_name_from_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_64 = IMPORT_NAME( tmp_import_name_from_48, const_str_plain_ProxyCommand );
    Py_DECREF( tmp_import_name_from_48 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_ProxyCommand, tmp_assign_source_64 );
    tmp_name_name_29 = const_str_digest_043a098e3c8c7e01497500bb854d02ab;
    tmp_globals_name_29 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_29 = Py_None;
    tmp_fromlist_name_29 = const_tuple_c1f0bda8f2a7c179b1a5b0ff0c9cf0e5_tuple;
    tmp_level_name_29 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 56;
    tmp_assign_source_65 = IMPORT_MODULE5( tmp_name_name_29, tmp_globals_name_29, tmp_locals_name_29, tmp_fromlist_name_29, tmp_level_name_29 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_12__module == NULL );
    tmp_import_from_12__module = tmp_assign_source_65;

    // Tried code:
    tmp_import_name_from_49 = tmp_import_from_12__module;

    CHECK_OBJECT( tmp_import_name_from_49 );
    tmp_assign_source_66 = IMPORT_NAME( tmp_import_name_from_49, const_str_plain_AUTH_SUCCESSFUL );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_AUTH_SUCCESSFUL, tmp_assign_source_66 );
    tmp_import_name_from_50 = tmp_import_from_12__module;

    CHECK_OBJECT( tmp_import_name_from_50 );
    tmp_assign_source_67 = IMPORT_NAME( tmp_import_name_from_50, const_str_plain_AUTH_PARTIALLY_SUCCESSFUL );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_AUTH_PARTIALLY_SUCCESSFUL, tmp_assign_source_67 );
    tmp_import_name_from_51 = tmp_import_from_12__module;

    CHECK_OBJECT( tmp_import_name_from_51 );
    tmp_assign_source_68 = IMPORT_NAME( tmp_import_name_from_51, const_str_plain_AUTH_FAILED );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED, tmp_assign_source_68 );
    tmp_import_name_from_52 = tmp_import_from_12__module;

    CHECK_OBJECT( tmp_import_name_from_52 );
    tmp_assign_source_69 = IMPORT_NAME( tmp_import_name_from_52, const_str_plain_OPEN_SUCCEEDED );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_OPEN_SUCCEEDED, tmp_assign_source_69 );
    tmp_import_name_from_53 = tmp_import_from_12__module;

    CHECK_OBJECT( tmp_import_name_from_53 );
    tmp_assign_source_70 = IMPORT_NAME( tmp_import_name_from_53, const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED, tmp_assign_source_70 );
    tmp_import_name_from_54 = tmp_import_from_12__module;

    CHECK_OBJECT( tmp_import_name_from_54 );
    tmp_assign_source_71 = IMPORT_NAME( tmp_import_name_from_54, const_str_plain_OPEN_FAILED_CONNECT_FAILED );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_OPEN_FAILED_CONNECT_FAILED, tmp_assign_source_71 );
    tmp_import_name_from_55 = tmp_import_from_12__module;

    CHECK_OBJECT( tmp_import_name_from_55 );
    tmp_assign_source_72 = IMPORT_NAME( tmp_import_name_from_55, const_str_plain_OPEN_FAILED_UNKNOWN_CHANNEL_TYPE );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_OPEN_FAILED_UNKNOWN_CHANNEL_TYPE, tmp_assign_source_72 );
    tmp_import_name_from_56 = tmp_import_from_12__module;

    CHECK_OBJECT( tmp_import_name_from_56 );
    tmp_assign_source_73 = IMPORT_NAME( tmp_import_name_from_56, const_str_plain_OPEN_FAILED_RESOURCE_SHORTAGE );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;

        goto try_except_handler_12;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_OPEN_FAILED_RESOURCE_SHORTAGE, tmp_assign_source_73 );
    goto try_end_12;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_12__module );
    Py_DECREF( tmp_import_from_12__module );
    tmp_import_from_12__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_12__module );
    Py_DECREF( tmp_import_from_12__module );
    tmp_import_from_12__module = NULL;

    tmp_name_name_30 = const_str_digest_ca7e5e90f0864b38180ee052c924615f;
    tmp_globals_name_30 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_30 = Py_None;
    tmp_fromlist_name_30 = const_tuple_8e2632c4e27baba6265e1c4c20310308_tuple;
    tmp_level_name_30 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 62;
    tmp_assign_source_74 = IMPORT_MODULE5( tmp_name_name_30, tmp_globals_name_30, tmp_locals_name_30, tmp_fromlist_name_30, tmp_level_name_30 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_13__module == NULL );
    tmp_import_from_13__module = tmp_assign_source_74;

    // Tried code:
    tmp_import_name_from_57 = tmp_import_from_13__module;

    CHECK_OBJECT( tmp_import_name_from_57 );
    tmp_assign_source_75 = IMPORT_NAME( tmp_import_name_from_57, const_str_plain_SFTP_OK );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTP_OK, tmp_assign_source_75 );
    tmp_import_name_from_58 = tmp_import_from_13__module;

    CHECK_OBJECT( tmp_import_name_from_58 );
    tmp_assign_source_76 = IMPORT_NAME( tmp_import_name_from_58, const_str_plain_SFTP_EOF );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTP_EOF, tmp_assign_source_76 );
    tmp_import_name_from_59 = tmp_import_from_13__module;

    CHECK_OBJECT( tmp_import_name_from_59 );
    tmp_assign_source_77 = IMPORT_NAME( tmp_import_name_from_59, const_str_plain_SFTP_NO_SUCH_FILE );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTP_NO_SUCH_FILE, tmp_assign_source_77 );
    tmp_import_name_from_60 = tmp_import_from_13__module;

    CHECK_OBJECT( tmp_import_name_from_60 );
    tmp_assign_source_78 = IMPORT_NAME( tmp_import_name_from_60, const_str_plain_SFTP_PERMISSION_DENIED );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTP_PERMISSION_DENIED, tmp_assign_source_78 );
    tmp_import_name_from_61 = tmp_import_from_13__module;

    CHECK_OBJECT( tmp_import_name_from_61 );
    tmp_assign_source_79 = IMPORT_NAME( tmp_import_name_from_61, const_str_plain_SFTP_FAILURE );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTP_FAILURE, tmp_assign_source_79 );
    tmp_import_name_from_62 = tmp_import_from_13__module;

    CHECK_OBJECT( tmp_import_name_from_62 );
    tmp_assign_source_80 = IMPORT_NAME( tmp_import_name_from_62, const_str_plain_SFTP_BAD_MESSAGE );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTP_BAD_MESSAGE, tmp_assign_source_80 );
    tmp_import_name_from_63 = tmp_import_from_13__module;

    CHECK_OBJECT( tmp_import_name_from_63 );
    tmp_assign_source_81 = IMPORT_NAME( tmp_import_name_from_63, const_str_plain_SFTP_NO_CONNECTION );
    if ( tmp_assign_source_81 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTP_NO_CONNECTION, tmp_assign_source_81 );
    tmp_import_name_from_64 = tmp_import_from_13__module;

    CHECK_OBJECT( tmp_import_name_from_64 );
    tmp_assign_source_82 = IMPORT_NAME( tmp_import_name_from_64, const_str_plain_SFTP_CONNECTION_LOST );
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTP_CONNECTION_LOST, tmp_assign_source_82 );
    tmp_import_name_from_65 = tmp_import_from_13__module;

    CHECK_OBJECT( tmp_import_name_from_65 );
    tmp_assign_source_83 = IMPORT_NAME( tmp_import_name_from_65, const_str_plain_SFTP_OP_UNSUPPORTED );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_13;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_SFTP_OP_UNSUPPORTED, tmp_assign_source_83 );
    goto try_end_13;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_13__module );
    Py_DECREF( tmp_import_from_13__module );
    tmp_import_from_13__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_13__module );
    Py_DECREF( tmp_import_from_13__module );
    tmp_import_from_13__module = NULL;

    tmp_name_name_31 = const_str_digest_043a098e3c8c7e01497500bb854d02ab;
    tmp_globals_name_31 = (PyObject *)moduledict_paramiko;
    tmp_locals_name_31 = Py_None;
    tmp_fromlist_name_31 = const_tuple_str_plain_io_sleep_tuple;
    tmp_level_name_31 = const_int_0;
    frame_983c531d7fbf1d42efc5fe069f5077de->m_frame.f_lineno = 68;
    tmp_import_name_from_66 = IMPORT_MODULE5( tmp_name_name_31, tmp_globals_name_31, tmp_locals_name_31, tmp_fromlist_name_31, tmp_level_name_31 );
    if ( tmp_import_name_from_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_84 = IMPORT_NAME( tmp_import_name_from_66, const_str_plain_io_sleep );
    Py_DECREF( tmp_import_name_from_66 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain_io_sleep, tmp_assign_source_84 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_983c531d7fbf1d42efc5fe069f5077de );
#endif
    popFrameStack();

    assertFrameObject( frame_983c531d7fbf1d42efc5fe069f5077de );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_983c531d7fbf1d42efc5fe069f5077de );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_983c531d7fbf1d42efc5fe069f5077de, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_983c531d7fbf1d42efc5fe069f5077de->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_983c531d7fbf1d42efc5fe069f5077de, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_85 = const_str_digest_8781a6305faae7bb50408bd7e4d22828;
    UPDATE_STRING_DICT0( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_85 );
    tmp_assign_source_86 = const_str_digest_512387e87b3af62589a6dd18e88fd6f4;
    UPDATE_STRING_DICT0( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_86 );
    tmp_assign_source_87 = LIST_COPY( const_list_e092e9d1b5a947ed4f3da6ee4528b25e_list );
    UPDATE_STRING_DICT1( moduledict_paramiko, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_87 );

    return MOD_RETURN_VALUE( module_paramiko );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

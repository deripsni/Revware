/* Generated code for Python source for module 'paramiko.client'
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

/* The _module_paramiko$client is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_paramiko$client;
PyDictObject *moduledict_paramiko$client;

/* The module constants used, if any. */
extern PyObject *const_str_plain_WarningPolicy;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain__transport;
extern PyObject *const_str_plain_get_pty;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_plain__host_keys_filename;
extern PyObject *const_str_plain_family;
extern PyObject *const_tuple_str_plain_HostKeys_tuple;
static PyObject *const_tuple_45a0a03f06ca0ece81bc25cacca371e3_tuple;
static PyObject *const_str_digest_8d037cf2e7966507bc78fe772bd1d9a6;
static PyObject *const_str_plain_get_host_keys;
static PyObject *const_str_plain_save_host_keys;
extern PyObject *const_str_plain_addr;
static PyObject *const_str_plain__host_keys;
extern PyObject *const_str_plain_ecdsa;
extern PyObject *const_int_pos_24;
static PyObject *const_str_digest_4a004841f32b04941edb871232d0d131;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_tuple_8c6303a8f789690bc8124c1cf833f645_tuple;
static PyObject *const_str_digest_879e7dfb181648390e04331cafe5082b;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain_Ed25519Key_tuple;
extern PyObject *const_str_plain___exit__;
static PyObject *const_str_digest_37f95e5df0e3db54b3569bf1b40c4cd2;
static PyObject *const_tuple_str_plain_keytype_str_plain_x_tuple;
static PyObject *const_tuple_str_digest_efc56ef3e14ad47214c11703a85ae20b_str_plain_ssh_tuple;
static PyObject *const_str_digest_adf1661a765b5742a91f4e72f56ed5d9;
static PyObject *const_str_digest_3ca2df802a686762905914fe25376296;
static PyObject *const_str_digest_1a538e72a963d15e3048fe820975d3fc;
static PyObject *const_str_plain_missing_host_key;
static PyObject *const_str_digest_11345d3ee8c67ea23152ededaa91fe4f;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_set_missing_host_key_policy;
static PyObject *const_tuple_str_plain_sock_str_plain_addr_tuple;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_f55706563338a554642c301a8076f6e1;
extern PyObject *const_tuple_str_plain_ECDSAKey_tuple;
extern PyObject *const_int_pos_80;
static PyObject *const_tuple_27de1bf3771296c89a32b7f9a21df49a_tuple;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_b33e8b6b6ad89051c130ab8bf0e78a34;
extern PyObject *const_str_plain_hexlify;
static PyObject *const_str_digest_a59a0cedb1796a939e53dbefdc85f524;
extern PyObject *const_str_plain_rsa;
static PyObject *const_str_digest_e4ad884558972983df936a521248755e;
extern PyObject *const_str_plain_expanduser;
extern PyObject *const_str_plain_load_host_keys;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_isfile;
static PyObject *const_str_digest_2a81a3600690c8d68987eea33c53e51f;
extern PyObject *const_str_plain_vt100;
extern PyObject *const_str_plain_command;
static PyObject *const_str_digest_cc04b4f3e909043cc54dd73c58b04ffc;
extern PyObject *const_str_plain_open_sftp_client;
static PyObject *const_tuple_141e9831c8af9267934868d0a9edb60a_tuple;
extern PyObject *const_str_plain_stdout;
static PyObject *const_str_digest_1c49d41143fdbcc7ed951f5b8a094218;
extern PyObject *const_str_plain_term;
extern PyObject *const_str_plain_invoke_shell;
static PyObject *const_str_digest_d67b1e54eaf0a96899d50a8c5f7b8fa1;
extern PyObject *const_str_digest_6a3269227c645e2e6bb8d0c510b5b5a7;
extern PyObject *const_str_plain_getaddrinfo;
extern PyObject *const_str_plain_NoValidConnectionsError;
static PyObject *const_str_plain__families_and_addresses;
static PyObject *const_str_digest_2d305664b402ace7853080f45df379f3;
extern PyObject *const_str_plain_Ed25519Key;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_policy_tuple;
extern PyObject *const_str_plain_load_system_host_keys;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain_auth_interactive_dumb;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_ECDSAKey;
extern PyObject *const_str_plain_timeout;
static PyObject *const_str_digest_a16cdfec1a257e0d4f94ea87c5f027d3;
extern PyObject *const_str_plain_SSH_PORT;
extern PyObject *const_str_plain_errno;
extern PyObject *const_str_plain_gss_deleg_creds;
static PyObject *const_str_digest_1d24e2d981917b973d652d2599cdc5df;
static PyObject *const_str_digest_be020efbb56f5209be616f68abe89189;
extern PyObject *const_str_plain_close;
static PyObject *const_str_digest_fb0a3012623c23847890f846c0577a22;
extern PyObject *const_str_plain_wb;
static PyObject *const_tuple_d2dc8f1432f741d177a0e08da87f461a_tuple;
static PyObject *const_str_digest_2536f143295547e7a9e6df3c3834534f;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_plain_ECONNREFUSED;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_1211c1c0713ce0f061a3712aec20eba4;
extern PyObject *const_tuple_str_plain_RSAKey_tuple;
static PyObject *const_str_plain_getuser;
static PyObject *const_set_edda279c8085125db587e0c8224e6e7c;
static PyObject *const_str_digest_82afded8daeb3536ef939c792b059222;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_sock;
static PyObject *const_tuple_str_plain_Agent_tuple;
static PyObject *const_tuple_str_plain_MissingHostKeyPolicy_tuple_type_object_tuple_tuple;
extern PyObject *const_tuple_str_plain_Transport_tuple;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_string_types;
extern PyObject *const_str_plain_makefile_stderr;
extern PyObject *const_str_plain_addrinfos;
static PyObject *const_tuple_str_plain_ECONNREFUSED_str_plain_EHOSTUNREACH_tuple;
extern PyObject *const_str_plain_auth_password;
extern PyObject *const_str_digest_377ce7846e0f5871c80e88c27c40a3cc;
static PyObject *const_str_digest_91c7e6f4f760a5b8a195c470701da4ad;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_chan;
extern PyObject *const_tuple_str_plain_DEBUG_tuple;
extern PyObject *const_str_plain_RejectPolicy;
extern PyObject *const_str_plain_environment;
static PyObject *const_str_digest_563d2ce3de867501cff87148649f8c04;
static PyObject *const_str_digest_a23610c98fb1a04c71e6d26f83667579;
extern PyObject *const_str_plain_SOCK_STREAM;
extern PyObject *const_str_plain_DSSKey;
static PyObject *const_str_digest_e10e0cefde1642954f76c701d33ec46e;
static PyObject *const_str_digest_6dc79aba50bb798e3558246a40989c2a;
extern PyObject *const_str_plain_gss_kex_used;
extern PyObject *const_str_plain_load;
extern PyObject *const_str_plain_height;
static PyObject *const_str_plain_key_path;
static PyObject *const_tuple_str_plain_SSH_PORT_tuple;
extern PyObject *const_str_plain_keys;
static PyObject *const_str_digest_fe0d842402b5c696bd54ae7a6112413c;
static PyObject *const_str_digest_50ff0df53f95afae73435ecd4f4dde13;
extern PyObject *const_str_plain_settimeout;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_43b35921ad5c1235198b9ac9b3b6d66c;
extern PyObject *const_str_plain_compress;
extern PyObject *const_str_digest_043a098e3c8c7e01497500bb854d02ab;
static PyObject *const_str_digest_95a5925a86d829525fa6b9b97b32ae62;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_str_digest_874f199f8c615b74b51fea192429a12d;
static PyObject *const_str_digest_ae04b141e16aabffb17b13879ec92462;
extern PyObject *const_str_digest_c9783714a145c70c37c4efbd57c939be;
extern PyObject *const_str_plain_exec_command;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_get_transport;
extern PyObject *const_str_plain_socktype;
static PyObject *const_str_plain__key_from_filepath;
extern PyObject *const_str_plain_endswith;
extern PyObject *const_str_plain_auth_gssapi_with_mic;
extern PyObject *const_str_plain_SSHException;
extern PyObject *const_str_plain_ClosingContextManager;
extern PyObject *const_str_plain_width_pixels;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_update_environment;
extern PyObject *const_str_plain_ssh;
static PyObject *const_str_digest_9c7ab0ce8deed03809d93363898074f2;
extern PyObject *const_str_plain_proto;
static PyObject *const_str_digest_4f6ef64105bc2e5207019acaf3d40c8a;
static PyObject *const_str_plain_getpass;
extern PyObject *const_str_digest_5ee67fa6fdaaa14d18297a729785cb77;
extern PyObject *const_str_plain_set_gss_host;
extern PyObject *const_str_plain_get_remote_server_key;
extern PyObject *const_str_plain_AutoAddPolicy;
extern PyObject *const_str_plain_False;
static PyObject *const_tuple_3ddcdbe84e22c7618b5ecb47b375cf4c_tuple;
extern PyObject *const_str_plain_makefile;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_keytype;
extern PyObject *const_str_plain_auth_timeout;
extern PyObject *const_str_plain_set_log_channel;
extern PyObject *const_str_plain_Transport;
extern PyObject *const_tuple_str_plain_hexlify_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_BadHostKeyException;
extern PyObject *const_str_plain_start_client;
static PyObject *const_str_digest_1dffe1265848c1b7a3d58b70670d15b5;
static PyObject *const_tuple_2a428175ca7de6751a42cdf2e2147190_tuple;
extern PyObject *const_str_plain_auth_publickey;
static PyObject *const_str_digest_2d82d3a588fa2c433ecc178ec3f8ce2c;
static PyObject *const_str_plain__auth;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_digest_0a8ea2be9ef72d93cf478f16ac4f103c;
extern PyObject *const_str_plain_sockaddr;
extern PyObject *const_str_plain_from_private_key_file;
static PyObject *const_str_plain_ed25519;
extern PyObject *const_str_plain_get_keys;
extern PyObject *const_str_plain_get_fingerprint;
extern PyObject *const_str_plain_trust_dns;
extern PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
extern PyObject *const_str_plain_height_pixels;
extern PyObject *const_tuple_str_plain_self_str_plain_filename_tuple;
extern PyObject *const_str_plain_open_session;
extern PyObject *const_str_digest_af46dc626906b3459f8298b3797a94e5;
static PyObject *const_str_digest_69afeeb331e91df6a742620728662cc4;
extern PyObject *const_str_plain_canonname;
static PyObject *const_tuple_str_plain_self_str_plain_level_str_plain_msg_tuple;
extern PyObject *const_str_plain_retry_on_signal;
extern PyObject *const_tuple_str_plain_string_types_tuple;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain_cert_suffix;
static PyObject *const_tuple_d4eae45c03b60136a8fec01056ddd9de_tuple;
static PyObject *const_str_plain_guess;
static PyObject *const_tuple_str_plain_retry_on_signal_str_plain_ClosingContextManager_tuple;
extern PyObject *const_str_plain_get_base64;
static PyObject *const_str_digest_b5e7d2388b97f8ae6f06c4141a928665;
extern PyObject *const_str_plain_RSAKey;
extern PyObject *const_str_plain_banner_timeout;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_str_plain_gssapi_requested;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_d2c3e63dd3150de342a7a27f43d1a582;
static PyObject *const_tuple_str_plain_vt100_int_pos_80_int_pos_24_int_0_int_0_none_tuple;
extern PyObject *const_str_plain_AF_UNSPEC;
static PyObject *const_tuple_int_neg_1_none_false_none_tuple;
extern PyObject *const_str_plain__log;
static PyObject *const_str_digest_2b153ae805508c7009c63ca8d8ef1f72;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_b45cee6cc9f51a076c24027845ed2861;
static PyObject *const_str_digest_1ac68d9bc74efb9e4f7ae0de5810e1e2;
static PyObject *const_str_digest_481eccf2807da60536e27bf2eb604e7b;
extern PyObject *const_str_plain_use_compression;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain__;
static PyObject *const_str_digest_80f303e7575bf8f6cc5638f3eb79595f;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_tuple_str_digest_cc04b4f3e909043cc54dd73c58b04ffc_tuple;
extern PyObject *const_str_plain_MissingHostKeyPolicy;
extern PyObject *const_str_plain__agent;
extern PyObject *const_str_plain_password;
extern PyObject *const_str_digest_a627c70231a50942c6d356263a0ffbcb;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_SSHClient;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_digest_ef7ae15d8f68eb0beee7fa083e6ade9f;
extern PyObject *const_str_digest_526ca0498ee44f4a5e670bc6b1c946a1;
extern PyObject *const_str_plain_binascii;
extern PyObject *const_str_plain_filename;
static PyObject *const_str_digest_e1ff46558b234e9fec955eb04a9108f0;
static PyObject *const_str_digest_efc56ef3e14ad47214c11703a85ae20b;
static PyObject *const_str_digest_891b2d21e9e95cfb5f8d10bdcc0b49ec;
static PyObject *const_str_digest_70c61c7536bef0fe851732517dfa5466;
static PyObject *const_str_digest_c9e8f151c58da101aa05ec1643654e6f;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_plain_port;
extern PyObject *const_str_plain_get_name;
extern PyObject *const_str_plain_hostname;
extern PyObject *const_str_plain_width;
static PyObject *const_str_plain_cert_path;
static PyObject *const_str_digest_db0f4d7a79d2ceb0bb1535215487a1a5;
static PyObject *const_str_digest_6435bdc4c5f4bddc8f9ded954d144391;
extern PyObject *const_str_plain_key;
static PyObject *const_str_plain__log_channel;
extern PyObject *const_str_digest_a6807d4ad614b0659dc52c0046c2e21e;
extern PyObject *const_str_plain_load_certificate;
extern PyObject *const_str_digest_11ba6382faf5515e4e143075ca650637;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_gss_kex;
extern PyObject *const_str_digest_17d934cba47c439459f681bdee6dbc70;
static PyObject *const_tuple_str_digest_db0f4d7a79d2ceb0bb1535215487a1a5_tuple;
extern PyObject *const_str_plain_client;
extern PyObject *const_str_plain_HostKeys;
extern PyObject *const_str_plain_level;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_digest_ce3edf68c8854adb57c9a3c9f342ea07;
extern PyObject *const_str_plain_inspect;
static PyObject *const_str_digest_25f624aba7791c2e8c268183d01bc468;
extern PyObject *const_str_plain_stdin;
extern PyObject *const_str_plain_write;
static PyObject *const_str_digest_7e21af3ea52bb94e7b237344f99d37ca;
extern PyObject *const_str_plain_bufsize;
static PyObject *const_str_plain_policy;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_DEBUG;
static PyObject *const_str_plain__policy;
static PyObject *const_str_plain__system_host_keys;
static PyObject *const_str_digest_6ffbad3e0880c4f1ec71a6aa363c6cae;
extern PyObject *const_str_plain_get_security_options;
extern PyObject *const_tuple_str_plain_DSSKey_tuple;
extern PyObject *const_str_plain_isclass;
extern PyObject *const_str_plain_auth_gssapi_keyex;
static PyObject *const_str_plain_open_sftp;
extern PyObject *const_str_plain_gss_host;
extern PyObject *const_str_plain_key_types;
extern PyObject *const_str_plain_dsa;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_16c4380e9245d1d7abc644f871045316;
extern PyObject *const_str_plain_klass;
static PyObject *const_str_plain_EHOSTUNREACH;
static PyObject *const_str_digest_aa18a2d1875ae8dc5507423d515070fb;
static PyObject *const_tuple_fbf883361528006f54b8a1802a1edc73_tuple;
static PyObject *const_str_digest_e501b328c9d368abc44f4f56c99cbee3;
extern PyObject *const_str_digest_8f2488a9b1a09b5004380be01694df85;
static PyObject *const_str_digest_5c219107dd50a727fb1f715a347cf01c;
extern PyObject *const_str_plain_Agent;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain__host_keys_filename = UNSTREAM_STRING( &constant_bin[ 424361 ], 19, 1 );
    const_tuple_45a0a03f06ca0ece81bc25cacca371e3_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_45a0a03f06ca0ece81bc25cacca371e3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_45a0a03f06ca0ece81bc25cacca371e3_tuple, 1, const_str_plain_hostname ); Py_INCREF( const_str_plain_hostname );
    PyTuple_SET_ITEM( const_tuple_45a0a03f06ca0ece81bc25cacca371e3_tuple, 2, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_45a0a03f06ca0ece81bc25cacca371e3_tuple, 3, const_str_plain_family ); Py_INCREF( const_str_plain_family );
    PyTuple_SET_ITEM( const_tuple_45a0a03f06ca0ece81bc25cacca371e3_tuple, 4, const_str_plain_proto ); Py_INCREF( const_str_plain_proto );
    const_str_plain_guess = UNSTREAM_STRING( &constant_bin[ 424380 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_45a0a03f06ca0ece81bc25cacca371e3_tuple, 5, const_str_plain_guess ); Py_INCREF( const_str_plain_guess );
    PyTuple_SET_ITEM( const_tuple_45a0a03f06ca0ece81bc25cacca371e3_tuple, 6, const_str_plain_addrinfos ); Py_INCREF( const_str_plain_addrinfos );
    PyTuple_SET_ITEM( const_tuple_45a0a03f06ca0ece81bc25cacca371e3_tuple, 7, const_str_plain_socktype ); Py_INCREF( const_str_plain_socktype );
    PyTuple_SET_ITEM( const_tuple_45a0a03f06ca0ece81bc25cacca371e3_tuple, 8, const_str_plain_canonname ); Py_INCREF( const_str_plain_canonname );
    PyTuple_SET_ITEM( const_tuple_45a0a03f06ca0ece81bc25cacca371e3_tuple, 9, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_45a0a03f06ca0ece81bc25cacca371e3_tuple, 10, const_str_plain_sockaddr ); Py_INCREF( const_str_plain_sockaddr );
    const_str_digest_8d037cf2e7966507bc78fe772bd1d9a6 = UNSTREAM_STRING( &constant_bin[ 424385 ], 22, 0 );
    const_str_plain_get_host_keys = UNSTREAM_STRING( &constant_bin[ 424407 ], 13, 1 );
    const_str_plain_save_host_keys = UNSTREAM_STRING( &constant_bin[ 424420 ], 14, 1 );
    const_str_plain__host_keys = UNSTREAM_STRING( &constant_bin[ 424361 ], 10, 1 );
    const_str_digest_4a004841f32b04941edb871232d0d131 = UNSTREAM_STRING( &constant_bin[ 424434 ], 37, 0 );
    const_tuple_8c6303a8f789690bc8124c1cf833f645_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_8c6303a8f789690bc8124c1cf833f645_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8c6303a8f789690bc8124c1cf833f645_tuple, 1, const_str_plain_term ); Py_INCREF( const_str_plain_term );
    PyTuple_SET_ITEM( const_tuple_8c6303a8f789690bc8124c1cf833f645_tuple, 2, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_8c6303a8f789690bc8124c1cf833f645_tuple, 3, const_str_plain_height ); Py_INCREF( const_str_plain_height );
    PyTuple_SET_ITEM( const_tuple_8c6303a8f789690bc8124c1cf833f645_tuple, 4, const_str_plain_width_pixels ); Py_INCREF( const_str_plain_width_pixels );
    PyTuple_SET_ITEM( const_tuple_8c6303a8f789690bc8124c1cf833f645_tuple, 5, const_str_plain_height_pixels ); Py_INCREF( const_str_plain_height_pixels );
    PyTuple_SET_ITEM( const_tuple_8c6303a8f789690bc8124c1cf833f645_tuple, 6, const_str_plain_environment ); Py_INCREF( const_str_plain_environment );
    PyTuple_SET_ITEM( const_tuple_8c6303a8f789690bc8124c1cf833f645_tuple, 7, const_str_plain_chan ); Py_INCREF( const_str_plain_chan );
    const_str_digest_879e7dfb181648390e04331cafe5082b = UNSTREAM_STRING( &constant_bin[ 424471 ], 24, 0 );
    const_str_digest_37f95e5df0e3db54b3569bf1b40c4cd2 = UNSTREAM_STRING( &constant_bin[ 424495 ], 29, 0 );
    const_tuple_str_plain_keytype_str_plain_x_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_keytype_str_plain_x_tuple, 0, const_str_plain_keytype ); Py_INCREF( const_str_plain_keytype );
    PyTuple_SET_ITEM( const_tuple_str_plain_keytype_str_plain_x_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_tuple_str_digest_efc56ef3e14ad47214c11703a85ae20b_str_plain_ssh_tuple = PyTuple_New( 2 );
    const_str_digest_efc56ef3e14ad47214c11703a85ae20b = UNSTREAM_STRING( &constant_bin[ 117918 ], 4, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_efc56ef3e14ad47214c11703a85ae20b_str_plain_ssh_tuple, 0, const_str_digest_efc56ef3e14ad47214c11703a85ae20b ); Py_INCREF( const_str_digest_efc56ef3e14ad47214c11703a85ae20b );
    PyTuple_SET_ITEM( const_tuple_str_digest_efc56ef3e14ad47214c11703a85ae20b_str_plain_ssh_tuple, 1, const_str_plain_ssh ); Py_INCREF( const_str_plain_ssh );
    const_str_digest_adf1661a765b5742a91f4e72f56ed5d9 = UNSTREAM_STRING( &constant_bin[ 424524 ], 23, 0 );
    const_str_digest_3ca2df802a686762905914fe25376296 = UNSTREAM_STRING( &constant_bin[ 424547 ], 737, 0 );
    const_str_digest_1a538e72a963d15e3048fe820975d3fc = UNSTREAM_STRING( &constant_bin[ 425284 ], 25, 0 );
    const_str_plain_missing_host_key = UNSTREAM_STRING( &constant_bin[ 424455 ], 16, 1 );
    const_str_digest_11345d3ee8c67ea23152ededaa91fe4f = UNSTREAM_STRING( &constant_bin[ 425309 ], 243, 0 );
    const_tuple_str_plain_sock_str_plain_addr_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_addr_tuple, 0, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_str_plain_sock_str_plain_addr_tuple, 1, const_str_plain_addr ); Py_INCREF( const_str_plain_addr );
    const_str_digest_f55706563338a554642c301a8076f6e1 = UNSTREAM_STRING( &constant_bin[ 425552 ], 513, 0 );
    const_tuple_27de1bf3771296c89a32b7f9a21df49a_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_27de1bf3771296c89a32b7f9a21df49a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_27de1bf3771296c89a32b7f9a21df49a_tuple, 1, const_str_plain_command ); Py_INCREF( const_str_plain_command );
    PyTuple_SET_ITEM( const_tuple_27de1bf3771296c89a32b7f9a21df49a_tuple, 2, const_str_plain_bufsize ); Py_INCREF( const_str_plain_bufsize );
    PyTuple_SET_ITEM( const_tuple_27de1bf3771296c89a32b7f9a21df49a_tuple, 3, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_27de1bf3771296c89a32b7f9a21df49a_tuple, 4, const_str_plain_get_pty ); Py_INCREF( const_str_plain_get_pty );
    PyTuple_SET_ITEM( const_tuple_27de1bf3771296c89a32b7f9a21df49a_tuple, 5, const_str_plain_environment ); Py_INCREF( const_str_plain_environment );
    PyTuple_SET_ITEM( const_tuple_27de1bf3771296c89a32b7f9a21df49a_tuple, 6, const_str_plain_stdin ); Py_INCREF( const_str_plain_stdin );
    PyTuple_SET_ITEM( const_tuple_27de1bf3771296c89a32b7f9a21df49a_tuple, 7, const_str_plain_chan ); Py_INCREF( const_str_plain_chan );
    PyTuple_SET_ITEM( const_tuple_27de1bf3771296c89a32b7f9a21df49a_tuple, 8, const_str_plain_stderr ); Py_INCREF( const_str_plain_stderr );
    PyTuple_SET_ITEM( const_tuple_27de1bf3771296c89a32b7f9a21df49a_tuple, 9, const_str_plain_stdout ); Py_INCREF( const_str_plain_stdout );
    const_str_digest_b33e8b6b6ad89051c130ab8bf0e78a34 = UNSTREAM_STRING( &constant_bin[ 426065 ], 29, 0 );
    const_str_digest_a59a0cedb1796a939e53dbefdc85f524 = UNSTREAM_STRING( &constant_bin[ 426094 ], 22, 0 );
    const_str_digest_e4ad884558972983df936a521248755e = UNSTREAM_STRING( &constant_bin[ 426116 ], 24, 0 );
    const_str_digest_2a81a3600690c8d68987eea33c53e51f = UNSTREAM_STRING( &constant_bin[ 426140 ], 30, 0 );
    const_str_digest_cc04b4f3e909043cc54dd73c58b04ffc = UNSTREAM_STRING( &constant_bin[ 426170 ], 35, 0 );
    const_tuple_141e9831c8af9267934868d0a9edb60a_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_141e9831c8af9267934868d0a9edb60a_tuple, 0, const_str_plain_SSHException ); Py_INCREF( const_str_plain_SSHException );
    PyTuple_SET_ITEM( const_tuple_141e9831c8af9267934868d0a9edb60a_tuple, 1, const_str_plain_BadHostKeyException ); Py_INCREF( const_str_plain_BadHostKeyException );
    PyTuple_SET_ITEM( const_tuple_141e9831c8af9267934868d0a9edb60a_tuple, 2, const_str_plain_NoValidConnectionsError ); Py_INCREF( const_str_plain_NoValidConnectionsError );
    const_str_digest_1c49d41143fdbcc7ed951f5b8a094218 = UNSTREAM_STRING( &constant_bin[ 426205 ], 265, 0 );
    const_str_digest_d67b1e54eaf0a96899d50a8c5f7b8fa1 = UNSTREAM_STRING( &constant_bin[ 426470 ], 41, 0 );
    const_str_plain__families_and_addresses = UNSTREAM_STRING( &constant_bin[ 426511 ], 23, 1 );
    const_str_digest_2d305664b402ace7853080f45df379f3 = UNSTREAM_STRING( &constant_bin[ 426534 ], 685, 0 );
    const_tuple_str_plain_self_str_plain_policy_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_policy_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_policy = UNSTREAM_STRING( &constant_bin[ 120653 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_policy_tuple, 1, const_str_plain_policy ); Py_INCREF( const_str_plain_policy );
    const_str_digest_a16cdfec1a257e0d4f94ea87c5f027d3 = UNSTREAM_STRING( &constant_bin[ 427219 ], 17, 0 );
    const_str_digest_1d24e2d981917b973d652d2599cdc5df = UNSTREAM_STRING( &constant_bin[ 427236 ], 28, 0 );
    const_str_digest_be020efbb56f5209be616f68abe89189 = UNSTREAM_STRING( &constant_bin[ 427264 ], 335, 0 );
    const_str_digest_fb0a3012623c23847890f846c0577a22 = UNSTREAM_STRING( &constant_bin[ 427599 ], 28, 0 );
    const_tuple_d2dc8f1432f741d177a0e08da87f461a_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_d2dc8f1432f741d177a0e08da87f461a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d2dc8f1432f741d177a0e08da87f461a_tuple, 1, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_d2dc8f1432f741d177a0e08da87f461a_tuple, 2, const_str_plain_klass ); Py_INCREF( const_str_plain_klass );
    PyTuple_SET_ITEM( const_tuple_d2dc8f1432f741d177a0e08da87f461a_tuple, 3, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_str_plain_key_path = UNSTREAM_STRING( &constant_bin[ 427627 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_d2dc8f1432f741d177a0e08da87f461a_tuple, 4, const_str_plain_key_path ); Py_INCREF( const_str_plain_key_path );
    const_str_plain_cert_path = UNSTREAM_STRING( &constant_bin[ 427635 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_d2dc8f1432f741d177a0e08da87f461a_tuple, 5, const_str_plain_cert_path ); Py_INCREF( const_str_plain_cert_path );
    PyTuple_SET_ITEM( const_tuple_d2dc8f1432f741d177a0e08da87f461a_tuple, 6, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_str_plain_cert_suffix = UNSTREAM_STRING( &constant_bin[ 427644 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_d2dc8f1432f741d177a0e08da87f461a_tuple, 7, const_str_plain_cert_suffix ); Py_INCREF( const_str_plain_cert_suffix );
    PyTuple_SET_ITEM( const_tuple_d2dc8f1432f741d177a0e08da87f461a_tuple, 8, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_digest_2536f143295547e7a9e6df3c3834534f = UNSTREAM_STRING( &constant_bin[ 427655 ], 17, 0 );
    const_str_plain_ECONNREFUSED = UNSTREAM_STRING( &constant_bin[ 427672 ], 12, 1 );
    const_str_digest_1211c1c0713ce0f061a3712aec20eba4 = UNSTREAM_STRING( &constant_bin[ 427684 ], 19, 0 );
    const_str_plain_getuser = UNSTREAM_STRING( &constant_bin[ 427703 ], 7, 1 );
    const_set_edda279c8085125db587e0c8224e6e7c = PySet_New( NULL );
    PySet_Add( const_set_edda279c8085125db587e0c8224e6e7c, const_str_digest_a6807d4ad614b0659dc52c0046c2e21e );
    PySet_Add( const_set_edda279c8085125db587e0c8224e6e7c, const_str_plain_password );
    assert( PySet_Size( const_set_edda279c8085125db587e0c8224e6e7c ) == 2 );
    const_str_digest_82afded8daeb3536ef939c792b059222 = UNSTREAM_STRING( &constant_bin[ 427710 ], 36, 0 );
    const_tuple_str_plain_Agent_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Agent_tuple, 0, const_str_plain_Agent ); Py_INCREF( const_str_plain_Agent );
    const_tuple_str_plain_MissingHostKeyPolicy_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MissingHostKeyPolicy_tuple_type_object_tuple_tuple, 0, const_str_plain_MissingHostKeyPolicy ); Py_INCREF( const_str_plain_MissingHostKeyPolicy );
    PyTuple_SET_ITEM( const_tuple_str_plain_MissingHostKeyPolicy_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_tuple_str_plain_ECONNREFUSED_str_plain_EHOSTUNREACH_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ECONNREFUSED_str_plain_EHOSTUNREACH_tuple, 0, const_str_plain_ECONNREFUSED ); Py_INCREF( const_str_plain_ECONNREFUSED );
    const_str_plain_EHOSTUNREACH = UNSTREAM_STRING( &constant_bin[ 427746 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ECONNREFUSED_str_plain_EHOSTUNREACH_tuple, 1, const_str_plain_EHOSTUNREACH ); Py_INCREF( const_str_plain_EHOSTUNREACH );
    const_str_digest_91c7e6f4f760a5b8a195c470701da4ad = UNSTREAM_STRING( &constant_bin[ 427758 ], 18, 0 );
    const_str_digest_563d2ce3de867501cff87148649f8c04 = UNSTREAM_STRING( &constant_bin[ 427776 ], 283, 0 );
    const_str_digest_a23610c98fb1a04c71e6d26f83667579 = UNSTREAM_STRING( &constant_bin[ 428059 ], 90, 0 );
    const_str_digest_e10e0cefde1642954f76c701d33ec46e = UNSTREAM_STRING( &constant_bin[ 428149 ], 311, 0 );
    const_str_digest_6dc79aba50bb798e3558246a40989c2a = UNSTREAM_STRING( &constant_bin[ 428460 ], 452, 0 );
    const_tuple_str_plain_SSH_PORT_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SSH_PORT_tuple, 0, const_str_plain_SSH_PORT ); Py_INCREF( const_str_plain_SSH_PORT );
    const_str_digest_fe0d842402b5c696bd54ae7a6112413c = UNSTREAM_STRING( &constant_bin[ 428912 ], 759, 0 );
    const_str_digest_50ff0df53f95afae73435ecd4f4dde13 = UNSTREAM_STRING( &constant_bin[ 429671 ], 4492, 0 );
    const_str_digest_43b35921ad5c1235198b9ac9b3b6d66c = UNSTREAM_STRING( &constant_bin[ 434163 ], 27, 0 );
    const_str_digest_95a5925a86d829525fa6b9b97b32ae62 = UNSTREAM_STRING( &constant_bin[ 434190 ], 15, 0 );
    const_str_digest_ae04b141e16aabffb17b13879ec92462 = UNSTREAM_STRING( &constant_bin[ 434205 ], 15, 0 );
    const_str_plain__key_from_filepath = UNSTREAM_STRING( &constant_bin[ 427609 ], 18, 1 );
    const_str_digest_9c7ab0ce8deed03809d93363898074f2 = UNSTREAM_STRING( &constant_bin[ 434220 ], 23, 0 );
    const_str_digest_4f6ef64105bc2e5207019acaf3d40c8a = UNSTREAM_STRING( &constant_bin[ 434243 ], 187, 0 );
    const_str_plain_getpass = UNSTREAM_STRING( &constant_bin[ 434430 ], 7, 1 );
    const_tuple_3ddcdbe84e22c7618b5ecb47b375cf4c_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_3ddcdbe84e22c7618b5ecb47b375cf4c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3ddcdbe84e22c7618b5ecb47b375cf4c_tuple, 1, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_3ddcdbe84e22c7618b5ecb47b375cf4c_tuple, 2, const_str_plain_keytype ); Py_INCREF( const_str_plain_keytype );
    PyTuple_SET_ITEM( const_tuple_3ddcdbe84e22c7618b5ecb47b375cf4c_tuple, 3, const_str_plain_hostname ); Py_INCREF( const_str_plain_hostname );
    PyTuple_SET_ITEM( const_tuple_3ddcdbe84e22c7618b5ecb47b375cf4c_tuple, 4, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_3ddcdbe84e22c7618b5ecb47b375cf4c_tuple, 5, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_3ddcdbe84e22c7618b5ecb47b375cf4c_tuple, 6, const_str_plain_keys ); Py_INCREF( const_str_plain_keys );
    const_str_digest_1dffe1265848c1b7a3d58b70670d15b5 = UNSTREAM_STRING( &constant_bin[ 434437 ], 24, 0 );
    const_tuple_2a428175ca7de6751a42cdf2e2147190_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_2a428175ca7de6751a42cdf2e2147190_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2a428175ca7de6751a42cdf2e2147190_tuple, 1, const_str_plain_client ); Py_INCREF( const_str_plain_client );
    PyTuple_SET_ITEM( const_tuple_2a428175ca7de6751a42cdf2e2147190_tuple, 2, const_str_plain_hostname ); Py_INCREF( const_str_plain_hostname );
    PyTuple_SET_ITEM( const_tuple_2a428175ca7de6751a42cdf2e2147190_tuple, 3, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_str_digest_2d82d3a588fa2c433ecc178ec3f8ce2c = UNSTREAM_STRING( &constant_bin[ 434461 ], 110, 0 );
    const_str_plain__auth = UNSTREAM_STRING( &constant_bin[ 23201 ], 5, 1 );
    const_str_plain_ed25519 = UNSTREAM_STRING( &constant_bin[ 353464 ], 7, 1 );
    const_str_digest_69afeeb331e91df6a742620728662cc4 = UNSTREAM_STRING( &constant_bin[ 434571 ], 10, 0 );
    const_tuple_str_plain_self_str_plain_level_str_plain_msg_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_level_str_plain_msg_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_level_str_plain_msg_tuple, 1, const_str_plain_level ); Py_INCREF( const_str_plain_level );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_level_str_plain_msg_tuple, 2, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_tuple_d4eae45c03b60136a8fec01056ddd9de_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 434581 ], 293 );
    const_tuple_str_plain_retry_on_signal_str_plain_ClosingContextManager_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_retry_on_signal_str_plain_ClosingContextManager_tuple, 0, const_str_plain_retry_on_signal ); Py_INCREF( const_str_plain_retry_on_signal );
    PyTuple_SET_ITEM( const_tuple_str_plain_retry_on_signal_str_plain_ClosingContextManager_tuple, 1, const_str_plain_ClosingContextManager ); Py_INCREF( const_str_plain_ClosingContextManager );
    const_str_digest_b5e7d2388b97f8ae6f06c4141a928665 = UNSTREAM_STRING( &constant_bin[ 434874 ], 35, 0 );
    const_str_digest_d2c3e63dd3150de342a7a27f43d1a582 = UNSTREAM_STRING( &constant_bin[ 434909 ], 107, 0 );
    const_tuple_str_plain_vt100_int_pos_80_int_pos_24_int_0_int_0_none_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_str_plain_vt100_int_pos_80_int_pos_24_int_0_int_0_none_tuple, 0, const_str_plain_vt100 ); Py_INCREF( const_str_plain_vt100 );
    PyTuple_SET_ITEM( const_tuple_str_plain_vt100_int_pos_80_int_pos_24_int_0_int_0_none_tuple, 1, const_int_pos_80 ); Py_INCREF( const_int_pos_80 );
    PyTuple_SET_ITEM( const_tuple_str_plain_vt100_int_pos_80_int_pos_24_int_0_int_0_none_tuple, 2, const_int_pos_24 ); Py_INCREF( const_int_pos_24 );
    PyTuple_SET_ITEM( const_tuple_str_plain_vt100_int_pos_80_int_pos_24_int_0_int_0_none_tuple, 3, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_str_plain_vt100_int_pos_80_int_pos_24_int_0_int_0_none_tuple, 4, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_str_plain_vt100_int_pos_80_int_pos_24_int_0_int_0_none_tuple, 5, Py_None ); Py_INCREF( Py_None );
    const_tuple_int_neg_1_none_false_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_none_false_none_tuple, 0, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_none_false_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_none_false_none_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_none_false_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_digest_2b153ae805508c7009c63ca8d8ef1f72 = UNSTREAM_STRING( &constant_bin[ 435016 ], 190, 0 );
    const_str_digest_b45cee6cc9f51a076c24027845ed2861 = UNSTREAM_STRING( &constant_bin[ 435206 ], 33, 0 );
    const_str_digest_1ac68d9bc74efb9e4f7ae0de5810e1e2 = UNSTREAM_STRING( &constant_bin[ 435239 ], 31, 0 );
    const_str_digest_481eccf2807da60536e27bf2eb604e7b = UNSTREAM_STRING( &constant_bin[ 435270 ], 14, 0 );
    const_str_digest_80f303e7575bf8f6cc5638f3eb79595f = UNSTREAM_STRING( &constant_bin[ 435284 ], 699, 0 );
    const_tuple_str_digest_cc04b4f3e909043cc54dd73c58b04ffc_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_cc04b4f3e909043cc54dd73c58b04ffc_tuple, 0, const_str_digest_cc04b4f3e909043cc54dd73c58b04ffc ); Py_INCREF( const_str_digest_cc04b4f3e909043cc54dd73c58b04ffc );
    const_str_digest_ef7ae15d8f68eb0beee7fa083e6ade9f = UNSTREAM_STRING( &constant_bin[ 435983 ], 30, 0 );
    const_str_digest_e1ff46558b234e9fec955eb04a9108f0 = UNSTREAM_STRING( &constant_bin[ 436013 ], 796, 0 );
    const_str_digest_891b2d21e9e95cfb5f8d10bdcc0b49ec = UNSTREAM_STRING( &constant_bin[ 436809 ], 30, 0 );
    const_str_digest_70c61c7536bef0fe851732517dfa5466 = UNSTREAM_STRING( &constant_bin[ 436839 ], 23, 0 );
    const_str_digest_c9e8f151c58da101aa05ec1643654e6f = UNSTREAM_STRING( &constant_bin[ 436862 ], 128, 0 );
    const_str_digest_db0f4d7a79d2ceb0bb1535215487a1a5 = UNSTREAM_STRING( &constant_bin[ 436990 ], 18, 0 );
    const_str_digest_6435bdc4c5f4bddc8f9ded954d144391 = UNSTREAM_STRING( &constant_bin[ 430429 ], 9, 0 );
    const_str_plain__log_channel = UNSTREAM_STRING( &constant_bin[ 425297 ], 12, 1 );
    const_tuple_str_digest_db0f4d7a79d2ceb0bb1535215487a1a5_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_db0f4d7a79d2ceb0bb1535215487a1a5_tuple, 0, const_str_digest_db0f4d7a79d2ceb0bb1535215487a1a5 ); Py_INCREF( const_str_digest_db0f4d7a79d2ceb0bb1535215487a1a5 );
    const_str_digest_25f624aba7791c2e8c268183d01bc468 = UNSTREAM_STRING( &constant_bin[ 437008 ], 391, 0 );
    const_str_digest_7e21af3ea52bb94e7b237344f99d37ca = UNSTREAM_STRING( &constant_bin[ 437399 ], 32, 0 );
    const_str_plain__policy = UNSTREAM_STRING( &constant_bin[ 120652 ], 7, 1 );
    const_str_plain__system_host_keys = UNSTREAM_STRING( &constant_bin[ 424683 ], 17, 1 );
    const_str_digest_6ffbad3e0880c4f1ec71a6aa363c6cae = UNSTREAM_STRING( &constant_bin[ 437431 ], 37, 0 );
    const_str_plain_open_sftp = UNSTREAM_STRING( &constant_bin[ 427694 ], 9, 1 );
    const_str_digest_16c4380e9245d1d7abc644f871045316 = UNSTREAM_STRING( &constant_bin[ 437468 ], 30, 0 );
    const_str_digest_aa18a2d1875ae8dc5507423d515070fb = UNSTREAM_STRING( &constant_bin[ 437498 ], 154, 0 );
    const_tuple_fbf883361528006f54b8a1802a1edc73_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 437652 ], 358 );
    const_str_digest_e501b328c9d368abc44f4f56c99cbee3 = UNSTREAM_STRING( &constant_bin[ 438010 ], 7, 0 );
    const_str_digest_5c219107dd50a727fb1f715a347cf01c = UNSTREAM_STRING( &constant_bin[ 438017 ], 1097, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_paramiko$client( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_13c4e915c87d24f003067c3420559b30;
static PyCodeObject *codeobj_2d441420cf968ae4516b9c1b0f7e38ec;
static PyCodeObject *codeobj_0ec79ecb6e2af9551050209ab7b828df;
static PyCodeObject *codeobj_03bb342e1f5ebefc75c13623cecfd549;
static PyCodeObject *codeobj_0cfb707fc637fa6848149d46c0ab33ce;
static PyCodeObject *codeobj_57554c3a0dd3d3eb82775d68860edb38;
static PyCodeObject *codeobj_3115c91d5024f1ad6c2124c93e8bc01d;
static PyCodeObject *codeobj_d32697446a19e621384df5dd255544a5;
static PyCodeObject *codeobj_6406a1772682e13cf3bac4b499e76f92;
static PyCodeObject *codeobj_c67faa985019701e28ba89e5ae51d9a0;
static PyCodeObject *codeobj_dca7945c5f0850d83fdcdaece5783b52;
static PyCodeObject *codeobj_f6d0de4d165cf21aed9b61ff168a1605;
static PyCodeObject *codeobj_7ac2bc9a44a1538be5f25dd9a388c3ae;
static PyCodeObject *codeobj_1ed0db91d7782cbd48c5643451fe2508;
static PyCodeObject *codeobj_23e3a9c0d4955f37d61c47096ac52c56;
static PyCodeObject *codeobj_76f05a9e712d25bba5b1587400b2926e;
static PyCodeObject *codeobj_cb903e1cf8bfa9415130e5e6ea1bfb25;
static PyCodeObject *codeobj_e3259617e7bc016e9be754911f51e918;
static PyCodeObject *codeobj_02086d5cf9c1336a73da489d0290a544;
static PyCodeObject *codeobj_45874b35a6aae55aafe7e9c089ece9f9;
static PyCodeObject *codeobj_8b6a689165be9ab30ca9a2be03d781b4;
static PyCodeObject *codeobj_ddca698026bc2dfd4a261486c9c0a7ca;
static PyCodeObject *codeobj_bb30060fad1b2e24f8ed8a62cf235adb;
static PyCodeObject *codeobj_750ee150c43f37d7f17e8d4c39c0acfc;
static PyCodeObject *codeobj_dfa8209123b90f755ba7421fd3b307fa;
static PyCodeObject *codeobj_7d2c2c3277824e955683eb28ada96157;
static PyCodeObject *codeobj_8278d2193a407663790055d4d7d2a4f7;
static PyCodeObject *codeobj_33941920b25ba4e25d1a2ce3c0908d30;
static PyCodeObject *codeobj_a5618532fa238ecb61da820a0126d504;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_a23610c98fb1a04c71e6d26f83667579;
    codeobj_13c4e915c87d24f003067c3420559b30 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 338, const_tuple_str_plain_sock_str_plain_addr_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_2d441420cf968ae4516b9c1b0f7e38ec = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 389, const_tuple_str_plain_keytype_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0ec79ecb6e2af9551050209ab7b828df = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1dffe1265848c1b7a3d58b70670d15b5, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_03bb342e1f5ebefc75c13623cecfd549 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_AutoAddPolicy, 742, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_0cfb707fc637fa6848149d46c0ab33ce = MAKE_CODEOBJ( module_filename_obj, const_str_plain_MissingHostKeyPolicy, 721, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_57554c3a0dd3d3eb82775d68860edb38 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RejectPolicy, 757, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_3115c91d5024f1ad6c2124c93e8bc01d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SSHClient, 47, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_d32697446a19e621384df5dd255544a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_WarningPolicy, 772, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_6406a1772682e13cf3bac4b499e76f92 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 67, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c67faa985019701e28ba89e5ae51d9a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__auth, 565, const_tuple_d4eae45c03b60136a8fec01056ddd9de_tuple, 12, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dca7945c5f0850d83fdcdaece5783b52 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__families_and_addresses, 190, const_tuple_45a0a03f06ca0ece81bc25cacca371e3_tuple, 3, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f6d0de4d165cf21aed9b61ff168a1605 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__key_from_filepath, 533, const_tuple_d2dc8f1432f741d177a0e08da87f461a_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7ac2bc9a44a1538be5f25dd9a388c3ae = MAKE_CODEOBJ( module_filename_obj, const_str_plain__log, 717, const_tuple_str_plain_self_str_plain_level_str_plain_msg_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1ed0db91d7782cbd48c5643451fe2508 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 427, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_23e3a9c0d4955f37d61c47096ac52c56 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connect, 213, const_tuple_fbf883361528006f54b8a1802a1edc73_tuple, 20, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_76f05a9e712d25bba5b1587400b2926e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_exec_command, 446, const_tuple_27de1bf3771296c89a32b7f9a21df49a_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cb903e1cf8bfa9415130e5e6ea1bfb25 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_host_keys, 150, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e3259617e7bc016e9be754911f51e918 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_transport, 523, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_02086d5cf9c1336a73da489d0290a544 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_invoke_shell, 492, const_tuple_8c6303a8f789690bc8124c1cf833f645_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_45874b35a6aae55aafe7e9c089ece9f9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_host_keys, 108, const_tuple_str_plain_self_str_plain_filename_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8b6a689165be9ab30ca9a2be03d781b4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_system_host_keys, 79, const_tuple_str_plain_self_str_plain_filename_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ddca698026bc2dfd4a261486c9c0a7ca = MAKE_CODEOBJ( module_filename_obj, const_str_plain_missing_host_key, 732, const_tuple_2a428175ca7de6751a42cdf2e2147190_tuple, 4, 0, CO_NOFREE );
    codeobj_bb30060fad1b2e24f8ed8a62cf235adb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_missing_host_key, 748, const_tuple_2a428175ca7de6751a42cdf2e2147190_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_750ee150c43f37d7f17e8d4c39c0acfc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_missing_host_key, 763, const_tuple_2a428175ca7de6751a42cdf2e2147190_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_dfa8209123b90f755ba7421fd3b307fa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_missing_host_key, 777, const_tuple_2a428175ca7de6751a42cdf2e2147190_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7d2c2c3277824e955683eb28ada96157 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open_sftp, 515, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8278d2193a407663790055d4d7d2a4f7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_save_host_keys, 127, const_tuple_3ddcdbe84e22c7618b5ecb47b375cf4c_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_33941920b25ba4e25d1a2ce3c0908d30 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_log_channel, 159, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a5618532fa238ecb61da820a0126d504 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_missing_host_key_policy, 168, const_tuple_str_plain_self_str_plain_policy_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *paramiko$client$$$function_8__families_and_addresses$$$genobj_1__families_and_addresses_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void paramiko$client$$$function_8__families_and_addresses$$$genobj_1__families_and_addresses_context( struct Nuitka_GeneratorObject *generator );
#endif


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_10_close(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_11_exec_command( PyObject *defaults );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_12_invoke_shell( PyObject *defaults );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_13_open_sftp(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_14_get_transport(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_15__key_from_filepath(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_16__auth(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_17__log(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_18_missing_host_key(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_19_missing_host_key(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_20_missing_host_key(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_21_missing_host_key(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_2_load_system_host_keys( PyObject *defaults );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_3_load_host_keys(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_4_save_host_keys(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_5_get_host_keys(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_6_set_log_channel(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_7_set_missing_host_key_policy(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_8__families_and_addresses(  );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_9_connect( PyObject *defaults );


static PyObject *MAKE_FUNCTION_paramiko$client$$$function_9_connect$$$function_1_lambda( struct Nuitka_CellObject *closure_addr, struct Nuitka_CellObject *closure_sock );


// The module function definitions.
static PyObject *impl_paramiko$client$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_6406a1772682e13cf3bac4b499e76f92 = NULL;

    struct Nuitka_FrameObject *frame_6406a1772682e13cf3bac4b499e76f92;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6406a1772682e13cf3bac4b499e76f92, codeobj_6406a1772682e13cf3bac4b499e76f92, module_paramiko$client, sizeof(void *) );
    frame_6406a1772682e13cf3bac4b499e76f92 = cache_frame_6406a1772682e13cf3bac4b499e76f92;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6406a1772682e13cf3bac4b499e76f92 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6406a1772682e13cf3bac4b499e76f92 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_HostKeys );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HostKeys );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HostKeys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_6406a1772682e13cf3bac4b499e76f92->m_frame.f_lineno = 71;
    tmp_assattr_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
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

        exception_lineno = 71;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__system_host_keys, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_HostKeys );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HostKeys );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HostKeys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_6406a1772682e13cf3bac4b499e76f92->m_frame.f_lineno = 72;
    tmp_assattr_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__host_keys, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = Py_None;
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__host_keys_filename, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = Py_None;
    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__log_channel, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_RejectPolicy );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RejectPolicy );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RejectPolicy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_6406a1772682e13cf3bac4b499e76f92->m_frame.f_lineno = 75;
    tmp_assattr_name_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__policy, tmp_assattr_name_5 );
    Py_DECREF( tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = Py_None;
    tmp_assattr_target_6 = par_self;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__transport, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = Py_None;
    tmp_assattr_target_7 = par_self;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__agent, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6406a1772682e13cf3bac4b499e76f92 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6406a1772682e13cf3bac4b499e76f92 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6406a1772682e13cf3bac4b499e76f92, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6406a1772682e13cf3bac4b499e76f92->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6406a1772682e13cf3bac4b499e76f92, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6406a1772682e13cf3bac4b499e76f92,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_6406a1772682e13cf3bac4b499e76f92 == cache_frame_6406a1772682e13cf3bac4b499e76f92 )
    {
        Py_DECREF( frame_6406a1772682e13cf3bac4b499e76f92 );
    }
    cache_frame_6406a1772682e13cf3bac4b499e76f92 = NULL;

    assertFrameObject( frame_6406a1772682e13cf3bac4b499e76f92 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_1___init__ );
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


static PyObject *impl_paramiko$client$$$function_2_load_system_host_keys( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_filename = python_pars[ 1 ];
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8b6a689165be9ab30ca9a2be03d781b4 = NULL;

    struct Nuitka_FrameObject *frame_8b6a689165be9ab30ca9a2be03d781b4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8b6a689165be9ab30ca9a2be03d781b4, codeobj_8b6a689165be9ab30ca9a2be03d781b4, module_paramiko$client, sizeof(void *)+sizeof(void *) );
    frame_8b6a689165be9ab30ca9a2be03d781b4 = cache_frame_8b6a689165be9ab30ca9a2be03d781b4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8b6a689165be9ab30ca9a2be03d781b4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8b6a689165be9ab30ca9a2be03d781b4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_filename;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_path );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_8b6a689165be9ab30ca9a2be03d781b4->m_frame.f_lineno = 100;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_expanduser, &PyTuple_GET_ITEM( const_tuple_str_digest_db0f4d7a79d2ceb0bb1535215487a1a5_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_filename;
        par_filename = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__system_host_keys );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_load );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_filename;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    frame_8b6a689165be9ab30ca9a2be03d781b4->m_frame.f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
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

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_8b6a689165be9ab30ca9a2be03d781b4, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_8b6a689165be9ab30ca9a2be03d781b4, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_2 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_2 = PyExc_IOError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 101;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8b6a689165be9ab30ca9a2be03d781b4->m_frame) frame_8b6a689165be9ab30ca9a2be03d781b4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_no_2:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_2_load_system_host_keys );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
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

        exception_lineno = 106;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__system_host_keys );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_load );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_filename;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_8b6a689165be9ab30ca9a2be03d781b4->m_frame.f_lineno = 106;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b6a689165be9ab30ca9a2be03d781b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b6a689165be9ab30ca9a2be03d781b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8b6a689165be9ab30ca9a2be03d781b4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8b6a689165be9ab30ca9a2be03d781b4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8b6a689165be9ab30ca9a2be03d781b4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8b6a689165be9ab30ca9a2be03d781b4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8b6a689165be9ab30ca9a2be03d781b4,
        type_description_1,
        par_self,
        par_filename
    );


    // Release cached frame.
    if ( frame_8b6a689165be9ab30ca9a2be03d781b4 == cache_frame_8b6a689165be9ab30ca9a2be03d781b4 )
    {
        Py_DECREF( frame_8b6a689165be9ab30ca9a2be03d781b4 );
    }
    cache_frame_8b6a689165be9ab30ca9a2be03d781b4 = NULL;

    assertFrameObject( frame_8b6a689165be9ab30ca9a2be03d781b4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_2_load_system_host_keys );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_filename );
    par_filename = NULL;

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

    Py_XDECREF( par_filename );
    par_filename = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_2_load_system_host_keys );
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


static PyObject *impl_paramiko$client$$$function_3_load_host_keys( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_filename = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_45874b35a6aae55aafe7e9c089ece9f9 = NULL;

    struct Nuitka_FrameObject *frame_45874b35a6aae55aafe7e9c089ece9f9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_45874b35a6aae55aafe7e9c089ece9f9, codeobj_45874b35a6aae55aafe7e9c089ece9f9, module_paramiko$client, sizeof(void *)+sizeof(void *) );
    frame_45874b35a6aae55aafe7e9c089ece9f9 = cache_frame_45874b35a6aae55aafe7e9c089ece9f9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_45874b35a6aae55aafe7e9c089ece9f9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_45874b35a6aae55aafe7e9c089ece9f9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_filename;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__host_keys_filename, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__host_keys );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_load );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_filename;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_45874b35a6aae55aafe7e9c089ece9f9->m_frame.f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_45874b35a6aae55aafe7e9c089ece9f9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_45874b35a6aae55aafe7e9c089ece9f9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_45874b35a6aae55aafe7e9c089ece9f9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_45874b35a6aae55aafe7e9c089ece9f9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_45874b35a6aae55aafe7e9c089ece9f9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_45874b35a6aae55aafe7e9c089ece9f9,
        type_description_1,
        par_self,
        par_filename
    );


    // Release cached frame.
    if ( frame_45874b35a6aae55aafe7e9c089ece9f9 == cache_frame_45874b35a6aae55aafe7e9c089ece9f9 )
    {
        Py_DECREF( frame_45874b35a6aae55aafe7e9c089ece9f9 );
    }
    cache_frame_45874b35a6aae55aafe7e9c089ece9f9 = NULL;

    assertFrameObject( frame_45874b35a6aae55aafe7e9c089ece9f9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_3_load_host_keys );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_filename );
    par_filename = NULL;

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

    Py_XDECREF( par_filename );
    par_filename = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_3_load_host_keys );
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


static PyObject *impl_paramiko$client$$$function_4_save_host_keys( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_filename = python_pars[ 1 ];
    PyObject *var_keytype = NULL;
    PyObject *var_hostname = NULL;
    PyObject *var_f = NULL;
    PyObject *var_key = NULL;
    PyObject *var_keys = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    PyObject *tmp_with_1__indicator = NULL;
    PyObject *tmp_with_1__source = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_open_filename_1;
    PyObject *tmp_open_mode_1;
    bool tmp_result;
    PyObject *tmp_return_value;
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
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static struct Nuitka_FrameObject *cache_frame_8278d2193a407663790055d4d7d2a4f7 = NULL;

    struct Nuitka_FrameObject *frame_8278d2193a407663790055d4d7d2a4f7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8278d2193a407663790055d4d7d2a4f7, codeobj_8278d2193a407663790055d4d7d2a4f7, module_paramiko$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8278d2193a407663790055d4d7d2a4f7 = cache_frame_8278d2193a407663790055d4d7d2a4f7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8278d2193a407663790055d4d7d2a4f7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8278d2193a407663790055d4d7d2a4f7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__host_keys_filename );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_load_host_keys );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__host_keys_filename );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 141;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_8278d2193a407663790055d4d7d2a4f7->m_frame.f_lineno = 141;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    // Tried code:
    tmp_open_filename_1 = par_filename;

    if ( tmp_open_filename_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }

    tmp_open_mode_1 = const_str_plain_w;
    tmp_assign_source_1 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_1;

    tmp_source_name_4 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_assign_source_2 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___exit__ );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_2;

    tmp_source_name_5 = tmp_with_1__source;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_5, const_str_plain___enter__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    frame_8278d2193a407663790055d4d7d2a4f7->m_frame.f_lineno = 143;
    tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_3;

    tmp_assign_source_4 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_with_1__indicator = tmp_assign_source_4;

    tmp_assign_source_5 = tmp_with_1__enter;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_f == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_f = tmp_assign_source_5;

    // Tried code:
    // Tried code:
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__host_keys );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    frame_8278d2193a407663790055d4d7d2a4f7->m_frame.f_lineno = 144;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_7 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_7 == NULL )
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
        exception_lineno = 144;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_2 = exception_keeper_type_1;
    tmp_compare_right_2 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 144;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_5;
    branch_end_2:;
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        type_description_1 = "ooooooo";
        exception_lineno = 144;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


        type_description_1 = "ooooooo";
        exception_lineno = 144;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
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
                exception_lineno = 144;
                goto try_except_handler_8;
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

        type_description_1 = "ooooooo";
        exception_lineno = 144;
        goto try_except_handler_8;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_7;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
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

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_hostname;
        var_hostname = tmp_assign_source_11;
        Py_INCREF( var_hostname );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_keys;
        var_keys = tmp_assign_source_12;
        Py_INCREF( var_keys );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_instance_2 = var_keys;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }

    frame_8278d2193a407663790055d4d7d2a4f7->m_frame.f_lineno = 145;
    tmp_iter_arg_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_items );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_14 = ITERATOR_NEXT( tmp_value_name_2 );
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


        type_description_1 = "ooooooo";
        exception_lineno = 145;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_3 = exception_keeper_type_4;
    tmp_compare_right_3 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_4 );
        Py_XDECREF( exception_keeper_value_4 );
        Py_XDECREF( exception_keeper_tb_4 );

        exception_lineno = 145;
        type_description_1 = "ooooooo";
        goto try_except_handler_9;
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
    Py_DECREF( exception_keeper_type_4 );
    Py_XDECREF( exception_keeper_value_4 );
    Py_XDECREF( exception_keeper_tb_4 );
    goto loop_end_2;
    goto branch_end_3;
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_9;
    branch_end_3:;
    // End of try:
    try_end_4:;
    // Tried code:
    tmp_iter_arg_4 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_iter_arg_4 );
    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooooooo";
        goto try_except_handler_11;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
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


        type_description_1 = "ooooooo";
        exception_lineno = 145;
        goto try_except_handler_12;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


        type_description_1 = "ooooooo";
        exception_lineno = 145;
        goto try_except_handler_12;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_iterator_name_2 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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
                exception_lineno = 145;
                goto try_except_handler_12;
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

        type_description_1 = "ooooooo";
        exception_lineno = 145;
        goto try_except_handler_12;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_12:;
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

    goto try_except_handler_11;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_11:;
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

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_9;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_18 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_18 );
    {
        PyObject *old = var_keytype;
        var_keytype = tmp_assign_source_18;
        Py_INCREF( var_keytype );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_19 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_19 );
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_19;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_source_name_7 = var_f;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "f" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "ooooooo";
        goto try_except_handler_9;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_write );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooooooo";
        goto try_except_handler_9;
    }
    tmp_source_name_8 = const_str_digest_6a3269227c645e2e6bb8d0c510b5b5a7;
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_format );
    assert( !(tmp_called_name_4 == NULL) );
    tmp_args_element_name_3 = var_hostname;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "ooooooo";
        goto try_except_handler_9;
    }

    tmp_args_element_name_4 = var_keytype;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keytype" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "ooooooo";
        goto try_except_handler_9;
    }

    tmp_called_instance_3 = var_key;

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "ooooooo";
        goto try_except_handler_9;
    }

    frame_8278d2193a407663790055d4d7d2a4f7->m_frame.f_lineno = 147;
    tmp_args_element_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_get_base64 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 147;
        type_description_1 = "ooooooo";
        goto try_except_handler_9;
    }
    frame_8278d2193a407663790055d4d7d2a4f7->m_frame.f_lineno = 146;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 146;
        type_description_1 = "ooooooo";
        goto try_except_handler_9;
    }
    frame_8278d2193a407663790055d4d7d2a4f7->m_frame.f_lineno = 146;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "ooooooo";
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_5;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_4;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto try_end_9;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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

    if ( exception_keeper_tb_9 == NULL )
    {
        exception_keeper_tb_9 = MAKE_TRACEBACK( frame_8278d2193a407663790055d4d7d2a4f7, exception_keeper_lineno_9 );
    }
    else if ( exception_keeper_lineno_9 != 0 )
    {
        exception_keeper_tb_9 = ADD_TRACEBACK( exception_keeper_tb_9, frame_8278d2193a407663790055d4d7d2a4f7, exception_keeper_lineno_9 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
    PyException_SetTraceback( exception_keeper_value_9, (PyObject *)exception_keeper_tb_9 );
    PUBLISH_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
    // Tried code:
    tmp_compare_left_4 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_4 = PyExc_BaseException;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooooooo";
        goto try_except_handler_13;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_20 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        assert( old != NULL );
        tmp_with_1__indicator = tmp_assign_source_20;
        Py_INCREF( tmp_with_1__indicator );
        Py_DECREF( old );
    }

    tmp_called_name_5 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_5 );
    tmp_args_element_name_6 = EXC_TYPE(PyThreadState_GET());
    tmp_args_element_name_7 = EXC_VALUE(PyThreadState_GET());
    tmp_args_element_name_8 = EXC_TRACEBACK(PyThreadState_GET());
    frame_8278d2193a407663790055d4d7d2a4f7->m_frame.f_lineno = 143;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooooooo";
        goto try_except_handler_13;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 143;
        type_description_1 = "ooooooo";
        goto try_except_handler_13;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 143;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8278d2193a407663790055d4d7d2a4f7->m_frame) frame_8278d2193a407663790055d4d7d2a4f7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_13;
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 143;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8278d2193a407663790055d4d7d2a4f7->m_frame) frame_8278d2193a407663790055d4d7d2a4f7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_13;
    branch_end_4:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_3;
    // End of try:
    try_end_10:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_9;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_4_save_host_keys );
    return NULL;
    // End of try:
    try_end_9:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_5 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_5 );
    tmp_compare_right_5 = Py_True;
    tmp_is_1 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_6 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_6 );
    frame_8278d2193a407663790055d4d7d2a4f7->m_frame.f_lineno = 143;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_11 );
        Py_XDECREF( exception_keeper_value_11 );
        Py_XDECREF( exception_keeper_tb_11 );

        exception_lineno = 143;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_2;
    // End of try:
    try_end_11:;
    tmp_compare_left_6 = tmp_with_1__indicator;

    CHECK_OBJECT( tmp_compare_left_6 );
    tmp_compare_right_6 = Py_True;
    tmp_is_2 = ( tmp_compare_left_6 == tmp_compare_right_6 );
    if ( tmp_is_2 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_7 = tmp_with_1__exit;

    CHECK_OBJECT( tmp_called_name_7 );
    frame_8278d2193a407663790055d4d7d2a4f7->m_frame.f_lineno = 143;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8278d2193a407663790055d4d7d2a4f7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8278d2193a407663790055d4d7d2a4f7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8278d2193a407663790055d4d7d2a4f7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8278d2193a407663790055d4d7d2a4f7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8278d2193a407663790055d4d7d2a4f7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8278d2193a407663790055d4d7d2a4f7,
        type_description_1,
        par_self,
        par_filename,
        var_keytype,
        var_hostname,
        var_f,
        var_key,
        var_keys
    );


    // Release cached frame.
    if ( frame_8278d2193a407663790055d4d7d2a4f7 == cache_frame_8278d2193a407663790055d4d7d2a4f7 )
    {
        Py_DECREF( frame_8278d2193a407663790055d4d7d2a4f7 );
    }
    cache_frame_8278d2193a407663790055d4d7d2a4f7 = NULL;

    assertFrameObject( frame_8278d2193a407663790055d4d7d2a4f7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_4_save_host_keys );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_keytype );
    var_keytype = NULL;

    Py_XDECREF( var_hostname );
    var_hostname = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( par_filename );
    par_filename = NULL;

    Py_XDECREF( var_keys );
    var_keys = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_keytype );
    var_keytype = NULL;

    Py_XDECREF( var_hostname );
    var_hostname = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( par_filename );
    par_filename = NULL;

    Py_XDECREF( var_keys );
    var_keys = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_4_save_host_keys );
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


static PyObject *impl_paramiko$client$$$function_5_get_host_keys( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_cb903e1cf8bfa9415130e5e6ea1bfb25 = NULL;

    struct Nuitka_FrameObject *frame_cb903e1cf8bfa9415130e5e6ea1bfb25;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cb903e1cf8bfa9415130e5e6ea1bfb25, codeobj_cb903e1cf8bfa9415130e5e6ea1bfb25, module_paramiko$client, sizeof(void *) );
    frame_cb903e1cf8bfa9415130e5e6ea1bfb25 = cache_frame_cb903e1cf8bfa9415130e5e6ea1bfb25;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cb903e1cf8bfa9415130e5e6ea1bfb25 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cb903e1cf8bfa9415130e5e6ea1bfb25 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__host_keys );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb903e1cf8bfa9415130e5e6ea1bfb25 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb903e1cf8bfa9415130e5e6ea1bfb25 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cb903e1cf8bfa9415130e5e6ea1bfb25 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cb903e1cf8bfa9415130e5e6ea1bfb25, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cb903e1cf8bfa9415130e5e6ea1bfb25->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cb903e1cf8bfa9415130e5e6ea1bfb25, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cb903e1cf8bfa9415130e5e6ea1bfb25,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_cb903e1cf8bfa9415130e5e6ea1bfb25 == cache_frame_cb903e1cf8bfa9415130e5e6ea1bfb25 )
    {
        Py_DECREF( frame_cb903e1cf8bfa9415130e5e6ea1bfb25 );
    }
    cache_frame_cb903e1cf8bfa9415130e5e6ea1bfb25 = NULL;

    assertFrameObject( frame_cb903e1cf8bfa9415130e5e6ea1bfb25 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_5_get_host_keys );
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
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_5_get_host_keys );
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


static PyObject *impl_paramiko$client$$$function_6_set_log_channel( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_33941920b25ba4e25d1a2ce3c0908d30 = NULL;

    struct Nuitka_FrameObject *frame_33941920b25ba4e25d1a2ce3c0908d30;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_33941920b25ba4e25d1a2ce3c0908d30, codeobj_33941920b25ba4e25d1a2ce3c0908d30, module_paramiko$client, sizeof(void *)+sizeof(void *) );
    frame_33941920b25ba4e25d1a2ce3c0908d30 = cache_frame_33941920b25ba4e25d1a2ce3c0908d30;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_33941920b25ba4e25d1a2ce3c0908d30 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_33941920b25ba4e25d1a2ce3c0908d30 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_name;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__log_channel, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_33941920b25ba4e25d1a2ce3c0908d30 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_33941920b25ba4e25d1a2ce3c0908d30 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_33941920b25ba4e25d1a2ce3c0908d30, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_33941920b25ba4e25d1a2ce3c0908d30->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_33941920b25ba4e25d1a2ce3c0908d30, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_33941920b25ba4e25d1a2ce3c0908d30,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_33941920b25ba4e25d1a2ce3c0908d30 == cache_frame_33941920b25ba4e25d1a2ce3c0908d30 )
    {
        Py_DECREF( frame_33941920b25ba4e25d1a2ce3c0908d30 );
    }
    cache_frame_33941920b25ba4e25d1a2ce3c0908d30 = NULL;

    assertFrameObject( frame_33941920b25ba4e25d1a2ce3c0908d30 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_6_set_log_channel );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

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

    Py_XDECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_6_set_log_channel );
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


static PyObject *impl_paramiko$client$$$function_7_set_missing_host_key_policy( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_policy = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_a5618532fa238ecb61da820a0126d504 = NULL;

    struct Nuitka_FrameObject *frame_a5618532fa238ecb61da820a0126d504;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a5618532fa238ecb61da820a0126d504, codeobj_a5618532fa238ecb61da820a0126d504, module_paramiko$client, sizeof(void *)+sizeof(void *) );
    frame_a5618532fa238ecb61da820a0126d504 = cache_frame_a5618532fa238ecb61da820a0126d504;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a5618532fa238ecb61da820a0126d504 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a5618532fa238ecb61da820a0126d504 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_inspect );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "inspect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_isclass );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_policy;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "policy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_a5618532fa238ecb61da820a0126d504->m_frame.f_lineno = 186;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 186;
        type_description_1 = "oo";
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
    tmp_called_name_2 = par_policy;

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "policy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_a5618532fa238ecb61da820a0126d504->m_frame.f_lineno = 187;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_policy;
        par_policy = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_assattr_name_1 = par_policy;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "policy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__policy, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a5618532fa238ecb61da820a0126d504 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a5618532fa238ecb61da820a0126d504 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a5618532fa238ecb61da820a0126d504, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a5618532fa238ecb61da820a0126d504->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a5618532fa238ecb61da820a0126d504, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a5618532fa238ecb61da820a0126d504,
        type_description_1,
        par_self,
        par_policy
    );


    // Release cached frame.
    if ( frame_a5618532fa238ecb61da820a0126d504 == cache_frame_a5618532fa238ecb61da820a0126d504 )
    {
        Py_DECREF( frame_a5618532fa238ecb61da820a0126d504 );
    }
    cache_frame_a5618532fa238ecb61da820a0126d504 = NULL;

    assertFrameObject( frame_a5618532fa238ecb61da820a0126d504 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_7_set_missing_host_key_policy );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_policy );
    par_policy = NULL;

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

    Py_XDECREF( par_policy );
    par_policy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_7_set_missing_host_key_policy );
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


static PyObject *impl_paramiko$client$$$function_8__families_and_addresses( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_CellObject *par_hostname = PyCell_NEW1( python_pars[ 1 ] );
    struct Nuitka_CellObject *par_port = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Nuitka_Generator_New(
        paramiko$client$$$function_8__families_and_addresses$$$genobj_1__families_and_addresses_context,
        module_paramiko$client,
        const_str_plain__families_and_addresses,
#if PYTHON_VERSION >= 350
        const_str_digest_b45cee6cc9f51a076c24027845ed2861,
#endif
        codeobj_dca7945c5f0850d83fdcdaece5783b52,
        3
    );

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_hostname;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_port;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[2] = PyCell_NEW0( par_self );
    assert( Py_SIZE( tmp_return_value ) >= 3 ); 


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_8__families_and_addresses );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_hostname );
    Py_DECREF( par_hostname );
    par_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_port );
    Py_DECREF( par_port );
    par_port = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_hostname );
    Py_DECREF( par_hostname );
    par_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_port );
    Py_DECREF( par_port );
    par_port = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_8__families_and_addresses );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct paramiko$client$$$function_8__families_and_addresses$$$genobj_1__families_and_addresses_locals {
    PyObject *var_family
    PyObject *var_proto
    PyObject *var_guess
    PyObject *var_addrinfos
    PyObject *var_socktype
    PyObject *var_canonname
    PyObject *var__
    PyObject *var_sockaddr
    PyObject *tmp_for_loop_1__for_iterator
    PyObject *tmp_for_loop_1__iter_value
    PyObject *tmp_for_loop_2__for_iterator
    PyObject *tmp_for_loop_2__iter_value
    PyObject *tmp_tuple_unpack_1__element_1
    PyObject *tmp_tuple_unpack_1__element_2
    PyObject *tmp_tuple_unpack_1__element_3
    PyObject *tmp_tuple_unpack_1__element_4
    PyObject *tmp_tuple_unpack_1__element_5
    PyObject *tmp_tuple_unpack_1__source_iter
    PyObject *tmp_tuple_unpack_2__element_1
    PyObject *tmp_tuple_unpack_2__element_2
    PyObject *tmp_tuple_unpack_2__element_3
    PyObject *tmp_tuple_unpack_2__element_4
    PyObject *tmp_tuple_unpack_2__element_5
    PyObject *tmp_tuple_unpack_2__source_iter
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
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
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *paramiko$client$$$function_8__families_and_addresses$$$genobj_1__families_and_addresses_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void paramiko$client$$$function_8__families_and_addresses$$$genobj_1__families_and_addresses_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_family = NULL;
    PyObject *var_proto = NULL;
    PyObject *var_guess = NULL;
    PyObject *var_addrinfos = NULL;
    PyObject *var_socktype = NULL;
    PyObject *var_canonname = NULL;
    PyObject *var__ = NULL;
    PyObject *var_sockaddr = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__element_5 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( var_guess == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_guess = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_dca7945c5f0850d83fdcdaece5783b52, module_paramiko$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
    generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
    generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
    if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
    Py_XINCREF( generator->m_exc_state.exc_type );
    generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
    Py_XINCREF( generator->m_exc_state.exc_value );
    generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
    Py_XINCREF( generator->m_exc_state.exc_traceback );

#endif

#endif

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        type_description_1 = "cccoooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getaddrinfo );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "cccoooooooo";
        goto frame_exception_exit_1;
    }
    if ( generator->m_closure[0] == NULL )
    {
        tmp_args_element_name_1 = NULL;
    }
    else
    {
        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "cccoooooooo";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[1] == NULL )
    {
        tmp_args_element_name_2 = NULL;
    }
    else
    {
        tmp_args_element_name_2 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "port" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "cccoooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "cccoooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_AF_UNSPEC );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 200;
        type_description_1 = "cccoooooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "cccoooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SOCK_STREAM );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 200;
        type_description_1 = "cccoooooooo";
        goto frame_exception_exit_1;
    }
    generator->m_frame->m_frame.f_lineno = 199;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        type_description_1 = "cccoooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_addrinfos == NULL );
    var_addrinfos = tmp_assign_source_2;

    tmp_iter_arg_1 = var_addrinfos;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "cccoooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_value_name_1 );
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


        type_description_1 = "cccoooooooo";
        exception_lineno = 201;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
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

        exception_lineno = 201;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_2;
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

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 5 );
    if ( tmp_assign_source_6 == NULL )
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


        type_description_1 = "cccoooooooo";
        exception_lineno = 201;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1, 5 );
    if ( tmp_assign_source_7 == NULL )
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


        type_description_1 = "cccoooooooo";
        exception_lineno = 201;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_3, 2, 5 );
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


        type_description_1 = "cccoooooooo";
        exception_lineno = 201;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_3;
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_4, 3, 5 );
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


        type_description_1 = "cccoooooooo";
        exception_lineno = 201;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_4;
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_5, 4, 5 );
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


        type_description_1 = "cccoooooooo";
        exception_lineno = 201;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_5;
        tmp_tuple_unpack_1__element_5 = tmp_assign_source_10;
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

                type_description_1 = "cccoooooooo";
                exception_lineno = 201;
                goto try_except_handler_5;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "cccoooooooo";
        exception_lineno = 201;
        goto try_except_handler_5;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_family;
        var_family = tmp_assign_source_11;
        Py_INCREF( var_family );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_socktype;
        var_socktype = tmp_assign_source_12;
        Py_INCREF( var_socktype );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = var_proto;
        var_proto = tmp_assign_source_13;
        Py_INCREF( var_proto );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_assign_source_14 = tmp_tuple_unpack_1__element_4;

    CHECK_OBJECT( tmp_assign_source_14 );
    {
        PyObject *old = var_canonname;
        var_canonname = tmp_assign_source_14;
        Py_INCREF( var_canonname );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    tmp_assign_source_15 = tmp_tuple_unpack_1__element_5;

    CHECK_OBJECT( tmp_assign_source_15 );
    {
        PyObject *old = var_sockaddr;
        var_sockaddr = tmp_assign_source_15;
        Py_INCREF( var_sockaddr );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    tmp_compare_left_2 = var_socktype;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "socktype" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SOCK_STREAM );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_2;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_tuple_element_1 = var_family;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "family" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_2;
    }

    tmp_expression_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_sockaddr;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_expression_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sockaddr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_16 = Py_False;
    {
        PyObject *old = var_guess;
        var_guess = tmp_assign_source_16;
        Py_INCREF( var_guess );
        Py_XDECREF( old );
    }

    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_cond_value_1 = var_guess;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "guess" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        type_description_1 = "cccoooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "cccoooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_iter_arg_3 = var_addrinfos;

    if ( tmp_iter_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "addrinfos" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        type_description_1 = "cccoooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "cccoooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_17;

    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_18 = ITERATOR_NEXT( tmp_value_name_2 );
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


        type_description_1 = "cccoooooooo";
        exception_lineno = 210;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_18;
        Py_XDECREF( old );
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

    tmp_compare_left_3 = exception_keeper_type_5;
    tmp_compare_right_3 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_5 );
        Py_XDECREF( exception_keeper_value_5 );
        Py_XDECREF( exception_keeper_tb_5 );

        exception_lineno = 210;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_6;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    Py_DECREF( exception_keeper_type_5 );
    Py_XDECREF( exception_keeper_value_5 );
    Py_XDECREF( exception_keeper_tb_5 );
    goto loop_end_2;
    goto branch_end_4;
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    branch_end_4:;
    // End of try:
    try_end_5:;
    // Tried code:
    tmp_iter_arg_4 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_iter_arg_4 );
    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_6, 0, 5 );
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


        type_description_1 = "cccoooooooo";
        exception_lineno = 210;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_7, 1, 5 );
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


        type_description_1 = "cccoooooooo";
        exception_lineno = 210;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_8 );
    tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_8, 2, 5 );
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


        type_description_1 = "cccoooooooo";
        exception_lineno = 210;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_3;
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    tmp_unpack_9 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_9 );
    tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_9, 3, 5 );
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


        type_description_1 = "cccoooooooo";
        exception_lineno = 210;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_4;
        tmp_tuple_unpack_2__element_4 = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    tmp_unpack_10 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_10 );
    tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_10, 4, 5 );
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


        type_description_1 = "cccoooooooo";
        exception_lineno = 210;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_5;
        tmp_tuple_unpack_2__element_5 = tmp_assign_source_24;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_iterator_name_2 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                type_description_1 = "cccoooooooo";
                exception_lineno = 210;
                goto try_except_handler_9;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "cccoooooooo";
        exception_lineno = 210;
        goto try_except_handler_9;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_6;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_25 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_25 );
    {
        PyObject *old = var_family;
        var_family = tmp_assign_source_25;
        Py_INCREF( var_family );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_26 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_26 );
    {
        PyObject *old = var__;
        var__ = tmp_assign_source_26;
        Py_INCREF( var__ );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_assign_source_27 = tmp_tuple_unpack_2__element_3;

    CHECK_OBJECT( tmp_assign_source_27 );
    {
        PyObject *old = var__;
        var__ = tmp_assign_source_27;
        Py_INCREF( var__ );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    tmp_assign_source_28 = tmp_tuple_unpack_2__element_4;

    CHECK_OBJECT( tmp_assign_source_28 );
    {
        PyObject *old = var__;
        var__ = tmp_assign_source_28;
        Py_INCREF( var__ );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    tmp_assign_source_29 = tmp_tuple_unpack_2__element_5;

    CHECK_OBJECT( tmp_assign_source_29 );
    {
        PyObject *old = var_sockaddr;
        var_sockaddr = tmp_assign_source_29;
        Py_INCREF( var_sockaddr );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_5 );
    tmp_tuple_unpack_2__element_5 = NULL;

    tmp_tuple_element_2 = var_family;

    if ( tmp_tuple_element_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "family" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_6;
    }

    tmp_expression_name_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_expression_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_sockaddr;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_expression_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sockaddr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_6;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_expression_name_2, 1, tmp_tuple_element_2 );
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_6;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "cccoooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_8;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_3:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            generator->m_closure[2],
            generator->m_closure[0],
            generator->m_closure[1],
            var_family,
            var_proto,
            var_guess,
            var_addrinfos,
            var_socktype,
            var_canonname,
            var__,
            var_sockaddr
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_9;
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

    Py_XDECREF( var_family );
    var_family = NULL;

    Py_XDECREF( var_proto );
    var_proto = NULL;

    Py_XDECREF( var_guess );
    var_guess = NULL;

    Py_XDECREF( var_addrinfos );
    var_addrinfos = NULL;

    Py_XDECREF( var_socktype );
    var_socktype = NULL;

    Py_XDECREF( var_canonname );
    var_canonname = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_sockaddr );
    var_sockaddr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:
    try_end_9:;
    Py_XDECREF( var_family );
    var_family = NULL;

    Py_XDECREF( var_proto );
    var_proto = NULL;

    Py_XDECREF( var_guess );
    var_guess = NULL;

    Py_XDECREF( var_addrinfos );
    var_addrinfos = NULL;

    Py_XDECREF( var_socktype );
    var_socktype = NULL;

    Py_XDECREF( var_canonname );
    var_canonname = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_sockaddr );
    var_sockaddr = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}


static PyObject *impl_paramiko$client$$$function_9_connect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_hostname = python_pars[ 1 ];
    PyObject *par_port = python_pars[ 2 ];
    PyObject *par_username = python_pars[ 3 ];
    PyObject *par_password = python_pars[ 4 ];
    PyObject *par_pkey = python_pars[ 5 ];
    PyObject *par_key_filename = python_pars[ 6 ];
    PyObject *par_timeout = python_pars[ 7 ];
    PyObject *par_allow_agent = python_pars[ 8 ];
    PyObject *par_look_for_keys = python_pars[ 9 ];
    PyObject *par_compress = python_pars[ 10 ];
    struct Nuitka_CellObject *par_sock = PyCell_NEW1( python_pars[ 11 ] );
    PyObject *par_gss_auth = python_pars[ 12 ];
    PyObject *par_gss_kex = python_pars[ 13 ];
    PyObject *par_gss_deleg_creds = python_pars[ 14 ];
    PyObject *par_gss_host = python_pars[ 15 ];
    PyObject *par_banner_timeout = python_pars[ 16 ];
    PyObject *par_auth_timeout = python_pars[ 17 ];
    PyObject *par_gss_trust_dns = python_pars[ 18 ];
    PyObject *par_passphrase = python_pars[ 19 ];
    PyObject *var_t = NULL;
    PyObject *var_af = NULL;
    PyObject *var_key_filenames = NULL;
    PyObject *var_our_key = NULL;
    PyObject *var_other_types = NULL;
    PyObject *var_server_hostkey_name = NULL;
    PyObject *var_to_try = NULL;
    PyObject *var_e = NULL;
    PyObject *var_sec_opts = NULL;
    PyObject *var_our_server_keys = NULL;
    PyObject *var_keytype = NULL;
    struct Nuitka_CellObject *var_addr = PyCell_EMPTY();
    PyObject *var_errors = NULL;
    PyObject *var_server_key = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    bool tmp_is_5;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    bool tmp_isnot_4;
    bool tmp_isnot_5;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_list_arg_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static struct Nuitka_FrameObject *cache_frame_2d441420cf968ae4516b9c1b0f7e38ec_2 = NULL;

    struct Nuitka_FrameObject *frame_2d441420cf968ae4516b9c1b0f7e38ec_2;

    static struct Nuitka_FrameObject *cache_frame_23e3a9c0d4955f37d61c47096ac52c56 = NULL;

    struct Nuitka_FrameObject *frame_23e3a9c0d4955f37d61c47096ac52c56;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_23e3a9c0d4955f37d61c47096ac52c56, codeobj_23e3a9c0d4955f37d61c47096ac52c56, module_paramiko$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_23e3a9c0d4955f37d61c47096ac52c56 = cache_frame_23e3a9c0d4955f37d61c47096ac52c56;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_23e3a9c0d4955f37d61c47096ac52c56 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_23e3a9c0d4955f37d61c47096ac52c56 ) == 2 ); // Frame stack

    // Framed code:
    if ( par_sock == NULL )
    {
        tmp_cond_value_1 = NULL;
    }
    else
    {
        tmp_cond_value_1 = PyCell_GET( par_sock );
    }

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_assign_source_1 = PyDict_New();
    assert( var_errors == NULL );
    var_errors = tmp_assign_source_1;

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 329;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__families_and_addresses );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_hostname;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 329;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_port;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 329;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 329;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    assert( var_to_try == NULL );
    var_to_try = tmp_assign_source_2;

    tmp_iter_arg_1 = var_to_try;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_value_name_1 );
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


        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        exception_lineno = 330;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
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

        exception_lineno = 330;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_2;
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_2:;
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_6 == NULL )
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


        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        exception_lineno = 330;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_7 == NULL )
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


        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        exception_lineno = 330;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                type_description_1 = "ooooooooooocooooooooooooooooooocoo";
                exception_lineno = 330;
                goto try_except_handler_5;
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

        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        exception_lineno = 330;
        goto try_except_handler_5;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_af;
        var_af = tmp_assign_source_8;
        Py_INCREF( var_af );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = PyCell_GET( var_addr );
        PyCell_SET( var_addr, tmp_assign_source_9 );
        Py_INCREF( tmp_assign_source_9 );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 332;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_6;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_socket );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_6;
    }
    tmp_args_element_name_3 = var_af;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "af" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 332;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_6;
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 332;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_6;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SOCK_STREAM );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 332;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_6;
    }
    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 332;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_6;
    }
    {
        PyObject *old = PyCell_GET( par_sock );
        PyCell_SET( par_sock, tmp_assign_source_10 );
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = par_timeout;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 333;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_6;
    }

    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    // Tried code:
    if ( par_sock == NULL )
    {
        tmp_source_name_4 = NULL;
    }
    else
    {
        tmp_source_name_4 = PyCell_GET( par_sock );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 335;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_7;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_settimeout );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_7;
    }
    tmp_args_element_name_5 = par_timeout;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 335;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_7;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 335;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( exception_keeper_type_4 );
    Py_XDECREF( exception_keeper_value_4 );
    Py_XDECREF( exception_keeper_tb_4 );
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_9_connect );
    return NULL;
    // End of try:
    try_end_4:;
    branch_no_3:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_retry_on_signal );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_retry_on_signal );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "retry_on_signal" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 338;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_6;
    }

    tmp_args_element_name_6 = MAKE_FUNCTION_paramiko$client$$$function_9_connect$$$function_1_lambda( var_addr, par_sock );
    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 338;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    goto loop_end_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_9_connect );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_23e3a9c0d4955f37d61c47096ac52c56, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_23e3a9c0d4955f37d61c47096ac52c56, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    tmp_compare_left_3 = EXC_TYPE(PyThreadState_GET());
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_socket );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "socket" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 341;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_8;
    }

    tmp_compare_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_error );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_8;
    }
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_8;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_11 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_11;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_6 = var_e;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_compare_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_errno );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_9;
    }
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_ECONNREFUSED );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ECONNREFUSED );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ECONNREFUSED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_9;
    }

    tmp_compare_right_4 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_4, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_EHOSTUNREACH );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EHOSTUNREACH );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EHOSTUNREACH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_4, 1, tmp_tuple_element_1 );
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 345;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame) frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooocooooooooooooooooooocoo";
    goto try_except_handler_9;
    branch_no_5:;
    tmp_ass_subvalue_1 = var_e;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_9;
    }

    tmp_ass_subscribed_1 = var_errors;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "errors" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_9;
    }

    if ( var_addr == NULL )
    {
        tmp_ass_subscript_1 = NULL;
    }
    else
    {
        tmp_ass_subscript_1 = PyCell_GET( var_addr );
    }

    if ( tmp_ass_subscript_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "addr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_9;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_9;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_5:;
    Py_XDECREF( var_e );
    var_e = NULL;

    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 331;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame) frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooocooooooooooooooooooocoo";
    goto try_except_handler_8;
    branch_end_4:;
    goto try_end_6;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_2;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_7;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_9_connect );
    return NULL;
    // End of try:
    try_end_7:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_len_arg_1 = var_errors;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "errors" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 356;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_5 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = var_to_try;

    if ( tmp_len_arg_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "to_try" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 356;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_5 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_right_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 356;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    Py_DECREF( tmp_compare_left_5 );
    Py_DECREF( tmp_compare_right_5 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_NoValidConnectionsError );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NoValidConnectionsError );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NoValidConnectionsError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_errors;

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "errors" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 357;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 357;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooocooooooooooooooooooocoo";
    goto frame_exception_exit_1;
    branch_no_6:;
    branch_no_1:;
    // Tried code:
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_Transport );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Transport );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Transport" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 359;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_10;
    }

    if ( par_sock == NULL )
    {
        tmp_tuple_element_2 = NULL;
    }
    else
    {
        tmp_tuple_element_2 = PyCell_GET( par_sock );
    }

    if ( tmp_tuple_element_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_10;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_dict_key_1 = const_str_plain_gss_kex;
    tmp_dict_value_1 = par_gss_kex;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gss_kex" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_10;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_gss_deleg_creds;
    tmp_dict_value_2 = par_gss_deleg_creds;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gss_deleg_creds" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_10;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 359;
    tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_10;
    }
    assert( tmp_assign_unpack_1__assign_source == NULL );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_12;

    tmp_assign_source_13 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_13 );
    assert( var_t == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_t = tmp_assign_source_13;

    tmp_assattr_name_1 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 359;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_10;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__transport, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_10;
    }
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

    Py_XDECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    tmp_source_name_7 = var_t;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 362;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_use_compression );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_3 = const_str_plain_compress;
    tmp_dict_value_3 = par_compress;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "compress" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 362;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 362;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = var_t;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 363;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_set_gss_host );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_gss_host;
    tmp_or_left_value_1 = par_gss_host;

    if ( tmp_or_left_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gss_host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 366;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 366;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
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
    tmp_or_right_value_1 = par_hostname;

    if ( tmp_or_right_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 366;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_dict_value_4 = tmp_or_left_value_1;
    or_end_1:;
    tmp_kw_name_3 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_trust_dns;
    tmp_dict_value_5 = par_gss_trust_dns;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gss_trust_dns" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 367;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_gssapi_requested;
    tmp_or_left_value_2 = par_gss_auth;

    if ( tmp_or_left_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gss_auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 368;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 368;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    tmp_or_right_value_2 = par_gss_kex;

    if ( tmp_or_right_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gss_kex" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 368;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_6 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_dict_value_6 = tmp_or_left_value_2;
    or_end_2:;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 363;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_8, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_9 = par_self;

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 370;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__log_channel );
    if ( tmp_compare_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_6 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    Py_DECREF( tmp_compare_left_6 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_10 = var_t;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 371;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_set_log_channel );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 371;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__log_channel );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 371;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 371;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    tmp_compare_left_7 = par_banner_timeout;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "banner_timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 372;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_7 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_7 != tmp_compare_right_7 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assattr_name_2 = par_banner_timeout;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "banner_timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = var_t;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_banner_timeout, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    tmp_compare_left_8 = par_auth_timeout;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "auth_timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 374;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_8 = Py_None;
    tmp_isnot_4 = ( tmp_compare_left_8 != tmp_compare_right_8 );
    if ( tmp_isnot_4 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assattr_name_3 = par_auth_timeout;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "auth_timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 375;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = var_t;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 375;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_auth_timeout, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    branch_no_9:;
    tmp_compare_left_9 = par_port;

    if ( tmp_compare_left_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 377;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_9 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_SSH_PORT );

    if (unlikely( tmp_compare_right_9 == NULL ))
    {
        tmp_compare_right_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSH_PORT );
    }

    if ( tmp_compare_right_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSH_PORT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 377;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assign_source_14 = par_hostname;

    if ( tmp_assign_source_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 378;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    assert( var_server_hostkey_name == NULL );
    Py_INCREF( tmp_assign_source_14 );
    var_server_hostkey_name = tmp_assign_source_14;

    goto branch_end_10;
    branch_no_10:;
    tmp_source_name_12 = const_str_digest_e501b328c9d368abc44f4f56c99cbee3;
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_format );
    assert( !(tmp_called_name_10 == NULL) );
    tmp_args_element_name_9 = par_hostname;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = par_port;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 380;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    assert( var_server_hostkey_name == NULL );
    var_server_hostkey_name = tmp_assign_source_15;

    branch_end_10:;
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 383;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__system_host_keys );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_get );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = var_server_hostkey_name;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "server_hostkey_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 383;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 383;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    assert( var_our_server_keys == NULL );
    var_our_server_keys = tmp_assign_source_16;

    tmp_compare_left_10 = var_our_server_keys;

    CHECK_OBJECT( tmp_compare_left_10 );
    tmp_compare_right_10 = Py_None;
    tmp_is_1 = ( tmp_compare_left_10 == tmp_compare_right_10 );
    if ( tmp_is_1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_16 = par_self;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__host_keys );
    if ( tmp_source_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_get );
    Py_DECREF( tmp_source_name_15 );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = var_server_hostkey_name;

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "server_hostkey_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 385;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 385;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 385;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_our_server_keys;
        var_our_server_keys = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    branch_no_11:;
    tmp_compare_left_11 = var_our_server_keys;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "our_server_keys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 386;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_11 = Py_None;
    tmp_isnot_5 = ( tmp_compare_left_11 != tmp_compare_right_11 );
    if ( tmp_isnot_5 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_called_instance_1 = var_our_server_keys;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "our_server_keys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 387;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 387;
    tmp_subscribed_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_keys );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    assert( var_keytype == NULL );
    var_keytype = tmp_assign_source_18;

    tmp_called_instance_2 = var_t;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 388;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 388;
    tmp_assign_source_19 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_security_options );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    assert( var_sec_opts == NULL );
    var_sec_opts = tmp_assign_source_19;

    // Tried code:
    tmp_source_name_17 = var_sec_opts;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_iter_arg_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_key_types );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_11;
    }
    tmp_assign_source_21 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto try_except_handler_11;
    }
    assert( tmp_listcomp_1__$0 == NULL );
    tmp_listcomp_1__$0 = tmp_assign_source_21;

    tmp_assign_source_22 = PyList_New( 0 );
    assert( tmp_listcomp_1__contraction == NULL );
    tmp_listcomp_1__contraction = tmp_assign_source_22;

    MAKE_OR_REUSE_FRAME( cache_frame_2d441420cf968ae4516b9c1b0f7e38ec_2, codeobj_2d441420cf968ae4516b9c1b0f7e38ec, module_paramiko$client, sizeof(void *)+sizeof(void *) );
    frame_2d441420cf968ae4516b9c1b0f7e38ec_2 = cache_frame_2d441420cf968ae4516b9c1b0f7e38ec_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d441420cf968ae4516b9c1b0f7e38ec_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d441420cf968ae4516b9c1b0f7e38ec_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_listcomp_1__$0;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_23 = ITERATOR_NEXT( tmp_value_name_2 );
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


        type_description_2 = "oo";
        exception_lineno = 389;
        goto try_except_handler_13;
    }
    {
        PyObject *old = tmp_listcomp_1__iter_value_0;
        tmp_listcomp_1__iter_value_0 = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    goto try_end_10;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_12 = exception_keeper_type_10;
    tmp_compare_right_12 = PyExc_StopIteration;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_10 );
        Py_XDECREF( exception_keeper_value_10 );
        Py_XDECREF( exception_keeper_tb_10 );

        exception_lineno = 389;
        type_description_2 = "oo";
        goto try_except_handler_12;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    Py_DECREF( exception_keeper_type_10 );
    Py_XDECREF( exception_keeper_value_10 );
    Py_XDECREF( exception_keeper_tb_10 );
    goto loop_end_2;
    goto branch_end_13;
    branch_no_13:;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_12;
    branch_end_13:;
    // End of try:
    try_end_10:;
    tmp_assign_source_24 = tmp_listcomp_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_24 );
    {
        PyObject *old = outline_0_var_x;
        outline_0_var_x = tmp_assign_source_24;
        Py_INCREF( outline_0_var_x );
        Py_XDECREF( old );
    }

    tmp_compare_left_13 = outline_0_var_x;

    CHECK_OBJECT( tmp_compare_left_13 );
    tmp_compare_right_13 = var_keytype;

    if ( tmp_compare_right_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "keytype" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 389;
        type_description_2 = "oo";
        goto try_except_handler_12;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_2 = "oo";
        goto try_except_handler_12;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_append_list_1 = tmp_listcomp_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_append_value_1 = outline_0_var_x;

    if ( tmp_append_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 389;
        type_description_2 = "oo";
        goto try_except_handler_12;
    }

    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_2 = "oo";
        goto try_except_handler_12;
    }
    branch_no_14:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_2 = "oo";
        goto try_except_handler_12;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_1 = tmp_listcomp_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_9_connect );
    return NULL;
    // Return handler code:
    try_return_handler_12:;
    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__$0 );
    Py_DECREF( tmp_listcomp_1__$0 );
    tmp_listcomp_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_1__contraction );
    Py_DECREF( tmp_listcomp_1__contraction );
    tmp_listcomp_1__contraction = NULL;

    Py_XDECREF( tmp_listcomp_1__iter_value_0 );
    tmp_listcomp_1__iter_value_0 = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d441420cf968ae4516b9c1b0f7e38ec_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d441420cf968ae4516b9c1b0f7e38ec_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_11;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d441420cf968ae4516b9c1b0f7e38ec_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d441420cf968ae4516b9c1b0f7e38ec_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d441420cf968ae4516b9c1b0f7e38ec_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d441420cf968ae4516b9c1b0f7e38ec_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d441420cf968ae4516b9c1b0f7e38ec_2,
        type_description_2,
        var_keytype,
        outline_0_var_x
    );


    // Release cached frame.
    if ( frame_2d441420cf968ae4516b9c1b0f7e38ec_2 == cache_frame_2d441420cf968ae4516b9c1b0f7e38ec_2 )
    {
        Py_DECREF( frame_2d441420cf968ae4516b9c1b0f7e38ec_2 );
    }
    cache_frame_2d441420cf968ae4516b9c1b0f7e38ec_2 = NULL;

    assertFrameObject( frame_2d441420cf968ae4516b9c1b0f7e38ec_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "ooooooooooocooooooooooooooooooocoo";
    goto try_except_handler_11;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_9_connect );
    return NULL;
    // Return handler code:
    try_return_handler_11:;
    Py_XDECREF( outline_0_var_x );
    outline_0_var_x = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var_x );
    outline_0_var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_9_connect );
    return NULL;
    outline_exception_1:;
    exception_lineno = 389;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_assign_source_20 = tmp_outline_return_value_1;
    assert( var_other_types == NULL );
    var_other_types = tmp_assign_source_20;

    tmp_list_element_1 = var_keytype;

    if ( tmp_list_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keytype" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 390;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = PyList_New( 1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_left_name_1, 0, tmp_list_element_1 );
    tmp_right_name_1 = var_other_types;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assattr_name_4 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = var_sec_opts;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "sec_opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 390;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_key_types, tmp_assattr_name_4 );
    Py_DECREF( tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    branch_no_12:;
    tmp_source_name_18 = var_t;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 392;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_start_client );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_7 = const_str_plain_timeout;
    tmp_dict_value_7 = par_timeout;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 392;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_4 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 392;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_13, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_20 = par_self;

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 397;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__transport );
    if ( tmp_source_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_gss_kex_used );
    Py_DECREF( tmp_source_name_19 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 397;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_15;
    }
    else
    {
        goto branch_yes_15;
    }
    branch_yes_15:;
    tmp_called_instance_3 = var_t;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 398;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 398;
    tmp_assign_source_25 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_get_remote_server_key );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    assert( var_server_key == NULL );
    var_server_key = tmp_assign_source_25;

    tmp_compare_left_14 = var_our_server_keys;

    if ( tmp_compare_left_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "our_server_keys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_14 = Py_None;
    tmp_is_2 = ( tmp_compare_left_14 == tmp_compare_right_14 );
    if ( tmp_is_2 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_source_name_22 = par_self;

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 401;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__policy );
    if ( tmp_source_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_missing_host_key );
    Py_DECREF( tmp_source_name_21 );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = par_self;

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 402;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = var_server_hostkey_name;

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "server_hostkey_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 402;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = var_server_key;

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "server_key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 402;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 401;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 401;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_16;
    branch_no_16:;
    tmp_source_name_23 = var_our_server_keys;

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "our_server_keys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 405;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_get );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_4 = var_server_key;

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "server_key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 405;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 405;
    tmp_args_element_name_16 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_get_name );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 405;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 405;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    assert( var_our_key == NULL );
    var_our_key = tmp_assign_source_26;

    tmp_compare_left_15 = var_our_key;

    CHECK_OBJECT( tmp_compare_left_15 );
    tmp_compare_right_15 = var_server_key;

    if ( tmp_compare_right_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "server_key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 406;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_15, tmp_compare_right_15 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 406;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_compare_left_16 = var_our_key;

    if ( tmp_compare_left_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "our_key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 407;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_16 = Py_None;
    tmp_is_3 = ( tmp_compare_left_16 == tmp_compare_right_16 );
    if ( tmp_is_3 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_called_instance_5 = var_our_server_keys;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "our_server_keys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 408;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 408;
    tmp_list_arg_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_values );
    if ( tmp_list_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 408;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = PySequence_List( tmp_list_arg_2 );
    Py_DECREF( tmp_list_arg_2 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 408;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_27 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 408;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_our_key;
        var_our_key = tmp_assign_source_27;
        Py_XDECREF( old );
    }

    branch_no_18:;
    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_BadHostKeyException );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BadHostKeyException );
    }

    if ( tmp_called_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BadHostKeyException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 409;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_17 = par_hostname;

    if ( tmp_args_element_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 409;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_18 = var_server_key;

    if ( tmp_args_element_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "server_key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 409;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_19 = var_our_key;

    if ( tmp_args_element_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "our_key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 409;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 409;
    {
        PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_19 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_16, call_args );
    }

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 409;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooocooooooooooooooooooocoo";
    goto frame_exception_exit_1;
    branch_no_17:;
    branch_end_16:;
    branch_no_15:;
    tmp_compare_left_17 = par_username;

    if ( tmp_compare_left_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 411;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_17 = Py_None;
    tmp_is_4 = ( tmp_compare_left_17 == tmp_compare_right_17 );
    if ( tmp_is_4 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_getpass );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getpass );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getpass" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 412;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 412;
    tmp_assign_source_28 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_getuser );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 412;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_username;
        par_username = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    branch_no_19:;
    tmp_compare_left_18 = par_key_filename;

    if ( tmp_compare_left_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 414;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_18 = Py_None;
    tmp_is_5 = ( tmp_compare_left_18 == tmp_compare_right_18 );
    if ( tmp_is_5 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_assign_source_29 = PyList_New( 0 );
    assert( var_key_filenames == NULL );
    var_key_filenames = tmp_assign_source_29;

    goto branch_end_20;
    branch_no_20:;
    tmp_isinstance_inst_1 = par_key_filename;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 416;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_string_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_string_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "string_types" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 416;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_list_element_2 = par_key_filename;

    if ( tmp_list_element_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 417;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_30 = PyList_New( 1 );
    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assign_source_30, 0, tmp_list_element_2 );
    assert( var_key_filenames == NULL );
    var_key_filenames = tmp_assign_source_30;

    goto branch_end_21;
    branch_no_21:;
    tmp_assign_source_31 = par_key_filename;

    if ( tmp_assign_source_31 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 419;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    assert( var_key_filenames == NULL );
    Py_INCREF( tmp_assign_source_31 );
    var_key_filenames = tmp_assign_source_31;

    branch_end_21:;
    branch_end_20:;
    tmp_source_name_24 = par_self;

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 421;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain__auth );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_20 = par_username;

    if ( tmp_args_element_name_20 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 422;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_21 = par_password;

    if ( tmp_args_element_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 422;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_22 = par_pkey;

    if ( tmp_args_element_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pkey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 422;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_23 = var_key_filenames;

    if ( tmp_args_element_name_23 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_filenames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 422;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_24 = par_allow_agent;

    if ( tmp_args_element_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_agent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 422;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_25 = par_look_for_keys;

    if ( tmp_args_element_name_25 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "look_for_keys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 423;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_26 = par_gss_auth;

    if ( tmp_args_element_name_26 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gss_auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 423;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_27 = par_gss_kex;

    if ( tmp_args_element_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gss_kex" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 423;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_28 = par_gss_deleg_creds;

    if ( tmp_args_element_name_28 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gss_deleg_creds" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 423;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_25 = var_t;

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 423;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_gss_host );
    if ( tmp_args_element_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );

        exception_lineno = 423;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_30 = par_passphrase;

    if ( tmp_args_element_name_30 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_args_element_name_29 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "passphrase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 424;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }

    frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame.f_lineno = 421;
    {
        PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23, tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS11( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_element_name_29 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        type_description_1 = "ooooooooooocooooooooooooooooooocoo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23e3a9c0d4955f37d61c47096ac52c56 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23e3a9c0d4955f37d61c47096ac52c56 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_23e3a9c0d4955f37d61c47096ac52c56, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_23e3a9c0d4955f37d61c47096ac52c56->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_23e3a9c0d4955f37d61c47096ac52c56, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_23e3a9c0d4955f37d61c47096ac52c56,
        type_description_1,
        par_self,
        par_hostname,
        par_port,
        par_username,
        par_password,
        par_pkey,
        par_key_filename,
        par_timeout,
        par_allow_agent,
        par_look_for_keys,
        par_compress,
        par_sock,
        par_gss_auth,
        par_gss_kex,
        par_gss_deleg_creds,
        par_gss_host,
        par_banner_timeout,
        par_auth_timeout,
        par_gss_trust_dns,
        par_passphrase,
        var_t,
        var_af,
        var_key_filenames,
        var_our_key,
        var_other_types,
        var_server_hostkey_name,
        var_to_try,
        var_e,
        var_sec_opts,
        var_our_server_keys,
        var_keytype,
        var_addr,
        var_errors,
        var_server_key
    );


    // Release cached frame.
    if ( frame_23e3a9c0d4955f37d61c47096ac52c56 == cache_frame_23e3a9c0d4955f37d61c47096ac52c56 )
    {
        Py_DECREF( frame_23e3a9c0d4955f37d61c47096ac52c56 );
    }
    cache_frame_23e3a9c0d4955f37d61c47096ac52c56 = NULL;

    assertFrameObject( frame_23e3a9c0d4955f37d61c47096ac52c56 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_2:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_9_connect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_af );
    var_af = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    Py_XDECREF( par_allow_agent );
    par_allow_agent = NULL;

    Py_XDECREF( var_key_filenames );
    var_key_filenames = NULL;

    Py_XDECREF( par_compress );
    par_compress = NULL;

    Py_XDECREF( var_our_key );
    var_our_key = NULL;

    Py_XDECREF( var_other_types );
    var_other_types = NULL;

    Py_XDECREF( par_gss_host );
    par_gss_host = NULL;

    Py_XDECREF( var_server_hostkey_name );
    var_server_hostkey_name = NULL;

    Py_XDECREF( var_to_try );
    var_to_try = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( par_gss_auth );
    par_gss_auth = NULL;

    Py_XDECREF( var_sec_opts );
    var_sec_opts = NULL;

    Py_XDECREF( par_gss_deleg_creds );
    par_gss_deleg_creds = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( var_our_server_keys );
    var_our_server_keys = NULL;

    Py_XDECREF( var_keytype );
    var_keytype = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    Py_XDECREF( par_gss_kex );
    par_gss_kex = NULL;

    Py_XDECREF( par_pkey );
    par_pkey = NULL;

    Py_XDECREF( par_port );
    par_port = NULL;

    Py_XDECREF( par_passphrase );
    par_passphrase = NULL;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_auth_timeout );
    par_auth_timeout = NULL;

    Py_XDECREF( par_key_filename );
    par_key_filename = NULL;

    CHECK_OBJECT( (PyObject *)var_addr );
    Py_DECREF( var_addr );
    var_addr = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_look_for_keys );
    par_look_for_keys = NULL;

    Py_XDECREF( var_errors );
    var_errors = NULL;

    Py_XDECREF( var_server_key );
    var_server_key = NULL;

    Py_XDECREF( par_gss_trust_dns );
    par_gss_trust_dns = NULL;

    Py_XDECREF( par_banner_timeout );
    par_banner_timeout = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_af );
    var_af = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    Py_XDECREF( par_allow_agent );
    par_allow_agent = NULL;

    Py_XDECREF( var_key_filenames );
    var_key_filenames = NULL;

    Py_XDECREF( par_compress );
    par_compress = NULL;

    Py_XDECREF( var_our_key );
    var_our_key = NULL;

    Py_XDECREF( var_other_types );
    var_other_types = NULL;

    Py_XDECREF( par_gss_host );
    par_gss_host = NULL;

    Py_XDECREF( var_server_hostkey_name );
    var_server_hostkey_name = NULL;

    Py_XDECREF( var_to_try );
    var_to_try = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( par_gss_auth );
    par_gss_auth = NULL;

    Py_XDECREF( var_sec_opts );
    var_sec_opts = NULL;

    Py_XDECREF( par_gss_deleg_creds );
    par_gss_deleg_creds = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( var_our_server_keys );
    var_our_server_keys = NULL;

    Py_XDECREF( var_keytype );
    var_keytype = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    Py_XDECREF( par_gss_kex );
    par_gss_kex = NULL;

    Py_XDECREF( par_pkey );
    par_pkey = NULL;

    Py_XDECREF( par_port );
    par_port = NULL;

    Py_XDECREF( par_passphrase );
    par_passphrase = NULL;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_auth_timeout );
    par_auth_timeout = NULL;

    Py_XDECREF( par_key_filename );
    par_key_filename = NULL;

    CHECK_OBJECT( (PyObject *)var_addr );
    Py_DECREF( var_addr );
    var_addr = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_look_for_keys );
    par_look_for_keys = NULL;

    Py_XDECREF( var_errors );
    var_errors = NULL;

    Py_XDECREF( var_server_key );
    var_server_key = NULL;

    Py_XDECREF( par_gss_trust_dns );
    par_gss_trust_dns = NULL;

    Py_XDECREF( par_banner_timeout );
    par_banner_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_9_connect );
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


static PyObject *impl_paramiko$client$$$function_9_connect$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_13c4e915c87d24f003067c3420559b30 = NULL;

    struct Nuitka_FrameObject *frame_13c4e915c87d24f003067c3420559b30;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_13c4e915c87d24f003067c3420559b30, codeobj_13c4e915c87d24f003067c3420559b30, module_paramiko$client, sizeof(void *)+sizeof(void *) );
    frame_13c4e915c87d24f003067c3420559b30 = cache_frame_13c4e915c87d24f003067c3420559b30;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_13c4e915c87d24f003067c3420559b30 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_13c4e915c87d24f003067c3420559b30 ) == 2 ); // Frame stack

    // Framed code:
    if ( self->m_closure[1] == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( self->m_closure[1] );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "sock" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 338;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connect );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }
    if ( self->m_closure[0] == NULL )
    {
        tmp_args_element_name_1 = NULL;
    }
    else
    {
        tmp_args_element_name_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "addr" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 338;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }

    frame_13c4e915c87d24f003067c3420559b30->m_frame.f_lineno = 338;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "cc";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13c4e915c87d24f003067c3420559b30 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_13c4e915c87d24f003067c3420559b30 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_13c4e915c87d24f003067c3420559b30 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_13c4e915c87d24f003067c3420559b30, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_13c4e915c87d24f003067c3420559b30->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_13c4e915c87d24f003067c3420559b30, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_13c4e915c87d24f003067c3420559b30,
        type_description_1,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_13c4e915c87d24f003067c3420559b30 == cache_frame_13c4e915c87d24f003067c3420559b30 )
    {
        Py_DECREF( frame_13c4e915c87d24f003067c3420559b30 );
    }
    cache_frame_13c4e915c87d24f003067c3420559b30 = NULL;

    assertFrameObject( frame_13c4e915c87d24f003067c3420559b30 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_9_connect$$$function_1_lambda );
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


static PyObject *impl_paramiko$client$$$function_10_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1ed0db91d7782cbd48c5643451fe2508 = NULL;

    struct Nuitka_FrameObject *frame_1ed0db91d7782cbd48c5643451fe2508;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1ed0db91d7782cbd48c5643451fe2508, codeobj_1ed0db91d7782cbd48c5643451fe2508, module_paramiko$client, sizeof(void *) );
    frame_1ed0db91d7782cbd48c5643451fe2508 = cache_frame_1ed0db91d7782cbd48c5643451fe2508;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1ed0db91d7782cbd48c5643451fe2508 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1ed0db91d7782cbd48c5643451fe2508 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__transport );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 437;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
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

        exception_lineno = 439;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__transport );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 439;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_1ed0db91d7782cbd48c5643451fe2508->m_frame.f_lineno = 439;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 439;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = par_self;

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 440;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__transport, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 440;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 442;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__agent );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_2 != tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_isnot_1 )
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

        exception_lineno = 443;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__agent );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 443;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_1ed0db91d7782cbd48c5643451fe2508->m_frame.f_lineno = 443;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_close );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 443;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
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

        exception_lineno = 444;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__agent, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 444;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ed0db91d7782cbd48c5643451fe2508 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ed0db91d7782cbd48c5643451fe2508 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1ed0db91d7782cbd48c5643451fe2508 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1ed0db91d7782cbd48c5643451fe2508, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1ed0db91d7782cbd48c5643451fe2508->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1ed0db91d7782cbd48c5643451fe2508, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1ed0db91d7782cbd48c5643451fe2508,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_1ed0db91d7782cbd48c5643451fe2508 == cache_frame_1ed0db91d7782cbd48c5643451fe2508 )
    {
        Py_DECREF( frame_1ed0db91d7782cbd48c5643451fe2508 );
    }
    cache_frame_1ed0db91d7782cbd48c5643451fe2508 = NULL;

    assertFrameObject( frame_1ed0db91d7782cbd48c5643451fe2508 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_10_close );
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
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_10_close );
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


static PyObject *impl_paramiko$client$$$function_11_exec_command( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_command = python_pars[ 1 ];
    PyObject *par_bufsize = python_pars[ 2 ];
    PyObject *par_timeout = python_pars[ 3 ];
    PyObject *par_get_pty = python_pars[ 4 ];
    PyObject *par_environment = python_pars[ 5 ];
    PyObject *var_stdin = NULL;
    PyObject *var_chan = NULL;
    PyObject *var_stderr = NULL;
    PyObject *var_stdout = NULL;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_76f05a9e712d25bba5b1587400b2926e = NULL;

    struct Nuitka_FrameObject *frame_76f05a9e712d25bba5b1587400b2926e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_76f05a9e712d25bba5b1587400b2926e, codeobj_76f05a9e712d25bba5b1587400b2926e, module_paramiko$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_76f05a9e712d25bba5b1587400b2926e = cache_frame_76f05a9e712d25bba5b1587400b2926e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_76f05a9e712d25bba5b1587400b2926e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_76f05a9e712d25bba5b1587400b2926e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__transport );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 480;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_open_session );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 480;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_timeout;
    tmp_dict_value_1 = par_timeout;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 480;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_76f05a9e712d25bba5b1587400b2926e->m_frame.f_lineno = 480;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 480;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_chan == NULL );
    var_chan = tmp_assign_source_1;

    tmp_cond_value_1 = par_get_pty;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "get_pty" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 481;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 481;
        type_description_1 = "oooooooooo";
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
    tmp_called_instance_1 = var_chan;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_76f05a9e712d25bba5b1587400b2926e->m_frame.f_lineno = 482;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_pty );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 482;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_3 = var_chan;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 483;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_settimeout );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 483;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_timeout;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 483;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_76f05a9e712d25bba5b1587400b2926e->m_frame.f_lineno = 483;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 483;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_2 = par_environment;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "environment" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 484;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 484;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = var_chan;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 485;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_update_environment );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 485;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_environment;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "environment" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 485;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_76f05a9e712d25bba5b1587400b2926e->m_frame.f_lineno = 485;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 485;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_source_name_5 = var_chan;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 486;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_exec_command );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 486;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_command;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "command" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 486;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_76f05a9e712d25bba5b1587400b2926e->m_frame.f_lineno = 486;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 486;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = var_chan;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 487;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_makefile );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 487;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_str_plain_wb;
    tmp_args_element_name_5 = par_bufsize;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bufsize" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 487;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_76f05a9e712d25bba5b1587400b2926e->m_frame.f_lineno = 487;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 487;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_stdin == NULL );
    var_stdin = tmp_assign_source_2;

    tmp_source_name_7 = var_chan;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 488;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_makefile );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 488;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = const_str_plain_r;
    tmp_args_element_name_7 = par_bufsize;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bufsize" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 488;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_76f05a9e712d25bba5b1587400b2926e->m_frame.f_lineno = 488;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 488;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_stdout == NULL );
    var_stdout = tmp_assign_source_3;

    tmp_source_name_8 = var_chan;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 489;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_makefile_stderr );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 489;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = const_str_plain_r;
    tmp_args_element_name_9 = par_bufsize;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bufsize" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 489;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_76f05a9e712d25bba5b1587400b2926e->m_frame.f_lineno = 489;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 489;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_stderr == NULL );
    var_stderr = tmp_assign_source_4;

    tmp_tuple_element_1 = var_stdin;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stdin" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 490;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_stdout;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stdout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 490;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_stderr;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76f05a9e712d25bba5b1587400b2926e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_76f05a9e712d25bba5b1587400b2926e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76f05a9e712d25bba5b1587400b2926e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_76f05a9e712d25bba5b1587400b2926e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_76f05a9e712d25bba5b1587400b2926e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_76f05a9e712d25bba5b1587400b2926e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_76f05a9e712d25bba5b1587400b2926e,
        type_description_1,
        par_self,
        par_command,
        par_bufsize,
        par_timeout,
        par_get_pty,
        par_environment,
        var_stdin,
        var_chan,
        var_stderr,
        var_stdout
    );


    // Release cached frame.
    if ( frame_76f05a9e712d25bba5b1587400b2926e == cache_frame_76f05a9e712d25bba5b1587400b2926e )
    {
        Py_DECREF( frame_76f05a9e712d25bba5b1587400b2926e );
    }
    cache_frame_76f05a9e712d25bba5b1587400b2926e = NULL;

    assertFrameObject( frame_76f05a9e712d25bba5b1587400b2926e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_11_exec_command );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_command );
    par_command = NULL;

    Py_XDECREF( var_stdin );
    var_stdin = NULL;

    Py_XDECREF( var_chan );
    var_chan = NULL;

    Py_XDECREF( var_stderr );
    var_stderr = NULL;

    Py_XDECREF( var_stdout );
    var_stdout = NULL;

    Py_XDECREF( par_get_pty );
    par_get_pty = NULL;

    Py_XDECREF( par_environment );
    par_environment = NULL;

    Py_XDECREF( par_bufsize );
    par_bufsize = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

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

    Py_XDECREF( par_command );
    par_command = NULL;

    Py_XDECREF( var_stdin );
    var_stdin = NULL;

    Py_XDECREF( var_chan );
    var_chan = NULL;

    Py_XDECREF( var_stderr );
    var_stderr = NULL;

    Py_XDECREF( var_stdout );
    var_stdout = NULL;

    Py_XDECREF( par_get_pty );
    par_get_pty = NULL;

    Py_XDECREF( par_environment );
    par_environment = NULL;

    Py_XDECREF( par_bufsize );
    par_bufsize = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_11_exec_command );
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


static PyObject *impl_paramiko$client$$$function_12_invoke_shell( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_term = python_pars[ 1 ];
    PyObject *par_width = python_pars[ 2 ];
    PyObject *par_height = python_pars[ 3 ];
    PyObject *par_width_pixels = python_pars[ 4 ];
    PyObject *par_height_pixels = python_pars[ 5 ];
    PyObject *par_environment = python_pars[ 6 ];
    PyObject *var_chan = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_02086d5cf9c1336a73da489d0290a544 = NULL;

    struct Nuitka_FrameObject *frame_02086d5cf9c1336a73da489d0290a544;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_02086d5cf9c1336a73da489d0290a544, codeobj_02086d5cf9c1336a73da489d0290a544, module_paramiko$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_02086d5cf9c1336a73da489d0290a544 = cache_frame_02086d5cf9c1336a73da489d0290a544;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_02086d5cf9c1336a73da489d0290a544 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_02086d5cf9c1336a73da489d0290a544 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__transport );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 510;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_02086d5cf9c1336a73da489d0290a544->m_frame.f_lineno = 510;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_open_session );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 510;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_chan == NULL );
    var_chan = tmp_assign_source_1;

    tmp_source_name_2 = var_chan;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_pty );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 511;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_term;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "term" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 511;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_width;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "width" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 511;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_height;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "height" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 511;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_width_pixels;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "width_pixels" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 511;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_height_pixels;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "height_pixels" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 511;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_02086d5cf9c1336a73da489d0290a544->m_frame.f_lineno = 511;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 511;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_2 = var_chan;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 512;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_02086d5cf9c1336a73da489d0290a544->m_frame.f_lineno = 512;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_invoke_shell );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 512;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_chan;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "chan" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 513;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_02086d5cf9c1336a73da489d0290a544 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_02086d5cf9c1336a73da489d0290a544 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_02086d5cf9c1336a73da489d0290a544 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_02086d5cf9c1336a73da489d0290a544, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_02086d5cf9c1336a73da489d0290a544->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_02086d5cf9c1336a73da489d0290a544, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_02086d5cf9c1336a73da489d0290a544,
        type_description_1,
        par_self,
        par_term,
        par_width,
        par_height,
        par_width_pixels,
        par_height_pixels,
        par_environment,
        var_chan
    );


    // Release cached frame.
    if ( frame_02086d5cf9c1336a73da489d0290a544 == cache_frame_02086d5cf9c1336a73da489d0290a544 )
    {
        Py_DECREF( frame_02086d5cf9c1336a73da489d0290a544 );
    }
    cache_frame_02086d5cf9c1336a73da489d0290a544 = NULL;

    assertFrameObject( frame_02086d5cf9c1336a73da489d0290a544 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_12_invoke_shell );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_width );
    par_width = NULL;

    Py_XDECREF( par_term );
    par_term = NULL;

    Py_XDECREF( par_height );
    par_height = NULL;

    Py_XDECREF( par_width_pixels );
    par_width_pixels = NULL;

    Py_XDECREF( par_environment );
    par_environment = NULL;

    Py_XDECREF( var_chan );
    var_chan = NULL;

    Py_XDECREF( par_height_pixels );
    par_height_pixels = NULL;

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

    Py_XDECREF( par_width );
    par_width = NULL;

    Py_XDECREF( par_term );
    par_term = NULL;

    Py_XDECREF( par_height );
    par_height = NULL;

    Py_XDECREF( par_width_pixels );
    par_width_pixels = NULL;

    Py_XDECREF( par_environment );
    par_environment = NULL;

    Py_XDECREF( var_chan );
    var_chan = NULL;

    Py_XDECREF( par_height_pixels );
    par_height_pixels = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_12_invoke_shell );
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


static PyObject *impl_paramiko$client$$$function_13_open_sftp( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_7d2c2c3277824e955683eb28ada96157 = NULL;

    struct Nuitka_FrameObject *frame_7d2c2c3277824e955683eb28ada96157;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7d2c2c3277824e955683eb28ada96157, codeobj_7d2c2c3277824e955683eb28ada96157, module_paramiko$client, sizeof(void *) );
    frame_7d2c2c3277824e955683eb28ada96157 = cache_frame_7d2c2c3277824e955683eb28ada96157;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7d2c2c3277824e955683eb28ada96157 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7d2c2c3277824e955683eb28ada96157 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__transport );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 521;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_7d2c2c3277824e955683eb28ada96157->m_frame.f_lineno = 521;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_open_sftp_client );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 521;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d2c2c3277824e955683eb28ada96157 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d2c2c3277824e955683eb28ada96157 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7d2c2c3277824e955683eb28ada96157 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7d2c2c3277824e955683eb28ada96157, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7d2c2c3277824e955683eb28ada96157->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7d2c2c3277824e955683eb28ada96157, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7d2c2c3277824e955683eb28ada96157,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7d2c2c3277824e955683eb28ada96157 == cache_frame_7d2c2c3277824e955683eb28ada96157 )
    {
        Py_DECREF( frame_7d2c2c3277824e955683eb28ada96157 );
    }
    cache_frame_7d2c2c3277824e955683eb28ada96157 = NULL;

    assertFrameObject( frame_7d2c2c3277824e955683eb28ada96157 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_13_open_sftp );
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
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_13_open_sftp );
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


static PyObject *impl_paramiko$client$$$function_14_get_transport( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_e3259617e7bc016e9be754911f51e918 = NULL;

    struct Nuitka_FrameObject *frame_e3259617e7bc016e9be754911f51e918;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e3259617e7bc016e9be754911f51e918, codeobj_e3259617e7bc016e9be754911f51e918, module_paramiko$client, sizeof(void *) );
    frame_e3259617e7bc016e9be754911f51e918 = cache_frame_e3259617e7bc016e9be754911f51e918;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e3259617e7bc016e9be754911f51e918 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e3259617e7bc016e9be754911f51e918 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__transport );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 531;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3259617e7bc016e9be754911f51e918 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3259617e7bc016e9be754911f51e918 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3259617e7bc016e9be754911f51e918 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e3259617e7bc016e9be754911f51e918, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e3259617e7bc016e9be754911f51e918->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e3259617e7bc016e9be754911f51e918, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e3259617e7bc016e9be754911f51e918,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_e3259617e7bc016e9be754911f51e918 == cache_frame_e3259617e7bc016e9be754911f51e918 )
    {
        Py_DECREF( frame_e3259617e7bc016e9be754911f51e918 );
    }
    cache_frame_e3259617e7bc016e9be754911f51e918 = NULL;

    assertFrameObject( frame_e3259617e7bc016e9be754911f51e918 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_14_get_transport );
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
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_14_get_transport );
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


static PyObject *impl_paramiko$client$$$function_15__key_from_filepath( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_filename = python_pars[ 1 ];
    PyObject *par_klass = python_pars[ 2 ];
    PyObject *par_password = python_pars[ 3 ];
    PyObject *var_key_path = NULL;
    PyObject *var_cert_path = NULL;
    PyObject *var_key = NULL;
    PyObject *var_cert_suffix = NULL;
    PyObject *var_msg = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_operand_name_1;
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
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f6d0de4d165cf21aed9b61ff168a1605 = NULL;

    struct Nuitka_FrameObject *frame_f6d0de4d165cf21aed9b61ff168a1605;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_6435bdc4c5f4bddc8f9ded954d144391;
    assert( var_cert_suffix == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_cert_suffix = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f6d0de4d165cf21aed9b61ff168a1605, codeobj_f6d0de4d165cf21aed9b61ff168a1605, module_paramiko$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f6d0de4d165cf21aed9b61ff168a1605 = cache_frame_f6d0de4d165cf21aed9b61ff168a1605;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f6d0de4d165cf21aed9b61ff168a1605 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f6d0de4d165cf21aed9b61ff168a1605 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_filename;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_endswith );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 544;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_cert_suffix;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_suffix" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 544;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_f6d0de4d165cf21aed9b61ff168a1605->m_frame.f_lineno = 544;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 544;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 544;
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
    tmp_subscribed_name_1 = par_filename;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 545;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_start_name_1 = Py_None;
    tmp_len_arg_1 = var_cert_suffix;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_suffix" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 545;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_operand_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_stop_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_stop_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_step_name_1 = Py_None;
    tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_stop_name_1 );
    assert( !(tmp_subscript_name_1 == NULL) );
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_key_path == NULL );
    var_key_path = tmp_assign_source_2;

    tmp_assign_source_3 = par_filename;

    if ( tmp_assign_source_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 546;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    assert( var_cert_path == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_cert_path = tmp_assign_source_3;

    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_4 = par_filename;

    if ( tmp_assign_source_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 548;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    assert( var_key_path == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_key_path = tmp_assign_source_4;

    tmp_left_name_1 = par_filename;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 549;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = var_cert_suffix;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_suffix" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 549;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 549;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_cert_path == NULL );
    var_cert_path = tmp_assign_source_5;

    branch_end_1:;
    tmp_source_name_2 = par_klass;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "klass" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 551;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_from_private_key_file );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 551;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_key_path;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 551;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_password;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 551;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_f6d0de4d165cf21aed9b61ff168a1605->m_frame.f_lineno = 551;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 551;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_key == NULL );
    var_key = tmp_assign_source_6;

    tmp_source_name_3 = const_str_digest_16c4380e9245d1d7abc644f871045316;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
    assert( !(tmp_called_name_3 == NULL) );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_hexlify );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hexlify );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hexlify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 556;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = var_key;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_f6d0de4d165cf21aed9b61ff168a1605->m_frame.f_lineno = 556;
    tmp_args_element_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_fingerprint );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 556;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_f6d0de4d165cf21aed9b61ff168a1605->m_frame.f_lineno = 556;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 556;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_key_path;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 556;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_f6d0de4d165cf21aed9b61ff168a1605->m_frame.f_lineno = 555;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_6 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 555;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_msg == NULL );
    var_msg = tmp_assign_source_7;

    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 558;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__log );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 558;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_DEBUG );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEBUG );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEBUG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 558;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_msg;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 558;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_f6d0de4d165cf21aed9b61ff168a1605->m_frame.f_lineno = 558;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 558;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 560;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_path );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 560;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 560;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = var_cert_path;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 560;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_f6d0de4d165cf21aed9b61ff168a1605->m_frame.f_lineno = 560;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 560;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 560;
        type_description_1 = "ooooooooo";
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
    tmp_source_name_7 = var_key;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 561;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_load_certificate );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 561;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = var_cert_path;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 561;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_f6d0de4d165cf21aed9b61ff168a1605->m_frame.f_lineno = 561;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 561;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 562;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__log );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_DEBUG );

    if (unlikely( tmp_args_element_name_11 == NULL ))
    {
        tmp_args_element_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEBUG );
    }

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEBUG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 562;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = const_str_digest_1d24e2d981917b973d652d2599cdc5df;
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_format );
    assert( !(tmp_called_name_9 == NULL) );
    tmp_args_element_name_13 = var_cert_path;

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cert_path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 562;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    frame_f6d0de4d165cf21aed9b61ff168a1605->m_frame.f_lineno = 562;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 562;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    frame_f6d0de4d165cf21aed9b61ff168a1605->m_frame.f_lineno = 562;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_return_value = var_key;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 563;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6d0de4d165cf21aed9b61ff168a1605 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6d0de4d165cf21aed9b61ff168a1605 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6d0de4d165cf21aed9b61ff168a1605 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f6d0de4d165cf21aed9b61ff168a1605, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f6d0de4d165cf21aed9b61ff168a1605->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f6d0de4d165cf21aed9b61ff168a1605, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f6d0de4d165cf21aed9b61ff168a1605,
        type_description_1,
        par_self,
        par_filename,
        par_klass,
        par_password,
        var_key_path,
        var_cert_path,
        var_key,
        var_cert_suffix,
        var_msg
    );


    // Release cached frame.
    if ( frame_f6d0de4d165cf21aed9b61ff168a1605 == cache_frame_f6d0de4d165cf21aed9b61ff168a1605 )
    {
        Py_DECREF( frame_f6d0de4d165cf21aed9b61ff168a1605 );
    }
    cache_frame_f6d0de4d165cf21aed9b61ff168a1605 = NULL;

    assertFrameObject( frame_f6d0de4d165cf21aed9b61ff168a1605 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_15__key_from_filepath );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_key_path );
    var_key_path = NULL;

    Py_XDECREF( var_cert_path );
    var_cert_path = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    Py_XDECREF( par_klass );
    par_klass = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_cert_suffix );
    var_cert_suffix = NULL;

    Py_XDECREF( par_filename );
    par_filename = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

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

    Py_XDECREF( var_key_path );
    var_key_path = NULL;

    Py_XDECREF( var_cert_path );
    var_cert_path = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    Py_XDECREF( par_klass );
    par_klass = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_cert_suffix );
    var_cert_suffix = NULL;

    Py_XDECREF( par_filename );
    par_filename = NULL;

    Py_XDECREF( var_msg );
    var_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_15__key_from_filepath );
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


static PyObject *impl_paramiko$client$$$function_16__auth( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_username = python_pars[ 1 ];
    PyObject *par_password = python_pars[ 2 ];
    PyObject *par_pkey = python_pars[ 3 ];
    PyObject *par_key_filenames = python_pars[ 4 ];
    PyObject *par_allow_agent = python_pars[ 5 ];
    PyObject *par_look_for_keys = python_pars[ 6 ];
    PyObject *par_gss_auth = python_pars[ 7 ];
    PyObject *par_gss_kex = python_pars[ 8 ];
    PyObject *par_gss_deleg_creds = python_pars[ 9 ];
    PyObject *par_gss_host = python_pars[ 10 ];
    PyObject *par_passphrase = python_pars[ 11 ];
    PyObject *var_name = NULL;
    PyObject *var_full_path = NULL;
    PyObject *var_key = NULL;
    PyObject *var_allowed_types = NULL;
    PyObject *var_two_factor_types = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_e = NULL;
    PyObject *var_keyfiles = NULL;
    PyObject *var_keytype = NULL;
    PyObject *var_id_ = NULL;
    PyObject *var_directory = NULL;
    PyObject *var_saved_exception = NULL;
    PyObject *var_pkey_class = NULL;
    PyObject *var_key_filename = NULL;
    PyObject *var_two_factor = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
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
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
    PyObject *exception_preserved_type_5;
    PyObject *exception_preserved_value_5;
    PyTracebackObject *exception_preserved_tb_5;
    PyObject *exception_preserved_type_6;
    PyObject *exception_preserved_value_6;
    PyTracebackObject *exception_preserved_tb_6;
    PyObject *exception_preserved_type_7;
    PyObject *exception_preserved_value_7;
    PyTracebackObject *exception_preserved_tb_7;
    PyObject *exception_preserved_type_8;
    PyObject *exception_preserved_value_8;
    PyTracebackObject *exception_preserved_tb_8;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    int tmp_and_left_truth_3;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_left_value_3;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_and_right_value_3;
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
    PyObject *tmp_args_element_name_36;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
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
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    int tmp_exc_match_exception_match_4;
    int tmp_exc_match_exception_match_5;
    int tmp_exc_match_exception_match_6;
    int tmp_exc_match_exception_match_7;
    int tmp_exc_match_exception_match_8;
    int tmp_exc_match_exception_match_9;
    int tmp_exc_match_exception_match_10;
    int tmp_exc_match_exception_match_11;
    int tmp_exc_match_exception_match_12;
    int tmp_exc_match_exception_match_13;
    int tmp_exc_match_exception_match_14;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    bool tmp_isnot_3;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iter_arg_8;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_set_arg_1;
    PyObject *tmp_set_arg_2;
    PyObject *tmp_set_arg_3;
    PyObject *tmp_set_arg_4;
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
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    PyObject *tmp_value_name_3;
    PyObject *tmp_value_name_4;
    PyObject *tmp_value_name_5;
    PyObject *tmp_value_name_6;
    static struct Nuitka_FrameObject *cache_frame_c67faa985019701e28ba89e5ae51d9a0 = NULL;

    struct Nuitka_FrameObject *frame_c67faa985019701e28ba89e5ae51d9a0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_None;
    assert( var_saved_exception == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_saved_exception = tmp_assign_source_1;

    tmp_assign_source_2 = Py_False;
    assert( var_two_factor == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_two_factor = tmp_assign_source_2;

    tmp_assign_source_3 = PySet_New( NULL );
    assert( var_allowed_types == NULL );
    var_allowed_types = tmp_assign_source_3;

    tmp_assign_source_4 = PySet_New( const_set_edda279c8085125db587e0c8224e6e7c );
    assert( var_two_factor_types == NULL );
    var_two_factor_types = tmp_assign_source_4;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c67faa985019701e28ba89e5ae51d9a0, codeobj_c67faa985019701e28ba89e5ae51d9a0, module_paramiko$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c67faa985019701e28ba89e5ae51d9a0 = cache_frame_c67faa985019701e28ba89e5ae51d9a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c67faa985019701e28ba89e5ae51d9a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c67faa985019701e28ba89e5ae51d9a0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_passphrase;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_compexpr_left_2 = par_password;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 587;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = Py_None;
    tmp_and_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 != tmp_compexpr_right_2 );
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    assert( !(tmp_cond_truth_1 == -1) );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_5 = par_password;

    if ( tmp_assign_source_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 588;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    {
        PyObject *old = par_passphrase;
        par_passphrase = tmp_assign_source_5;
        Py_INCREF( par_passphrase );
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_and_left_value_2 = par_gss_kex;

    if ( tmp_and_left_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gss_kex" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 592;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 592;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 592;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__transport );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 592;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_gss_kex_used );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 592;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    Py_INCREF( tmp_and_left_value_2 );
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 592;
        type_description_1 = "ooooooooooooooooooooooooooo";
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
    // Tried code:
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 594;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__transport );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 594;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_auth_gssapi_keyex );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 594;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_username;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 594;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 594;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 594;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
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

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_1 = PyExc_Exception;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 596;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_6 = EXC_VALUE(PyThreadState_GET());
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_e = tmp_assign_source_6;

    tmp_assign_source_7 = var_e;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_saved_exception;
        var_saved_exception = tmp_assign_source_7;
        Py_INCREF( var_saved_exception );
        Py_XDECREF( old );
    }

    Py_XDECREF( var_e );
    var_e = NULL;

    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 593;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c67faa985019701e28ba89e5ae51d9a0->m_frame) frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_3;
    branch_end_3:;
    goto try_end_1;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
    // End of try:
    try_end_2:;
    branch_no_2:;
    tmp_cond_value_3 = par_gss_auth;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gss_auth" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 603;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 603;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    // Tried code:
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 605;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__transport );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 605;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_auth_gssapi_with_mic );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 605;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_2 = par_username;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 606;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_3 = par_gss_host;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gss_host" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 606;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_4 = par_gss_deleg_creds;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gss_deleg_creds" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 606;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 605;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 605;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_2 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_2 = PyExc_Exception;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 608;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_8 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_8;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = var_e;

    CHECK_OBJECT( tmp_assign_source_9 );
    {
        PyObject *old = var_saved_exception;
        var_saved_exception = tmp_assign_source_9;
        Py_INCREF( var_saved_exception );
        Py_XDECREF( old );
    }

    Py_XDECREF( var_e );
    var_e = NULL;

    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 604;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c67faa985019701e28ba89e5ae51d9a0->m_frame) frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_5;
    branch_end_5:;
    goto try_end_3;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
    // End of try:
    try_end_4:;
    branch_no_4:;
    tmp_compare_left_3 = par_pkey;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pkey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 611;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    // Tried code:
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 613;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__log );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 613;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_DEBUG );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEBUG );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEBUG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 614;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }

    tmp_source_name_8 = const_str_digest_2536f143295547e7a9e6df3c3834534f;
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_format );
    assert( !(tmp_called_name_4 == NULL) );
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_hexlify );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hexlify );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hexlify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 615;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }

    tmp_called_instance_1 = par_pkey;

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pkey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 615;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 615;
    tmp_args_element_name_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_fingerprint );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 615;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 615;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 615;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 615;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 615;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 613;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 613;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 618;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__transport );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 618;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_auth_publickey );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 618;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    tmp_args_element_name_9 = par_username;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 618;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }

    tmp_args_element_name_10 = par_pkey;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pkey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 618;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 618;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_set_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_set_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 618;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    tmp_assign_source_10 = PySet_New( tmp_set_arg_1 );
    Py_DECREF( tmp_set_arg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 617;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    {
        PyObject *old = var_allowed_types;
        var_allowed_types = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_allowed_types;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = var_two_factor_types;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "two_factor_types" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 619;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }

    tmp_assign_source_11 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 619;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    {
        PyObject *old = var_two_factor;
        var_two_factor = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_cond_value_4 = var_two_factor;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 620;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_6;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_7:;
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

    // Preserve existing published exception.
    exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_3 );
    exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_3 );
    exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_3 );

    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PyException_SetTraceback( exception_keeper_value_5, (PyObject *)exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    // Tried code:
    tmp_compare_left_4 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_4 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_SSHException );

    if (unlikely( tmp_compare_right_4 == NULL ))
    {
        tmp_compare_right_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSHException );
    }

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSHException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 622;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 622;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_12 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_12;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = var_e;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = var_saved_exception;
        var_saved_exception = tmp_assign_source_13;
        Py_INCREF( var_saved_exception );
        Py_XDECREF( old );
    }

    Py_XDECREF( var_e );
    var_e = NULL;

    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 612;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c67faa985019701e28ba89e5ae51d9a0->m_frame) frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_7;
    branch_end_8:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
    // End of try:
    try_end_5:;
    branch_no_6:;
    tmp_cond_value_5 = var_two_factor;

    if ( tmp_cond_value_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "two_factor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 625;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 625;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_no_9;
    }
    else
    {
        goto branch_yes_9;
    }
    branch_yes_9:;
    tmp_iter_arg_1 = par_key_filenames;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_filenames" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 626;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_14;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_15 = ITERATOR_NEXT( tmp_value_name_1 );
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


        type_description_1 = "ooooooooooooooooooooooooooo";
        exception_lineno = 626;
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_15;
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

    tmp_compare_left_5 = exception_keeper_type_7;
    tmp_compare_right_5 = PyExc_StopIteration;
    tmp_exc_match_exception_match_4 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_7 );
        Py_XDECREF( exception_keeper_value_7 );
        Py_XDECREF( exception_keeper_tb_7 );

        exception_lineno = 626;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    if ( tmp_exc_match_exception_match_4 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    Py_DECREF( exception_keeper_type_7 );
    Py_XDECREF( exception_keeper_value_7 );
    Py_XDECREF( exception_keeper_tb_7 );
    goto loop_end_1;
    goto branch_end_10;
    branch_no_10:;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    branch_end_10:;
    // End of try:
    try_end_7:;
    tmp_assign_source_16 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_16 );
    {
        PyObject *old = var_key_filename;
        var_key_filename = tmp_assign_source_16;
        Py_INCREF( var_key_filename );
        Py_XDECREF( old );
    }

    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_RSAKey );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RSAKey );
    }

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RSAKey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 627;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    tmp_iter_arg_2 = PyTuple_New( 4 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_DSSKey );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DSSKey );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DSSKey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 627;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_ECDSAKey );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ECDSAKey );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ECDSAKey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 627;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_2, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_Ed25519Key );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Ed25519Key );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Ed25519Key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 627;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_iter_arg_2, 3, tmp_tuple_element_1 );
    tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 627;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_18 = ITERATOR_NEXT( tmp_value_name_2 );
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


        type_description_1 = "ooooooooooooooooooooooooooo";
        exception_lineno = 627;
        goto try_except_handler_11;
    }
    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_6 = exception_keeper_type_8;
    tmp_compare_right_6 = PyExc_StopIteration;
    tmp_exc_match_exception_match_5 = EXCEPTION_MATCH_BOOL( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_exc_match_exception_match_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_8 );
        Py_XDECREF( exception_keeper_value_8 );
        Py_XDECREF( exception_keeper_tb_8 );

        exception_lineno = 627;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    if ( tmp_exc_match_exception_match_5 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    Py_DECREF( exception_keeper_type_8 );
    Py_XDECREF( exception_keeper_value_8 );
    Py_XDECREF( exception_keeper_tb_8 );
    goto loop_end_2;
    goto branch_end_11;
    branch_no_11:;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_10;
    branch_end_11:;
    // End of try:
    try_end_8:;
    tmp_assign_source_19 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_19 );
    {
        PyObject *old = var_pkey_class;
        var_pkey_class = tmp_assign_source_19;
        Py_INCREF( var_pkey_class );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 629;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__key_from_filepath );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 629;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }
    tmp_args_element_name_11 = var_key_filename;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key_filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 630;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }

    tmp_args_element_name_12 = var_pkey_class;

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pkey_class" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 630;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }

    tmp_args_element_name_13 = par_passphrase;

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "passphrase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 630;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 629;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 629;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_source_name_13 = par_self;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 633;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }

    tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__transport );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 633;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_auth_publickey );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 633;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }
    tmp_args_element_name_14 = par_username;

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 633;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }

    tmp_args_element_name_15 = var_key;

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 633;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 633;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_set_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_set_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 633;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }
    tmp_assign_source_21 = PySet_New( tmp_set_arg_2 );
    Py_DECREF( tmp_set_arg_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 632;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }
    {
        PyObject *old = var_allowed_types;
        var_allowed_types = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_left_name_2 = var_allowed_types;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_right_name_2 = var_two_factor_types;

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "two_factor_types" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 634;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }

    tmp_assign_source_22 = BINARY_OPERATION( PyNumber_And, tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 634;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }
    {
        PyObject *old = var_two_factor;
        var_two_factor = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    tmp_cond_value_6 = var_two_factor;

    CHECK_OBJECT( tmp_cond_value_6 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 635;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_12;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_no_12;
    }
    else
    {
        goto branch_yes_12;
    }
    branch_yes_12:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_10;
    branch_no_12:;
    goto loop_end_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_4 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_4 );
    exception_preserved_value_4 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_4 );
    exception_preserved_tb_4 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_4 );

    if ( exception_keeper_tb_9 == NULL )
    {
        exception_keeper_tb_9 = MAKE_TRACEBACK( frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_9 );
    }
    else if ( exception_keeper_lineno_9 != 0 )
    {
        exception_keeper_tb_9 = ADD_TRACEBACK( exception_keeper_tb_9, frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_9 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
    PyException_SetTraceback( exception_keeper_value_9, (PyObject *)exception_keeper_tb_9 );
    PUBLISH_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
    // Tried code:
    tmp_compare_left_7 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_7 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_SSHException );

    if (unlikely( tmp_compare_right_7 == NULL ))
    {
        tmp_compare_right_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSHException );
    }

    if ( tmp_compare_right_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSHException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 638;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }

    tmp_exc_match_exception_match_6 = EXCEPTION_MATCH_BOOL( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_exc_match_exception_match_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 638;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    if ( tmp_exc_match_exception_match_6 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_assign_source_23 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_23;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    tmp_assign_source_24 = var_e;

    CHECK_OBJECT( tmp_assign_source_24 );
    {
        PyObject *old = var_saved_exception;
        var_saved_exception = tmp_assign_source_24;
        Py_INCREF( var_saved_exception );
        Py_XDECREF( old );
    }

    Py_XDECREF( var_e );
    var_e = NULL;

    goto branch_end_13;
    branch_no_13:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 628;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c67faa985019701e28ba89e5ae51d9a0->m_frame) frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_13;
    branch_end_13:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4 );
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_10;
    // End of try:
    try_end_9:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4 );
    goto try_end_10;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
    // End of try:
    try_end_10:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 627;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_11;
    // Return handler code:
    try_return_handler_10:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__iter_value );
    Py_DECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    goto try_return_handler_8;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_8;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_12;
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    branch_no_9:;
    tmp_operand_name_1 = var_two_factor;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "two_factor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 641;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_3 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 641;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 641;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_3 == 1 )
    {
        goto and_right_3;
    }
    else
    {
        goto and_left_3;
    }
    and_right_3:;
    tmp_and_right_value_3 = par_allow_agent;

    if ( tmp_and_right_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_agent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 641;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_7 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_cond_value_7 = tmp_and_left_value_3;
    and_end_3:;
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 641;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 642;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__agent );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 642;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_8 = Py_None;
    tmp_is_1 = ( tmp_compare_left_8 == tmp_compare_right_8 );
    Py_DECREF( tmp_compare_left_8 );
    if ( tmp_is_1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_Agent );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Agent );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Agent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 643;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 643;
    tmp_assattr_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 643;
        type_description_1 = "ooooooooooooooooooooooooooo";
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

        exception_lineno = 643;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__agent, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 643;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_15:;
    tmp_source_name_15 = par_self;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 645;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__agent );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 645;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 645;
    tmp_iter_arg_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_keys );
    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 645;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 645;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_25;

    // Tried code:
    loop_start_3:;
    // Tried code:
    tmp_value_name_3 = tmp_for_loop_3__for_iterator;

    CHECK_OBJECT( tmp_value_name_3 );
    tmp_assign_source_26 = ITERATOR_NEXT( tmp_value_name_3 );
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


        type_description_1 = "ooooooooooooooooooooooooooo";
        exception_lineno = 645;
        goto try_except_handler_15;
    }
    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    goto try_end_13;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_9 = exception_keeper_type_13;
    tmp_compare_right_9 = PyExc_StopIteration;
    tmp_exc_match_exception_match_7 = EXCEPTION_MATCH_BOOL( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_13 );
        Py_XDECREF( exception_keeper_value_13 );
        Py_XDECREF( exception_keeper_tb_13 );

        exception_lineno = 645;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_14;
    }
    if ( tmp_exc_match_exception_match_7 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    Py_DECREF( exception_keeper_type_13 );
    Py_XDECREF( exception_keeper_value_13 );
    Py_XDECREF( exception_keeper_tb_13 );
    goto loop_end_3;
    goto branch_end_16;
    branch_no_16:;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    branch_end_16:;
    // End of try:
    try_end_13:;
    tmp_assign_source_27 = tmp_for_loop_3__iter_value;

    CHECK_OBJECT( tmp_assign_source_27 );
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_27;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_hexlify );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hexlify );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hexlify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 647;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }

    tmp_called_instance_3 = var_key;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 647;
    tmp_args_element_name_16 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_get_fingerprint );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 647;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 647;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 647;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    {
        PyObject *old = var_id_;
        var_id_ = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    tmp_source_name_16 = par_self;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 648;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain__log );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 648;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    tmp_args_element_name_17 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_DEBUG );

    if (unlikely( tmp_args_element_name_17 == NULL ))
    {
        tmp_args_element_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEBUG );
    }

    if ( tmp_args_element_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEBUG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 648;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }

    tmp_source_name_17 = const_str_digest_70c61c7536bef0fe851732517dfa5466;
    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_format );
    assert( !(tmp_called_name_12 == NULL) );
    tmp_args_element_name_19 = var_id_;

    if ( tmp_args_element_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "id_" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 648;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 648;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_args_element_name_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 648;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 648;
    {
        PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 648;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_19 = par_self;

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 652;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }

    tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__transport );
    if ( tmp_source_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 652;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_auth_publickey );
    Py_DECREF( tmp_source_name_18 );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 652;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    tmp_args_element_name_20 = par_username;

    if ( tmp_args_element_name_20 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 652;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }

    tmp_args_element_name_21 = var_key;

    if ( tmp_args_element_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 652;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 652;
    {
        PyObject *call_args[] = { tmp_args_element_name_20, tmp_args_element_name_21 };
        tmp_set_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_set_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 652;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    tmp_assign_source_29 = PySet_New( tmp_set_arg_3 );
    Py_DECREF( tmp_set_arg_3 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 651;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    {
        PyObject *old = var_allowed_types;
        var_allowed_types = tmp_assign_source_29;
        Py_XDECREF( old );
    }

    tmp_left_name_3 = var_allowed_types;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_3 = var_two_factor_types;

    if ( tmp_right_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "two_factor_types" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 653;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }

    tmp_assign_source_30 = BINARY_OPERATION( PyNumber_And, tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 653;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    {
        PyObject *old = var_two_factor;
        var_two_factor = tmp_assign_source_30;
        Py_XDECREF( old );
    }

    tmp_cond_value_8 = var_two_factor;

    CHECK_OBJECT( tmp_cond_value_8 );
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 654;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_16;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_no_17;
    }
    else
    {
        goto branch_yes_17;
    }
    branch_yes_17:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_14;
    branch_no_17:;
    goto loop_end_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
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

    // Preserve existing published exception.
    exception_preserved_type_5 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_5 );
    exception_preserved_value_5 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_5 );
    exception_preserved_tb_5 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_5 );

    if ( exception_keeper_tb_14 == NULL )
    {
        exception_keeper_tb_14 = MAKE_TRACEBACK( frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_14 );
    }
    else if ( exception_keeper_lineno_14 != 0 )
    {
        exception_keeper_tb_14 = ADD_TRACEBACK( exception_keeper_tb_14, frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_14 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14 );
    PyException_SetTraceback( exception_keeper_value_14, (PyObject *)exception_keeper_tb_14 );
    PUBLISH_EXCEPTION( &exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14 );
    // Tried code:
    tmp_compare_left_10 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_10 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_SSHException );

    if (unlikely( tmp_compare_right_10 == NULL ))
    {
        tmp_compare_right_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSHException );
    }

    if ( tmp_compare_right_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSHException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 657;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_17;
    }

    tmp_exc_match_exception_match_8 = EXCEPTION_MATCH_BOOL( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_exc_match_exception_match_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 657;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_17;
    }
    if ( tmp_exc_match_exception_match_8 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_assign_source_31 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_31;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    tmp_assign_source_32 = var_e;

    CHECK_OBJECT( tmp_assign_source_32 );
    {
        PyObject *old = var_saved_exception;
        var_saved_exception = tmp_assign_source_32;
        Py_INCREF( var_saved_exception );
        Py_XDECREF( old );
    }

    Py_XDECREF( var_e );
    var_e = NULL;

    goto branch_end_18;
    branch_no_18:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 646;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c67faa985019701e28ba89e5ae51d9a0->m_frame) frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_17;
    branch_end_18:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5 );
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_14;
    // End of try:
    try_end_14:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5 );
    goto try_end_15;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
    // End of try:
    try_end_15:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 645;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_16;
    // Return handler code:
    try_return_handler_14:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__iter_value );
    Py_DECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    branch_no_14:;
    tmp_cond_value_9 = var_two_factor;

    if ( tmp_cond_value_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "two_factor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 660;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 660;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_no_19;
    }
    else
    {
        goto branch_yes_19;
    }
    branch_yes_19:;
    tmp_assign_source_33 = PyList_New( 0 );
    assert( var_keyfiles == NULL );
    var_keyfiles = tmp_assign_source_33;

    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_RSAKey );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RSAKey );
    }

    if ( tmp_tuple_element_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RSAKey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 664;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = const_str_plain_rsa;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
    tmp_iter_arg_4 = PyTuple_New( 4 );
    PyTuple_SET_ITEM( tmp_iter_arg_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_DSSKey );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DSSKey );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_iter_arg_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DSSKey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 665;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_str_plain_dsa;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_iter_arg_4, 1, tmp_tuple_element_2 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_ECDSAKey );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ECDSAKey );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_iter_arg_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ECDSAKey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 666;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = const_str_plain_ecdsa;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_iter_arg_4, 2, tmp_tuple_element_2 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_Ed25519Key );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Ed25519Key );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_iter_arg_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Ed25519Key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 667;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = const_str_plain_ed25519;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_iter_arg_4, 3, tmp_tuple_element_2 );
    tmp_assign_source_34 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 663;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_4__for_iterator == NULL );
    tmp_for_loop_4__for_iterator = tmp_assign_source_34;

    // Tried code:
    loop_start_4:;
    // Tried code:
    tmp_value_name_4 = tmp_for_loop_4__for_iterator;

    CHECK_OBJECT( tmp_value_name_4 );
    tmp_assign_source_35 = ITERATOR_NEXT( tmp_value_name_4 );
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


        type_description_1 = "ooooooooooooooooooooooooooo";
        exception_lineno = 663;
        goto try_except_handler_19;
    }
    {
        PyObject *old = tmp_for_loop_4__iter_value;
        tmp_for_loop_4__iter_value = tmp_assign_source_35;
        Py_XDECREF( old );
    }

    goto try_end_17;
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

    tmp_compare_left_11 = exception_keeper_type_17;
    tmp_compare_right_11 = PyExc_StopIteration;
    tmp_exc_match_exception_match_9 = EXCEPTION_MATCH_BOOL( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_exc_match_exception_match_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_17 );
        Py_XDECREF( exception_keeper_value_17 );
        Py_XDECREF( exception_keeper_tb_17 );

        exception_lineno = 663;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_18;
    }
    if ( tmp_exc_match_exception_match_9 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    Py_DECREF( exception_keeper_type_17 );
    Py_XDECREF( exception_keeper_value_17 );
    Py_XDECREF( exception_keeper_tb_17 );
    goto loop_end_4;
    goto branch_end_20;
    branch_no_20:;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_18;
    branch_end_20:;
    // End of try:
    try_end_17:;
    // Tried code:
    tmp_iter_arg_5 = tmp_for_loop_4__iter_value;

    CHECK_OBJECT( tmp_iter_arg_5 );
    tmp_assign_source_36 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 663;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_20;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_36;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_37 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_37 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooo";
        exception_lineno = 663;
        goto try_except_handler_21;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_37;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_38 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_38 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooo";
        exception_lineno = 663;
        goto try_except_handler_21;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_38;
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

                type_description_1 = "ooooooooooooooooooooooooooo";
                exception_lineno = 663;
                goto try_except_handler_21;
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

        type_description_1 = "ooooooooooooooooooooooooooo";
        exception_lineno = 663;
        goto try_except_handler_21;
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_20;
    // End of try:
    try_end_18:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_18;
    // End of try:
    try_end_19:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_39 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_39 );
    {
        PyObject *old = var_keytype;
        var_keytype = tmp_assign_source_39;
        Py_INCREF( var_keytype );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_40 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_40 );
    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_40;
        Py_INCREF( var_name );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_iter_arg_6 = const_tuple_str_digest_efc56ef3e14ad47214c11703a85ae20b_str_plain_ssh_tuple;
    tmp_assign_source_41 = MAKE_ITERATOR( tmp_iter_arg_6 );
    assert( !(tmp_assign_source_41 == NULL) );
    {
        PyObject *old = tmp_for_loop_5__for_iterator;
        tmp_for_loop_5__for_iterator = tmp_assign_source_41;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_5:;
    // Tried code:
    tmp_value_name_5 = tmp_for_loop_5__for_iterator;

    CHECK_OBJECT( tmp_value_name_5 );
    tmp_assign_source_42 = ITERATOR_NEXT( tmp_value_name_5 );
    if ( tmp_assign_source_42 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooo";
        exception_lineno = 670;
        goto try_except_handler_23;
    }
    {
        PyObject *old = tmp_for_loop_5__iter_value;
        tmp_for_loop_5__iter_value = tmp_assign_source_42;
        Py_XDECREF( old );
    }

    goto try_end_20;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_12 = exception_keeper_type_20;
    tmp_compare_right_12 = PyExc_StopIteration;
    tmp_exc_match_exception_match_10 = EXCEPTION_MATCH_BOOL( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_exc_match_exception_match_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_20 );
        Py_XDECREF( exception_keeper_value_20 );
        Py_XDECREF( exception_keeper_tb_20 );

        exception_lineno = 670;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    if ( tmp_exc_match_exception_match_10 == 1 )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    Py_DECREF( exception_keeper_type_20 );
    Py_XDECREF( exception_keeper_value_20 );
    Py_XDECREF( exception_keeper_tb_20 );
    goto loop_end_5;
    goto branch_end_21;
    branch_no_21:;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_22;
    branch_end_21:;
    // End of try:
    try_end_20:;
    tmp_assign_source_43 = tmp_for_loop_5__iter_value;

    CHECK_OBJECT( tmp_assign_source_43 );
    {
        PyObject *old = var_directory;
        var_directory = tmp_assign_source_43;
        Py_INCREF( var_directory );
        Py_XDECREF( old );
    }

    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 671;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }

    tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_path );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 671;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_expanduser );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 671;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    tmp_source_name_22 = const_str_digest_69afeeb331e91df6a742620728662cc4;
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_format );
    assert( !(tmp_called_name_15 == NULL) );
    tmp_args_element_name_23 = var_directory;

    if ( tmp_args_element_name_23 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "directory" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 672;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }

    tmp_args_element_name_24 = var_name;

    if ( tmp_args_element_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 672;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 672;
    {
        PyObject *call_args[] = { tmp_args_element_name_23, tmp_args_element_name_24 };
        tmp_args_element_name_22 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 672;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 671;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 671;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    {
        PyObject *old = var_full_path;
        var_full_path = tmp_assign_source_44;
        Py_XDECREF( old );
    }

    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 674;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }

    tmp_source_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_path );
    if ( tmp_source_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_23 );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    tmp_args_element_name_25 = var_full_path;

    if ( tmp_args_element_name_25 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "full_path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 674;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 674;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_cond_value_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    if ( tmp_cond_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        exception_lineno = 674;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    Py_DECREF( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    tmp_source_name_25 = var_keyfiles;

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keyfiles" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 676;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_append );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 676;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    tmp_tuple_element_7 = var_keytype;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keytype" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 676;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }

    tmp_args_element_name_26 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_element_name_26, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_full_path;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        Py_DECREF( tmp_args_element_name_26 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "full_path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 676;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_element_name_26, 1, tmp_tuple_element_7 );
    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 676;
    {
        PyObject *call_args[] = { tmp_args_element_name_26 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_element_name_26 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 676;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 677;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }

    tmp_source_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_path );
    if ( tmp_source_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 677;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_isfile );
    Py_DECREF( tmp_source_name_26 );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 677;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    tmp_left_name_4 = var_full_path;

    if ( tmp_left_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "full_path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 677;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }

    tmp_right_name_4 = const_str_digest_6435bdc4c5f4bddc8f9ded954d144391;
    tmp_args_element_name_27 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_args_element_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_18 );

        exception_lineno = 677;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 677;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_cond_value_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_args_element_name_27 );
    if ( tmp_cond_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 677;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_11 );

        exception_lineno = 677;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    Py_DECREF( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == 1 )
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    tmp_source_name_28 = var_keyfiles;

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keyfiles" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 678;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_append );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 678;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    tmp_tuple_element_8 = var_keytype;

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keytype" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 678;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }

    tmp_args_element_name_28 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_element_name_28, 0, tmp_tuple_element_8 );
    tmp_left_name_5 = var_full_path;

    if ( tmp_left_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_28 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "full_path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 678;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }

    tmp_right_name_5 = const_str_digest_6435bdc4c5f4bddc8f9ded954d144391;
    tmp_tuple_element_8 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_element_name_28 );

        exception_lineno = 678;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_28, 1, tmp_tuple_element_8 );
    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 678;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 678;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    Py_DECREF( tmp_unused );
    branch_no_23:;
    branch_no_22:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 670;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_18;
    // End of try:
    try_end_21:;
    Py_XDECREF( tmp_for_loop_5__iter_value );
    tmp_for_loop_5__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_5__for_iterator );
    Py_DECREF( tmp_for_loop_5__for_iterator );
    tmp_for_loop_5__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 663;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_18;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    Py_XDECREF( tmp_for_loop_4__iter_value );
    tmp_for_loop_4__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_4__for_iterator );
    Py_DECREF( tmp_for_loop_4__for_iterator );
    tmp_for_loop_4__for_iterator = NULL;

    tmp_cond_value_12 = par_look_for_keys;

    if ( tmp_cond_value_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "look_for_keys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 680;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto branch_no_24;
    }
    else
    {
        goto branch_yes_24;
    }
    branch_yes_24:;
    tmp_assign_source_45 = PyList_New( 0 );
    {
        PyObject *old = var_keyfiles;
        var_keyfiles = tmp_assign_source_45;
        Py_XDECREF( old );
    }

    branch_no_24:;
    tmp_iter_arg_7 = var_keyfiles;

    if ( tmp_iter_arg_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "keyfiles" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 683;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_46 = MAKE_ITERATOR( tmp_iter_arg_7 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 683;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_6__for_iterator == NULL );
    tmp_for_loop_6__for_iterator = tmp_assign_source_46;

    // Tried code:
    loop_start_6:;
    // Tried code:
    tmp_value_name_6 = tmp_for_loop_6__for_iterator;

    CHECK_OBJECT( tmp_value_name_6 );
    tmp_assign_source_47 = ITERATOR_NEXT( tmp_value_name_6 );
    if ( tmp_assign_source_47 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooo";
        exception_lineno = 683;
        goto try_except_handler_25;
    }
    {
        PyObject *old = tmp_for_loop_6__iter_value;
        tmp_for_loop_6__iter_value = tmp_assign_source_47;
        Py_XDECREF( old );
    }

    goto try_end_23;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_13 = exception_keeper_type_23;
    tmp_compare_right_13 = PyExc_StopIteration;
    tmp_exc_match_exception_match_11 = EXCEPTION_MATCH_BOOL( tmp_compare_left_13, tmp_compare_right_13 );
    if ( tmp_exc_match_exception_match_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_23 );
        Py_XDECREF( exception_keeper_value_23 );
        Py_XDECREF( exception_keeper_tb_23 );

        exception_lineno = 683;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_24;
    }
    if ( tmp_exc_match_exception_match_11 == 1 )
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    Py_DECREF( exception_keeper_type_23 );
    Py_XDECREF( exception_keeper_value_23 );
    Py_XDECREF( exception_keeper_tb_23 );
    goto loop_end_6;
    goto branch_end_25;
    branch_no_25:;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_24;
    branch_end_25:;
    // End of try:
    try_end_23:;
    // Tried code:
    tmp_iter_arg_8 = tmp_for_loop_6__iter_value;

    CHECK_OBJECT( tmp_iter_arg_8 );
    tmp_assign_source_48 = MAKE_ITERATOR( tmp_iter_arg_8 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 683;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_26;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_48;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_49 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
    if ( tmp_assign_source_49 == NULL )
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


        type_description_1 = "ooooooooooooooooooooooooooo";
        exception_lineno = 683;
        goto try_except_handler_27;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_49;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_50 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
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


        type_description_1 = "ooooooooooooooooooooooooooo";
        exception_lineno = 683;
        goto try_except_handler_27;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_50;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_iterator_name_2 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                type_description_1 = "ooooooooooooooooooooooooooo";
                exception_lineno = 683;
                goto try_except_handler_27;
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

        type_description_1 = "ooooooooooooooooooooooooooo";
        exception_lineno = 683;
        goto try_except_handler_27;
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_26;
    // End of try:
    try_end_24:;
    goto try_end_25;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_24;
    // End of try:
    try_end_25:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_51 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_51 );
    {
        PyObject *old = var_pkey_class;
        var_pkey_class = tmp_assign_source_51;
        Py_INCREF( var_pkey_class );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_52 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_52 );
    {
        PyObject *old = var_filename;
        var_filename = tmp_assign_source_52;
        Py_INCREF( var_filename );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Tried code:
    tmp_source_name_29 = par_self;

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 685;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain__key_from_filepath );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 685;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }
    tmp_args_element_name_29 = var_filename;

    if ( tmp_args_element_name_29 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 686;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }

    tmp_args_element_name_30 = var_pkey_class;

    if ( tmp_args_element_name_30 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pkey_class" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 686;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }

    tmp_args_element_name_31 = par_passphrase;

    if ( tmp_args_element_name_31 == NULL )
    {
        Py_DECREF( tmp_called_name_20 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "passphrase" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 686;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 685;
    {
        PyObject *call_args[] = { tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_31 };
        tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 685;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }
    {
        PyObject *old = var_key;
        var_key = tmp_assign_source_53;
        Py_XDECREF( old );
    }

    tmp_source_name_31 = par_self;

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 691;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }

    tmp_source_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain__transport );
    if ( tmp_source_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 691;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }
    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_auth_publickey );
    Py_DECREF( tmp_source_name_30 );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 691;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }
    tmp_args_element_name_32 = par_username;

    if ( tmp_args_element_name_32 == NULL )
    {
        Py_DECREF( tmp_called_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 691;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }

    tmp_args_element_name_33 = var_key;

    if ( tmp_args_element_name_33 == NULL )
    {
        Py_DECREF( tmp_called_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 691;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 691;
    {
        PyObject *call_args[] = { tmp_args_element_name_32, tmp_args_element_name_33 };
        tmp_set_arg_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    if ( tmp_set_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 691;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }
    tmp_assign_source_54 = PySet_New( tmp_set_arg_4 );
    Py_DECREF( tmp_set_arg_4 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 690;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }
    {
        PyObject *old = var_allowed_types;
        var_allowed_types = tmp_assign_source_54;
        Py_XDECREF( old );
    }

    tmp_left_name_6 = var_allowed_types;

    CHECK_OBJECT( tmp_left_name_6 );
    tmp_right_name_6 = var_two_factor_types;

    if ( tmp_right_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "two_factor_types" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 692;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }

    tmp_assign_source_55 = BINARY_OPERATION( PyNumber_And, tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 692;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }
    {
        PyObject *old = var_two_factor;
        var_two_factor = tmp_assign_source_55;
        Py_XDECREF( old );
    }

    tmp_cond_value_13 = var_two_factor;

    CHECK_OBJECT( tmp_cond_value_13 );
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 693;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_28;
    }
    if ( tmp_cond_truth_13 == 1 )
    {
        goto branch_no_26;
    }
    else
    {
        goto branch_yes_26;
    }
    branch_yes_26:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_24;
    branch_no_26:;
    goto loop_end_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_6 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_6 );
    exception_preserved_value_6 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_6 );
    exception_preserved_tb_6 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_6 );

    if ( exception_keeper_tb_26 == NULL )
    {
        exception_keeper_tb_26 = MAKE_TRACEBACK( frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_26 );
    }
    else if ( exception_keeper_lineno_26 != 0 )
    {
        exception_keeper_tb_26 = ADD_TRACEBACK( exception_keeper_tb_26, frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_26 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_26, &exception_keeper_value_26, &exception_keeper_tb_26 );
    PyException_SetTraceback( exception_keeper_value_26, (PyObject *)exception_keeper_tb_26 );
    PUBLISH_EXCEPTION( &exception_keeper_type_26, &exception_keeper_value_26, &exception_keeper_tb_26 );
    // Tried code:
    tmp_compare_left_14 = EXC_TYPE(PyThreadState_GET());
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_SSHException );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSHException );
    }

    if ( tmp_tuple_element_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSHException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 696;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_29;
    }

    tmp_compare_right_14 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_compare_right_14, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = PyExc_IOError;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_compare_right_14, 1, tmp_tuple_element_9 );
    tmp_exc_match_exception_match_12 = EXCEPTION_MATCH_BOOL( tmp_compare_left_14, tmp_compare_right_14 );
    Py_DECREF( tmp_compare_right_14 );
    if ( tmp_exc_match_exception_match_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 696;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_29;
    }
    if ( tmp_exc_match_exception_match_12 == 1 )
    {
        goto branch_yes_27;
    }
    else
    {
        goto branch_no_27;
    }
    branch_yes_27:;
    tmp_assign_source_56 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_56;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    tmp_assign_source_57 = var_e;

    CHECK_OBJECT( tmp_assign_source_57 );
    {
        PyObject *old = var_saved_exception;
        var_saved_exception = tmp_assign_source_57;
        Py_INCREF( var_saved_exception );
        Py_XDECREF( old );
    }

    Py_XDECREF( var_e );
    var_e = NULL;

    goto branch_end_27;
    branch_no_27:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 684;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c67faa985019701e28ba89e5ae51d9a0->m_frame) frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_29;
    branch_end_27:;
    goto try_end_26;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_6, exception_preserved_value_6, exception_preserved_tb_6 );
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_24;
    // End of try:
    try_end_26:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_6, exception_preserved_value_6, exception_preserved_tb_6 );
    goto try_end_27;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
    // End of try:
    try_end_27:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 683;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_24;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_28;
    // Return handler code:
    try_return_handler_24:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__iter_value );
    Py_DECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    Py_XDECREF( tmp_for_loop_6__iter_value );
    tmp_for_loop_6__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_6__for_iterator );
    Py_DECREF( tmp_for_loop_6__for_iterator );
    tmp_for_loop_6__for_iterator = NULL;

    branch_no_19:;
    tmp_compare_left_15 = par_password;

    if ( tmp_compare_left_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 699;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_15 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_15 != tmp_compare_right_15 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_28;
    }
    else
    {
        goto branch_no_28;
    }
    branch_yes_28:;
    // Tried code:
    tmp_source_name_33 = par_self;

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 701;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_30;
    }

    tmp_source_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain__transport );
    if ( tmp_source_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 701;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_30;
    }
    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_auth_password );
    Py_DECREF( tmp_source_name_32 );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 701;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_30;
    }
    tmp_args_element_name_34 = par_username;

    if ( tmp_args_element_name_34 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 701;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_30;
    }

    tmp_args_element_name_35 = par_password;

    if ( tmp_args_element_name_35 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "password" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 701;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_30;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 701;
    {
        PyObject *call_args[] = { tmp_args_element_name_34, tmp_args_element_name_35 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 701;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_30;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_7 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_7 );
    exception_preserved_value_7 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_7 );
    exception_preserved_tb_7 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_7 );

    if ( exception_keeper_tb_29 == NULL )
    {
        exception_keeper_tb_29 = MAKE_TRACEBACK( frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_29 );
    }
    else if ( exception_keeper_lineno_29 != 0 )
    {
        exception_keeper_tb_29 = ADD_TRACEBACK( exception_keeper_tb_29, frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_29 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_29, &exception_keeper_value_29, &exception_keeper_tb_29 );
    PyException_SetTraceback( exception_keeper_value_29, (PyObject *)exception_keeper_tb_29 );
    PUBLISH_EXCEPTION( &exception_keeper_type_29, &exception_keeper_value_29, &exception_keeper_tb_29 );
    // Tried code:
    tmp_compare_left_16 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_16 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_SSHException );

    if (unlikely( tmp_compare_right_16 == NULL ))
    {
        tmp_compare_right_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSHException );
    }

    if ( tmp_compare_right_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSHException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 703;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_31;
    }

    tmp_exc_match_exception_match_13 = EXCEPTION_MATCH_BOOL( tmp_compare_left_16, tmp_compare_right_16 );
    if ( tmp_exc_match_exception_match_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 703;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_31;
    }
    if ( tmp_exc_match_exception_match_13 == 1 )
    {
        goto branch_yes_29;
    }
    else
    {
        goto branch_no_29;
    }
    branch_yes_29:;
    tmp_assign_source_58 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_58;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    tmp_assign_source_59 = var_e;

    CHECK_OBJECT( tmp_assign_source_59 );
    {
        PyObject *old = var_saved_exception;
        var_saved_exception = tmp_assign_source_59;
        Py_INCREF( var_saved_exception );
        Py_XDECREF( old );
    }

    Py_XDECREF( var_e );
    var_e = NULL;

    goto branch_end_29;
    branch_no_29:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 700;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c67faa985019701e28ba89e5ae51d9a0->m_frame) frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_31;
    branch_end_29:;
    goto try_end_29;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_7, exception_preserved_value_7, exception_preserved_tb_7 );
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_7, exception_preserved_value_7, exception_preserved_tb_7 );
    goto try_end_30;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
    // End of try:
    try_end_30:;
    goto branch_end_28;
    branch_no_28:;
    tmp_cond_value_14 = var_two_factor;

    if ( tmp_cond_value_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "two_factor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 705;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 705;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_14 == 1 )
    {
        goto branch_yes_30;
    }
    else
    {
        goto branch_no_30;
    }
    branch_yes_30:;
    // Tried code:
    tmp_source_name_35 = par_self;

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 707;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_32;
    }

    tmp_source_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain__transport );
    if ( tmp_source_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 707;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_32;
    }
    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_auth_interactive_dumb );
    Py_DECREF( tmp_source_name_34 );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 707;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_32;
    }
    tmp_args_element_name_36 = par_username;

    if ( tmp_args_element_name_36 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "username" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 707;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_32;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 707;
    {
        PyObject *call_args[] = { tmp_args_element_name_36 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 707;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_32;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_8 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_8 );
    exception_preserved_value_8 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_8 );
    exception_preserved_tb_8 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_8 );

    if ( exception_keeper_tb_31 == NULL )
    {
        exception_keeper_tb_31 = MAKE_TRACEBACK( frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_31 );
    }
    else if ( exception_keeper_lineno_31 != 0 )
    {
        exception_keeper_tb_31 = ADD_TRACEBACK( exception_keeper_tb_31, frame_c67faa985019701e28ba89e5ae51d9a0, exception_keeper_lineno_31 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_31, &exception_keeper_value_31, &exception_keeper_tb_31 );
    PyException_SetTraceback( exception_keeper_value_31, (PyObject *)exception_keeper_tb_31 );
    PUBLISH_EXCEPTION( &exception_keeper_type_31, &exception_keeper_value_31, &exception_keeper_tb_31 );
    // Tried code:
    tmp_compare_left_17 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_17 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_SSHException );

    if (unlikely( tmp_compare_right_17 == NULL ))
    {
        tmp_compare_right_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSHException );
    }

    if ( tmp_compare_right_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSHException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 709;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_33;
    }

    tmp_exc_match_exception_match_14 = EXCEPTION_MATCH_BOOL( tmp_compare_left_17, tmp_compare_right_17 );
    if ( tmp_exc_match_exception_match_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 709;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto try_except_handler_33;
    }
    if ( tmp_exc_match_exception_match_14 == 1 )
    {
        goto branch_yes_31;
    }
    else
    {
        goto branch_no_31;
    }
    branch_yes_31:;
    tmp_assign_source_60 = EXC_VALUE(PyThreadState_GET());
    {
        PyObject *old = var_e;
        var_e = tmp_assign_source_60;
        Py_INCREF( var_e );
        Py_XDECREF( old );
    }

    tmp_assign_source_61 = var_e;

    CHECK_OBJECT( tmp_assign_source_61 );
    {
        PyObject *old = var_saved_exception;
        var_saved_exception = tmp_assign_source_61;
        Py_INCREF( var_saved_exception );
        Py_XDECREF( old );
    }

    Py_XDECREF( var_e );
    var_e = NULL;

    goto branch_end_31;
    branch_no_31:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 706;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c67faa985019701e28ba89e5ae51d9a0->m_frame) frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooo";
    goto try_except_handler_33;
    branch_end_31:;
    goto try_end_31;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_8, exception_preserved_value_8, exception_preserved_tb_8 );
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_31:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_8, exception_preserved_value_8, exception_preserved_tb_8 );
    goto try_end_32;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
    // End of try:
    try_end_32:;
    branch_no_30:;
    branch_end_28:;
    tmp_compare_left_18 = var_saved_exception;

    if ( tmp_compare_left_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "saved_exception" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 713;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_18 = Py_None;
    tmp_isnot_3 = ( tmp_compare_left_18 != tmp_compare_right_18 );
    if ( tmp_isnot_3 )
    {
        goto branch_yes_32;
    }
    else
    {
        goto branch_no_32;
    }
    branch_yes_32:;
    tmp_raise_type_1 = var_saved_exception;

    if ( tmp_raise_type_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "saved_exception" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 714;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 714;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;
    branch_no_32:;
    tmp_called_name_24 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_SSHException );

    if (unlikely( tmp_called_name_24 == NULL ))
    {
        tmp_called_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSHException );
    }

    if ( tmp_called_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSHException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 715;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_c67faa985019701e28ba89e5ae51d9a0->m_frame.f_lineno = 715;
    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, &PyTuple_GET_ITEM( const_tuple_str_digest_cc04b4f3e909043cc54dd73c58b04ffc_tuple, 0 ) );

    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 715;
        type_description_1 = "ooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 715;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooooooooooooooooooo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c67faa985019701e28ba89e5ae51d9a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c67faa985019701e28ba89e5ae51d9a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c67faa985019701e28ba89e5ae51d9a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c67faa985019701e28ba89e5ae51d9a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c67faa985019701e28ba89e5ae51d9a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c67faa985019701e28ba89e5ae51d9a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c67faa985019701e28ba89e5ae51d9a0,
        type_description_1,
        par_self,
        par_username,
        par_password,
        par_pkey,
        par_key_filenames,
        par_allow_agent,
        par_look_for_keys,
        par_gss_auth,
        par_gss_kex,
        par_gss_deleg_creds,
        par_gss_host,
        par_passphrase,
        var_name,
        var_full_path,
        var_key,
        var_allowed_types,
        var_two_factor_types,
        var_filename,
        var_e,
        var_keyfiles,
        var_keytype,
        var_id_,
        var_directory,
        var_saved_exception,
        var_pkey_class,
        var_key_filename,
        var_two_factor
    );


    // Release cached frame.
    if ( frame_c67faa985019701e28ba89e5ae51d9a0 == cache_frame_c67faa985019701e28ba89e5ae51d9a0 )
    {
        Py_DECREF( frame_c67faa985019701e28ba89e5ae51d9a0 );
    }
    cache_frame_c67faa985019701e28ba89e5ae51d9a0 = NULL;

    assertFrameObject( frame_c67faa985019701e28ba89e5ae51d9a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_full_path );
    var_full_path = NULL;

    Py_XDECREF( par_allow_agent );
    par_allow_agent = NULL;

    Py_XDECREF( par_key_filenames );
    par_key_filenames = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_allowed_types );
    var_allowed_types = NULL;

    Py_XDECREF( par_gss_host );
    par_gss_host = NULL;

    Py_XDECREF( var_two_factor_types );
    var_two_factor_types = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( par_gss_deleg_creds );
    par_gss_deleg_creds = NULL;

    Py_XDECREF( var_keyfiles );
    var_keyfiles = NULL;

    Py_XDECREF( var_keytype );
    var_keytype = NULL;

    Py_XDECREF( var_id_ );
    var_id_ = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    Py_XDECREF( par_gss_kex );
    par_gss_kex = NULL;

    Py_XDECREF( par_pkey );
    par_pkey = NULL;

    Py_XDECREF( var_directory );
    var_directory = NULL;

    Py_XDECREF( par_passphrase );
    par_passphrase = NULL;

    Py_XDECREF( var_saved_exception );
    var_saved_exception = NULL;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_pkey_class );
    var_pkey_class = NULL;

    Py_XDECREF( par_gss_auth );
    par_gss_auth = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_look_for_keys );
    par_look_for_keys = NULL;

    Py_XDECREF( var_key_filename );
    var_key_filename = NULL;

    Py_XDECREF( var_two_factor );
    var_two_factor = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_full_path );
    var_full_path = NULL;

    Py_XDECREF( par_allow_agent );
    par_allow_agent = NULL;

    Py_XDECREF( par_key_filenames );
    par_key_filenames = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_allowed_types );
    var_allowed_types = NULL;

    Py_XDECREF( par_gss_host );
    par_gss_host = NULL;

    Py_XDECREF( var_two_factor_types );
    var_two_factor_types = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( par_gss_deleg_creds );
    par_gss_deleg_creds = NULL;

    Py_XDECREF( var_keyfiles );
    var_keyfiles = NULL;

    Py_XDECREF( var_keytype );
    var_keytype = NULL;

    Py_XDECREF( var_id_ );
    var_id_ = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    Py_XDECREF( par_gss_kex );
    par_gss_kex = NULL;

    Py_XDECREF( par_pkey );
    par_pkey = NULL;

    Py_XDECREF( var_directory );
    var_directory = NULL;

    Py_XDECREF( par_passphrase );
    par_passphrase = NULL;

    Py_XDECREF( var_saved_exception );
    var_saved_exception = NULL;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_pkey_class );
    var_pkey_class = NULL;

    Py_XDECREF( par_gss_auth );
    par_gss_auth = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_look_for_keys );
    par_look_for_keys = NULL;

    Py_XDECREF( var_key_filename );
    var_key_filename = NULL;

    Py_XDECREF( var_two_factor );
    var_two_factor = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_16__auth );
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


static PyObject *impl_paramiko$client$$$function_17__log( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_level = python_pars[ 1 ];
    PyObject *par_msg = python_pars[ 2 ];
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
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7ac2bc9a44a1538be5f25dd9a388c3ae = NULL;

    struct Nuitka_FrameObject *frame_7ac2bc9a44a1538be5f25dd9a388c3ae;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7ac2bc9a44a1538be5f25dd9a388c3ae, codeobj_7ac2bc9a44a1538be5f25dd9a388c3ae, module_paramiko$client, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7ac2bc9a44a1538be5f25dd9a388c3ae = cache_frame_7ac2bc9a44a1538be5f25dd9a388c3ae;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7ac2bc9a44a1538be5f25dd9a388c3ae );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7ac2bc9a44a1538be5f25dd9a388c3ae ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__transport );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 718;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__log );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 718;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_level;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "level" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 718;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_msg;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 718;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_7ac2bc9a44a1538be5f25dd9a388c3ae->m_frame.f_lineno = 718;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 718;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ac2bc9a44a1538be5f25dd9a388c3ae );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7ac2bc9a44a1538be5f25dd9a388c3ae );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7ac2bc9a44a1538be5f25dd9a388c3ae, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7ac2bc9a44a1538be5f25dd9a388c3ae->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7ac2bc9a44a1538be5f25dd9a388c3ae, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7ac2bc9a44a1538be5f25dd9a388c3ae,
        type_description_1,
        par_self,
        par_level,
        par_msg
    );


    // Release cached frame.
    if ( frame_7ac2bc9a44a1538be5f25dd9a388c3ae == cache_frame_7ac2bc9a44a1538be5f25dd9a388c3ae )
    {
        Py_DECREF( frame_7ac2bc9a44a1538be5f25dd9a388c3ae );
    }
    cache_frame_7ac2bc9a44a1538be5f25dd9a388c3ae = NULL;

    assertFrameObject( frame_7ac2bc9a44a1538be5f25dd9a388c3ae );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_17__log );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( par_level );
    par_level = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_17__log );
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


static PyObject *impl_paramiko$client$$$function_18_missing_host_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_client = python_pars[ 1 ];
    PyObject *par_hostname = python_pars[ 2 ];
    PyObject *par_key = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_18_missing_host_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_18_missing_host_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$client$$$function_19_missing_host_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_client = python_pars[ 1 ];
    PyObject *par_hostname = python_pars[ 2 ];
    PyObject *par_key = python_pars[ 3 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_isnot_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bb30060fad1b2e24f8ed8a62cf235adb = NULL;

    struct Nuitka_FrameObject *frame_bb30060fad1b2e24f8ed8a62cf235adb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bb30060fad1b2e24f8ed8a62cf235adb, codeobj_bb30060fad1b2e24f8ed8a62cf235adb, module_paramiko$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bb30060fad1b2e24f8ed8a62cf235adb = cache_frame_bb30060fad1b2e24f8ed8a62cf235adb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bb30060fad1b2e24f8ed8a62cf235adb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bb30060fad1b2e24f8ed8a62cf235adb ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_client;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__host_keys );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 749;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 749;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_hostname;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 749;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = par_key;

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 749;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_bb30060fad1b2e24f8ed8a62cf235adb->m_frame.f_lineno = 749;
    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_name );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 749;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_key;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 749;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_bb30060fad1b2e24f8ed8a62cf235adb->m_frame.f_lineno = 749;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 749;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_client;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "client" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 750;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__host_keys_filename );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 750;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_4 = par_client;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "client" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 751;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_save_host_keys );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 751;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_client;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "client" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 751;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__host_keys_filename );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 751;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_bb30060fad1b2e24f8ed8a62cf235adb->m_frame.f_lineno = 751;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 751;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_source_name_6 = par_client;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "client" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 752;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__log );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 752;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_DEBUG );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEBUG );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEBUG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 752;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = const_str_digest_b33e8b6b6ad89051c130ab8bf0e78a34;
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_format );
    assert( !(tmp_called_name_4 == NULL) );
    tmp_called_instance_2 = par_key;

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 753;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_bb30060fad1b2e24f8ed8a62cf235adb->m_frame.f_lineno = 753;
    tmp_args_element_name_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_name );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 753;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = par_hostname;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 753;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_hexlify );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hexlify );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hexlify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 753;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_3 = par_key;

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 753;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_bb30060fad1b2e24f8ed8a62cf235adb->m_frame.f_lineno = 753;
    tmp_args_element_name_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_get_fingerprint );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 753;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_bb30060fad1b2e24f8ed8a62cf235adb->m_frame.f_lineno = 753;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 753;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_bb30060fad1b2e24f8ed8a62cf235adb->m_frame.f_lineno = 752;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 752;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_bb30060fad1b2e24f8ed8a62cf235adb->m_frame.f_lineno = 752;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 752;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb30060fad1b2e24f8ed8a62cf235adb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb30060fad1b2e24f8ed8a62cf235adb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bb30060fad1b2e24f8ed8a62cf235adb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bb30060fad1b2e24f8ed8a62cf235adb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bb30060fad1b2e24f8ed8a62cf235adb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bb30060fad1b2e24f8ed8a62cf235adb,
        type_description_1,
        par_self,
        par_client,
        par_hostname,
        par_key
    );


    // Release cached frame.
    if ( frame_bb30060fad1b2e24f8ed8a62cf235adb == cache_frame_bb30060fad1b2e24f8ed8a62cf235adb )
    {
        Py_DECREF( frame_bb30060fad1b2e24f8ed8a62cf235adb );
    }
    cache_frame_bb30060fad1b2e24f8ed8a62cf235adb = NULL;

    assertFrameObject( frame_bb30060fad1b2e24f8ed8a62cf235adb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_19_missing_host_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

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

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_19_missing_host_key );
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


static PyObject *impl_paramiko$client$$$function_20_missing_host_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_client = python_pars[ 1 ];
    PyObject *par_hostname = python_pars[ 2 ];
    PyObject *par_key = python_pars[ 3 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_750ee150c43f37d7f17e8d4c39c0acfc = NULL;

    struct Nuitka_FrameObject *frame_750ee150c43f37d7f17e8d4c39c0acfc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_750ee150c43f37d7f17e8d4c39c0acfc, codeobj_750ee150c43f37d7f17e8d4c39c0acfc, module_paramiko$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_750ee150c43f37d7f17e8d4c39c0acfc = cache_frame_750ee150c43f37d7f17e8d4c39c0acfc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_750ee150c43f37d7f17e8d4c39c0acfc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_750ee150c43f37d7f17e8d4c39c0acfc ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_client;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__log );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 764;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_DEBUG );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEBUG );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DEBUG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 764;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = const_str_digest_7e21af3ea52bb94e7b237344f99d37ca;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_format );
    assert( !(tmp_called_name_2 == NULL) );
    tmp_called_instance_1 = par_key;

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 765;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_750ee150c43f37d7f17e8d4c39c0acfc->m_frame.f_lineno = 765;
    tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_name );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 765;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_hostname;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 765;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_hexlify );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hexlify );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hexlify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 765;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = par_key;

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 765;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_750ee150c43f37d7f17e8d4c39c0acfc->m_frame.f_lineno = 765;
    tmp_args_element_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_fingerprint );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 765;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_750ee150c43f37d7f17e8d4c39c0acfc->m_frame.f_lineno = 765;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 765;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_750ee150c43f37d7f17e8d4c39c0acfc->m_frame.f_lineno = 764;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 764;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_750ee150c43f37d7f17e8d4c39c0acfc->m_frame.f_lineno = 764;
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


        exception_lineno = 764;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_SSHException );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSHException );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSHException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 767;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = const_str_digest_82afded8daeb3536ef939c792b059222;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
    assert( !(tmp_called_name_5 == NULL) );
    tmp_args_element_name_8 = par_hostname;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 768;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_750ee150c43f37d7f17e8d4c39c0acfc->m_frame.f_lineno = 768;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 768;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_750ee150c43f37d7f17e8d4c39c0acfc->m_frame.f_lineno = 767;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 767;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 767;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_750ee150c43f37d7f17e8d4c39c0acfc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_750ee150c43f37d7f17e8d4c39c0acfc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_750ee150c43f37d7f17e8d4c39c0acfc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_750ee150c43f37d7f17e8d4c39c0acfc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_750ee150c43f37d7f17e8d4c39c0acfc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_750ee150c43f37d7f17e8d4c39c0acfc,
        type_description_1,
        par_self,
        par_client,
        par_hostname,
        par_key
    );


    // Release cached frame.
    if ( frame_750ee150c43f37d7f17e8d4c39c0acfc == cache_frame_750ee150c43f37d7f17e8d4c39c0acfc )
    {
        Py_DECREF( frame_750ee150c43f37d7f17e8d4c39c0acfc );
    }
    cache_frame_750ee150c43f37d7f17e8d4c39c0acfc = NULL;

    assertFrameObject( frame_750ee150c43f37d7f17e8d4c39c0acfc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_20_missing_host_key );
    return NULL;
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

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_20_missing_host_key );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_paramiko$client$$$function_21_missing_host_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_client = python_pars[ 1 ];
    PyObject *par_hostname = python_pars[ 2 ];
    PyObject *par_key = python_pars[ 3 ];
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_dfa8209123b90f755ba7421fd3b307fa = NULL;

    struct Nuitka_FrameObject *frame_dfa8209123b90f755ba7421fd3b307fa;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dfa8209123b90f755ba7421fd3b307fa, codeobj_dfa8209123b90f755ba7421fd3b307fa, module_paramiko$client, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dfa8209123b90f755ba7421fd3b307fa = cache_frame_dfa8209123b90f755ba7421fd3b307fa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dfa8209123b90f755ba7421fd3b307fa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dfa8209123b90f755ba7421fd3b307fa ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 778;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 778;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = const_str_digest_2a81a3600690c8d68987eea33c53e51f;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_format );
    assert( !(tmp_called_name_2 == NULL) );
    tmp_called_instance_1 = par_key;

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 779;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_dfa8209123b90f755ba7421fd3b307fa->m_frame.f_lineno = 779;
    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_name );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 779;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_hostname;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hostname" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 779;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_hexlify );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hexlify );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hexlify" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 779;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = par_key;

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "key" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 779;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_dfa8209123b90f755ba7421fd3b307fa->m_frame.f_lineno = 779;
    tmp_args_element_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_fingerprint );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 779;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_dfa8209123b90f755ba7421fd3b307fa->m_frame.f_lineno = 779;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 779;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_dfa8209123b90f755ba7421fd3b307fa->m_frame.f_lineno = 778;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 778;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_dfa8209123b90f755ba7421fd3b307fa->m_frame.f_lineno = 778;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 778;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfa8209123b90f755ba7421fd3b307fa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dfa8209123b90f755ba7421fd3b307fa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dfa8209123b90f755ba7421fd3b307fa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dfa8209123b90f755ba7421fd3b307fa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dfa8209123b90f755ba7421fd3b307fa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dfa8209123b90f755ba7421fd3b307fa,
        type_description_1,
        par_self,
        par_client,
        par_hostname,
        par_key
    );


    // Release cached frame.
    if ( frame_dfa8209123b90f755ba7421fd3b307fa == cache_frame_dfa8209123b90f755ba7421fd3b307fa )
    {
        Py_DECREF( frame_dfa8209123b90f755ba7421fd3b307fa );
    }
    cache_frame_dfa8209123b90f755ba7421fd3b307fa = NULL;

    assertFrameObject( frame_dfa8209123b90f755ba7421fd3b307fa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_21_missing_host_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

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

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( par_hostname );
    par_hostname = NULL;

    Py_XDECREF( par_client );
    par_client = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client$$$function_21_missing_host_key );
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



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_10_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_10_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        const_str_digest_95a5925a86d829525fa6b9b97b32ae62,
#endif
        codeobj_1ed0db91d7782cbd48c5643451fe2508,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_25f624aba7791c2e8c268183d01bc468,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_11_exec_command( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_11_exec_command,
        const_str_plain_exec_command,
#if PYTHON_VERSION >= 300
        const_str_digest_8d037cf2e7966507bc78fe772bd1d9a6,
#endif
        codeobj_76f05a9e712d25bba5b1587400b2926e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_5c219107dd50a727fb1f715a347cf01c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_12_invoke_shell( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_12_invoke_shell,
        const_str_plain_invoke_shell,
#if PYTHON_VERSION >= 300
        const_str_digest_a59a0cedb1796a939e53dbefdc85f524,
#endif
        codeobj_02086d5cf9c1336a73da489d0290a544,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_e1ff46558b234e9fec955eb04a9108f0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_13_open_sftp(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_13_open_sftp,
        const_str_plain_open_sftp,
#if PYTHON_VERSION >= 300
        const_str_digest_1211c1c0713ce0f061a3712aec20eba4,
#endif
        codeobj_7d2c2c3277824e955683eb28ada96157,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_2d82d3a588fa2c433ecc178ec3f8ce2c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_14_get_transport(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_14_get_transport,
        const_str_plain_get_transport,
#if PYTHON_VERSION >= 300
        const_str_digest_9c7ab0ce8deed03809d93363898074f2,
#endif
        codeobj_e3259617e7bc016e9be754911f51e918,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_11345d3ee8c67ea23152ededaa91fe4f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_15__key_from_filepath(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_15__key_from_filepath,
        const_str_plain__key_from_filepath,
#if PYTHON_VERSION >= 300
        const_str_digest_fb0a3012623c23847890f846c0577a22,
#endif
        codeobj_f6d0de4d165cf21aed9b61ff168a1605,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_e10e0cefde1642954f76c701d33ec46e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_16__auth(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_16__auth,
        const_str_plain__auth,
#if PYTHON_VERSION >= 300
        const_str_digest_ae04b141e16aabffb17b13879ec92462,
#endif
        codeobj_c67faa985019701e28ba89e5ae51d9a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_f55706563338a554642c301a8076f6e1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_17__log(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_17__log,
        const_str_plain__log,
#if PYTHON_VERSION >= 300
        const_str_digest_481eccf2807da60536e27bf2eb604e7b,
#endif
        codeobj_7ac2bc9a44a1538be5f25dd9a388c3ae,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_18_missing_host_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_18_missing_host_key,
        const_str_plain_missing_host_key,
#if PYTHON_VERSION >= 300
        const_str_digest_4a004841f32b04941edb871232d0d131,
#endif
        codeobj_ddca698026bc2dfd4a261486c9c0a7ca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_563d2ce3de867501cff87148649f8c04,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_19_missing_host_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_19_missing_host_key,
        const_str_plain_missing_host_key,
#if PYTHON_VERSION >= 300
        const_str_digest_891b2d21e9e95cfb5f8d10bdcc0b49ec,
#endif
        codeobj_bb30060fad1b2e24f8ed8a62cf235adb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_91c7e6f4f760a5b8a195c470701da4ad,
#endif
        codeobj_6406a1772682e13cf3bac4b499e76f92,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_d67b1e54eaf0a96899d50a8c5f7b8fa1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_20_missing_host_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_20_missing_host_key,
        const_str_plain_missing_host_key,
#if PYTHON_VERSION >= 300
        const_str_digest_37f95e5df0e3db54b3569bf1b40c4cd2,
#endif
        codeobj_750ee150c43f37d7f17e8d4c39c0acfc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_21_missing_host_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_21_missing_host_key,
        const_str_plain_missing_host_key,
#if PYTHON_VERSION >= 300
        const_str_digest_ef7ae15d8f68eb0beee7fa083e6ade9f,
#endif
        codeobj_dfa8209123b90f755ba7421fd3b307fa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_2_load_system_host_keys( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_2_load_system_host_keys,
        const_str_plain_load_system_host_keys,
#if PYTHON_VERSION >= 300
        const_str_digest_1ac68d9bc74efb9e4f7ae0de5810e1e2,
#endif
        codeobj_8b6a689165be9ab30ca9a2be03d781b4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_fe0d842402b5c696bd54ae7a6112413c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_3_load_host_keys(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_3_load_host_keys,
        const_str_plain_load_host_keys,
#if PYTHON_VERSION >= 300
        const_str_digest_879e7dfb181648390e04331cafe5082b,
#endif
        codeobj_45874b35a6aae55aafe7e9c089ece9f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_3ca2df802a686762905914fe25376296,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_4_save_host_keys(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_4_save_host_keys,
        const_str_plain_save_host_keys,
#if PYTHON_VERSION >= 300
        const_str_digest_e4ad884558972983df936a521248755e,
#endif
        codeobj_8278d2193a407663790055d4d7d2a4f7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_be020efbb56f5209be616f68abe89189,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_5_get_host_keys(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_5_get_host_keys,
        const_str_plain_get_host_keys,
#if PYTHON_VERSION >= 300
        const_str_digest_adf1661a765b5742a91f4e72f56ed5d9,
#endif
        codeobj_cb903e1cf8bfa9415130e5e6ea1bfb25,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_4f6ef64105bc2e5207019acaf3d40c8a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_6_set_log_channel(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_6_set_log_channel,
        const_str_plain_set_log_channel,
#if PYTHON_VERSION >= 300
        const_str_digest_1a538e72a963d15e3048fe820975d3fc,
#endif
        codeobj_33941920b25ba4e25d1a2ce3c0908d30,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_2b153ae805508c7009c63ca8d8ef1f72,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_7_set_missing_host_key_policy(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_7_set_missing_host_key_policy,
        const_str_plain_set_missing_host_key_policy,
#if PYTHON_VERSION >= 300
        const_str_digest_6ffbad3e0880c4f1ec71a6aa363c6cae,
#endif
        codeobj_a5618532fa238ecb61da820a0126d504,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_80f303e7575bf8f6cc5638f3eb79595f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_8__families_and_addresses(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_8__families_and_addresses,
        const_str_plain__families_and_addresses,
#if PYTHON_VERSION >= 300
        const_str_digest_b45cee6cc9f51a076c24027845ed2861,
#endif
        codeobj_dca7945c5f0850d83fdcdaece5783b52,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_1c49d41143fdbcc7ed951f5b8a094218,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_9_connect( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_9_connect,
        const_str_plain_connect,
#if PYTHON_VERSION >= 300
        const_str_digest_a16cdfec1a257e0d4f94ea87c5f027d3,
#endif
        codeobj_23e3a9c0d4955f37d61c47096ac52c56,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        const_str_digest_50ff0df53f95afae73435ecd4f4dde13,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$client$$$function_9_connect$$$function_1_lambda( struct Nuitka_CellObject *closure_addr, struct Nuitka_CellObject *closure_sock )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$client$$$function_9_connect$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_b5e7d2388b97f8ae6f06c4141a928665,
#endif
        codeobj_13c4e915c87d24f003067c3420559b30,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$client,
        Py_None,
        2
    );

result->m_closure[0] = closure_addr;
Py_INCREF( result->m_closure[0] );
result->m_closure[1] = closure_sock;
Py_INCREF( result->m_closure[1] );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_paramiko$client =
{
    PyModuleDef_HEAD_INIT,
    "paramiko.client",   /* m_name */
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

MOD_INIT_DECL( paramiko$client )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_paramiko$client );
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
    puts("paramiko.client: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("paramiko.client: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("paramiko.client: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initparamiko$client" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_paramiko$client = Py_InitModule4(
        "paramiko.client",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_paramiko$client = PyModule_Create( &mdef_paramiko$client );
#endif

    moduledict_paramiko$client = MODULE_DICT( module_paramiko$client );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_paramiko$client,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_paramiko$client,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_paramiko$client,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_paramiko$client );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_377ce7846e0f5871c80e88c27c40a3cc, module_paramiko$client );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
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
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
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
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
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
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
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
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    static struct Nuitka_FrameObject *cache_frame_3115c91d5024f1ad6c2124c93e8bc01d_2 = NULL;

    struct Nuitka_FrameObject *frame_3115c91d5024f1ad6c2124c93e8bc01d_2;

    static struct Nuitka_FrameObject *cache_frame_0cfb707fc637fa6848149d46c0ab33ce_3 = NULL;

    struct Nuitka_FrameObject *frame_0cfb707fc637fa6848149d46c0ab33ce_3;

    static struct Nuitka_FrameObject *cache_frame_03bb342e1f5ebefc75c13623cecfd549_4 = NULL;

    struct Nuitka_FrameObject *frame_03bb342e1f5ebefc75c13623cecfd549_4;

    static struct Nuitka_FrameObject *cache_frame_57554c3a0dd3d3eb82775d68860edb38_5 = NULL;

    struct Nuitka_FrameObject *frame_57554c3a0dd3d3eb82775d68860edb38_5;

    static struct Nuitka_FrameObject *cache_frame_d32697446a19e621384df5dd255544a5_6 = NULL;

    struct Nuitka_FrameObject *frame_d32697446a19e621384df5dd255544a5_6;

    struct Nuitka_FrameObject *frame_0ec79ecb6e2af9551050209ab7b828df;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    PyObject *locals_paramiko$client_742 = NULL;
    PyObject *locals_paramiko$client_772 = NULL;
    PyObject *locals_paramiko$client_47 = NULL;
    PyObject *locals_paramiko$client_757 = NULL;
    PyObject *locals_paramiko$client_721 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_43b35921ad5c1235198b9ac9b3b6d66c;
    UPDATE_STRING_DICT0( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_a23610c98fb1a04c71e6d26f83667579;
    UPDATE_STRING_DICT0( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_plain_binascii;
    tmp_globals_name_1 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_hexlify_tuple;
    tmp_level_name_1 = const_int_0;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( !(tmp_import_name_from_1 == NULL) );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_hexlify );
    Py_DECREF( tmp_import_name_from_1 );
    assert( !(tmp_assign_source_4 == NULL) );
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_hexlify, tmp_assign_source_4 );
    // Frame without reuse.
    frame_0ec79ecb6e2af9551050209ab7b828df = MAKE_MODULE_FRAME( codeobj_0ec79ecb6e2af9551050209ab7b828df, module_paramiko$client );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0ec79ecb6e2af9551050209ab7b828df );
    assert( Py_REFCNT( frame_0ec79ecb6e2af9551050209ab7b828df ) == 2 );

    // Framed code:
    tmp_name_name_2 = const_str_plain_getpass;
    tmp_globals_name_2 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 24;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_getpass, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain_inspect;
    tmp_globals_name_3 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 25;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_plain_os;
    tmp_globals_name_4 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 26;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_7 );
    tmp_name_name_5 = const_str_plain_socket;
    tmp_globals_name_5 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = Py_None;
    tmp_level_name_5 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 27;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_8 );
    tmp_name_name_6 = const_str_plain_warnings;
    tmp_globals_name_6 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = Py_None;
    tmp_level_name_6 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 28;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_9 );
    tmp_name_name_7 = const_str_plain_errno;
    tmp_globals_name_7 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_ECONNREFUSED_str_plain_EHOSTUNREACH_tuple;
    tmp_level_name_7 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 29;
    tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    assert( !(tmp_assign_source_10 == NULL) );
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_10;

    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ECONNREFUSED );
    assert( !(tmp_assign_source_11 == NULL) );
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_ECONNREFUSED, tmp_assign_source_11 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_EHOSTUNREACH );
    assert( !(tmp_assign_source_12 == NULL) );
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_EHOSTUNREACH, tmp_assign_source_12 );
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_8 = const_str_digest_ce3edf68c8854adb57c9a3c9f342ea07;
    tmp_globals_name_8 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_Agent_tuple;
    tmp_level_name_8 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 31;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Agent );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_Agent, tmp_assign_source_13 );
    tmp_name_name_9 = const_str_digest_043a098e3c8c7e01497500bb854d02ab;
    tmp_globals_name_9 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_DEBUG_tuple;
    tmp_level_name_9 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 32;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_DEBUG );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_DEBUG, tmp_assign_source_14 );
    tmp_name_name_10 = const_str_digest_526ca0498ee44f4a5e670bc6b1c946a1;
    tmp_globals_name_10 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_SSH_PORT_tuple;
    tmp_level_name_10 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 33;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_SSH_PORT );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_SSH_PORT, tmp_assign_source_15 );
    tmp_name_name_11 = const_str_digest_874f199f8c615b74b51fea192429a12d;
    tmp_globals_name_11 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_DSSKey_tuple;
    tmp_level_name_11 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 34;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_DSSKey );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_DSSKey, tmp_assign_source_16 );
    tmp_name_name_12 = const_str_digest_17d934cba47c439459f681bdee6dbc70;
    tmp_globals_name_12 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_12 = Py_None;
    tmp_fromlist_name_12 = const_tuple_str_plain_ECDSAKey_tuple;
    tmp_level_name_12 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 35;
    tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ECDSAKey );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_ECDSAKey, tmp_assign_source_17 );
    tmp_name_name_13 = const_str_digest_11ba6382faf5515e4e143075ca650637;
    tmp_globals_name_13 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_13 = Py_None;
    tmp_fromlist_name_13 = const_tuple_str_plain_Ed25519Key_tuple;
    tmp_level_name_13 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 36;
    tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_Ed25519Key );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_Ed25519Key, tmp_assign_source_18 );
    tmp_name_name_14 = const_str_digest_a627c70231a50942c6d356263a0ffbcb;
    tmp_globals_name_14 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_14 = Py_None;
    tmp_fromlist_name_14 = const_tuple_str_plain_HostKeys_tuple;
    tmp_level_name_14 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 37;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_HostKeys );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_HostKeys, tmp_assign_source_19 );
    tmp_name_name_15 = const_str_digest_af46dc626906b3459f8298b3797a94e5;
    tmp_globals_name_15 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_15 = Py_None;
    tmp_fromlist_name_15 = const_tuple_str_plain_string_types_tuple;
    tmp_level_name_15 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 38;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_string_types );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_20 );
    tmp_name_name_16 = const_str_digest_c9783714a145c70c37c4efbd57c939be;
    tmp_globals_name_16 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_16 = Py_None;
    tmp_fromlist_name_16 = const_tuple_str_plain_RSAKey_tuple;
    tmp_level_name_16 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 39;
    tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16, tmp_level_name_16 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_RSAKey );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_RSAKey, tmp_assign_source_21 );
    tmp_name_name_17 = const_str_digest_5ee67fa6fdaaa14d18297a729785cb77;
    tmp_globals_name_17 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_17 = Py_None;
    tmp_fromlist_name_17 = const_tuple_141e9831c8af9267934868d0a9edb60a_tuple;
    tmp_level_name_17 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 40;
    tmp_assign_source_22 = IMPORT_MODULE5( tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17, tmp_level_name_17 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_22;

    // Tried code:
    tmp_import_name_from_13 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_SSHException );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_SSHException, tmp_assign_source_23 );
    tmp_import_name_from_14 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_BadHostKeyException );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_BadHostKeyException, tmp_assign_source_24 );
    tmp_import_name_from_15 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_NoValidConnectionsError );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_NoValidConnectionsError, tmp_assign_source_25 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_name_name_18 = const_str_digest_8f2488a9b1a09b5004380be01694df85;
    tmp_globals_name_18 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_18 = Py_None;
    tmp_fromlist_name_18 = const_tuple_str_plain_Transport_tuple;
    tmp_level_name_18 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 43;
    tmp_import_name_from_16 = IMPORT_MODULE5( tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18, tmp_level_name_18 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_Transport );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_Transport, tmp_assign_source_26 );
    tmp_name_name_19 = const_str_digest_0a8ea2be9ef72d93cf478f16ac4f103c;
    tmp_globals_name_19 = (PyObject *)moduledict_paramiko$client;
    tmp_locals_name_19 = Py_None;
    tmp_fromlist_name_19 = const_tuple_str_plain_retry_on_signal_str_plain_ClosingContextManager_tuple;
    tmp_level_name_19 = const_int_0;
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 44;
    tmp_assign_source_27 = IMPORT_MODULE5( tmp_name_name_19, tmp_globals_name_19, tmp_locals_name_19, tmp_fromlist_name_19, tmp_level_name_19 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_27;

    // Tried code:
    tmp_import_name_from_17 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_retry_on_signal );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_retry_on_signal, tmp_assign_source_28 );
    tmp_import_name_from_18 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_ClosingContextManager );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_ClosingContextManager, tmp_assign_source_29 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Tried code:
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_ClosingContextManager );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClosingContextManager );
    }

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ClosingContextManager" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;

        goto try_except_handler_3;
    }

    tmp_assign_source_30 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_30, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_30;

    tmp_assign_source_31 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_31;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto try_except_handler_3;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

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


        exception_lineno = 47;

        goto try_except_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto try_except_handler_3;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto try_except_handler_3;
    }
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_32 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto try_except_handler_3;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_32;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto try_except_handler_3;
    }
    tmp_cond_value_2 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

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


        exception_lineno = 47;

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


        exception_lineno = 47;

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


        exception_lineno = 47;

        goto try_except_handler_3;
    }
    tmp_tuple_element_2 = const_str_plain_SSHClient;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 47;
    tmp_assign_source_33 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto try_except_handler_3;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_33 = PyDict_New();
    condexpr_end_2:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_33;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_paramiko$client_47 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_377ce7846e0f5871c80e88c27c40a3cc;
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto try_except_handler_5;
    }
    tmp_dictset_value = const_str_digest_2d305664b402ace7853080f45df379f3;
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto try_except_handler_5;
    }
    tmp_dictset_value = const_str_plain_SSHClient;
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto try_except_handler_5;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_3115c91d5024f1ad6c2124c93e8bc01d_2, codeobj_3115c91d5024f1ad6c2124c93e8bc01d, module_paramiko$client, sizeof(void *) );
    frame_3115c91d5024f1ad6c2124c93e8bc01d_2 = cache_frame_3115c91d5024f1ad6c2124c93e8bc01d_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3115c91d5024f1ad6c2124c93e8bc01d_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3115c91d5024f1ad6c2124c93e8bc01d_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_1___init__(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_2_load_system_host_keys( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain_load_system_host_keys, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_3_load_host_keys(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain_load_host_keys, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_4_save_host_keys(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain_save_host_keys, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_5_get_host_keys(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain_get_host_keys, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_6_set_log_channel(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain_set_log_channel, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_7_set_missing_host_key_policy(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain_set_missing_host_key_policy, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_8__families_and_addresses(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain__families_and_addresses, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_tuple_element_3 = PyObject_GetItem( locals_paramiko$client_47, const_str_plain_SSH_PORT );

    if ( tmp_tuple_element_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_SSH_PORT );

        if (unlikely( tmp_tuple_element_3 == NULL ))
        {
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSH_PORT );
        }

        if ( tmp_tuple_element_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SSH_PORT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 216;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_defaults_2 = PyTuple_New( 18 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_None;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_None;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 2, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_None;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 3, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_None;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 4, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_None;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 5, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_True;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 6, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_True;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 7, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_False;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 8, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_None;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 9, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_False;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 10, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_False;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 11, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_True;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 12, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_None;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 13, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_None;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 14, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_None;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 15, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_True;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 16, tmp_tuple_element_3 );
    tmp_tuple_element_3 = Py_None;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_2, 17, tmp_tuple_element_3 );
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_9_connect( tmp_defaults_2 );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain_connect, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_10_close(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain_close, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 427;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_3 = const_tuple_int_neg_1_none_false_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_11_exec_command( tmp_defaults_3 );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain_exec_command, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 446;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_4 = const_tuple_str_plain_vt100_int_pos_80_int_pos_24_int_0_int_0_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_12_invoke_shell( tmp_defaults_4 );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain_invoke_shell, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 492;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_13_open_sftp(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain_open_sftp, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_14_get_transport(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain_get_transport, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 523;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_15__key_from_filepath(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain__key_from_filepath, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 533;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_16__auth(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain__auth, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 565;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_17__log(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_47, const_str_plain__log, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 717;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3115c91d5024f1ad6c2124c93e8bc01d_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3115c91d5024f1ad6c2124c93e8bc01d_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3115c91d5024f1ad6c2124c93e8bc01d_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3115c91d5024f1ad6c2124c93e8bc01d_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3115c91d5024f1ad6c2124c93e8bc01d_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3115c91d5024f1ad6c2124c93e8bc01d_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_3115c91d5024f1ad6c2124c93e8bc01d_2 == cache_frame_3115c91d5024f1ad6c2124c93e8bc01d_2 )
    {
        Py_DECREF( frame_3115c91d5024f1ad6c2124c93e8bc01d_2 );
    }
    cache_frame_3115c91d5024f1ad6c2124c93e8bc01d_2 = NULL;

    assertFrameObject( frame_3115c91d5024f1ad6c2124c93e8bc01d_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_5;
    skip_nested_handling_1:;
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_4 = const_str_plain_SSHClient;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_paramiko$client_47;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 47;
    tmp_assign_source_35 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto try_except_handler_5;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_35;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    Py_DECREF( locals_paramiko$client_47 );
    locals_paramiko$client_47 = NULL;
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

    Py_DECREF( locals_paramiko$client_47 );
    locals_paramiko$client_47 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client );
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
    NUITKA_CANNOT_GET_HERE( paramiko$client );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 47;
    goto try_except_handler_3;
    outline_result_1:;
    tmp_assign_source_34 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_SSHClient, tmp_assign_source_34 );
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
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
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    tmp_assign_source_36 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_36;

    // Tried code:
    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 721;

        goto try_except_handler_6;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 721;

        goto try_except_handler_6;
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


        exception_lineno = 721;

        goto try_except_handler_6;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_metaclass_name_2 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_2 != NULL );
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_3:;
    tmp_bases_name_2 = const_tuple_type_object_tuple;
    tmp_assign_source_37 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 721;

        goto try_except_handler_6;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_37;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 721;

        goto try_except_handler_6;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 721;

        goto try_except_handler_6;
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


        exception_lineno = 721;

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


        exception_lineno = 721;

        goto try_except_handler_6;
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


        exception_lineno = 721;

        goto try_except_handler_6;
    }
    tmp_args_name_3 = const_tuple_str_plain_MissingHostKeyPolicy_tuple_type_object_tuple_tuple;
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 721;
    tmp_assign_source_38 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 721;

        goto try_except_handler_6;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_38 = PyDict_New();
    condexpr_end_4:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_38;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_paramiko$client_721 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_377ce7846e0f5871c80e88c27c40a3cc;
    tmp_res = PyObject_SetItem( locals_paramiko$client_721, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 721;

        goto try_except_handler_8;
    }
    tmp_dictset_value = const_str_digest_6dc79aba50bb798e3558246a40989c2a;
    tmp_res = PyObject_SetItem( locals_paramiko$client_721, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 721;

        goto try_except_handler_8;
    }
    tmp_dictset_value = const_str_plain_MissingHostKeyPolicy;
    tmp_res = PyObject_SetItem( locals_paramiko$client_721, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 721;

        goto try_except_handler_8;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_0cfb707fc637fa6848149d46c0ab33ce_3, codeobj_0cfb707fc637fa6848149d46c0ab33ce, module_paramiko$client, sizeof(void *) );
    frame_0cfb707fc637fa6848149d46c0ab33ce_3 = cache_frame_0cfb707fc637fa6848149d46c0ab33ce_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0cfb707fc637fa6848149d46c0ab33ce_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0cfb707fc637fa6848149d46c0ab33ce_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_18_missing_host_key(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_721, const_str_plain_missing_host_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 732;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0cfb707fc637fa6848149d46c0ab33ce_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0cfb707fc637fa6848149d46c0ab33ce_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0cfb707fc637fa6848149d46c0ab33ce_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0cfb707fc637fa6848149d46c0ab33ce_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0cfb707fc637fa6848149d46c0ab33ce_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0cfb707fc637fa6848149d46c0ab33ce_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_0cfb707fc637fa6848149d46c0ab33ce_3 == cache_frame_0cfb707fc637fa6848149d46c0ab33ce_3 )
    {
        Py_DECREF( frame_0cfb707fc637fa6848149d46c0ab33ce_3 );
    }
    cache_frame_0cfb707fc637fa6848149d46c0ab33ce_3 = NULL;

    assertFrameObject( frame_0cfb707fc637fa6848149d46c0ab33ce_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_8;
    skip_nested_handling_2:;
    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_tuple_element_5 = const_str_plain_MissingHostKeyPolicy;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = locals_paramiko$client_721;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_5 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 721;
    tmp_assign_source_40 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 721;

        goto try_except_handler_8;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_40;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    Py_DECREF( locals_paramiko$client_721 );
    locals_paramiko$client_721 = NULL;
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

    Py_DECREF( locals_paramiko$client_721 );
    locals_paramiko$client_721 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client );
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
    NUITKA_CANNOT_GET_HERE( paramiko$client );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 721;
    goto try_except_handler_6;
    outline_result_2:;
    tmp_assign_source_39 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_MissingHostKeyPolicy, tmp_assign_source_39 );
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
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_MissingHostKeyPolicy );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MissingHostKeyPolicy );
    }

    if ( tmp_tuple_element_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MissingHostKeyPolicy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 742;

        goto try_except_handler_9;
    }

    tmp_assign_source_41 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_41, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_41;

    tmp_assign_source_42 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_42;

    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;

        goto try_except_handler_9;
    }
    tmp_cond_value_5 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;

        goto try_except_handler_9;
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
    tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_8 );
    tmp_key_name_8 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;

        goto try_except_handler_9;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_subscribed_name_2 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;

        goto try_except_handler_9;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;

        goto try_except_handler_9;
    }
    condexpr_end_5:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_43 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;

        goto try_except_handler_9;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_43;

    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;

        goto try_except_handler_9;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;

        goto try_except_handler_9;
    }
    if ( tmp_cond_truth_6 == 1 )
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


        exception_lineno = 742;

        goto try_except_handler_9;
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


        exception_lineno = 742;

        goto try_except_handler_9;
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
    tmp_source_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;

        goto try_except_handler_9;
    }
    tmp_tuple_element_7 = const_str_plain_AutoAddPolicy;
    tmp_args_name_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_7 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 742;
    tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;

        goto try_except_handler_9;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_44 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_44;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_paramiko$client_742 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_377ce7846e0f5871c80e88c27c40a3cc;
    tmp_res = PyObject_SetItem( locals_paramiko$client_742, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;

        goto try_except_handler_11;
    }
    tmp_dictset_value = const_str_digest_aa18a2d1875ae8dc5507423d515070fb;
    tmp_res = PyObject_SetItem( locals_paramiko$client_742, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;

        goto try_except_handler_11;
    }
    tmp_dictset_value = const_str_plain_AutoAddPolicy;
    tmp_res = PyObject_SetItem( locals_paramiko$client_742, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;

        goto try_except_handler_11;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_03bb342e1f5ebefc75c13623cecfd549_4, codeobj_03bb342e1f5ebefc75c13623cecfd549, module_paramiko$client, sizeof(void *) );
    frame_03bb342e1f5ebefc75c13623cecfd549_4 = cache_frame_03bb342e1f5ebefc75c13623cecfd549_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_03bb342e1f5ebefc75c13623cecfd549_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_03bb342e1f5ebefc75c13623cecfd549_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_19_missing_host_key(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_742, const_str_plain_missing_host_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 748;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_03bb342e1f5ebefc75c13623cecfd549_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_03bb342e1f5ebefc75c13623cecfd549_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_03bb342e1f5ebefc75c13623cecfd549_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_03bb342e1f5ebefc75c13623cecfd549_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_03bb342e1f5ebefc75c13623cecfd549_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_03bb342e1f5ebefc75c13623cecfd549_4,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_03bb342e1f5ebefc75c13623cecfd549_4 == cache_frame_03bb342e1f5ebefc75c13623cecfd549_4 )
    {
        Py_DECREF( frame_03bb342e1f5ebefc75c13623cecfd549_4 );
    }
    cache_frame_03bb342e1f5ebefc75c13623cecfd549_4 = NULL;

    assertFrameObject( frame_03bb342e1f5ebefc75c13623cecfd549_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_11;
    skip_nested_handling_3:;
    tmp_called_name_6 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_tuple_element_8 = const_str_plain_AutoAddPolicy;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_8 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = locals_paramiko$client_742;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_8 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 742;
    tmp_assign_source_46 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 742;

        goto try_except_handler_11;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_46;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_11;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    Py_DECREF( locals_paramiko$client_742 );
    locals_paramiko$client_742 = NULL;
    goto try_return_handler_10;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_paramiko$client_742 );
    locals_paramiko$client_742 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_10;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    goto outline_result_3;
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

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 742;
    goto try_except_handler_9;
    outline_result_3:;
    tmp_assign_source_45 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_AutoAddPolicy, tmp_assign_source_45 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Tried code:
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_MissingHostKeyPolicy );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MissingHostKeyPolicy );
    }

    if ( tmp_tuple_element_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MissingHostKeyPolicy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 757;

        goto try_except_handler_12;
    }

    tmp_assign_source_47 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_47, 0, tmp_tuple_element_9 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_47;

    tmp_assign_source_48 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_48;

    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;

        goto try_except_handler_12;
    }
    tmp_cond_value_7 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;

        goto try_except_handler_12;
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
    tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_11 );
    tmp_key_name_11 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;

        goto try_except_handler_12;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_subscribed_name_3 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;

        goto try_except_handler_12;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;

        goto try_except_handler_12;
    }
    condexpr_end_7:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_bases_name_4 );
    tmp_assign_source_49 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;

        goto try_except_handler_12;
    }
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_49;

    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;

        goto try_except_handler_12;
    }
    tmp_cond_value_8 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;

        goto try_except_handler_12;
    }
    if ( tmp_cond_truth_8 == 1 )
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


        exception_lineno = 757;

        goto try_except_handler_12;
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


        exception_lineno = 757;

        goto try_except_handler_12;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_source_name_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;

        goto try_except_handler_12;
    }
    tmp_tuple_element_10 = const_str_plain_RejectPolicy;
    tmp_args_name_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_10 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_10 );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 757;
    tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;

        goto try_except_handler_12;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_assign_source_50 = PyDict_New();
    condexpr_end_8:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_50;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_paramiko$client_757 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_377ce7846e0f5871c80e88c27c40a3cc;
    tmp_res = PyObject_SetItem( locals_paramiko$client_757, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;

        goto try_except_handler_14;
    }
    tmp_dictset_value = const_str_digest_d2c3e63dd3150de342a7a27f43d1a582;
    tmp_res = PyObject_SetItem( locals_paramiko$client_757, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;

        goto try_except_handler_14;
    }
    tmp_dictset_value = const_str_plain_RejectPolicy;
    tmp_res = PyObject_SetItem( locals_paramiko$client_757, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;

        goto try_except_handler_14;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_57554c3a0dd3d3eb82775d68860edb38_5, codeobj_57554c3a0dd3d3eb82775d68860edb38, module_paramiko$client, sizeof(void *) );
    frame_57554c3a0dd3d3eb82775d68860edb38_5 = cache_frame_57554c3a0dd3d3eb82775d68860edb38_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_57554c3a0dd3d3eb82775d68860edb38_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_57554c3a0dd3d3eb82775d68860edb38_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_20_missing_host_key(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_757, const_str_plain_missing_host_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 763;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_57554c3a0dd3d3eb82775d68860edb38_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_57554c3a0dd3d3eb82775d68860edb38_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_57554c3a0dd3d3eb82775d68860edb38_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_57554c3a0dd3d3eb82775d68860edb38_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_57554c3a0dd3d3eb82775d68860edb38_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_57554c3a0dd3d3eb82775d68860edb38_5,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_57554c3a0dd3d3eb82775d68860edb38_5 == cache_frame_57554c3a0dd3d3eb82775d68860edb38_5 )
    {
        Py_DECREF( frame_57554c3a0dd3d3eb82775d68860edb38_5 );
    }
    cache_frame_57554c3a0dd3d3eb82775d68860edb38_5 = NULL;

    assertFrameObject( frame_57554c3a0dd3d3eb82775d68860edb38_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_14;
    skip_nested_handling_4:;
    tmp_called_name_8 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_tuple_element_11 = const_str_plain_RejectPolicy;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_11 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_11 );
    tmp_tuple_element_11 = locals_paramiko$client_757;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_11 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 757;
    tmp_assign_source_52 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 757;

        goto try_except_handler_14;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_52;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    Py_DECREF( locals_paramiko$client_757 );
    locals_paramiko$client_757 = NULL;
    goto try_return_handler_13;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_paramiko$client_757 );
    locals_paramiko$client_757 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_13;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    goto outline_result_4;
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

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 757;
    goto try_except_handler_12;
    outline_result_4:;
    tmp_assign_source_51 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_RejectPolicy, tmp_assign_source_51 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Tried code:
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_MissingHostKeyPolicy );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MissingHostKeyPolicy );
    }

    if ( tmp_tuple_element_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MissingHostKeyPolicy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 772;

        goto try_except_handler_15;
    }

    tmp_assign_source_53 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_assign_source_53, 0, tmp_tuple_element_12 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_53;

    tmp_assign_source_54 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_54;

    tmp_key_name_13 = const_str_plain_metaclass;
    tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_13 );
    tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;

        goto try_except_handler_15;
    }
    tmp_cond_value_9 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;

        goto try_except_handler_15;
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
    tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_14 );
    tmp_key_name_14 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;

        goto try_except_handler_15;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_subscribed_name_4 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_type_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;

        goto try_except_handler_15;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;

        goto try_except_handler_15;
    }
    condexpr_end_9:;
    tmp_bases_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_bases_name_5 );
    tmp_assign_source_55 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    Py_DECREF( tmp_metaclass_name_5 );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;

        goto try_except_handler_15;
    }
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_55;

    tmp_key_name_15 = const_str_plain_metaclass;
    tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_15 );
    tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;

        goto try_except_handler_15;
    }
    tmp_cond_value_10 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;

        goto try_except_handler_15;
    }
    if ( tmp_cond_truth_10 == 1 )
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


        exception_lineno = 772;

        goto try_except_handler_15;
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


        exception_lineno = 772;

        goto try_except_handler_15;
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
    tmp_source_name_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;

        goto try_except_handler_15;
    }
    tmp_tuple_element_13 = const_str_plain_WarningPolicy;
    tmp_args_name_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_13 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_13 );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 772;
    tmp_assign_source_56 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;

        goto try_except_handler_15;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_assign_source_56 = PyDict_New();
    condexpr_end_10:;
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_56;

    tmp_set_locals = tmp_class_creation_5__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_paramiko$client_772 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_377ce7846e0f5871c80e88c27c40a3cc;
    tmp_res = PyObject_SetItem( locals_paramiko$client_772, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;

        goto try_except_handler_17;
    }
    tmp_dictset_value = const_str_digest_c9e8f151c58da101aa05ec1643654e6f;
    tmp_res = PyObject_SetItem( locals_paramiko$client_772, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;

        goto try_except_handler_17;
    }
    tmp_dictset_value = const_str_plain_WarningPolicy;
    tmp_res = PyObject_SetItem( locals_paramiko$client_772, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;

        goto try_except_handler_17;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_d32697446a19e621384df5dd255544a5_6, codeobj_d32697446a19e621384df5dd255544a5, module_paramiko$client, sizeof(void *) );
    frame_d32697446a19e621384df5dd255544a5_6 = cache_frame_d32697446a19e621384df5dd255544a5_6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d32697446a19e621384df5dd255544a5_6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d32697446a19e621384df5dd255544a5_6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_paramiko$client$$$function_21_missing_host_key(  );
    tmp_res = PyObject_SetItem( locals_paramiko$client_772, const_str_plain_missing_host_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 777;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d32697446a19e621384df5dd255544a5_6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;

    frame_exception_exit_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d32697446a19e621384df5dd255544a5_6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d32697446a19e621384df5dd255544a5_6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d32697446a19e621384df5dd255544a5_6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d32697446a19e621384df5dd255544a5_6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d32697446a19e621384df5dd255544a5_6,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_d32697446a19e621384df5dd255544a5_6 == cache_frame_d32697446a19e621384df5dd255544a5_6 )
    {
        Py_DECREF( frame_d32697446a19e621384df5dd255544a5_6 );
    }
    cache_frame_d32697446a19e621384df5dd255544a5_6 = NULL;

    assertFrameObject( frame_d32697446a19e621384df5dd255544a5_6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;

    frame_no_exception_5:;

    goto skip_nested_handling_5;
    nested_frame_exit_5:;

    goto try_except_handler_17;
    skip_nested_handling_5:;
    tmp_called_name_10 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_tuple_element_14 = const_str_plain_WarningPolicy;
    tmp_args_name_10 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_14 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_14 );
    tmp_tuple_element_14 = locals_paramiko$client_772;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_14 );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_10 );
    frame_0ec79ecb6e2af9551050209ab7b828df->m_frame.f_lineno = 772;
    tmp_assign_source_58 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;

        goto try_except_handler_17;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_58;

    tmp_outline_return_value_5 = outline_4_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_5 );
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_17;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_17:;
    Py_DECREF( locals_paramiko$client_772 );
    locals_paramiko$client_772 = NULL;
    goto try_return_handler_16;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_paramiko$client_772 );
    locals_paramiko$client_772 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_16;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$client );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    goto outline_result_5;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$client );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 772;
    goto try_except_handler_15;
    outline_result_5:;
    tmp_assign_source_57 = tmp_outline_return_value_5;
    UPDATE_STRING_DICT1( moduledict_paramiko$client, (Nuitka_StringObject *)const_str_plain_WarningPolicy, tmp_assign_source_57 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ec79ecb6e2af9551050209ab7b828df );
#endif
    popFrameStack();

    assertFrameObject( frame_0ec79ecb6e2af9551050209ab7b828df );

    goto frame_no_exception_6;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ec79ecb6e2af9551050209ab7b828df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0ec79ecb6e2af9551050209ab7b828df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0ec79ecb6e2af9551050209ab7b828df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0ec79ecb6e2af9551050209ab7b828df, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__prepared );
    Py_DECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;


    return MOD_RETURN_VALUE( module_paramiko$client );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

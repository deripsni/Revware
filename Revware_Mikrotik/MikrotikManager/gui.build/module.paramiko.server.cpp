/* Generated code for Python source for module 'paramiko.server'
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

/* The _module_paramiko$server is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_paramiko$server;
PyDictObject *moduledict_paramiko$server;

/* The module constants used, if any. */
extern PyObject *const_str_plain_threading;
static PyObject *const_str_digest_11cf970be09182572f75cc4bb7b4620c;
extern PyObject *const_str_plain_check_auth_gssapi_with_mic;
extern PyObject *const_tuple_str_plain_self_str_plain_username_tuple;
static PyObject *const_tuple_0f2c83bf580f7ab6df63a9c11392cfdf_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain__get_subsystem_handler;
static PyObject *const_str_plain__SubsystemHandler__channel;
static PyObject *const_str_digest_4dc8dcbcf5838ed5b58f9e076232ceab;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_check_port_forward_request;
static PyObject *const_str_digest_a7e00b986640b50aeefd3b55353dd22a;
extern PyObject *const_str_plain_check_channel_env_request;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_bd8784842f3d59d86770fd197deb56e9;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_handler;
static PyObject *const_str_digest_5eb0304b341ecd12be71a7d923e45f55;
static PyObject *const_tuple_str_plain_ServerInterface_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_33b83ed9006bb43fce2d9f30a0e54744;
static PyObject *const_str_digest_e65a7a8b6b12b7371d7efaa277f9d1bc;
extern PyObject *const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED;
extern PyObject *const_str_plain_AUTH_SUCCESSFUL;
static PyObject *const_str_digest_7e04d6b79760b566e988ae8e4346e6e7;
static PyObject *const_tuple_str_plain_self_str_plain_channel_str_plain_command_tuple;
static PyObject *const_str_digest_0f721d92b2caa9440ba997bca9f7d9c1;
static PyObject *const_str_digest_24898269aa579466e5ca68ce5bb3f771;
static PyObject *const_str_digest_5e7dd0d60a2c9e39619aab70fd815d06;
extern PyObject *const_str_plain_cc_file;
static PyObject *const_str_digest_bc216c3b1732bb02734b602599ffe277;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_87ff3a2385d6c4879f9bcc561418ecd9;
extern PyObject *const_str_plain_start_subsystem;
extern PyObject *const_str_plain_AUTH_FAILED;
static PyObject *const_str_plain__SubsystemHandler__transport;
extern PyObject *const_str_plain_check_auth_publickey;
static PyObject *const_str_digest_5c2e57d51a1167c9b4fc2f6e7eca0849;
static PyObject *const_str_digest_4c70796efe5d547775a110ddc3f54cc0;
static PyObject *const_tuple_str_plain_self_str_plain_kind_str_plain_msg_tuple;
extern PyObject *const_str_plain_command;
extern PyObject *const_str_plain_chanid;
extern PyObject *const_str_plain_term;
extern PyObject *const_str_plain_start;
static PyObject *const_str_digest_675b7929208e2ca7789b909cc2b088fa;
static PyObject *const_tuple_5f55193d805484e8af1286ec06d96326_tuple;
extern PyObject *const_tuple_true_tuple;
static PyObject *const_str_digest_00fcfca0338ae033752ed044ed7d5d2b;
static PyObject *const_str_digest_c498738e96816e0339459e4d385aea8d;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_check_channel_window_change_request;
extern PyObject *const_str_plain_close;
static PyObject *const_str_digest_1954d5db7156e2a80eea467fc8e5e83a;
extern PyObject *const_str_plain_pixelwidth;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_cancel_port_forward_request;
static PyObject *const_tuple_str_plain_self_str_plain_username_str_plain_submethods_tuple;
static PyObject *const_str_digest_19595cde5e6e87af9e8a2f53dce743f4;
static PyObject *const_str_digest_ce5388e010eb6d5433168bdb50e1ecd1;
extern PyObject *const_str_plain_check_channel_direct_tcpip_request;
extern PyObject *const_str_plain_larg;
extern PyObject *const_str_plain_screen_number;
extern PyObject *const_str_plain_string_types;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_8fda8270d584781e857a7c1a0b983644;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_prompt;
static PyObject *const_str_digest_fbac150dc02dc1ceb7ba494bb1d2e35f;
static PyObject *const_str_digest_aaff705aa612b37b7010072e5916a113;
extern PyObject *const_str_plain_height;
static PyObject *const_str_digest_c338ea54086ff35b98fba197aaaaa5a4;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_check_global_request;
extern PyObject *const_str_plain_check_channel_shell_request;
extern PyObject *const_str_plain_True;
extern PyObject *const_str_plain_single_connection;
static PyObject *const_tuple_bb94c157cad6dd376dd98e7eda66d071_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_ServerInterface;
extern PyObject *const_str_plain_username;
extern PyObject *const_str_digest_043a098e3c8c7e01497500bb854d02ab;
static PyObject *const_tuple_c07ed4367ad68a9d3cfc7d9d6c17855b_tuple;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple;
extern PyObject *const_str_plain_check_auth_gssapi_keyex;
static PyObject *const_str_digest_2f5a7a083ebb4a5091c91ac807b2ce67;
static PyObject *const_str_digest_5acc948f94210cd7d5b18b2465e605df;
static PyObject *const_str_digest_046ec8b441ffe4b1d1bd62de05ff7578;
extern PyObject *const_str_plain_instructions;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_get_transport;
static PyObject *const_tuple_d304474fdacd426d5cf019af85c89b13_tuple;
static PyObject *const_str_digest_c654c95d59b505eb807852f17ca685dd;
extern PyObject *const_str_plain_SubsystemHandler;
extern PyObject *const_str_plain_get_allowed_auths;
static PyObject *const_str_digest_384a493d412fa52e5b4dcfad50bbbfb7;
static PyObject *const_tuple_str_plain_self_str_plain_UseGSSAPI_tuple;
extern PyObject *const_str_plain_util;
static PyObject *const_str_digest_c77d886242109deb57067b65c432f10b;
extern PyObject *const_str_plain_channel;
static PyObject *const_str_plain_gss_authenticated;
static PyObject *const_str_digest_e63e703699cc72d43a5d1dc62c595576;
static PyObject *const_str_digest_29f5a6cb5e98ca82288f3947b5c1a0f4;
static PyObject *const_str_digest_dd163053c4bb7a84360f48fe05506c84;
static PyObject *const_str_digest_e5a619d3614824ffa3b577c26ad1f1e4;
static PyObject *const_str_digest_b589acde3baacc3b29295df1a9d3f450;
extern PyObject *const_str_plain_InteractiveQuery;
static PyObject *const_str_digest_f5d5d3512f3ee60a892ceda8fbbd5bb8;
extern PyObject *const_str_plain_False;
static PyObject *const_str_digest_14c8d32eeadf1ea437398d23d46fa9a3;
extern PyObject *const_str_plain_check_channel_forward_agent_request;
static PyObject *const_str_digest_5f2d77f17d703676ba26f56d7879530b;
static PyObject *const_tuple_6b78579b4b8896fa794c1140cbda5e59_tuple;
static PyObject *const_str_digest_2d270d851eebdbb9ca3bab7128eec43e;
extern PyObject *const_str_plain_paramiko;
static PyObject *const_str_plain_add_prompt;
static PyObject *const_str_digest_bc14b1f977359a2e90b090491f5ae7bd;
static PyObject *const_str_digest_9270188b898858037d149aa5017dd61a;
extern PyObject *const_str_digest_ea4545ce436c53c4b49eb5bf04d640b4;
extern PyObject *const_int_0;
static PyObject *const_str_digest_781ee8ba710834750f0dfde0d9bf852c;
static PyObject *const_str_digest_a858fd74697cd163baaa4ae6dcd45eca;
static PyObject *const_str_digest_9370fc6e3986edb06b86f8220c683230;
static PyObject *const_str_digest_7edbe79e373c371841f831794316e4cd;
static PyObject *const_str_digest_a0f0e4b43056ca8b6129708d5d6497ab;
extern PyObject *const_str_plain_submethods;
extern PyObject *const_str_plain_msg;
static PyObject *const_str_plain_origin;
static PyObject *const_str_digest_35af78164b2682305add33281df873bf;
extern PyObject *const_str_digest_af46dc626906b3459f8298b3797a94e5;
extern PyObject *const_tuple_str_plain_util_tuple;
static PyObject *const_str_digest_6763ed1bfbaeda95889ecc2cfbdf1d75;
static PyObject *const_str_plain_get_server;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_str_plain_string_types_tuple;
extern PyObject *const_str_plain_responses;
extern PyObject *const_str_plain_finish_subsystem;
extern PyObject *const_str_plain_check_channel_exec_request;
static PyObject *const_str_plain_echo;
static PyObject *const_str_digest_e7748e264ae6ddd32fd16daed8429b20;
static PyObject *const_tuple_str_empty_str_empty_tuple;
static PyObject *const_str_digest_f5f9ae8bbeb913e7d11da84553058d6c;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_Thread;
static PyObject *const_tuple_str_plain_self_str_plain_username_str_plain_key_tuple;
static PyObject *const_str_plain_UseGSSAPI;
extern PyObject *const_str_plain__log;
static PyObject *const_str_digest_ae6e25f291c96d56b6249953d68d27a1;
static PyObject *const_str_digest_321cea67e69a78284a28990b1ee5c91e;
static PyObject *const_str_digest_33abaca4579652e388480a2fffe9a639;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_prompts;
static PyObject *const_tuple_str_plain_self_str_plain_prompt_str_plain_echo_tuple;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_enable_auth_gssapi;
static PyObject *const_str_digest_78e8ab2588b180fa352899e21cafb856;
static PyObject *const_tuple_d74429486ae25ca2d7573777b8fbefba_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_kind_str_plain_chanid_tuple;
static PyObject *const_str_digest_f94959ac795225dbf0db0c2824df1360;
extern PyObject *const_tuple_str_plain_self_str_plain_e_tuple;
extern PyObject *const_str_plain_password;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_check_auth_interactive;
extern PyObject *const_str_plain_check_channel_x11_request;
static PyObject *const_str_digest_0ba5aa85fedffb8a30c3ebe77d9f29a7;
extern PyObject *const_str_plain_kind;
static PyObject *const_str_digest_8f61f1df3d70c6af89b69b60fc4bce75;
extern PyObject *const_str_plain_check_channel_subsystem_request;
extern PyObject *const_str_plain_kwarg;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain_self_str_plain_responses_tuple;
extern PyObject *const_str_plain_pixelheight;
extern PyObject *const_str_plain_check_auth_none;
extern PyObject *const_str_plain_port;
static PyObject *const_str_plain_handler_class;
static PyObject *const_tuple_c0fe87472ef68ada760af63e577e3bf5_tuple;
static PyObject *const_str_plain_destination;
static PyObject *const_tuple_0907e99c504314accf60374496b12590_tuple;
static PyObject *const_str_plain__SubsystemHandler__name;
extern PyObject *const_str_plain_width;
extern PyObject *const_str_plain_key;
static PyObject *const_str_digest_035eba801429532d5ee188208bd46dd7;
static PyObject *const_str_digest_49c14e26def2600a6a49a8d2015545a0;
static PyObject *const_tuple_str_plain_InteractiveQuery_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_target;
static PyObject *const_str_digest_4d8c5294faa70caefd3b84fca355d446;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_ERROR;
extern PyObject *const_str_plain_address;
static PyObject *const_str_plain__SubsystemHandler__server;
extern PyObject *const_str_plain_server;
extern PyObject *const_str_plain_auth_protocol;
extern PyObject *const_tuple_str_plain_self_str_plain_channel_tuple;
extern PyObject *const_str_plain_check_auth_password;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_check_auth_interactive_response;
static PyObject *const_str_digest_77a10d90e5371495144b3e9f455fc01f;
extern PyObject *const_str_plain_check_channel_request;
extern PyObject *const_str_plain_transport;
extern PyObject *const_tuple_str_plain_self_str_plain_address_str_plain_port_tuple;
extern PyObject *const_str_plain_DEBUG;
static PyObject *const_str_digest_c360fe18953ab1120472b01357171a36;
extern PyObject *const_str_plain_check_channel_pty_request;
static PyObject *const_tuple_c678b4f22fd053d1bbbee117998a84aa_tuple;
static PyObject *const_str_digest_a034a61d6e82ac53ec4209f79732cc27;
extern PyObject *const_str_plain_auth_cookie;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_tb_strings;
static PyObject *const_str_digest_d41258fcdd0d32982c67d7e33edc1783;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_modes;
static PyObject *const_str_digest_1d2be4badc6ad05492f52204b49da50a;
extern PyObject *const_str_plain_get_banner;
static PyObject *const_str_digest_5fa6b1b42367eb6f15013bf0dad90d69;
static PyObject *const_str_plain__run;
static PyObject *const_tuple_d135b7cc6c9a9d1979b06ddbb3b0ca47_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_11cf970be09182572f75cc4bb7b4620c = UNSTREAM_STRING( &constant_bin[ 490130 ], 47, 0 );
    const_tuple_0f2c83bf580f7ab6df63a9c11392cfdf_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0f2c83bf580f7ab6df63a9c11392cfdf_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0f2c83bf580f7ab6df63a9c11392cfdf_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_0f2c83bf580f7ab6df63a9c11392cfdf_tuple, 2, const_str_plain_transport ); Py_INCREF( const_str_plain_transport );
    PyTuple_SET_ITEM( const_tuple_0f2c83bf580f7ab6df63a9c11392cfdf_tuple, 3, const_str_plain_channel ); Py_INCREF( const_str_plain_channel );
    const_str_plain__SubsystemHandler__channel = UNSTREAM_STRING( &constant_bin[ 490177 ], 26, 1 );
    const_str_digest_4dc8dcbcf5838ed5b58f9e076232ceab = UNSTREAM_STRING( &constant_bin[ 490203 ], 471, 0 );
    const_str_digest_a7e00b986640b50aeefd3b55353dd22a = UNSTREAM_STRING( &constant_bin[ 490674 ], 1838, 0 );
    const_str_digest_bd8784842f3d59d86770fd197deb56e9 = UNSTREAM_STRING( &constant_bin[ 492512 ], 80, 0 );
    const_str_digest_5eb0304b341ecd12be71a7d923e45f55 = UNSTREAM_STRING( &constant_bin[ 492592 ], 25, 0 );
    const_tuple_str_plain_ServerInterface_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ServerInterface_tuple_type_object_tuple_tuple, 0, const_str_plain_ServerInterface ); Py_INCREF( const_str_plain_ServerInterface );
    PyTuple_SET_ITEM( const_tuple_str_plain_ServerInterface_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_33b83ed9006bb43fce2d9f30a0e54744 = UNSTREAM_STRING( &constant_bin[ 492617 ], 43, 0 );
    const_str_digest_e65a7a8b6b12b7371d7efaa277f9d1bc = UNSTREAM_STRING( &constant_bin[ 492660 ], 817, 0 );
    const_str_digest_7e04d6b79760b566e988ae8e4346e6e7 = UNSTREAM_STRING( &constant_bin[ 493477 ], 391, 0 );
    const_tuple_str_plain_self_str_plain_channel_str_plain_command_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_channel_str_plain_command_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_channel_str_plain_command_tuple, 1, const_str_plain_channel ); Py_INCREF( const_str_plain_channel );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_channel_str_plain_command_tuple, 2, const_str_plain_command ); Py_INCREF( const_str_plain_command );
    const_str_digest_0f721d92b2caa9440ba997bca9f7d9c1 = UNSTREAM_STRING( &constant_bin[ 493868 ], 1476, 0 );
    const_str_digest_24898269aa579466e5ca68ce5bb3f771 = UNSTREAM_STRING( &constant_bin[ 495344 ], 42, 0 );
    const_str_digest_5e7dd0d60a2c9e39619aab70fd815d06 = UNSTREAM_STRING( &constant_bin[ 495386 ], 51, 0 );
    const_str_digest_bc216c3b1732bb02734b602599ffe277 = UNSTREAM_STRING( &constant_bin[ 495437 ], 41, 0 );
    const_str_digest_87ff3a2385d6c4879f9bcc561418ecd9 = UNSTREAM_STRING( &constant_bin[ 495478 ], 1603, 0 );
    const_str_plain__SubsystemHandler__transport = UNSTREAM_STRING( &constant_bin[ 497081 ], 28, 1 );
    const_str_digest_5c2e57d51a1167c9b4fc2f6e7eca0849 = UNSTREAM_STRING( &constant_bin[ 497109 ], 31, 0 );
    const_str_digest_4c70796efe5d547775a110ddc3f54cc0 = UNSTREAM_STRING( &constant_bin[ 497140 ], 42, 0 );
    const_tuple_str_plain_self_str_plain_kind_str_plain_msg_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kind_str_plain_msg_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kind_str_plain_msg_tuple, 1, const_str_plain_kind ); Py_INCREF( const_str_plain_kind );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kind_str_plain_msg_tuple, 2, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_digest_675b7929208e2ca7789b909cc2b088fa = UNSTREAM_STRING( &constant_bin[ 497182 ], 41, 0 );
    const_tuple_5f55193d805484e8af1286ec06d96326_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_5f55193d805484e8af1286ec06d96326_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_5f55193d805484e8af1286ec06d96326_tuple, 1, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    const_str_plain_gss_authenticated = UNSTREAM_STRING( &constant_bin[ 497223 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_5f55193d805484e8af1286ec06d96326_tuple, 2, const_str_plain_gss_authenticated ); Py_INCREF( const_str_plain_gss_authenticated );
    PyTuple_SET_ITEM( const_tuple_5f55193d805484e8af1286ec06d96326_tuple, 3, const_str_plain_cc_file ); Py_INCREF( const_str_plain_cc_file );
    const_str_digest_00fcfca0338ae033752ed044ed7d5d2b = UNSTREAM_STRING( &constant_bin[ 497240 ], 530, 0 );
    const_str_digest_c498738e96816e0339459e4d385aea8d = UNSTREAM_STRING( &constant_bin[ 497770 ], 300, 0 );
    const_str_digest_1954d5db7156e2a80eea467fc8e5e83a = UNSTREAM_STRING( &constant_bin[ 498070 ], 36, 0 );
    const_tuple_str_plain_self_str_plain_username_str_plain_submethods_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_submethods_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_submethods_tuple, 1, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_submethods_tuple, 2, const_str_plain_submethods ); Py_INCREF( const_str_plain_submethods );
    const_str_digest_19595cde5e6e87af9e8a2f53dce743f4 = UNSTREAM_STRING( &constant_bin[ 498106 ], 1376, 0 );
    const_str_digest_ce5388e010eb6d5433168bdb50e1ecd1 = UNSTREAM_STRING( &constant_bin[ 499482 ], 818, 0 );
    const_str_digest_8fda8270d584781e857a7c1a0b983644 = UNSTREAM_STRING( &constant_bin[ 500300 ], 32, 0 );
    const_str_digest_fbac150dc02dc1ceb7ba494bb1d2e35f = UNSTREAM_STRING( &constant_bin[ 500332 ], 796, 0 );
    const_str_digest_aaff705aa612b37b7010072e5916a113 = UNSTREAM_STRING( &constant_bin[ 501128 ], 1220, 0 );
    const_str_digest_c338ea54086ff35b98fba197aaaaa5a4 = UNSTREAM_STRING( &constant_bin[ 502348 ], 249, 0 );
    const_tuple_bb94c157cad6dd376dd98e7eda66d071_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_bb94c157cad6dd376dd98e7eda66d071_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bb94c157cad6dd376dd98e7eda66d071_tuple, 1, const_str_plain_channel ); Py_INCREF( const_str_plain_channel );
    PyTuple_SET_ITEM( const_tuple_bb94c157cad6dd376dd98e7eda66d071_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_bb94c157cad6dd376dd98e7eda66d071_tuple, 3, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_tuple_c07ed4367ad68a9d3cfc7d9d6c17855b_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_c07ed4367ad68a9d3cfc7d9d6c17855b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c07ed4367ad68a9d3cfc7d9d6c17855b_tuple, 1, const_str_plain_channel ); Py_INCREF( const_str_plain_channel );
    PyTuple_SET_ITEM( const_tuple_c07ed4367ad68a9d3cfc7d9d6c17855b_tuple, 2, const_str_plain_term ); Py_INCREF( const_str_plain_term );
    PyTuple_SET_ITEM( const_tuple_c07ed4367ad68a9d3cfc7d9d6c17855b_tuple, 3, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_c07ed4367ad68a9d3cfc7d9d6c17855b_tuple, 4, const_str_plain_height ); Py_INCREF( const_str_plain_height );
    PyTuple_SET_ITEM( const_tuple_c07ed4367ad68a9d3cfc7d9d6c17855b_tuple, 5, const_str_plain_pixelwidth ); Py_INCREF( const_str_plain_pixelwidth );
    PyTuple_SET_ITEM( const_tuple_c07ed4367ad68a9d3cfc7d9d6c17855b_tuple, 6, const_str_plain_pixelheight ); Py_INCREF( const_str_plain_pixelheight );
    PyTuple_SET_ITEM( const_tuple_c07ed4367ad68a9d3cfc7d9d6c17855b_tuple, 7, const_str_plain_modes ); Py_INCREF( const_str_plain_modes );
    const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 1, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 2, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_str_digest_2f5a7a083ebb4a5091c91ac807b2ce67 = UNSTREAM_STRING( &constant_bin[ 502597 ], 42, 0 );
    const_str_digest_5acc948f94210cd7d5b18b2465e605df = UNSTREAM_STRING( &constant_bin[ 502639 ], 34, 0 );
    const_str_digest_046ec8b441ffe4b1d1bd62de05ff7578 = UNSTREAM_STRING( &constant_bin[ 502673 ], 33, 0 );
    const_tuple_d304474fdacd426d5cf019af85c89b13_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_d304474fdacd426d5cf019af85c89b13_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d304474fdacd426d5cf019af85c89b13_tuple, 1, const_str_plain_channel ); Py_INCREF( const_str_plain_channel );
    PyTuple_SET_ITEM( const_tuple_d304474fdacd426d5cf019af85c89b13_tuple, 2, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_d304474fdacd426d5cf019af85c89b13_tuple, 3, const_str_plain_height ); Py_INCREF( const_str_plain_height );
    PyTuple_SET_ITEM( const_tuple_d304474fdacd426d5cf019af85c89b13_tuple, 4, const_str_plain_pixelwidth ); Py_INCREF( const_str_plain_pixelwidth );
    PyTuple_SET_ITEM( const_tuple_d304474fdacd426d5cf019af85c89b13_tuple, 5, const_str_plain_pixelheight ); Py_INCREF( const_str_plain_pixelheight );
    const_str_digest_c654c95d59b505eb807852f17ca685dd = UNSTREAM_STRING( &constant_bin[ 502706 ], 27, 0 );
    const_str_digest_384a493d412fa52e5b4dcfad50bbbfb7 = UNSTREAM_STRING( &constant_bin[ 502733 ], 1074, 0 );
    const_tuple_str_plain_self_str_plain_UseGSSAPI_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_UseGSSAPI_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_UseGSSAPI = UNSTREAM_STRING( &constant_bin[ 503807 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_UseGSSAPI_tuple, 1, const_str_plain_UseGSSAPI ); Py_INCREF( const_str_plain_UseGSSAPI );
    const_str_digest_c77d886242109deb57067b65c432f10b = UNSTREAM_STRING( &constant_bin[ 503816 ], 619, 0 );
    const_str_digest_e63e703699cc72d43a5d1dc62c595576 = UNSTREAM_STRING( &constant_bin[ 504435 ], 1434, 0 );
    const_str_digest_29f5a6cb5e98ca82288f3947b5c1a0f4 = UNSTREAM_STRING( &constant_bin[ 505869 ], 43, 0 );
    const_str_digest_dd163053c4bb7a84360f48fe05506c84 = UNSTREAM_STRING( &constant_bin[ 505912 ], 1031, 0 );
    const_str_digest_e5a619d3614824ffa3b577c26ad1f1e4 = UNSTREAM_STRING( &constant_bin[ 506943 ], 90, 0 );
    const_str_digest_b589acde3baacc3b29295df1a9d3f450 = UNSTREAM_STRING( &constant_bin[ 507033 ], 635, 0 );
    const_str_digest_f5d5d3512f3ee60a892ceda8fbbd5bb8 = UNSTREAM_STRING( &constant_bin[ 507668 ], 27, 0 );
    const_str_digest_14c8d32eeadf1ea437398d23d46fa9a3 = UNSTREAM_STRING( &constant_bin[ 507695 ], 353, 0 );
    const_str_digest_5f2d77f17d703676ba26f56d7879530b = UNSTREAM_STRING( &constant_bin[ 508048 ], 365, 0 );
    const_tuple_6b78579b4b8896fa794c1140cbda5e59_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_6b78579b4b8896fa794c1140cbda5e59_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6b78579b4b8896fa794c1140cbda5e59_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_6b78579b4b8896fa794c1140cbda5e59_tuple, 2, const_str_plain_instructions ); Py_INCREF( const_str_plain_instructions );
    PyTuple_SET_ITEM( const_tuple_6b78579b4b8896fa794c1140cbda5e59_tuple, 3, const_str_plain_prompts ); Py_INCREF( const_str_plain_prompts );
    PyTuple_SET_ITEM( const_tuple_6b78579b4b8896fa794c1140cbda5e59_tuple, 4, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_digest_2d270d851eebdbb9ca3bab7128eec43e = UNSTREAM_STRING( &constant_bin[ 508413 ], 68, 0 );
    const_str_plain_add_prompt = UNSTREAM_STRING( &constant_bin[ 490442 ], 10, 1 );
    const_str_digest_bc14b1f977359a2e90b090491f5ae7bd = UNSTREAM_STRING( &constant_bin[ 508481 ], 50, 0 );
    const_str_digest_9270188b898858037d149aa5017dd61a = UNSTREAM_STRING( &constant_bin[ 490130 ], 38, 0 );
    const_str_digest_781ee8ba710834750f0dfde0d9bf852c = UNSTREAM_STRING( &constant_bin[ 508531 ], 703, 0 );
    const_str_digest_a858fd74697cd163baaa4ae6dcd45eca = UNSTREAM_STRING( &constant_bin[ 509234 ], 267, 0 );
    const_str_digest_9370fc6e3986edb06b86f8220c683230 = UNSTREAM_STRING( &constant_bin[ 509501 ], 43, 0 );
    const_str_digest_7edbe79e373c371841f831794316e4cd = UNSTREAM_STRING( &constant_bin[ 509544 ], 47, 0 );
    const_str_digest_a0f0e4b43056ca8b6129708d5d6497ab = UNSTREAM_STRING( &constant_bin[ 509591 ], 156, 0 );
    const_str_plain_origin = UNSTREAM_STRING( &constant_bin[ 7358 ], 6, 1 );
    const_str_digest_35af78164b2682305add33281df873bf = UNSTREAM_STRING( &constant_bin[ 509747 ], 700, 0 );
    const_str_digest_6763ed1bfbaeda95889ecc2cfbdf1d75 = UNSTREAM_STRING( &constant_bin[ 510447 ], 1031, 0 );
    const_str_plain_get_server = UNSTREAM_STRING( &constant_bin[ 137755 ], 10, 1 );
    const_str_plain_echo = UNSTREAM_STRING( &constant_bin[ 507905 ], 4, 1 );
    const_str_digest_e7748e264ae6ddd32fd16daed8429b20 = UNSTREAM_STRING( &constant_bin[ 511478 ], 51, 0 );
    const_tuple_str_empty_str_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_empty_str_empty_tuple, 0, const_str_empty ); Py_INCREF( const_str_empty );
    PyTuple_SET_ITEM( const_tuple_str_empty_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_str_digest_f5f9ae8bbeb913e7d11da84553058d6c = UNSTREAM_STRING( &constant_bin[ 511529 ], 106, 0 );
    const_tuple_str_plain_self_str_plain_username_str_plain_key_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_key_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_key_tuple, 1, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_key_tuple, 2, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_str_digest_ae6e25f291c96d56b6249953d68d27a1 = UNSTREAM_STRING( &constant_bin[ 511635 ], 39, 0 );
    const_str_digest_321cea67e69a78284a28990b1ee5c91e = UNSTREAM_STRING( &constant_bin[ 511674 ], 604, 0 );
    const_str_digest_33abaca4579652e388480a2fffe9a639 = UNSTREAM_STRING( &constant_bin[ 512278 ], 21, 0 );
    const_tuple_str_plain_self_str_plain_prompt_str_plain_echo_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_prompt_str_plain_echo_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_prompt_str_plain_echo_tuple, 1, const_str_plain_prompt ); Py_INCREF( const_str_plain_prompt );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_prompt_str_plain_echo_tuple, 2, const_str_plain_echo ); Py_INCREF( const_str_plain_echo );
    const_str_digest_78e8ab2588b180fa352899e21cafb856 = UNSTREAM_STRING( &constant_bin[ 512299 ], 33, 0 );
    const_tuple_d74429486ae25ca2d7573777b8fbefba_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_d74429486ae25ca2d7573777b8fbefba_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d74429486ae25ca2d7573777b8fbefba_tuple, 1, const_str_plain_channel ); Py_INCREF( const_str_plain_channel );
    PyTuple_SET_ITEM( const_tuple_d74429486ae25ca2d7573777b8fbefba_tuple, 2, const_str_plain_single_connection ); Py_INCREF( const_str_plain_single_connection );
    PyTuple_SET_ITEM( const_tuple_d74429486ae25ca2d7573777b8fbefba_tuple, 3, const_str_plain_auth_protocol ); Py_INCREF( const_str_plain_auth_protocol );
    PyTuple_SET_ITEM( const_tuple_d74429486ae25ca2d7573777b8fbefba_tuple, 4, const_str_plain_auth_cookie ); Py_INCREF( const_str_plain_auth_cookie );
    PyTuple_SET_ITEM( const_tuple_d74429486ae25ca2d7573777b8fbefba_tuple, 5, const_str_plain_screen_number ); Py_INCREF( const_str_plain_screen_number );
    const_tuple_str_plain_self_str_plain_kind_str_plain_chanid_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kind_str_plain_chanid_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kind_str_plain_chanid_tuple, 1, const_str_plain_kind ); Py_INCREF( const_str_plain_kind );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_kind_str_plain_chanid_tuple, 2, const_str_plain_chanid ); Py_INCREF( const_str_plain_chanid );
    const_str_digest_f94959ac795225dbf0db0c2824df1360 = UNSTREAM_STRING( &constant_bin[ 512332 ], 24, 0 );
    const_str_digest_0ba5aa85fedffb8a30c3ebe77d9f29a7 = UNSTREAM_STRING( &constant_bin[ 512356 ], 35, 0 );
    const_str_digest_8f61f1df3d70c6af89b69b60fc4bce75 = UNSTREAM_STRING( &constant_bin[ 512391 ], 643, 0 );
    const_tuple_str_plain_self_str_plain_responses_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_responses_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_responses_tuple, 1, const_str_plain_responses ); Py_INCREF( const_str_plain_responses );
    const_str_plain_handler_class = UNSTREAM_STRING( &constant_bin[ 513034 ], 13, 1 );
    const_tuple_c0fe87472ef68ada760af63e577e3bf5_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_c0fe87472ef68ada760af63e577e3bf5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c0fe87472ef68ada760af63e577e3bf5_tuple, 1, const_str_plain_channel ); Py_INCREF( const_str_plain_channel );
    PyTuple_SET_ITEM( const_tuple_c0fe87472ef68ada760af63e577e3bf5_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_c0fe87472ef68ada760af63e577e3bf5_tuple, 3, const_str_plain_kwarg ); Py_INCREF( const_str_plain_kwarg );
    PyTuple_SET_ITEM( const_tuple_c0fe87472ef68ada760af63e577e3bf5_tuple, 4, const_str_plain_larg ); Py_INCREF( const_str_plain_larg );
    PyTuple_SET_ITEM( const_tuple_c0fe87472ef68ada760af63e577e3bf5_tuple, 5, const_str_plain_transport ); Py_INCREF( const_str_plain_transport );
    PyTuple_SET_ITEM( const_tuple_c0fe87472ef68ada760af63e577e3bf5_tuple, 6, const_str_plain_handler_class ); Py_INCREF( const_str_plain_handler_class );
    PyTuple_SET_ITEM( const_tuple_c0fe87472ef68ada760af63e577e3bf5_tuple, 7, const_str_plain_handler ); Py_INCREF( const_str_plain_handler );
    const_str_plain_destination = UNSTREAM_STRING( &constant_bin[ 496078 ], 11, 1 );
    const_tuple_0907e99c504314accf60374496b12590_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0907e99c504314accf60374496b12590_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0907e99c504314accf60374496b12590_tuple, 1, const_str_plain_chanid ); Py_INCREF( const_str_plain_chanid );
    PyTuple_SET_ITEM( const_tuple_0907e99c504314accf60374496b12590_tuple, 2, const_str_plain_origin ); Py_INCREF( const_str_plain_origin );
    PyTuple_SET_ITEM( const_tuple_0907e99c504314accf60374496b12590_tuple, 3, const_str_plain_destination ); Py_INCREF( const_str_plain_destination );
    const_str_plain__SubsystemHandler__name = UNSTREAM_STRING( &constant_bin[ 513047 ], 23, 1 );
    const_str_digest_035eba801429532d5ee188208bd46dd7 = UNSTREAM_STRING( &constant_bin[ 402036 ], 37, 0 );
    const_str_digest_49c14e26def2600a6a49a8d2015545a0 = UNSTREAM_STRING( &constant_bin[ 513070 ], 25, 0 );
    const_tuple_str_plain_InteractiveQuery_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_InteractiveQuery_tuple_type_object_tuple_tuple, 0, const_str_plain_InteractiveQuery ); Py_INCREF( const_str_plain_InteractiveQuery );
    PyTuple_SET_ITEM( const_tuple_str_plain_InteractiveQuery_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_4d8c5294faa70caefd3b84fca355d446 = UNSTREAM_STRING( &constant_bin[ 513095 ], 26, 0 );
    const_str_plain__SubsystemHandler__server = UNSTREAM_STRING( &constant_bin[ 513121 ], 25, 1 );
    const_str_digest_77a10d90e5371495144b3e9f455fc01f = UNSTREAM_STRING( &constant_bin[ 513146 ], 520, 0 );
    const_str_digest_c360fe18953ab1120472b01357171a36 = UNSTREAM_STRING( &constant_bin[ 513666 ], 1146, 0 );
    const_tuple_c678b4f22fd053d1bbbee117998a84aa_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c678b4f22fd053d1bbbee117998a84aa_tuple, 0, const_str_plain_DEBUG ); Py_INCREF( const_str_plain_DEBUG );
    PyTuple_SET_ITEM( const_tuple_c678b4f22fd053d1bbbee117998a84aa_tuple, 1, const_str_plain_ERROR ); Py_INCREF( const_str_plain_ERROR );
    PyTuple_SET_ITEM( const_tuple_c678b4f22fd053d1bbbee117998a84aa_tuple, 2, const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED ); Py_INCREF( const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED );
    PyTuple_SET_ITEM( const_tuple_c678b4f22fd053d1bbbee117998a84aa_tuple, 3, const_str_plain_AUTH_FAILED ); Py_INCREF( const_str_plain_AUTH_FAILED );
    PyTuple_SET_ITEM( const_tuple_c678b4f22fd053d1bbbee117998a84aa_tuple, 4, const_str_plain_AUTH_SUCCESSFUL ); Py_INCREF( const_str_plain_AUTH_SUCCESSFUL );
    const_str_digest_a034a61d6e82ac53ec4209f79732cc27 = UNSTREAM_STRING( &constant_bin[ 514812 ], 41, 0 );
    const_str_digest_d41258fcdd0d32982c67d7e33edc1783 = UNSTREAM_STRING( &constant_bin[ 514853 ], 33, 0 );
    const_str_digest_1d2be4badc6ad05492f52204b49da50a = UNSTREAM_STRING( &constant_bin[ 514886 ], 36, 0 );
    const_str_digest_5fa6b1b42367eb6f15013bf0dad90d69 = UNSTREAM_STRING( &constant_bin[ 514922 ], 1208, 0 );
    const_str_plain__run = UNSTREAM_STRING( &constant_bin[ 11769 ], 4, 1 );
    const_tuple_d135b7cc6c9a9d1979b06ddbb3b0ca47_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d135b7cc6c9a9d1979b06ddbb3b0ca47_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d135b7cc6c9a9d1979b06ddbb3b0ca47_tuple, 1, const_str_plain_channel ); Py_INCREF( const_str_plain_channel );
    PyTuple_SET_ITEM( const_tuple_d135b7cc6c9a9d1979b06ddbb3b0ca47_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_d135b7cc6c9a9d1979b06ddbb3b0ca47_tuple, 3, const_str_plain_server ); Py_INCREF( const_str_plain_server );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_paramiko$server( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_262dff8fd6c69a5a77e4b9470c624c9b;
static PyCodeObject *codeobj_11994c263a80bec961d642afef01e637;
static PyCodeObject *codeobj_4114d0bbcaa185bcacdcea1135881e80;
static PyCodeObject *codeobj_a02747ac8cce3917e3a95ec4d6d3e354;
static PyCodeObject *codeobj_08d43c0307a6e1b78d01ccfcdc0a25e6;
static PyCodeObject *codeobj_24531db85e55de69b92970dd66530bf8;
static PyCodeObject *codeobj_54834cad08adedd1886ea0ccc7a65af2;
static PyCodeObject *codeobj_1e026cc339b713f3c4db0c035f382ee9;
static PyCodeObject *codeobj_f16099cc41558cb1b302a6aa2ca49166;
static PyCodeObject *codeobj_3dd1f660b55a401559f6f863a6c1d6ca;
static PyCodeObject *codeobj_8238293666b991f0f90a3ce96c587a23;
static PyCodeObject *codeobj_3d6dc5b22f0d80b788d19ba3cf9e1c0f;
static PyCodeObject *codeobj_b219e0ef7faaf7e472223f3146f20971;
static PyCodeObject *codeobj_c1dec9b96631ca0fe072c3559a6baf13;
static PyCodeObject *codeobj_816a19c822096e4284c11eb08de9a4cc;
static PyCodeObject *codeobj_043144d5b06f8cb848acea976d7a9ef0;
static PyCodeObject *codeobj_ec5d9663772732921a9ee19f623ce0bb;
static PyCodeObject *codeobj_ebb43bf4040428406db188409bd7c07d;
static PyCodeObject *codeobj_278edc4958c1555162c4e9ba99a14b7d;
static PyCodeObject *codeobj_c229c3b8fe9d7099cfe6564ddfec4efb;
static PyCodeObject *codeobj_35ab1233342e22eecd3ca98e7d3f2e42;
static PyCodeObject *codeobj_840962786e7ebd871a64cc79dd6956a5;
static PyCodeObject *codeobj_9a406bf58206b62cfdd26f48d8769b7a;
static PyCodeObject *codeobj_0b8b43be2705c3f31968dcd32934e2d7;
static PyCodeObject *codeobj_6aac79ffe8a2c2ea369895e66386e3b6;
static PyCodeObject *codeobj_d721bbe1d8dd259b04ca996b9a08e12d;
static PyCodeObject *codeobj_0525270cedbb6b2a2d62bd756c8c16ea;
static PyCodeObject *codeobj_a670374d5f0761d2e068580ce7eb68d4;
static PyCodeObject *codeobj_9e87705a86fe087f38b3015ca6841a5e;
static PyCodeObject *codeobj_148c8bccffeb1b105b0cb79a181e8b2d;
static PyCodeObject *codeobj_c6ea48f17c10d5d86d128fc69cf1b046;
static PyCodeObject *codeobj_252240af0f98948b3fcb0c5c55dfb7ef;
static PyCodeObject *codeobj_10cd15db377fbb535f594e48fc74efd3;
static PyCodeObject *codeobj_4719b5d852bff960136779f44eae1099;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_e5a619d3614824ffa3b577c26ad1f1e4;
    codeobj_262dff8fd6c69a5a77e4b9470c624c9b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f94959ac795225dbf0db0c2824df1360, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_11994c263a80bec961d642afef01e637 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_InteractiveQuery, 587, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_4114d0bbcaa185bcacdcea1135881e80 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ServerInterface, 32, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_a02747ac8cce3917e3a95ec4d6d3e354 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SubsystemHandler, 626, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_08d43c0307a6e1b78d01ccfcdc0a25e6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 592, const_tuple_6b78579b4b8896fa794c1140cbda5e59_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_24531db85e55de69b92970dd66530bf8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 640, const_tuple_d135b7cc6c9a9d1979b06ddbb3b0ca47_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_54834cad08adedd1886ea0ccc7a65af2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__run, 667, const_tuple_str_plain_self_str_plain_e_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1e026cc339b713f3c4db0c035f382ee9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_prompt, 613, const_tuple_str_plain_self_str_plain_prompt_str_plain_echo_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f16099cc41558cb1b302a6aa2ca49166 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cancel_port_forward_request, 331, const_tuple_str_plain_self_str_plain_address_str_plain_port_tuple, 3, 0, CO_NOFREE );
    codeobj_3dd1f660b55a401559f6f863a6c1d6ca = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_auth_gssapi_keyex, 266, const_tuple_5f55193d805484e8af1286ec06d96326_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8238293666b991f0f90a3ce96c587a23 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_auth_gssapi_with_mic, 236, const_tuple_5f55193d805484e8af1286ec06d96326_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3d6dc5b22f0d80b788d19ba3cf9e1c0f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_auth_interactive, 180, const_tuple_str_plain_self_str_plain_username_str_plain_submethods_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b219e0ef7faaf7e472223f3146f20971 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_auth_interactive_response, 205, const_tuple_str_plain_self_str_plain_responses_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c1dec9b96631ca0fe072c3559a6baf13 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_auth_none, 104, const_tuple_str_plain_self_str_plain_username_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_816a19c822096e4284c11eb08de9a4cc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_auth_password, 123, const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_043144d5b06f8cb848acea976d7a9ef0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_auth_publickey, 148, const_tuple_str_plain_self_str_plain_username_str_plain_key_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ec5d9663772732921a9ee19f623ce0bb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_channel_direct_tcpip_request, 515, const_tuple_0907e99c504314accf60374496b12590_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ebb43bf4040428406db188409bd7c07d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_channel_env_request, 555, const_tuple_bb94c157cad6dd376dd98e7eda66d071_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_278edc4958c1555162c4e9ba99a14b7d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_channel_exec_request, 413, const_tuple_str_plain_self_str_plain_channel_str_plain_command_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c229c3b8fe9d7099cfe6564ddfec4efb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_channel_forward_agent_request, 502, const_tuple_str_plain_self_str_plain_channel_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_35ab1233342e22eecd3ca98e7d3f2e42 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_channel_pty_request, 374, const_tuple_c07ed4367ad68a9d3cfc7d9d6c17855b_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_840962786e7ebd871a64cc79dd6956a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_channel_request, 42, const_tuple_str_plain_self_str_plain_kind_str_plain_chanid_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9a406bf58206b62cfdd26f48d8769b7a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_channel_shell_request, 397, const_tuple_str_plain_self_str_plain_channel_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0b8b43be2705c3f31968dcd32934e2d7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_channel_subsystem_request, 432, const_tuple_c0fe87472ef68ada760af63e577e3bf5_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6aac79ffe8a2c2ea369895e66386e3b6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_channel_window_change_request, 462, const_tuple_d304474fdacd426d5cf019af85c89b13_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d721bbe1d8dd259b04ca996b9a08e12d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_channel_x11_request, 481, const_tuple_d74429486ae25ca2d7573777b8fbefba_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0525270cedbb6b2a2d62bd756c8c16ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_global_request, 342, const_tuple_str_plain_self_str_plain_kind_str_plain_msg_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a670374d5f0761d2e068580ce7eb68d4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check_port_forward_request, 310, const_tuple_str_plain_self_str_plain_address_str_plain_port_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9e87705a86fe087f38b3015ca6841a5e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_enable_auth_gssapi, 298, const_tuple_str_plain_self_str_plain_UseGSSAPI_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_148c8bccffeb1b105b0cb79a181e8b2d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_finish_subsystem, 712, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c6ea48f17c10d5d86d128fc69cf1b046 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_allowed_auths, 87, const_tuple_str_plain_self_str_plain_username_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_252240af0f98948b3fcb0c5c55dfb7ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_banner, 573, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_10cd15db377fbb535f594e48fc74efd3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_server, 660, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4719b5d852bff960136779f44eae1099 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_start_subsystem, 686, const_tuple_0f2c83bf580f7ab6df63a9c11392cfdf_tuple, 4, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_10_enable_auth_gssapi(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_11_check_port_forward_request(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_12_cancel_port_forward_request(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_13_check_global_request(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_14_check_channel_pty_request(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_15_check_channel_shell_request(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_16_check_channel_exec_request(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_17_check_channel_subsystem_request(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_18_check_channel_window_change_request(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_19_check_channel_x11_request(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_1_check_channel_request(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_20_check_channel_forward_agent_request(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_21_check_channel_direct_tcpip_request(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_22_check_channel_env_request(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_23_get_banner(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_24___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_25_add_prompt( PyObject *defaults );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_26___init__(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_27_get_server(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_28__run(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_29_start_subsystem(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_2_get_allowed_auths(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_30_finish_subsystem(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_3_check_auth_none(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_4_check_auth_password(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_5_check_auth_publickey(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_6_check_auth_interactive(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_7_check_auth_interactive_response(  );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_8_check_auth_gssapi_with_mic( PyObject *defaults );


static PyObject *MAKE_FUNCTION_paramiko$server$$$function_9_check_auth_gssapi_keyex( PyObject *defaults );


// The module function definitions.
static PyObject *impl_paramiko$server$$$function_1_check_channel_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_kind = python_pars[ 1 ];
    PyObject *par_chanid = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_840962786e7ebd871a64cc79dd6956a5 = NULL;

    struct Nuitka_FrameObject *frame_840962786e7ebd871a64cc79dd6956a5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_840962786e7ebd871a64cc79dd6956a5, codeobj_840962786e7ebd871a64cc79dd6956a5, module_paramiko$server, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_840962786e7ebd871a64cc79dd6956a5 = cache_frame_840962786e7ebd871a64cc79dd6956a5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_840962786e7ebd871a64cc79dd6956a5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_840962786e7ebd871a64cc79dd6956a5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_840962786e7ebd871a64cc79dd6956a5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_840962786e7ebd871a64cc79dd6956a5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_840962786e7ebd871a64cc79dd6956a5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_840962786e7ebd871a64cc79dd6956a5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_840962786e7ebd871a64cc79dd6956a5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_840962786e7ebd871a64cc79dd6956a5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_840962786e7ebd871a64cc79dd6956a5,
        type_description_1,
        par_self,
        par_kind,
        par_chanid
    );


    // Release cached frame.
    if ( frame_840962786e7ebd871a64cc79dd6956a5 == cache_frame_840962786e7ebd871a64cc79dd6956a5 )
    {
        Py_DECREF( frame_840962786e7ebd871a64cc79dd6956a5 );
    }
    cache_frame_840962786e7ebd871a64cc79dd6956a5 = NULL;

    assertFrameObject( frame_840962786e7ebd871a64cc79dd6956a5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_1_check_channel_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_kind );
    par_kind = NULL;

    Py_XDECREF( par_chanid );
    par_chanid = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_kind );
    par_kind = NULL;

    Py_XDECREF( par_chanid );
    par_chanid = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_1_check_channel_request );
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


static PyObject *impl_paramiko$server$$$function_2_get_allowed_auths( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_username = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_str_plain_password;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_2_get_allowed_auths );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_2_get_allowed_auths );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$server$$$function_3_check_auth_none( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_username = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_c1dec9b96631ca0fe072c3559a6baf13 = NULL;

    struct Nuitka_FrameObject *frame_c1dec9b96631ca0fe072c3559a6baf13;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c1dec9b96631ca0fe072c3559a6baf13, codeobj_c1dec9b96631ca0fe072c3559a6baf13, module_paramiko$server, sizeof(void *)+sizeof(void *) );
    frame_c1dec9b96631ca0fe072c3559a6baf13 = cache_frame_c1dec9b96631ca0fe072c3559a6baf13;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c1dec9b96631ca0fe072c3559a6baf13 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c1dec9b96631ca0fe072c3559a6baf13 ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AUTH_FAILED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c1dec9b96631ca0fe072c3559a6baf13 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c1dec9b96631ca0fe072c3559a6baf13 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c1dec9b96631ca0fe072c3559a6baf13 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c1dec9b96631ca0fe072c3559a6baf13, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c1dec9b96631ca0fe072c3559a6baf13->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c1dec9b96631ca0fe072c3559a6baf13, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c1dec9b96631ca0fe072c3559a6baf13,
        type_description_1,
        par_self,
        par_username
    );


    // Release cached frame.
    if ( frame_c1dec9b96631ca0fe072c3559a6baf13 == cache_frame_c1dec9b96631ca0fe072c3559a6baf13 )
    {
        Py_DECREF( frame_c1dec9b96631ca0fe072c3559a6baf13 );
    }
    cache_frame_c1dec9b96631ca0fe072c3559a6baf13 = NULL;

    assertFrameObject( frame_c1dec9b96631ca0fe072c3559a6baf13 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_3_check_auth_none );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_3_check_auth_none );
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


static PyObject *impl_paramiko$server$$$function_4_check_auth_password( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_username = python_pars[ 1 ];
    PyObject *par_password = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_816a19c822096e4284c11eb08de9a4cc = NULL;

    struct Nuitka_FrameObject *frame_816a19c822096e4284c11eb08de9a4cc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_816a19c822096e4284c11eb08de9a4cc, codeobj_816a19c822096e4284c11eb08de9a4cc, module_paramiko$server, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_816a19c822096e4284c11eb08de9a4cc = cache_frame_816a19c822096e4284c11eb08de9a4cc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_816a19c822096e4284c11eb08de9a4cc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_816a19c822096e4284c11eb08de9a4cc ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AUTH_FAILED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_816a19c822096e4284c11eb08de9a4cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_816a19c822096e4284c11eb08de9a4cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_816a19c822096e4284c11eb08de9a4cc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_816a19c822096e4284c11eb08de9a4cc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_816a19c822096e4284c11eb08de9a4cc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_816a19c822096e4284c11eb08de9a4cc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_816a19c822096e4284c11eb08de9a4cc,
        type_description_1,
        par_self,
        par_username,
        par_password
    );


    // Release cached frame.
    if ( frame_816a19c822096e4284c11eb08de9a4cc == cache_frame_816a19c822096e4284c11eb08de9a4cc )
    {
        Py_DECREF( frame_816a19c822096e4284c11eb08de9a4cc );
    }
    cache_frame_816a19c822096e4284c11eb08de9a4cc = NULL;

    assertFrameObject( frame_816a19c822096e4284c11eb08de9a4cc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_4_check_auth_password );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_4_check_auth_password );
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


static PyObject *impl_paramiko$server$$$function_5_check_auth_publickey( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_username = python_pars[ 1 ];
    PyObject *par_key = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_043144d5b06f8cb848acea976d7a9ef0 = NULL;

    struct Nuitka_FrameObject *frame_043144d5b06f8cb848acea976d7a9ef0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_043144d5b06f8cb848acea976d7a9ef0, codeobj_043144d5b06f8cb848acea976d7a9ef0, module_paramiko$server, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_043144d5b06f8cb848acea976d7a9ef0 = cache_frame_043144d5b06f8cb848acea976d7a9ef0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_043144d5b06f8cb848acea976d7a9ef0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_043144d5b06f8cb848acea976d7a9ef0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AUTH_FAILED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_043144d5b06f8cb848acea976d7a9ef0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_043144d5b06f8cb848acea976d7a9ef0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_043144d5b06f8cb848acea976d7a9ef0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_043144d5b06f8cb848acea976d7a9ef0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_043144d5b06f8cb848acea976d7a9ef0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_043144d5b06f8cb848acea976d7a9ef0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_043144d5b06f8cb848acea976d7a9ef0,
        type_description_1,
        par_self,
        par_username,
        par_key
    );


    // Release cached frame.
    if ( frame_043144d5b06f8cb848acea976d7a9ef0 == cache_frame_043144d5b06f8cb848acea976d7a9ef0 )
    {
        Py_DECREF( frame_043144d5b06f8cb848acea976d7a9ef0 );
    }
    cache_frame_043144d5b06f8cb848acea976d7a9ef0 = NULL;

    assertFrameObject( frame_043144d5b06f8cb848acea976d7a9ef0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_5_check_auth_publickey );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_5_check_auth_publickey );
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


static PyObject *impl_paramiko$server$$$function_6_check_auth_interactive( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_username = python_pars[ 1 ];
    PyObject *par_submethods = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f = NULL;

    struct Nuitka_FrameObject *frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f, codeobj_3d6dc5b22f0d80b788d19ba3cf9e1c0f, module_paramiko$server, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f = cache_frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AUTH_FAILED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f,
        type_description_1,
        par_self,
        par_username,
        par_submethods
    );


    // Release cached frame.
    if ( frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f == cache_frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f )
    {
        Py_DECREF( frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f );
    }
    cache_frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f = NULL;

    assertFrameObject( frame_3d6dc5b22f0d80b788d19ba3cf9e1c0f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_6_check_auth_interactive );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_submethods );
    par_submethods = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_submethods );
    par_submethods = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_6_check_auth_interactive );
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


static PyObject *impl_paramiko$server$$$function_7_check_auth_interactive_response( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_responses = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_b219e0ef7faaf7e472223f3146f20971 = NULL;

    struct Nuitka_FrameObject *frame_b219e0ef7faaf7e472223f3146f20971;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b219e0ef7faaf7e472223f3146f20971, codeobj_b219e0ef7faaf7e472223f3146f20971, module_paramiko$server, sizeof(void *)+sizeof(void *) );
    frame_b219e0ef7faaf7e472223f3146f20971 = cache_frame_b219e0ef7faaf7e472223f3146f20971;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b219e0ef7faaf7e472223f3146f20971 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b219e0ef7faaf7e472223f3146f20971 ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AUTH_FAILED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b219e0ef7faaf7e472223f3146f20971 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b219e0ef7faaf7e472223f3146f20971 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b219e0ef7faaf7e472223f3146f20971 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b219e0ef7faaf7e472223f3146f20971, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b219e0ef7faaf7e472223f3146f20971->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b219e0ef7faaf7e472223f3146f20971, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b219e0ef7faaf7e472223f3146f20971,
        type_description_1,
        par_self,
        par_responses
    );


    // Release cached frame.
    if ( frame_b219e0ef7faaf7e472223f3146f20971 == cache_frame_b219e0ef7faaf7e472223f3146f20971 )
    {
        Py_DECREF( frame_b219e0ef7faaf7e472223f3146f20971 );
    }
    cache_frame_b219e0ef7faaf7e472223f3146f20971 = NULL;

    assertFrameObject( frame_b219e0ef7faaf7e472223f3146f20971 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_7_check_auth_interactive_response );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_responses );
    par_responses = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_responses );
    par_responses = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_7_check_auth_interactive_response );
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


static PyObject *impl_paramiko$server$$$function_8_check_auth_gssapi_with_mic( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_username = python_pars[ 1 ];
    PyObject *par_gss_authenticated = python_pars[ 2 ];
    PyObject *par_cc_file = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_8238293666b991f0f90a3ce96c587a23 = NULL;

    struct Nuitka_FrameObject *frame_8238293666b991f0f90a3ce96c587a23;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8238293666b991f0f90a3ce96c587a23, codeobj_8238293666b991f0f90a3ce96c587a23, module_paramiko$server, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8238293666b991f0f90a3ce96c587a23 = cache_frame_8238293666b991f0f90a3ce96c587a23;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8238293666b991f0f90a3ce96c587a23 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8238293666b991f0f90a3ce96c587a23 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_gss_authenticated;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_SUCCESSFUL );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AUTH_SUCCESSFUL );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AUTH_SUCCESSFUL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 262;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
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
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_SUCCESSFUL );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AUTH_SUCCESSFUL );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AUTH_SUCCESSFUL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AUTH_FAILED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8238293666b991f0f90a3ce96c587a23 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8238293666b991f0f90a3ce96c587a23 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8238293666b991f0f90a3ce96c587a23 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8238293666b991f0f90a3ce96c587a23, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8238293666b991f0f90a3ce96c587a23->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8238293666b991f0f90a3ce96c587a23, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8238293666b991f0f90a3ce96c587a23,
        type_description_1,
        par_self,
        par_username,
        par_gss_authenticated,
        par_cc_file
    );


    // Release cached frame.
    if ( frame_8238293666b991f0f90a3ce96c587a23 == cache_frame_8238293666b991f0f90a3ce96c587a23 )
    {
        Py_DECREF( frame_8238293666b991f0f90a3ce96c587a23 );
    }
    cache_frame_8238293666b991f0f90a3ce96c587a23 = NULL;

    assertFrameObject( frame_8238293666b991f0f90a3ce96c587a23 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_8_check_auth_gssapi_with_mic );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_cc_file );
    par_cc_file = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_gss_authenticated );
    par_gss_authenticated = NULL;

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

    Py_XDECREF( par_cc_file );
    par_cc_file = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_gss_authenticated );
    par_gss_authenticated = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_8_check_auth_gssapi_with_mic );
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


static PyObject *impl_paramiko$server$$$function_9_check_auth_gssapi_keyex( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_username = python_pars[ 1 ];
    PyObject *par_gss_authenticated = python_pars[ 2 ];
    PyObject *par_cc_file = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_3dd1f660b55a401559f6f863a6c1d6ca = NULL;

    struct Nuitka_FrameObject *frame_3dd1f660b55a401559f6f863a6c1d6ca;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3dd1f660b55a401559f6f863a6c1d6ca, codeobj_3dd1f660b55a401559f6f863a6c1d6ca, module_paramiko$server, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3dd1f660b55a401559f6f863a6c1d6ca = cache_frame_3dd1f660b55a401559f6f863a6c1d6ca;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3dd1f660b55a401559f6f863a6c1d6ca );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3dd1f660b55a401559f6f863a6c1d6ca ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_gss_authenticated;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_SUCCESSFUL );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AUTH_SUCCESSFUL );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AUTH_SUCCESSFUL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 294;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
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
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_SUCCESSFUL );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AUTH_SUCCESSFUL );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AUTH_SUCCESSFUL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 295;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AUTH_FAILED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 296;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3dd1f660b55a401559f6f863a6c1d6ca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3dd1f660b55a401559f6f863a6c1d6ca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3dd1f660b55a401559f6f863a6c1d6ca );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3dd1f660b55a401559f6f863a6c1d6ca, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3dd1f660b55a401559f6f863a6c1d6ca->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3dd1f660b55a401559f6f863a6c1d6ca, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3dd1f660b55a401559f6f863a6c1d6ca,
        type_description_1,
        par_self,
        par_username,
        par_gss_authenticated,
        par_cc_file
    );


    // Release cached frame.
    if ( frame_3dd1f660b55a401559f6f863a6c1d6ca == cache_frame_3dd1f660b55a401559f6f863a6c1d6ca )
    {
        Py_DECREF( frame_3dd1f660b55a401559f6f863a6c1d6ca );
    }
    cache_frame_3dd1f660b55a401559f6f863a6c1d6ca = NULL;

    assertFrameObject( frame_3dd1f660b55a401559f6f863a6c1d6ca );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_9_check_auth_gssapi_keyex );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_cc_file );
    par_cc_file = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_gss_authenticated );
    par_gss_authenticated = NULL;

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

    Py_XDECREF( par_cc_file );
    par_cc_file = NULL;

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_gss_authenticated );
    par_gss_authenticated = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_9_check_auth_gssapi_keyex );
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


static PyObject *impl_paramiko$server$$$function_10_enable_auth_gssapi( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_10_enable_auth_gssapi );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_10_enable_auth_gssapi );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$server$$$function_11_check_port_forward_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_address = python_pars[ 1 ];
    PyObject *par_port = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_11_check_port_forward_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_address );
    par_address = NULL;

    Py_XDECREF( par_port );
    par_port = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_address );
    par_address = NULL;

    Py_XDECREF( par_port );
    par_port = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_11_check_port_forward_request );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$server$$$function_12_cancel_port_forward_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_address = python_pars[ 1 ];
    PyObject *par_port = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_12_cancel_port_forward_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_address );
    par_address = NULL;

    Py_XDECREF( par_port );
    par_port = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_address );
    par_address = NULL;

    Py_XDECREF( par_port );
    par_port = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_12_cancel_port_forward_request );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$server$$$function_13_check_global_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_kind = python_pars[ 1 ];
    PyObject *par_msg = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_13_check_global_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( par_kind );
    par_kind = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( par_kind );
    par_kind = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_13_check_global_request );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$server$$$function_14_check_channel_pty_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_channel = python_pars[ 1 ];
    PyObject *par_term = python_pars[ 2 ];
    PyObject *par_width = python_pars[ 3 ];
    PyObject *par_height = python_pars[ 4 ];
    PyObject *par_pixelwidth = python_pars[ 5 ];
    PyObject *par_pixelheight = python_pars[ 6 ];
    PyObject *par_modes = python_pars[ 7 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_14_check_channel_pty_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_width );
    par_width = NULL;

    Py_XDECREF( par_pixelheight );
    par_pixelheight = NULL;

    Py_XDECREF( par_pixelwidth );
    par_pixelwidth = NULL;

    Py_XDECREF( par_term );
    par_term = NULL;

    Py_XDECREF( par_height );
    par_height = NULL;

    Py_XDECREF( par_modes );
    par_modes = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_width );
    par_width = NULL;

    Py_XDECREF( par_pixelheight );
    par_pixelheight = NULL;

    Py_XDECREF( par_pixelwidth );
    par_pixelwidth = NULL;

    Py_XDECREF( par_term );
    par_term = NULL;

    Py_XDECREF( par_height );
    par_height = NULL;

    Py_XDECREF( par_modes );
    par_modes = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_14_check_channel_pty_request );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$server$$$function_15_check_channel_shell_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_channel = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_15_check_channel_shell_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_15_check_channel_shell_request );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$server$$$function_16_check_channel_exec_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_channel = python_pars[ 1 ];
    PyObject *par_command = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_16_check_channel_exec_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_command );
    par_command = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_command );
    par_command = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_16_check_channel_exec_request );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$server$$$function_17_check_channel_subsystem_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_channel = python_pars[ 1 ];
    PyObject *par_name = python_pars[ 2 ];
    PyObject *var_kwarg = NULL;
    PyObject *var_larg = NULL;
    PyObject *var_transport = NULL;
    PyObject *var_handler_class = NULL;
    PyObject *var_handler = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0b8b43be2705c3f31968dcd32934e2d7 = NULL;

    struct Nuitka_FrameObject *frame_0b8b43be2705c3f31968dcd32934e2d7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0b8b43be2705c3f31968dcd32934e2d7, codeobj_0b8b43be2705c3f31968dcd32934e2d7, module_paramiko$server, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0b8b43be2705c3f31968dcd32934e2d7 = cache_frame_0b8b43be2705c3f31968dcd32934e2d7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0b8b43be2705c3f31968dcd32934e2d7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0b8b43be2705c3f31968dcd32934e2d7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_channel;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_0b8b43be2705c3f31968dcd32934e2d7->m_frame.f_lineno = 454;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_transport );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 454;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_transport == NULL );
    var_transport = tmp_assign_source_1;

    // Tried code:
    tmp_source_name_1 = var_transport;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__get_subsystem_handler );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_name;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 455;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_0b8b43be2705c3f31968dcd32934e2d7->m_frame.f_lineno = 455;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;

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


        type_description_1 = "oooooooo";
        exception_lineno = 455;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;

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


        type_description_1 = "oooooooo";
        exception_lineno = 455;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

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


        type_description_1 = "oooooooo";
        exception_lineno = 455;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;

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

                type_description_1 = "oooooooo";
                exception_lineno = 455;
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

        type_description_1 = "oooooooo";
        exception_lineno = 455;
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
    assert( var_handler_class == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_handler_class = tmp_assign_source_6;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_7 );
    assert( var_larg == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_larg = tmp_assign_source_7;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;

    CHECK_OBJECT( tmp_assign_source_8 );
    assert( var_kwarg == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_kwarg = tmp_assign_source_8;

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_compare_left_1 = var_handler_class;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "handler_class" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 456;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_dircall_arg1_1 = var_handler_class;

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "handler_class" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 458;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_channel;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "channel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 458;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_name;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 458;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_self;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 458;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = var_larg;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "larg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 458;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg4_1 = var_kwarg;

    if ( tmp_dircall_arg4_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwarg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 458;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_assign_source_9 = impl___internal__$$$function_3_complex_call_helper_pos_star_list_star_dict( dir_call_args );
    }
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_handler == NULL );
    var_handler = tmp_assign_source_9;

    tmp_called_instance_2 = var_handler;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_0b8b43be2705c3f31968dcd32934e2d7->m_frame.f_lineno = 459;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_start );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 459;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b8b43be2705c3f31968dcd32934e2d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b8b43be2705c3f31968dcd32934e2d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b8b43be2705c3f31968dcd32934e2d7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0b8b43be2705c3f31968dcd32934e2d7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0b8b43be2705c3f31968dcd32934e2d7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0b8b43be2705c3f31968dcd32934e2d7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0b8b43be2705c3f31968dcd32934e2d7,
        type_description_1,
        par_self,
        par_channel,
        par_name,
        var_kwarg,
        var_larg,
        var_transport,
        var_handler_class,
        var_handler
    );


    // Release cached frame.
    if ( frame_0b8b43be2705c3f31968dcd32934e2d7 == cache_frame_0b8b43be2705c3f31968dcd32934e2d7 )
    {
        Py_DECREF( frame_0b8b43be2705c3f31968dcd32934e2d7 );
    }
    cache_frame_0b8b43be2705c3f31968dcd32934e2d7 = NULL;

    assertFrameObject( frame_0b8b43be2705c3f31968dcd32934e2d7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_17_check_channel_subsystem_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_kwarg );
    var_kwarg = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_larg );
    var_larg = NULL;

    Py_XDECREF( var_transport );
    var_transport = NULL;

    Py_XDECREF( var_handler_class );
    var_handler_class = NULL;

    Py_XDECREF( var_handler );
    var_handler = NULL;

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

    Py_XDECREF( var_kwarg );
    var_kwarg = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_larg );
    var_larg = NULL;

    Py_XDECREF( var_transport );
    var_transport = NULL;

    Py_XDECREF( var_handler_class );
    var_handler_class = NULL;

    Py_XDECREF( var_handler );
    var_handler = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_17_check_channel_subsystem_request );
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


static PyObject *impl_paramiko$server$$$function_18_check_channel_window_change_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_channel = python_pars[ 1 ];
    PyObject *par_width = python_pars[ 2 ];
    PyObject *par_height = python_pars[ 3 ];
    PyObject *par_pixelwidth = python_pars[ 4 ];
    PyObject *par_pixelheight = python_pars[ 5 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_18_check_channel_window_change_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_width );
    par_width = NULL;

    Py_XDECREF( par_pixelheight );
    par_pixelheight = NULL;

    Py_XDECREF( par_pixelwidth );
    par_pixelwidth = NULL;

    Py_XDECREF( par_height );
    par_height = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_width );
    par_width = NULL;

    Py_XDECREF( par_pixelheight );
    par_pixelheight = NULL;

    Py_XDECREF( par_pixelwidth );
    par_pixelwidth = NULL;

    Py_XDECREF( par_height );
    par_height = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_18_check_channel_window_change_request );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$server$$$function_19_check_channel_x11_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_channel = python_pars[ 1 ];
    PyObject *par_single_connection = python_pars[ 2 ];
    PyObject *par_auth_protocol = python_pars[ 3 ];
    PyObject *par_auth_cookie = python_pars[ 4 ];
    PyObject *par_screen_number = python_pars[ 5 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_19_check_channel_x11_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_single_connection );
    par_single_connection = NULL;

    Py_XDECREF( par_auth_protocol );
    par_auth_protocol = NULL;

    Py_XDECREF( par_screen_number );
    par_screen_number = NULL;

    Py_XDECREF( par_auth_cookie );
    par_auth_cookie = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_single_connection );
    par_single_connection = NULL;

    Py_XDECREF( par_auth_protocol );
    par_auth_protocol = NULL;

    Py_XDECREF( par_screen_number );
    par_screen_number = NULL;

    Py_XDECREF( par_auth_cookie );
    par_auth_cookie = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_19_check_channel_x11_request );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$server$$$function_20_check_channel_forward_agent_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_channel = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_20_check_channel_forward_agent_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_20_check_channel_forward_agent_request );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$server$$$function_21_check_channel_direct_tcpip_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_chanid = python_pars[ 1 ];
    PyObject *par_origin = python_pars[ 2 ];
    PyObject *par_destination = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_ec5d9663772732921a9ee19f623ce0bb = NULL;

    struct Nuitka_FrameObject *frame_ec5d9663772732921a9ee19f623ce0bb;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ec5d9663772732921a9ee19f623ce0bb, codeobj_ec5d9663772732921a9ee19f623ce0bb, module_paramiko$server, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ec5d9663772732921a9ee19f623ce0bb = cache_frame_ec5d9663772732921a9ee19f623ce0bb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ec5d9663772732921a9ee19f623ce0bb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ec5d9663772732921a9ee19f623ce0bb ) == 2 ); // Frame stack

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED );

    if (unlikely( tmp_return_value == NULL ))
    {
        tmp_return_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED );
    }

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 553;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec5d9663772732921a9ee19f623ce0bb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec5d9663772732921a9ee19f623ce0bb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ec5d9663772732921a9ee19f623ce0bb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ec5d9663772732921a9ee19f623ce0bb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ec5d9663772732921a9ee19f623ce0bb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ec5d9663772732921a9ee19f623ce0bb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ec5d9663772732921a9ee19f623ce0bb,
        type_description_1,
        par_self,
        par_chanid,
        par_origin,
        par_destination
    );


    // Release cached frame.
    if ( frame_ec5d9663772732921a9ee19f623ce0bb == cache_frame_ec5d9663772732921a9ee19f623ce0bb )
    {
        Py_DECREF( frame_ec5d9663772732921a9ee19f623ce0bb );
    }
    cache_frame_ec5d9663772732921a9ee19f623ce0bb = NULL;

    assertFrameObject( frame_ec5d9663772732921a9ee19f623ce0bb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_21_check_channel_direct_tcpip_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_origin );
    par_origin = NULL;

    Py_XDECREF( par_destination );
    par_destination = NULL;

    Py_XDECREF( par_chanid );
    par_chanid = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_origin );
    par_origin = NULL;

    Py_XDECREF( par_destination );
    par_destination = NULL;

    Py_XDECREF( par_chanid );
    par_chanid = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_21_check_channel_direct_tcpip_request );
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


static PyObject *impl_paramiko$server$$$function_22_check_channel_env_request( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_channel = python_pars[ 1 ];
    PyObject *par_name = python_pars[ 2 ];
    PyObject *par_value = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_22_check_channel_env_request );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_22_check_channel_env_request );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$server$$$function_23_get_banner( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = const_tuple_none_none_tuple;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_23_get_banner );
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
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_23_get_banner );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$server$$$function_24___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_instructions = python_pars[ 2 ];
    PyObject *par_prompts = python_pars[ 3 ];
    PyObject *var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_08d43c0307a6e1b78d01ccfcdc0a25e6 = NULL;

    struct Nuitka_FrameObject *frame_08d43c0307a6e1b78d01ccfcdc0a25e6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_08d43c0307a6e1b78d01ccfcdc0a25e6, codeobj_08d43c0307a6e1b78d01ccfcdc0a25e6, module_paramiko$server, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_08d43c0307a6e1b78d01ccfcdc0a25e6 = cache_frame_08d43c0307a6e1b78d01ccfcdc0a25e6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_08d43c0307a6e1b78d01ccfcdc0a25e6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_08d43c0307a6e1b78d01ccfcdc0a25e6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_name;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_name, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 604;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_instructions;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "instructions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 605;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 605;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_instructions, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 605;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = PyList_New( 0 );
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 606;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_prompts, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 606;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = par_prompts;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prompts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 607;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 607;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_value_name_1 );
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


        type_description_1 = "ooooo";
        exception_lineno = 607;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
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

        exception_lineno = 607;
        type_description_1 = "ooooo";
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
    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_3;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_isinstance_inst_1 = var_x;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_string_types );

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

        exception_lineno = 608;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 608;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
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
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 609;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_prompt );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 609;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = var_x;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 609;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    frame_08d43c0307a6e1b78d01ccfcdc0a25e6->m_frame.f_lineno = 609;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 609;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 611;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_add_prompt );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 611;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscribed_name_1 = var_x;

    if ( tmp_subscribed_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 611;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = const_int_0;
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 611;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_subscribed_name_2 = var_x;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "x" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 611;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 611;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    frame_08d43c0307a6e1b78d01ccfcdc0a25e6->m_frame.f_lineno = 611;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 611;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 607;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_08d43c0307a6e1b78d01ccfcdc0a25e6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_08d43c0307a6e1b78d01ccfcdc0a25e6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_08d43c0307a6e1b78d01ccfcdc0a25e6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_08d43c0307a6e1b78d01ccfcdc0a25e6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_08d43c0307a6e1b78d01ccfcdc0a25e6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_08d43c0307a6e1b78d01ccfcdc0a25e6,
        type_description_1,
        par_self,
        par_name,
        par_instructions,
        par_prompts,
        var_x
    );


    // Release cached frame.
    if ( frame_08d43c0307a6e1b78d01ccfcdc0a25e6 == cache_frame_08d43c0307a6e1b78d01ccfcdc0a25e6 )
    {
        Py_DECREF( frame_08d43c0307a6e1b78d01ccfcdc0a25e6 );
    }
    cache_frame_08d43c0307a6e1b78d01ccfcdc0a25e6 = NULL;

    assertFrameObject( frame_08d43c0307a6e1b78d01ccfcdc0a25e6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_24___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_prompts );
    par_prompts = NULL;

    Py_XDECREF( par_instructions );
    par_instructions = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

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

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_prompts );
    par_prompts = NULL;

    Py_XDECREF( par_instructions );
    par_instructions = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_24___init__ );
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


static PyObject *impl_paramiko$server$$$function_25_add_prompt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_prompt = python_pars[ 1 ];
    PyObject *par_echo = python_pars[ 2 ];
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
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1e026cc339b713f3c4db0c035f382ee9 = NULL;

    struct Nuitka_FrameObject *frame_1e026cc339b713f3c4db0c035f382ee9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1e026cc339b713f3c4db0c035f382ee9, codeobj_1e026cc339b713f3c4db0c035f382ee9, module_paramiko$server, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1e026cc339b713f3c4db0c035f382ee9 = cache_frame_1e026cc339b713f3c4db0c035f382ee9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1e026cc339b713f3c4db0c035f382ee9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1e026cc339b713f3c4db0c035f382ee9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_prompts );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 623;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 623;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = par_prompt;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "prompt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 623;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_echo;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "echo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 623;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_1, 1, tmp_tuple_element_1 );
    frame_1e026cc339b713f3c4db0c035f382ee9->m_frame.f_lineno = 623;
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


        exception_lineno = 623;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e026cc339b713f3c4db0c035f382ee9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e026cc339b713f3c4db0c035f382ee9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1e026cc339b713f3c4db0c035f382ee9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1e026cc339b713f3c4db0c035f382ee9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1e026cc339b713f3c4db0c035f382ee9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1e026cc339b713f3c4db0c035f382ee9,
        type_description_1,
        par_self,
        par_prompt,
        par_echo
    );


    // Release cached frame.
    if ( frame_1e026cc339b713f3c4db0c035f382ee9 == cache_frame_1e026cc339b713f3c4db0c035f382ee9 )
    {
        Py_DECREF( frame_1e026cc339b713f3c4db0c035f382ee9 );
    }
    cache_frame_1e026cc339b713f3c4db0c035f382ee9 = NULL;

    assertFrameObject( frame_1e026cc339b713f3c4db0c035f382ee9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_25_add_prompt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_echo );
    par_echo = NULL;

    Py_XDECREF( par_prompt );
    par_prompt = NULL;

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

    Py_XDECREF( par_echo );
    par_echo = NULL;

    Py_XDECREF( par_prompt );
    par_prompt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_25_add_prompt );
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


static PyObject *impl_paramiko$server$$$function_26___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_channel = python_pars[ 1 ];
    PyObject *par_name = python_pars[ 2 ];
    PyObject *par_server = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_24531db85e55de69b92970dd66530bf8 = NULL;

    struct Nuitka_FrameObject *frame_24531db85e55de69b92970dd66530bf8;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_24531db85e55de69b92970dd66530bf8, codeobj_24531db85e55de69b92970dd66530bf8, module_paramiko$server, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_24531db85e55de69b92970dd66530bf8 = cache_frame_24531db85e55de69b92970dd66530bf8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_24531db85e55de69b92970dd66530bf8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_24531db85e55de69b92970dd66530bf8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_threading );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_threading );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "threading" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 654;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Thread );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 654;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 654;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = par_self;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 654;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_target;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 654;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__run );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 654;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_24531db85e55de69b92970dd66530bf8->m_frame.f_lineno = 654;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 654;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assattr_name_1 = par_channel;

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "channel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 655;
        type_description_1 = "oooo";
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

        exception_lineno = 655;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__SubsystemHandler__channel, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 655;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_1 = par_channel;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "channel" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 656;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_24531db85e55de69b92970dd66530bf8->m_frame.f_lineno = 656;
    tmp_assattr_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_transport );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 656;
        type_description_1 = "oooo";
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

        exception_lineno = 656;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__SubsystemHandler__transport, tmp_assattr_name_2 );
    Py_DECREF( tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 656;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_name;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 657;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 657;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__SubsystemHandler__name, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 657;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_server;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "server" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 658;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = par_self;

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 658;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__SubsystemHandler__server, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 658;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_24531db85e55de69b92970dd66530bf8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_24531db85e55de69b92970dd66530bf8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_24531db85e55de69b92970dd66530bf8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_24531db85e55de69b92970dd66530bf8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_24531db85e55de69b92970dd66530bf8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_24531db85e55de69b92970dd66530bf8,
        type_description_1,
        par_self,
        par_channel,
        par_name,
        par_server
    );


    // Release cached frame.
    if ( frame_24531db85e55de69b92970dd66530bf8 == cache_frame_24531db85e55de69b92970dd66530bf8 )
    {
        Py_DECREF( frame_24531db85e55de69b92970dd66530bf8 );
    }
    cache_frame_24531db85e55de69b92970dd66530bf8 = NULL;

    assertFrameObject( frame_24531db85e55de69b92970dd66530bf8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_26___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_server );
    par_server = NULL;

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

    Py_XDECREF( par_channel );
    par_channel = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_server );
    par_server = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_26___init__ );
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


static PyObject *impl_paramiko$server$$$function_27_get_server( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static struct Nuitka_FrameObject *cache_frame_10cd15db377fbb535f594e48fc74efd3 = NULL;

    struct Nuitka_FrameObject *frame_10cd15db377fbb535f594e48fc74efd3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_10cd15db377fbb535f594e48fc74efd3, codeobj_10cd15db377fbb535f594e48fc74efd3, module_paramiko$server, sizeof(void *) );
    frame_10cd15db377fbb535f594e48fc74efd3 = cache_frame_10cd15db377fbb535f594e48fc74efd3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10cd15db377fbb535f594e48fc74efd3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10cd15db377fbb535f594e48fc74efd3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__SubsystemHandler__server );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 665;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10cd15db377fbb535f594e48fc74efd3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_10cd15db377fbb535f594e48fc74efd3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10cd15db377fbb535f594e48fc74efd3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10cd15db377fbb535f594e48fc74efd3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10cd15db377fbb535f594e48fc74efd3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10cd15db377fbb535f594e48fc74efd3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10cd15db377fbb535f594e48fc74efd3,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_10cd15db377fbb535f594e48fc74efd3 == cache_frame_10cd15db377fbb535f594e48fc74efd3 )
    {
        Py_DECREF( frame_10cd15db377fbb535f594e48fc74efd3 );
    }
    cache_frame_10cd15db377fbb535f594e48fc74efd3 = NULL;

    assertFrameObject( frame_10cd15db377fbb535f594e48fc74efd3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_27_get_server );
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
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_27_get_server );
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


static PyObject *impl_paramiko$server$$$function_28__run( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_e = NULL;
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
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_54834cad08adedd1886ea0ccc7a65af2 = NULL;

    struct Nuitka_FrameObject *frame_54834cad08adedd1886ea0ccc7a65af2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_54834cad08adedd1886ea0ccc7a65af2, codeobj_54834cad08adedd1886ea0ccc7a65af2, module_paramiko$server, sizeof(void *)+sizeof(void *) );
    frame_54834cad08adedd1886ea0ccc7a65af2 = cache_frame_54834cad08adedd1886ea0ccc7a65af2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_54834cad08adedd1886ea0ccc7a65af2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_54834cad08adedd1886ea0ccc7a65af2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__SubsystemHandler__transport );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 669;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__log );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 669;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_DEBUG );

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

        exception_lineno = 670;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_source_name_3 = const_str_digest_78e8ab2588b180fa352899e21cafb856;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
    assert( !(tmp_called_name_2 == NULL) );
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 670;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__SubsystemHandler__name );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 670;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    frame_54834cad08adedd1886ea0ccc7a65af2->m_frame.f_lineno = 670;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 670;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    frame_54834cad08adedd1886ea0ccc7a65af2->m_frame.f_lineno = 669;
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


        exception_lineno = 669;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 672;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_start_subsystem );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 672;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 672;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__SubsystemHandler__name );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 672;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_source_name_7 = par_self;

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 672;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__SubsystemHandler__transport );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 672;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 672;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__SubsystemHandler__channel );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 672;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    frame_54834cad08adedd1886ea0ccc7a65af2->m_frame.f_lineno = 672;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 672;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_54834cad08adedd1886ea0ccc7a65af2, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_54834cad08adedd1886ea0ccc7a65af2, exception_keeper_lineno_1 );
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


        exception_lineno = 673;
        type_description_1 = "oo";
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
    tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_e = tmp_assign_source_1;

    // Tried code:
    tmp_source_name_10 = par_self;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 674;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__SubsystemHandler__transport );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__log );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_ERROR );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ERROR );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ERROR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 675;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    tmp_source_name_11 = const_str_digest_29f5a6cb5e98ca82288f3947b5c1a0f4;
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_format );
    assert( !(tmp_called_name_5 == NULL) );
    tmp_source_name_12 = par_self;

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 677;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__SubsystemHandler__name );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 677;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_10 = var_e;

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "e" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 677;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    frame_54834cad08adedd1886ea0ccc7a65af2->m_frame.f_lineno = 676;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 676;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    frame_54834cad08adedd1886ea0ccc7a65af2->m_frame.f_lineno = 674;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_14 = par_self;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 680;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__SubsystemHandler__transport );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain__log );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_11 = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_ERROR );

    if (unlikely( tmp_args_element_name_11 == NULL ))
    {
        tmp_args_element_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ERROR );
    }

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ERROR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 680;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_util );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "util" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 680;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    frame_54834cad08adedd1886ea0ccc7a65af2->m_frame.f_lineno = 680;
    tmp_args_element_name_12 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_tb_strings );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 680;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    frame_54834cad08adedd1886ea0ccc7a65af2->m_frame.f_lineno = 680;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    goto try_end_2;
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

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF( var_e );
    var_e = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 668;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_54834cad08adedd1886ea0ccc7a65af2->m_frame) frame_54834cad08adedd1886ea0ccc7a65af2->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_1:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_28__run );
    return NULL;
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_called_instance_2 = par_self;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 682;
        type_description_1 = "oo";
        goto try_except_handler_5;
    }

    frame_54834cad08adedd1886ea0ccc7a65af2->m_frame.f_lineno = 682;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_finish_subsystem );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 682;
        type_description_1 = "oo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
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

    Py_DECREF( exception_keeper_type_4 );
    Py_XDECREF( exception_keeper_value_4 );
    Py_XDECREF( exception_keeper_tb_4 );
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_28__run );
    return NULL;
    // End of try:
    try_end_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54834cad08adedd1886ea0ccc7a65af2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54834cad08adedd1886ea0ccc7a65af2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_54834cad08adedd1886ea0ccc7a65af2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_54834cad08adedd1886ea0ccc7a65af2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_54834cad08adedd1886ea0ccc7a65af2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_54834cad08adedd1886ea0ccc7a65af2,
        type_description_1,
        par_self,
        var_e
    );


    // Release cached frame.
    if ( frame_54834cad08adedd1886ea0ccc7a65af2 == cache_frame_54834cad08adedd1886ea0ccc7a65af2 )
    {
        Py_DECREF( frame_54834cad08adedd1886ea0ccc7a65af2 );
    }
    cache_frame_54834cad08adedd1886ea0ccc7a65af2 = NULL;

    assertFrameObject( frame_54834cad08adedd1886ea0ccc7a65af2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_28__run );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_28__run );
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


static PyObject *impl_paramiko$server$$$function_29_start_subsystem( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_transport = python_pars[ 2 ];
    PyObject *par_channel = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_29_start_subsystem );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_transport );
    par_transport = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_transport );
    par_transport = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_channel );
    par_channel = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_29_start_subsystem );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_paramiko$server$$$function_30_finish_subsystem( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_148c8bccffeb1b105b0cb79a181e8b2d = NULL;

    struct Nuitka_FrameObject *frame_148c8bccffeb1b105b0cb79a181e8b2d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_148c8bccffeb1b105b0cb79a181e8b2d, codeobj_148c8bccffeb1b105b0cb79a181e8b2d, module_paramiko$server, sizeof(void *) );
    frame_148c8bccffeb1b105b0cb79a181e8b2d = cache_frame_148c8bccffeb1b105b0cb79a181e8b2d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_148c8bccffeb1b105b0cb79a181e8b2d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_148c8bccffeb1b105b0cb79a181e8b2d ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__SubsystemHandler__channel );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 719;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_148c8bccffeb1b105b0cb79a181e8b2d->m_frame.f_lineno = 719;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 719;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_148c8bccffeb1b105b0cb79a181e8b2d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_148c8bccffeb1b105b0cb79a181e8b2d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_148c8bccffeb1b105b0cb79a181e8b2d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_148c8bccffeb1b105b0cb79a181e8b2d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_148c8bccffeb1b105b0cb79a181e8b2d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_148c8bccffeb1b105b0cb79a181e8b2d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_148c8bccffeb1b105b0cb79a181e8b2d == cache_frame_148c8bccffeb1b105b0cb79a181e8b2d )
    {
        Py_DECREF( frame_148c8bccffeb1b105b0cb79a181e8b2d );
    }
    cache_frame_148c8bccffeb1b105b0cb79a181e8b2d = NULL;

    assertFrameObject( frame_148c8bccffeb1b105b0cb79a181e8b2d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_30_finish_subsystem );
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
    NUITKA_CANNOT_GET_HERE( paramiko$server$$$function_30_finish_subsystem );
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



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_10_enable_auth_gssapi(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_10_enable_auth_gssapi,
        const_str_plain_enable_auth_gssapi,
#if PYTHON_VERSION >= 300
        const_str_digest_5acc948f94210cd7d5b18b2465e605df,
#endif
        codeobj_9e87705a86fe087f38b3015ca6841a5e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_c338ea54086ff35b98fba197aaaaa5a4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_11_check_port_forward_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_11_check_port_forward_request,
        const_str_plain_check_port_forward_request,
#if PYTHON_VERSION >= 300
        const_str_digest_2f5a7a083ebb4a5091c91ac807b2ce67,
#endif
        codeobj_a670374d5f0761d2e068580ce7eb68d4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_e65a7a8b6b12b7371d7efaa277f9d1bc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_12_cancel_port_forward_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_12_cancel_port_forward_request,
        const_str_plain_cancel_port_forward_request,
#if PYTHON_VERSION >= 300
        const_str_digest_33b83ed9006bb43fce2d9f30a0e54744,
#endif
        codeobj_f16099cc41558cb1b302a6aa2ca49166,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_c498738e96816e0339459e4d385aea8d,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_13_check_global_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_13_check_global_request,
        const_str_plain_check_global_request,
#if PYTHON_VERSION >= 300
        const_str_digest_1954d5db7156e2a80eea467fc8e5e83a,
#endif
        codeobj_0525270cedbb6b2a2d62bd756c8c16ea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_5fa6b1b42367eb6f15013bf0dad90d69,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_14_check_channel_pty_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_14_check_channel_pty_request,
        const_str_plain_check_channel_pty_request,
#if PYTHON_VERSION >= 300
        const_str_digest_a034a61d6e82ac53ec4209f79732cc27,
#endif
        codeobj_35ab1233342e22eecd3ca98e7d3f2e42,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_ce5388e010eb6d5433168bdb50e1ecd1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_15_check_channel_shell_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_15_check_channel_shell_request,
        const_str_plain_check_channel_shell_request,
#if PYTHON_VERSION >= 300
        const_str_digest_9370fc6e3986edb06b86f8220c683230,
#endif
        codeobj_9a406bf58206b62cfdd26f48d8769b7a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_00fcfca0338ae033752ed044ed7d5d2b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_16_check_channel_exec_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_16_check_channel_exec_request,
        const_str_plain_check_channel_exec_request,
#if PYTHON_VERSION >= 300
        const_str_digest_24898269aa579466e5ca68ce5bb3f771,
#endif
        codeobj_278edc4958c1555162c4e9ba99a14b7d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_b589acde3baacc3b29295df1a9d3f450,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_17_check_channel_subsystem_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_17_check_channel_subsystem_request,
        const_str_plain_check_channel_subsystem_request,
#if PYTHON_VERSION >= 300
        const_str_digest_7edbe79e373c371841f831794316e4cd,
#endif
        codeobj_0b8b43be2705c3f31968dcd32934e2d7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_dd163053c4bb7a84360f48fe05506c84,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_18_check_channel_window_change_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_18_check_channel_window_change_request,
        const_str_plain_check_channel_window_change_request,
#if PYTHON_VERSION >= 300
        const_str_digest_e7748e264ae6ddd32fd16daed8429b20,
#endif
        codeobj_6aac79ffe8a2c2ea369895e66386e3b6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_35af78164b2682305add33281df873bf,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_19_check_channel_x11_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_19_check_channel_x11_request,
        const_str_plain_check_channel_x11_request,
#if PYTHON_VERSION >= 300
        const_str_digest_bc216c3b1732bb02734b602599ffe277,
#endif
        codeobj_d721bbe1d8dd259b04ca996b9a08e12d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_fbac150dc02dc1ceb7ba494bb1d2e35f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_1_check_channel_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_1_check_channel_request,
        const_str_plain_check_channel_request,
#if PYTHON_VERSION >= 300
        const_str_digest_035eba801429532d5ee188208bd46dd7,
#endif
        codeobj_840962786e7ebd871a64cc79dd6956a5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_a7e00b986640b50aeefd3b55353dd22a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_20_check_channel_forward_agent_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_20_check_channel_forward_agent_request,
        const_str_plain_check_channel_forward_agent_request,
#if PYTHON_VERSION >= 300
        const_str_digest_5e7dd0d60a2c9e39619aab70fd815d06,
#endif
        codeobj_c229c3b8fe9d7099cfe6564ddfec4efb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_7e04d6b79760b566e988ae8e4346e6e7,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_21_check_channel_direct_tcpip_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_21_check_channel_direct_tcpip_request,
        const_str_plain_check_channel_direct_tcpip_request,
#if PYTHON_VERSION >= 300
        const_str_digest_bc14b1f977359a2e90b090491f5ae7bd,
#endif
        codeobj_ec5d9663772732921a9ee19f623ce0bb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_87ff3a2385d6c4879f9bcc561418ecd9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_22_check_channel_env_request(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_22_check_channel_env_request,
        const_str_plain_check_channel_env_request,
#if PYTHON_VERSION >= 300
        const_str_digest_675b7929208e2ca7789b909cc2b088fa,
#endif
        codeobj_ebb43bf4040428406db188409bd7c07d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_8f61f1df3d70c6af89b69b60fc4bce75,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_23_get_banner(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_23_get_banner,
        const_str_plain_get_banner,
#if PYTHON_VERSION >= 300
        const_str_digest_4d8c5294faa70caefd3b84fca355d446,
#endif
        codeobj_252240af0f98948b3fcb0c5c55dfb7ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_5f2d77f17d703676ba26f56d7879530b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_24___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_24___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_49c14e26def2600a6a49a8d2015545a0,
#endif
        codeobj_08d43c0307a6e1b78d01ccfcdc0a25e6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_4dc8dcbcf5838ed5b58f9e076232ceab,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_25_add_prompt( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_25_add_prompt,
        const_str_plain_add_prompt,
#if PYTHON_VERSION >= 300
        const_str_digest_c654c95d59b505eb807852f17ca685dd,
#endif
        codeobj_1e026cc339b713f3c4db0c035f382ee9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_14c8d32eeadf1ea437398d23d46fa9a3,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_26___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_26___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_5eb0304b341ecd12be71a7d923e45f55,
#endif
        codeobj_24531db85e55de69b92970dd66530bf8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_c77d886242109deb57067b65c432f10b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_27_get_server(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_27_get_server,
        const_str_plain_get_server,
#if PYTHON_VERSION >= 300
        const_str_digest_f5d5d3512f3ee60a892ceda8fbbd5bb8,
#endif
        codeobj_10cd15db377fbb535f594e48fc74efd3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_f5f9ae8bbeb913e7d11da84553058d6c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_28__run(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_28__run,
        const_str_plain__run,
#if PYTHON_VERSION >= 300
        const_str_digest_33abaca4579652e388480a2fffe9a639,
#endif
        codeobj_54834cad08adedd1886ea0ccc7a65af2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_29_start_subsystem(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_29_start_subsystem,
        const_str_plain_start_subsystem,
#if PYTHON_VERSION >= 300
        const_str_digest_8fda8270d584781e857a7c1a0b983644,
#endif
        codeobj_4719b5d852bff960136779f44eae1099,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_c360fe18953ab1120472b01357171a36,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_2_get_allowed_auths(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_2_get_allowed_auths,
        const_str_plain_get_allowed_auths,
#if PYTHON_VERSION >= 300
        const_str_digest_d41258fcdd0d32982c67d7e33edc1783,
#endif
        codeobj_c6ea48f17c10d5d86d128fc69cf1b046,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_321cea67e69a78284a28990b1ee5c91e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_30_finish_subsystem(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_30_finish_subsystem,
        const_str_plain_finish_subsystem,
#if PYTHON_VERSION >= 300
        const_str_digest_046ec8b441ffe4b1d1bd62de05ff7578,
#endif
        codeobj_148c8bccffeb1b105b0cb79a181e8b2d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_a0f0e4b43056ca8b6129708d5d6497ab,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_3_check_auth_none(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_3_check_auth_none,
        const_str_plain_check_auth_none,
#if PYTHON_VERSION >= 300
        const_str_digest_5c2e57d51a1167c9b4fc2f6e7eca0849,
#endif
        codeobj_c1dec9b96631ca0fe072c3559a6baf13,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_77a10d90e5371495144b3e9f455fc01f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_4_check_auth_password(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_4_check_auth_password,
        const_str_plain_check_auth_password,
#if PYTHON_VERSION >= 300
        const_str_digest_0ba5aa85fedffb8a30c3ebe77d9f29a7,
#endif
        codeobj_816a19c822096e4284c11eb08de9a4cc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_384a493d412fa52e5b4dcfad50bbbfb7,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_5_check_auth_publickey(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_5_check_auth_publickey,
        const_str_plain_check_auth_publickey,
#if PYTHON_VERSION >= 300
        const_str_digest_1d2be4badc6ad05492f52204b49da50a,
#endif
        codeobj_043144d5b06f8cb848acea976d7a9ef0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_e63e703699cc72d43a5d1dc62c595576,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_6_check_auth_interactive(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_6_check_auth_interactive,
        const_str_plain_check_auth_interactive,
#if PYTHON_VERSION >= 300
        const_str_digest_9270188b898858037d149aa5017dd61a,
#endif
        codeobj_3d6dc5b22f0d80b788d19ba3cf9e1c0f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_6763ed1bfbaeda95889ecc2cfbdf1d75,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_7_check_auth_interactive_response(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_7_check_auth_interactive_response,
        const_str_plain_check_auth_interactive_response,
#if PYTHON_VERSION >= 300
        const_str_digest_11cf970be09182572f75cc4bb7b4620c,
#endif
        codeobj_b219e0ef7faaf7e472223f3146f20971,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_0f721d92b2caa9440ba997bca9f7d9c1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_8_check_auth_gssapi_with_mic( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_8_check_auth_gssapi_with_mic,
        const_str_plain_check_auth_gssapi_with_mic,
#if PYTHON_VERSION >= 300
        const_str_digest_4c70796efe5d547775a110ddc3f54cc0,
#endif
        codeobj_8238293666b991f0f90a3ce96c587a23,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_aaff705aa612b37b7010072e5916a113,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_paramiko$server$$$function_9_check_auth_gssapi_keyex( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_paramiko$server$$$function_9_check_auth_gssapi_keyex,
        const_str_plain_check_auth_gssapi_keyex,
#if PYTHON_VERSION >= 300
        const_str_digest_ae6e25f291c96d56b6249953d68d27a1,
#endif
        codeobj_3dd1f660b55a401559f6f863a6c1d6ca,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_paramiko$server,
        const_str_digest_19595cde5e6e87af9e8a2f53dce743f4,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_paramiko$server =
{
    PyModuleDef_HEAD_INIT,
    "paramiko.server",   /* m_name */
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

MOD_INIT_DECL( paramiko$server )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_paramiko$server );
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
    puts("paramiko.server: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("paramiko.server: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("paramiko.server: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initparamiko$server" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_paramiko$server = Py_InitModule4(
        "paramiko.server",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_paramiko$server = PyModule_Create( &mdef_paramiko$server );
#endif

    moduledict_paramiko$server = MODULE_DICT( module_paramiko$server );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_paramiko$server,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_paramiko$server,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_paramiko$server,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_paramiko$server );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_ea4545ce436c53c4b49eb5bf04d640b4, module_paramiko$server );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
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
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_key_name_8;
    PyObject *tmp_key_name_9;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_4114d0bbcaa185bcacdcea1135881e80_2 = NULL;

    struct Nuitka_FrameObject *frame_4114d0bbcaa185bcacdcea1135881e80_2;

    static struct Nuitka_FrameObject *cache_frame_11994c263a80bec961d642afef01e637_3 = NULL;

    struct Nuitka_FrameObject *frame_11994c263a80bec961d642afef01e637_3;

    static struct Nuitka_FrameObject *cache_frame_a02747ac8cce3917e3a95ec4d6d3e354_4 = NULL;

    struct Nuitka_FrameObject *frame_a02747ac8cce3917e3a95ec4d6d3e354_4;

    struct Nuitka_FrameObject *frame_262dff8fd6c69a5a77e4b9470c624c9b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    PyObject *locals_paramiko$server_587 = NULL;
    PyObject *locals_paramiko$server_32 = NULL;
    PyObject *locals_paramiko$server_626 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_2d270d851eebdbb9ca3bab7128eec43e;
    UPDATE_STRING_DICT0( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e5a619d3614824ffa3b577c26ad1f1e4;
    UPDATE_STRING_DICT0( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_262dff8fd6c69a5a77e4b9470c624c9b = MAKE_MODULE_FRAME( codeobj_262dff8fd6c69a5a77e4b9470c624c9b, module_paramiko$server );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_262dff8fd6c69a5a77e4b9470c624c9b );
    assert( Py_REFCNT( frame_262dff8fd6c69a5a77e4b9470c624c9b ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_threading;
    tmp_globals_name_1 = (PyObject *)moduledict_paramiko$server;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_262dff8fd6c69a5a77e4b9470c624c9b->m_frame.f_lineno = 23;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_paramiko;
    tmp_globals_name_2 = (PyObject *)moduledict_paramiko$server;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_util_tuple;
    tmp_level_name_2 = const_int_0;
    frame_262dff8fd6c69a5a77e4b9470c624c9b->m_frame.f_lineno = 24;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_util );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_util, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_digest_043a098e3c8c7e01497500bb854d02ab;
    tmp_globals_name_3 = (PyObject *)moduledict_paramiko$server;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_c678b4f22fd053d1bbbee117998a84aa_tuple;
    tmp_level_name_3 = const_int_0;
    frame_262dff8fd6c69a5a77e4b9470c624c9b->m_frame.f_lineno = 25;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_6;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_DEBUG );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_DEBUG, tmp_assign_source_7 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ERROR );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_ERROR, tmp_assign_source_8 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_OPEN_FAILED_ADMINISTRATIVELY_PROHIBITED, tmp_assign_source_9 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_AUTH_FAILED );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED, tmp_assign_source_10 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_AUTH_SUCCESSFUL );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_SUCCESSFUL, tmp_assign_source_11 );
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

    tmp_name_name_4 = const_str_digest_af46dc626906b3459f8298b3797a94e5;
    tmp_globals_name_4 = (PyObject *)moduledict_paramiko$server;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_string_types_tuple;
    tmp_level_name_4 = const_int_0;
    frame_262dff8fd6c69a5a77e4b9470c624c9b->m_frame.f_lineno = 29;
    tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_string_types );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_12 );
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


        exception_lineno = 32;

        goto try_except_handler_2;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

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


        exception_lineno = 32;

        goto try_except_handler_2;
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


        exception_lineno = 32;

        goto try_except_handler_2;
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


        exception_lineno = 32;

        goto try_except_handler_2;
    }
    tmp_cond_value_2 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

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


        exception_lineno = 32;

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


        exception_lineno = 32;

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


        exception_lineno = 32;

        goto try_except_handler_2;
    }
    tmp_args_name_1 = const_tuple_str_plain_ServerInterface_tuple_type_object_tuple_tuple;
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_262dff8fd6c69a5a77e4b9470c624c9b->m_frame.f_lineno = 32;
    tmp_assign_source_15 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_15 = PyDict_New();
    condexpr_end_2:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_15;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_paramiko$server_32 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_ea4545ce436c53c4b49eb5bf04d640b4;
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_4;
    }
    tmp_dictset_value = const_str_digest_a858fd74697cd163baaa4ae6dcd45eca;
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_4;
    }
    tmp_dictset_value = const_str_plain_ServerInterface;
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_4;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_4114d0bbcaa185bcacdcea1135881e80_2, codeobj_4114d0bbcaa185bcacdcea1135881e80, module_paramiko$server, sizeof(void *) );
    frame_4114d0bbcaa185bcacdcea1135881e80_2 = cache_frame_4114d0bbcaa185bcacdcea1135881e80_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4114d0bbcaa185bcacdcea1135881e80_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4114d0bbcaa185bcacdcea1135881e80_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_1_check_channel_request(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_channel_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_2_get_allowed_auths(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_get_allowed_auths, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_3_check_auth_none(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_auth_none, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_4_check_auth_password(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_auth_password, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_5_check_auth_publickey(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_auth_publickey, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_6_check_auth_interactive(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_auth_interactive, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_7_check_auth_interactive_response(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_auth_interactive_response, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_tuple_element_1 = PyObject_GetItem( locals_paramiko$server_32, const_str_plain_AUTH_FAILED );

    if ( tmp_tuple_element_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );

        if (unlikely( tmp_tuple_element_1 == NULL ))
        {
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );
        }

        if ( tmp_tuple_element_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AUTH_FAILED" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 237;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_defaults_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_8_check_auth_gssapi_with_mic( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_auth_gssapi_with_mic, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_tuple_element_2 = PyObject_GetItem( locals_paramiko$server_32, const_str_plain_AUTH_FAILED );

    if ( tmp_tuple_element_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );

        if (unlikely( tmp_tuple_element_2 == NULL ))
        {
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AUTH_FAILED );
        }

        if ( tmp_tuple_element_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AUTH_FAILED" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 267;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_defaults_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_2 );
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_9_check_auth_gssapi_keyex( tmp_defaults_2 );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_auth_gssapi_keyex, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_10_enable_auth_gssapi(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_enable_auth_gssapi, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_11_check_port_forward_request(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_port_forward_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_12_cancel_port_forward_request(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_cancel_port_forward_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_13_check_global_request(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_global_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_14_check_channel_pty_request(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_channel_pty_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_15_check_channel_shell_request(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_channel_shell_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_16_check_channel_exec_request(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_channel_exec_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 413;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_17_check_channel_subsystem_request(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_channel_subsystem_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 432;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_18_check_channel_window_change_request(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_channel_window_change_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 462;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_19_check_channel_x11_request(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_channel_x11_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 481;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_20_check_channel_forward_agent_request(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_channel_forward_agent_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 502;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_21_check_channel_direct_tcpip_request(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_channel_direct_tcpip_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 515;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_22_check_channel_env_request(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_check_channel_env_request, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 555;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_23_get_banner(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_32, const_str_plain_get_banner, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 573;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4114d0bbcaa185bcacdcea1135881e80_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4114d0bbcaa185bcacdcea1135881e80_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4114d0bbcaa185bcacdcea1135881e80_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4114d0bbcaa185bcacdcea1135881e80_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4114d0bbcaa185bcacdcea1135881e80_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4114d0bbcaa185bcacdcea1135881e80_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_4114d0bbcaa185bcacdcea1135881e80_2 == cache_frame_4114d0bbcaa185bcacdcea1135881e80_2 )
    {
        Py_DECREF( frame_4114d0bbcaa185bcacdcea1135881e80_2 );
    }
    cache_frame_4114d0bbcaa185bcacdcea1135881e80_2 = NULL;

    assertFrameObject( frame_4114d0bbcaa185bcacdcea1135881e80_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_4;
    skip_nested_handling_1:;
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_3 = const_str_plain_ServerInterface;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_paramiko$server_32;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_262dff8fd6c69a5a77e4b9470c624c9b->m_frame.f_lineno = 32;
    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_17;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    Py_DECREF( locals_paramiko$server_32 );
    locals_paramiko$server_32 = NULL;
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

    Py_DECREF( locals_paramiko$server_32 );
    locals_paramiko$server_32 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server );
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
    NUITKA_CANNOT_GET_HERE( paramiko$server );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 32;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_16 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_ServerInterface, tmp_assign_source_16 );
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


        exception_lineno = 587;

        goto try_except_handler_5;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;

        goto try_except_handler_5;
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


        exception_lineno = 587;

        goto try_except_handler_5;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_metaclass_name_2 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_2 != NULL );
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_3:;
    tmp_bases_name_2 = const_tuple_type_object_tuple;
    tmp_assign_source_19 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;

        goto try_except_handler_5;
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


        exception_lineno = 587;

        goto try_except_handler_5;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;

        goto try_except_handler_5;
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


        exception_lineno = 587;

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


        exception_lineno = 587;

        goto try_except_handler_5;
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


        exception_lineno = 587;

        goto try_except_handler_5;
    }
    tmp_args_name_3 = const_tuple_str_plain_InteractiveQuery_tuple_type_object_tuple_tuple;
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_262dff8fd6c69a5a77e4b9470c624c9b->m_frame.f_lineno = 587;
    tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;

        goto try_except_handler_5;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_20 = PyDict_New();
    condexpr_end_4:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_20;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_paramiko$server_587 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_ea4545ce436c53c4b49eb5bf04d640b4;
    tmp_res = PyObject_SetItem( locals_paramiko$server_587, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;

        goto try_except_handler_7;
    }
    tmp_dictset_value = const_str_digest_bd8784842f3d59d86770fd197deb56e9;
    tmp_res = PyObject_SetItem( locals_paramiko$server_587, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;

        goto try_except_handler_7;
    }
    tmp_dictset_value = const_str_plain_InteractiveQuery;
    tmp_res = PyObject_SetItem( locals_paramiko$server_587, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;

        goto try_except_handler_7;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_11994c263a80bec961d642afef01e637_3, codeobj_11994c263a80bec961d642afef01e637, module_paramiko$server, sizeof(void *) );
    frame_11994c263a80bec961d642afef01e637_3 = cache_frame_11994c263a80bec961d642afef01e637_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_11994c263a80bec961d642afef01e637_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_11994c263a80bec961d642afef01e637_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_3 = const_tuple_str_empty_str_empty_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_24___init__( tmp_defaults_3 );
    tmp_res = PyObject_SetItem( locals_paramiko$server_587, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 592;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_defaults_4 = const_tuple_true_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_25_add_prompt( tmp_defaults_4 );
    tmp_res = PyObject_SetItem( locals_paramiko$server_587, const_str_plain_add_prompt, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 613;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11994c263a80bec961d642afef01e637_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_11994c263a80bec961d642afef01e637_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_11994c263a80bec961d642afef01e637_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_11994c263a80bec961d642afef01e637_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_11994c263a80bec961d642afef01e637_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_11994c263a80bec961d642afef01e637_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_11994c263a80bec961d642afef01e637_3 == cache_frame_11994c263a80bec961d642afef01e637_3 )
    {
        Py_DECREF( frame_11994c263a80bec961d642afef01e637_3 );
    }
    cache_frame_11994c263a80bec961d642afef01e637_3 = NULL;

    assertFrameObject( frame_11994c263a80bec961d642afef01e637_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_7;
    skip_nested_handling_2:;
    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_tuple_element_4 = const_str_plain_InteractiveQuery;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_paramiko$server_587;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_4 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_262dff8fd6c69a5a77e4b9470c624c9b->m_frame.f_lineno = 587;
    tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;

        goto try_except_handler_7;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_22;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    Py_DECREF( locals_paramiko$server_587 );
    locals_paramiko$server_587 = NULL;
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

    Py_DECREF( locals_paramiko$server_587 );
    locals_paramiko$server_587 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server );
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
    NUITKA_CANNOT_GET_HERE( paramiko$server );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 587;
    goto try_except_handler_5;
    outline_result_2:;
    tmp_assign_source_21 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_InteractiveQuery, tmp_assign_source_21 );
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

    // Tried code:
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_threading );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_threading );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "threading" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 626;

        goto try_except_handler_8;
    }

    tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Thread );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;

        goto try_except_handler_8;
    }
    tmp_assign_source_23 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_23, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_23;

    tmp_assign_source_24 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_24;

    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;

        goto try_except_handler_8;
    }
    tmp_cond_value_5 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;

        goto try_except_handler_8;
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


        exception_lineno = 626;

        goto try_except_handler_8;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_subscribed_name_1 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;

        goto try_except_handler_8;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;

        goto try_except_handler_8;
    }
    condexpr_end_5:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_25 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_25;

    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;

        goto try_except_handler_8;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;

        goto try_except_handler_8;
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


        exception_lineno = 626;

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


        exception_lineno = 626;

        goto try_except_handler_8;
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
    tmp_source_name_4 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;

        goto try_except_handler_8;
    }
    tmp_tuple_element_6 = const_str_plain_SubsystemHandler;
    tmp_args_name_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_6 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_6 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_262dff8fd6c69a5a77e4b9470c624c9b->m_frame.f_lineno = 626;
    tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;

        goto try_except_handler_8;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_26 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_26;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_paramiko$server_626 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_ea4545ce436c53c4b49eb5bf04d640b4;
    tmp_res = PyObject_SetItem( locals_paramiko$server_626, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;

        goto try_except_handler_10;
    }
    tmp_dictset_value = const_str_digest_781ee8ba710834750f0dfde0d9bf852c;
    tmp_res = PyObject_SetItem( locals_paramiko$server_626, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;

        goto try_except_handler_10;
    }
    tmp_dictset_value = const_str_plain_SubsystemHandler;
    tmp_res = PyObject_SetItem( locals_paramiko$server_626, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;

        goto try_except_handler_10;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_a02747ac8cce3917e3a95ec4d6d3e354_4, codeobj_a02747ac8cce3917e3a95ec4d6d3e354, module_paramiko$server, sizeof(void *) );
    frame_a02747ac8cce3917e3a95ec4d6d3e354_4 = cache_frame_a02747ac8cce3917e3a95ec4d6d3e354_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a02747ac8cce3917e3a95ec4d6d3e354_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a02747ac8cce3917e3a95ec4d6d3e354_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_26___init__(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_626, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 640;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_27_get_server(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_626, const_str_plain_get_server, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 660;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_28__run(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_626, const_str_plain__run, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 667;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_29_start_subsystem(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_626, const_str_plain_start_subsystem, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 686;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_dictset_value = MAKE_FUNCTION_paramiko$server$$$function_30_finish_subsystem(  );
    tmp_res = PyObject_SetItem( locals_paramiko$server_626, const_str_plain_finish_subsystem, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 712;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a02747ac8cce3917e3a95ec4d6d3e354_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a02747ac8cce3917e3a95ec4d6d3e354_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a02747ac8cce3917e3a95ec4d6d3e354_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a02747ac8cce3917e3a95ec4d6d3e354_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a02747ac8cce3917e3a95ec4d6d3e354_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a02747ac8cce3917e3a95ec4d6d3e354_4,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_a02747ac8cce3917e3a95ec4d6d3e354_4 == cache_frame_a02747ac8cce3917e3a95ec4d6d3e354_4 )
    {
        Py_DECREF( frame_a02747ac8cce3917e3a95ec4d6d3e354_4 );
    }
    cache_frame_a02747ac8cce3917e3a95ec4d6d3e354_4 = NULL;

    assertFrameObject( frame_a02747ac8cce3917e3a95ec4d6d3e354_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_10;
    skip_nested_handling_3:;
    tmp_called_name_6 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_tuple_element_7 = const_str_plain_SubsystemHandler;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = locals_paramiko$server_626;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_7 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_262dff8fd6c69a5a77e4b9470c624c9b->m_frame.f_lineno = 626;
    tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 626;

        goto try_except_handler_10;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_28;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    Py_DECREF( locals_paramiko$server_626 );
    locals_paramiko$server_626 = NULL;
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

    Py_DECREF( locals_paramiko$server_626 );
    locals_paramiko$server_626 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( paramiko$server );
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
    NUITKA_CANNOT_GET_HERE( paramiko$server );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 626;
    goto try_except_handler_8;
    outline_result_3:;
    tmp_assign_source_27 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_paramiko$server, (Nuitka_StringObject *)const_str_plain_SubsystemHandler, tmp_assign_source_27 );
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

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_262dff8fd6c69a5a77e4b9470c624c9b );
#endif
    popFrameStack();

    assertFrameObject( frame_262dff8fd6c69a5a77e4b9470c624c9b );

    goto frame_no_exception_4;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_262dff8fd6c69a5a77e4b9470c624c9b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_262dff8fd6c69a5a77e4b9470c624c9b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_262dff8fd6c69a5a77e4b9470c624c9b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_262dff8fd6c69a5a77e4b9470c624c9b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
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


    return MOD_RETURN_VALUE( module_paramiko$server );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

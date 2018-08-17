/* Generated code for Python source for module 'yaml'
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

/* The _module_yaml is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_yaml;
PyDictObject *moduledict_yaml;

/* The module constants used, if any. */
static PyObject *const_str_digest_c435c4fdcdcaa003646ad3c77380d7d6;
static PyObject *const_tuple_str_plain_YAMLObject_tuple_empty_tuple;
extern PyObject *const_str_plain_tag;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_get_single_data;
extern PyObject *const_str_plain_check_token;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_Loader;
static PyObject *const_str_digest_95ff73faf19aae5c5eba08feef7937d0;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_constructor;
static PyObject *const_str_digest_2b43a4ad228e185f2721e2a4b1401c96;
static PyObject *const_str_plain_compose;
extern PyObject *const_str_plain_yaml;
static PyObject *const_str_digest_762d675728937f55f0216c1c39338cda;
static PyObject *const_str_digest_1b9573ae824bc04df674131c14a7d687;
static PyObject *const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple;
static PyObject *const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_466cb9283df23e1a836acb83cf6ce973;
extern PyObject *const_str_plain_default_style;
static PyObject *const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple;
static PyObject *const_str_plain_yaml_flow_style;
extern PyObject *const_str_plain_classmethod;
extern PyObject *const_str_plain_serialize;
static PyObject *const_str_digest_74c5cae9aad9f23f3235aefca4689825;
extern PyObject *const_str_plain_data_type;
extern PyObject *const_str_plain_cls;
static PyObject *const_str_plain_cyaml;
static PyObject *const_str_digest_17f12407556e724be24fc75a851966f5;
static PyObject *const_str_plain___with_libyaml__;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_754e29a91ecb08d4042410317d0a2ef6;
extern PyObject *const_str_plain_canonical;
static PyObject *const_str_plain_safe_dump_all;
extern PyObject *const_str_plain_add_implicit_resolver;
extern PyObject *const_str_plain_represent_yaml_object;
static PyObject *const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple;
static PyObject *const_str_plain_safe_load_all;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_representer;
static PyObject *const_str_plain_multi_representer;
static PyObject *const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple;
static PyObject *const_str_digest_5ec2bda4854425540aa1385af5eb02dc;
static PyObject *const_str_digest_8c7ee70504ed226d674980b798ed4349;
static PyObject *const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple;
static PyObject *const_str_digest_c1848d758000f2f711de4a7afadb7612;
static PyObject *const_str_digest_2cf1039e43103a38f7e6ff0f1119a36f;
static PyObject *const_tuple_950adea43bcae15e1447872cace8ac33_tuple;
extern PyObject *const_str_plain_get_single_node;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_tag_prefix;
static PyObject *const_str_digest_245f9d6d465874d7432172b4ec106f5c;
static PyObject *const_tuple_c20dfb5470e5dc811754493000b71135_tuple;
extern PyObject *const_str_plain_tags;
extern PyObject *const_str_plain_node;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_bases;
extern PyObject *const_str_plain_BytesIO;
static PyObject *const_tuple_6ed80f0a68608ab2acbdccc1b917aa37_tuple;
static PyObject *const_tuple_19b42ee2544df470781846b1d237cff7_tuple;
extern PyObject *const_str_plain_Dumper;
extern PyObject *const_str_plain_allow_unicode;
extern PyObject *const_str_plain_load;
extern PyObject *const_str_plain_SafeLoader;
extern PyObject *const_str_plain_indent;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_tokens;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_compose_all;
extern PyObject *const_str_plain_event;
extern PyObject *const_str_plain_dispose;
extern PyObject *const_str_plain_dump;
extern PyObject *const_str_plain_SafeDumper;
extern PyObject *const_str_plain_represent;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_check_node;
static PyObject *const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple;
extern PyObject *const_str_plain_line_break;
static PyObject *const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple;
static PyObject *const_str_plain_YAMLObjectMetaclass;
static PyObject *const_tuple_str_plain_stream_tuple;
extern PyObject *const_str_plain_default_flow_style;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_flow_style;
static PyObject *const_str_digest_ba9ec1f793e848db79a666445266baaf;
static PyObject *const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple;
extern PyObject *const_str_plain_check_event;
static PyObject *const_str_digest_211d1308cb16f40c14bb13ec4c68b860;
extern PyObject *const_str_plain_stream;
static PyObject *const_str_plain_serialize_all;
static PyObject *const_str_digest_c7cc7489a5df741689476e7f8da60f90;
extern PyObject *const_tuple_type_type_tuple;
extern PyObject *const_str_plain_encoding;
static PyObject *const_str_digest_99015480dd4a9f1efe096d5d455883db;
static PyObject *const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple;
static PyObject *const_str_plain_dump_all;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_plain_yaml_loader;
extern PyObject *const_str_plain_first;
extern PyObject *const_int_0;
static PyObject *const_str_plain_from_yaml;
extern PyObject *const_str_plain_kwds;
extern PyObject *const_str_plain_getvalue;
extern PyObject *const_str_plain_multi_constructor;
static PyObject *const_str_digest_1215166bede72df9db454df862426faf;
static PyObject *const_str_digest_61ee3c0a5dca9b4a263bd1503c98c244;
extern PyObject *const_str_plain___slots__;
static PyObject *const_tuple_str_plain_YAMLObjectMetaclass_tuple_type_type_tuple_tuple;
extern PyObject *const_str_plain_explicit_start;
extern PyObject *const_str_plain_regexp;
static PyObject *const_str_plain_documents;
extern PyObject *const_str_plain_add_multi_representer;
static PyObject *const_str_digest_9eccfe367df79b309d3b0818cc2961b3;
static PyObject *const_str_plain_yaml_dumper;
static PyObject *const_str_plain_yaml_tag;
extern PyObject *const_str_plain_get_data;
static PyObject *const_str_digest_d6cf9b2a5b9bb2f36bc0d1937aa38d11;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple;
extern PyObject *const_str_plain_construct_yaml_object;
extern PyObject *const_str_plain_add_multi_constructor;
extern PyObject *const_str_plain_add_constructor;
static PyObject *const_str_digest_03212166b9ecd0d0110f39ddec7603a4;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_get_token;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_c65a20627ea0cf0c6ad7d3abd910499e;
static PyObject *const_str_plain_safe_dump;
static PyObject *const_str_plain_safe_load;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple;
extern PyObject *const_str_plain_io;
extern PyObject *const_str_plain_kind;
extern PyObject *const_str_plain_nodes;
extern PyObject *const_str_plain_events;
extern PyObject *const_str_plain_StringIO;
static PyObject *const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple;
static PyObject *const_str_digest_e12116e076885996ce65d00020399004;
extern PyObject *const_str_plain_emit;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_dumper;
static PyObject *const_str_plain_YAMLObject;
extern PyObject *const_str_plain_width;
extern PyObject *const_str_plain_open;
static PyObject *const_str_digest_3813a8fdb16d32c68c82d3b678333141;
static PyObject *const_str_digest_5097af7257b0bf1ee6c4cc4e4d034b20;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_parse;
extern PyObject *const_str_plain_get_event;
extern PyObject *const_str_plain_check_data;
static PyObject *const_str_digest_93425078dbc06e0bd823e4ad55c4bbbb;
extern PyObject *const_str_plain_add_path_resolver;
extern PyObject *const_str_plain_add_representer;
static PyObject *const_str_digest_ab32fb99c4fdef84eca9775c418ffb32;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain_explicit_end;
static PyObject *const_str_plain_to_yaml;
extern PyObject *const_str_plain_get_node;
static PyObject *const_str_plain_scan;
static PyObject *const_str_digest_3a29191702803f2976d13b4af605079c;
static PyObject *const_str_digest_3d8a0f238bfd2f3cde22605ffe266efa;
static PyObject *const_str_plain_load_all;
static PyObject *const_str_digest_ed7cc8ed13af9fa1d8aa28432f21dc00;
static PyObject *const_list_str_digest_5ec2bda4854425540aa1385af5eb02dc_list;
extern PyObject *const_str_plain_loader;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_c435c4fdcdcaa003646ad3c77380d7d6 = UNSTREAM_STRING( &constant_bin[ 737561 ], 133, 0 );
    const_tuple_str_plain_YAMLObject_tuple_empty_tuple = PyTuple_New( 2 );
    const_str_plain_YAMLObject = UNSTREAM_STRING( &constant_bin[ 737694 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_YAMLObject_tuple_empty_tuple, 0, const_str_plain_YAMLObject ); Py_INCREF( const_str_plain_YAMLObject );
    PyTuple_SET_ITEM( const_tuple_str_plain_YAMLObject_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_str_digest_95ff73faf19aae5c5eba08feef7937d0 = UNSTREAM_STRING( &constant_bin[ 737704 ], 57, 0 );
    const_str_digest_2b43a4ad228e185f2721e2a4b1401c96 = UNSTREAM_STRING( &constant_bin[ 737761 ], 100, 0 );
    const_str_plain_compose = UNSTREAM_STRING( &constant_bin[ 21759 ], 7, 1 );
    const_str_digest_762d675728937f55f0216c1c39338cda = UNSTREAM_STRING( &constant_bin[ 737861 ], 67, 0 );
    const_str_digest_1b9573ae824bc04df674131c14a7d687 = UNSTREAM_STRING( &constant_bin[ 737928 ], 13, 0 );
    const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple, 0, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    PyTuple_SET_ITEM( const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple, 1, const_str_plain_constructor ); Py_INCREF( const_str_plain_constructor );
    PyTuple_SET_ITEM( const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple, 2, const_str_plain_Loader ); Py_INCREF( const_str_plain_Loader );
    const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple, 0, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple, 2, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    const_str_digest_466cb9283df23e1a836acb83cf6ce973 = UNSTREAM_STRING( &constant_bin[ 737941 ], 67, 0 );
    const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple = PyTuple_New( 16 );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 0, const_str_plain_nodes ); Py_INCREF( const_str_plain_nodes );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 3, const_str_plain_canonical ); Py_INCREF( const_str_plain_canonical );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 4, const_str_plain_indent ); Py_INCREF( const_str_plain_indent );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 5, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 6, const_str_plain_allow_unicode ); Py_INCREF( const_str_plain_allow_unicode );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 7, const_str_plain_line_break ); Py_INCREF( const_str_plain_line_break );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 8, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 9, const_str_plain_explicit_start ); Py_INCREF( const_str_plain_explicit_start );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 10, const_str_plain_explicit_end ); Py_INCREF( const_str_plain_explicit_end );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 11, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 12, const_str_plain_tags ); Py_INCREF( const_str_plain_tags );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 13, const_str_plain_getvalue ); Py_INCREF( const_str_plain_getvalue );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 14, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    const_str_plain_dumper = UNSTREAM_STRING( &constant_bin[ 738008 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 15, const_str_plain_dumper ); Py_INCREF( const_str_plain_dumper );
    const_str_plain_yaml_flow_style = UNSTREAM_STRING( &constant_bin[ 738014 ], 15, 1 );
    const_str_digest_74c5cae9aad9f23f3235aefca4689825 = UNSTREAM_STRING( &constant_bin[ 738029 ], 18, 0 );
    const_str_plain_cyaml = UNSTREAM_STRING( &constant_bin[ 738047 ], 5, 1 );
    const_str_digest_17f12407556e724be24fc75a851966f5 = UNSTREAM_STRING( &constant_bin[ 738052 ], 106, 0 );
    const_str_plain___with_libyaml__ = UNSTREAM_STRING( &constant_bin[ 738158 ], 16, 1 );
    const_str_digest_754e29a91ecb08d4042410317d0a2ef6 = UNSTREAM_STRING( &constant_bin[ 738174 ], 39, 0 );
    const_str_plain_safe_dump_all = UNSTREAM_STRING( &constant_bin[ 738213 ], 13, 1 );
    const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 0, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 1, const_str_plain_Loader ); Py_INCREF( const_str_plain_Loader );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 2, const_str_plain_loader ); Py_INCREF( const_str_plain_loader );
    const_str_plain_safe_load_all = UNSTREAM_STRING( &constant_bin[ 738226 ], 13, 1 );
    const_str_plain_multi_representer = UNSTREAM_STRING( &constant_bin[ 738239 ], 17, 1 );
    const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple, 1, const_str_plain_loader ); Py_INCREF( const_str_plain_loader );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple, 2, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    const_str_digest_5ec2bda4854425540aa1385af5eb02dc = UNSTREAM_STRING( &constant_bin[ 738256 ], 76, 0 );
    const_str_digest_8c7ee70504ed226d674980b798ed4349 = UNSTREAM_STRING( &constant_bin[ 738332 ], 20, 0 );
    const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple, 1, const_str_plain_dumper ); Py_INCREF( const_str_plain_dumper );
    PyTuple_SET_ITEM( const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple, 2, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_str_digest_c1848d758000f2f711de4a7afadb7612 = UNSTREAM_STRING( &constant_bin[ 738352 ], 114, 0 );
    const_str_digest_2cf1039e43103a38f7e6ff0f1119a36f = UNSTREAM_STRING( &constant_bin[ 738466 ], 217, 0 );
    const_tuple_950adea43bcae15e1447872cace8ac33_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_950adea43bcae15e1447872cace8ac33_tuple, 0, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    PyTuple_SET_ITEM( const_tuple_950adea43bcae15e1447872cace8ac33_tuple, 1, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_950adea43bcae15e1447872cace8ac33_tuple, 2, const_str_plain_kind ); Py_INCREF( const_str_plain_kind );
    PyTuple_SET_ITEM( const_tuple_950adea43bcae15e1447872cace8ac33_tuple, 3, const_str_plain_Loader ); Py_INCREF( const_str_plain_Loader );
    PyTuple_SET_ITEM( const_tuple_950adea43bcae15e1447872cace8ac33_tuple, 4, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    const_str_digest_245f9d6d465874d7432172b4ec106f5c = UNSTREAM_STRING( &constant_bin[ 738683 ], 108, 0 );
    const_tuple_c20dfb5470e5dc811754493000b71135_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c20dfb5470e5dc811754493000b71135_tuple, 0, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    PyTuple_SET_ITEM( const_tuple_c20dfb5470e5dc811754493000b71135_tuple, 1, const_str_plain_regexp ); Py_INCREF( const_str_plain_regexp );
    PyTuple_SET_ITEM( const_tuple_c20dfb5470e5dc811754493000b71135_tuple, 2, const_str_plain_first ); Py_INCREF( const_str_plain_first );
    PyTuple_SET_ITEM( const_tuple_c20dfb5470e5dc811754493000b71135_tuple, 3, const_str_plain_Loader ); Py_INCREF( const_str_plain_Loader );
    PyTuple_SET_ITEM( const_tuple_c20dfb5470e5dc811754493000b71135_tuple, 4, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    const_tuple_6ed80f0a68608ab2acbdccc1b917aa37_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_6ed80f0a68608ab2acbdccc1b917aa37_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_6ed80f0a68608ab2acbdccc1b917aa37_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_6ed80f0a68608ab2acbdccc1b917aa37_tuple, 2, const_str_plain_bases ); Py_INCREF( const_str_plain_bases );
    PyTuple_SET_ITEM( const_tuple_6ed80f0a68608ab2acbdccc1b917aa37_tuple, 3, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    PyTuple_SET_ITEM( const_tuple_6ed80f0a68608ab2acbdccc1b917aa37_tuple, 4, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_tuple_19b42ee2544df470781846b1d237cff7_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_19b42ee2544df470781846b1d237cff7_tuple, 0, const_str_plain_events ); Py_INCREF( const_str_plain_events );
    PyTuple_SET_ITEM( const_tuple_19b42ee2544df470781846b1d237cff7_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_19b42ee2544df470781846b1d237cff7_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    PyTuple_SET_ITEM( const_tuple_19b42ee2544df470781846b1d237cff7_tuple, 3, const_str_plain_canonical ); Py_INCREF( const_str_plain_canonical );
    PyTuple_SET_ITEM( const_tuple_19b42ee2544df470781846b1d237cff7_tuple, 4, const_str_plain_indent ); Py_INCREF( const_str_plain_indent );
    PyTuple_SET_ITEM( const_tuple_19b42ee2544df470781846b1d237cff7_tuple, 5, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_19b42ee2544df470781846b1d237cff7_tuple, 6, const_str_plain_allow_unicode ); Py_INCREF( const_str_plain_allow_unicode );
    PyTuple_SET_ITEM( const_tuple_19b42ee2544df470781846b1d237cff7_tuple, 7, const_str_plain_line_break ); Py_INCREF( const_str_plain_line_break );
    PyTuple_SET_ITEM( const_tuple_19b42ee2544df470781846b1d237cff7_tuple, 8, const_str_plain_dumper ); Py_INCREF( const_str_plain_dumper );
    PyTuple_SET_ITEM( const_tuple_19b42ee2544df470781846b1d237cff7_tuple, 9, const_str_plain_getvalue ); Py_INCREF( const_str_plain_getvalue );
    PyTuple_SET_ITEM( const_tuple_19b42ee2544df470781846b1d237cff7_tuple, 10, const_str_plain_event ); Py_INCREF( const_str_plain_event );
    const_str_plain_compose_all = UNSTREAM_STRING( &constant_bin[ 738791 ], 11, 1 );
    const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple = PyTuple_New( 3 );
    const_str_plain_documents = UNSTREAM_STRING( &constant_bin[ 738802 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple, 0, const_str_plain_documents ); Py_INCREF( const_str_plain_documents );
    PyTuple_SET_ITEM( const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple, 2, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple, 0, const_str_plain_tag_prefix ); Py_INCREF( const_str_plain_tag_prefix );
    PyTuple_SET_ITEM( const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple, 1, const_str_plain_multi_constructor ); Py_INCREF( const_str_plain_multi_constructor );
    PyTuple_SET_ITEM( const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple, 2, const_str_plain_Loader ); Py_INCREF( const_str_plain_Loader );
    const_str_plain_YAMLObjectMetaclass = UNSTREAM_STRING( &constant_bin[ 738811 ], 19, 1 );
    const_tuple_str_plain_stream_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_stream_tuple, 0, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    const_str_digest_ba9ec1f793e848db79a666445266baaf = UNSTREAM_STRING( &constant_bin[ 738830 ], 205, 0 );
    const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple, 0, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    PyTuple_SET_ITEM( const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple, 3, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    const_str_digest_211d1308cb16f40c14bb13ec4c68b860 = UNSTREAM_STRING( &constant_bin[ 739035 ], 161, 0 );
    const_str_plain_serialize_all = UNSTREAM_STRING( &constant_bin[ 739196 ], 13, 1 );
    const_str_digest_c7cc7489a5df741689476e7f8da60f90 = UNSTREAM_STRING( &constant_bin[ 739209 ], 193, 0 );
    const_str_digest_99015480dd4a9f1efe096d5d455883db = UNSTREAM_STRING( &constant_bin[ 739402 ], 88, 0 );
    const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple, 0, const_str_plain_data_type ); Py_INCREF( const_str_plain_data_type );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple, 1, const_str_plain_representer ); Py_INCREF( const_str_plain_representer );
    PyTuple_SET_ITEM( const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    const_str_plain_dump_all = UNSTREAM_STRING( &constant_bin[ 738218 ], 8, 1 );
    const_str_plain_yaml_loader = UNSTREAM_STRING( &constant_bin[ 739490 ], 11, 1 );
    const_str_plain_from_yaml = UNSTREAM_STRING( &constant_bin[ 738343 ], 9, 1 );
    const_str_digest_1215166bede72df9db454df862426faf = UNSTREAM_STRING( &constant_bin[ 739501 ], 126, 0 );
    const_str_digest_61ee3c0a5dca9b4a263bd1503c98c244 = UNSTREAM_STRING( &constant_bin[ 739627 ], 97, 0 );
    const_tuple_str_plain_YAMLObjectMetaclass_tuple_type_type_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_YAMLObjectMetaclass_tuple_type_type_tuple_tuple, 0, const_str_plain_YAMLObjectMetaclass ); Py_INCREF( const_str_plain_YAMLObjectMetaclass );
    PyTuple_SET_ITEM( const_tuple_str_plain_YAMLObjectMetaclass_tuple_type_type_tuple_tuple, 1, const_tuple_type_type_tuple ); Py_INCREF( const_tuple_type_type_tuple );
    const_str_digest_9eccfe367df79b309d3b0818cc2961b3 = UNSTREAM_STRING( &constant_bin[ 739724 ], 175, 0 );
    const_str_plain_yaml_dumper = UNSTREAM_STRING( &constant_bin[ 739899 ], 11, 1 );
    const_str_plain_yaml_tag = UNSTREAM_STRING( &constant_bin[ 739910 ], 8, 1 );
    const_str_digest_d6cf9b2a5b9bb2f36bc0d1937aa38d11 = UNSTREAM_STRING( &constant_bin[ 739918 ], 57, 0 );
    const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple, 0, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    PyTuple_SET_ITEM( const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple, 3, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    const_str_digest_03212166b9ecd0d0110f39ddec7603a4 = UNSTREAM_STRING( &constant_bin[ 739975 ], 222, 0 );
    const_str_digest_c65a20627ea0cf0c6ad7d3abd910499e = UNSTREAM_STRING( &constant_bin[ 740197 ], 127, 0 );
    const_str_plain_safe_dump = UNSTREAM_STRING( &constant_bin[ 738213 ], 9, 1 );
    const_str_plain_safe_load = UNSTREAM_STRING( &constant_bin[ 738226 ], 9, 1 );
    const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 0, const_str_plain_documents ); Py_INCREF( const_str_plain_documents );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 1, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 3, const_str_plain_default_style ); Py_INCREF( const_str_plain_default_style );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 4, const_str_plain_default_flow_style ); Py_INCREF( const_str_plain_default_flow_style );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 5, const_str_plain_canonical ); Py_INCREF( const_str_plain_canonical );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 6, const_str_plain_indent ); Py_INCREF( const_str_plain_indent );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 7, const_str_plain_width ); Py_INCREF( const_str_plain_width );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 8, const_str_plain_allow_unicode ); Py_INCREF( const_str_plain_allow_unicode );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 9, const_str_plain_line_break ); Py_INCREF( const_str_plain_line_break );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 10, const_str_plain_encoding ); Py_INCREF( const_str_plain_encoding );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 11, const_str_plain_explicit_start ); Py_INCREF( const_str_plain_explicit_start );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 12, const_str_plain_explicit_end ); Py_INCREF( const_str_plain_explicit_end );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 13, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 14, const_str_plain_tags ); Py_INCREF( const_str_plain_tags );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 15, const_str_plain_dumper ); Py_INCREF( const_str_plain_dumper );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 16, const_str_plain_getvalue ); Py_INCREF( const_str_plain_getvalue );
    PyTuple_SET_ITEM( const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 17, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple, 0, const_str_plain_data_type ); Py_INCREF( const_str_plain_data_type );
    PyTuple_SET_ITEM( const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple, 1, const_str_plain_multi_representer ); Py_INCREF( const_str_plain_multi_representer );
    PyTuple_SET_ITEM( const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple, 2, const_str_plain_Dumper ); Py_INCREF( const_str_plain_Dumper );
    const_str_digest_e12116e076885996ce65d00020399004 = UNSTREAM_STRING( &constant_bin[ 740324 ], 120, 0 );
    const_str_digest_3813a8fdb16d32c68c82d3b678333141 = UNSTREAM_STRING( &constant_bin[ 740444 ], 268, 0 );
    const_str_digest_5097af7257b0bf1ee6c4cc4e4d034b20 = UNSTREAM_STRING( &constant_bin[ 740712 ], 134, 0 );
    const_str_digest_93425078dbc06e0bd823e4ad55c4bbbb = UNSTREAM_STRING( &constant_bin[ 739501 ], 92, 0 );
    const_str_digest_ab32fb99c4fdef84eca9775c418ffb32 = UNSTREAM_STRING( &constant_bin[ 83613 ], 4, 0 );
    const_str_plain_to_yaml = UNSTREAM_STRING( &constant_bin[ 738040 ], 7, 1 );
    const_str_plain_scan = UNSTREAM_STRING( &constant_bin[ 624198 ], 4, 1 );
    const_str_digest_3a29191702803f2976d13b4af605079c = UNSTREAM_STRING( &constant_bin[ 740846 ], 28, 0 );
    const_str_digest_3d8a0f238bfd2f3cde22605ffe266efa = UNSTREAM_STRING( &constant_bin[ 740874 ], 98, 0 );
    const_str_plain_load_all = UNSTREAM_STRING( &constant_bin[ 738231 ], 8, 1 );
    const_str_digest_ed7cc8ed13af9fa1d8aa28432f21dc00 = UNSTREAM_STRING( &constant_bin[ 740972 ], 148, 0 );
    const_list_str_digest_5ec2bda4854425540aa1385af5eb02dc_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_5ec2bda4854425540aa1385af5eb02dc_list, 0, const_str_digest_5ec2bda4854425540aa1385af5eb02dc ); Py_INCREF( const_str_digest_5ec2bda4854425540aa1385af5eb02dc );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_yaml( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ee5477cc17a33eaf782d029347b733a1;
static PyCodeObject *codeobj_1e4d96ba0c734e04e54a896bc946426f;
static PyCodeObject *codeobj_c8b445ed803be3ad5d668cb54f24d456;
static PyCodeObject *codeobj_62b92aac3fa530019beaf982c9b192a4;
static PyCodeObject *codeobj_b9b71503d411aaad0de90fca66502d9f;
static PyCodeObject *codeobj_711bae46c88cdf1d45a623c836738bcf;
static PyCodeObject *codeobj_b19413367ae2504a3b32a21f42cf79fa;
static PyCodeObject *codeobj_c22f1e7aa477600d909bbb1c4fa06911;
static PyCodeObject *codeobj_d3ac20010705f719aa64247a0119c20a;
static PyCodeObject *codeobj_10c5b8836e29dfc23e0a74a3aa6dea2a;
static PyCodeObject *codeobj_19b5a104b34ccdcfd02c559012c91043;
static PyCodeObject *codeobj_1056077b1e1bc10bd731bb6e9eafc3c0;
static PyCodeObject *codeobj_281d529847847e741b1500661110b0a0;
static PyCodeObject *codeobj_a7390a560682743bb3ed41e0e7ecd172;
static PyCodeObject *codeobj_f7508ca6cfb409cd273e0ea7d0cf6e16;
static PyCodeObject *codeobj_09265c229ea14134b8ed08385920bc97;
static PyCodeObject *codeobj_d66ac1ab2f7bf595e5f8fd36fde8bf11;
static PyCodeObject *codeobj_3d4eee496e532ad57b98b230cba6d048;
static PyCodeObject *codeobj_d5536941dd7f6cf479b365302c82dade;
static PyCodeObject *codeobj_f57ad6b8af586c0b522e45de60ee23ca;
static PyCodeObject *codeobj_cf8c22f05f24e35a83331f518d8122f5;
static PyCodeObject *codeobj_ae8f467d666092eace24102cbd42c134;
static PyCodeObject *codeobj_ce971d88664b67e2f3667a1c33685480;
static PyCodeObject *codeobj_3a58d3e6d2dd3133129d755c709c5d91;
static PyCodeObject *codeobj_a3f80ca98af60ea31932b665c47405f6;
static PyCodeObject *codeobj_0349ae32187b6db29dd4806d2ebfdeb4;
static PyCodeObject *codeobj_fafb1edeb132633c20bf756400f158a0;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_99015480dd4a9f1efe096d5d455883db;
    codeobj_ee5477cc17a33eaf782d029347b733a1 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1b9573ae824bc04df674131c14a7d687, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_1e4d96ba0c734e04e54a896bc946426f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_YAMLObject, 284, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_c8b445ed803be3ad5d668cb54f24d456 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_YAMLObjectMetaclass, 274, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_62b92aac3fa530019beaf982c9b192a4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 278, const_tuple_6ed80f0a68608ab2acbdccc1b917aa37_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_b9b71503d411aaad0de90fca66502d9f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_constructor, 239, const_tuple_str_plain_tag_str_plain_constructor_str_plain_Loader_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_711bae46c88cdf1d45a623c836738bcf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_implicit_resolver, 218, const_tuple_c20dfb5470e5dc811754493000b71135_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b19413367ae2504a3b32a21f42cf79fa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_multi_constructor, 247, const_tuple_3e04e71868b6c7e761869698d8f1a7da_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c22f1e7aa477600d909bbb1c4fa06911 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_multi_representer, 265, const_tuple_6b50cefb1a36a6dfbbb496eb044a1226_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d3ac20010705f719aa64247a0119c20a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_path_resolver, 229, const_tuple_950adea43bcae15e1447872cace8ac33_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_10c5b8836e29dfc23e0a74a3aa6dea2a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_representer, 256, const_tuple_str_plain_data_type_str_plain_representer_str_plain_Dumper_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_19b5a104b34ccdcfd02c559012c91043 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_compose, 42, const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1056077b1e1bc10bd731bb6e9eafc3c0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_compose_all, 53, const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 2, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_281d529847847e741b1500661110b0a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dump, 195, const_tuple_ea459ffefd19c5aaed8c88a54b43361a_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_a7390a560682743bb3ed41e0e7ecd172 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dump_all, 162, const_tuple_3a775efb2a284ac2f609b49b64987e09_tuple, 15, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f7508ca6cfb409cd273e0ea7d0cf6e16 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_emit, 104, const_tuple_19b42ee2544df470781846b1d237cff7_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_09265c229ea14134b8ed08385920bc97 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_yaml, 298, const_tuple_str_plain_cls_str_plain_loader_str_plain_node_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d66ac1ab2f7bf595e5f8fd36fde8bf11 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load, 65, const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3d4eee496e532ad57b98b230cba6d048 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_all, 76, const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 2, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d5536941dd7f6cf479b365302c82dade = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse, 31, const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 2, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f57ad6b8af586c0b522e45de60ee23ca = MAKE_CODEOBJ( module_filename_obj, const_str_plain_safe_dump, 210, const_tuple_str_plain_data_str_plain_stream_str_plain_kwds_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_cf8c22f05f24e35a83331f518d8122f5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_safe_dump_all, 202, const_tuple_str_plain_documents_str_plain_stream_str_plain_kwds_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_ae8f467d666092eace24102cbd42c134 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_safe_load, 88, const_tuple_str_plain_stream_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ce971d88664b67e2f3667a1c33685480 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_safe_load_all, 96, const_tuple_str_plain_stream_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3a58d3e6d2dd3133129d755c709c5d91 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_scan, 20, const_tuple_str_plain_stream_str_plain_Loader_str_plain_loader_tuple, 2, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a3f80ca98af60ea31932b665c47405f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_serialize, 155, const_tuple_e02be582d37413c2c491f6085dc55d5f_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_0349ae32187b6db29dd4806d2ebfdeb4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_serialize_all, 125, const_tuple_feed108ff6c88130b9df266dd5d2934c_tuple, 13, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fafb1edeb132633c20bf756400f158a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_to_yaml, 305, const_tuple_str_plain_cls_str_plain_dumper_str_plain_data_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *yaml$$$function_1_scan$$$genobj_1_scan_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void yaml$$$function_1_scan$$$genobj_1_scan_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *yaml$$$function_2_parse$$$genobj_1_parse_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void yaml$$$function_2_parse$$$genobj_1_parse_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *yaml$$$function_4_compose_all$$$genobj_1_compose_all_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void yaml$$$function_4_compose_all$$$genobj_1_compose_all_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *yaml$$$function_6_load_all$$$genobj_1_load_all_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void yaml$$$function_6_load_all$$$genobj_1_load_all_context( struct Nuitka_GeneratorObject *generator );
#endif


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_yaml$$$function_10_serialize_all( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_11_serialize( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_12_dump_all( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_13_dump( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_14_safe_dump_all( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_15_safe_dump( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_16_add_implicit_resolver( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_17_add_path_resolver( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_18_add_constructor( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_19_add_multi_constructor( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_1_scan( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_20_add_representer( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_21_add_multi_representer( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_22___init__(  );


static PyObject *MAKE_FUNCTION_yaml$$$function_23_from_yaml(  );


static PyObject *MAKE_FUNCTION_yaml$$$function_24_to_yaml(  );


static PyObject *MAKE_FUNCTION_yaml$$$function_2_parse( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_3_compose( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_4_compose_all( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_5_load( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_6_load_all( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$$$function_7_safe_load(  );


static PyObject *MAKE_FUNCTION_yaml$$$function_8_safe_load_all(  );


static PyObject *MAKE_FUNCTION_yaml$$$function_9_emit( PyObject *defaults );


// The module function definitions.
static PyObject *impl_yaml$$$function_1_scan( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_stream = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_Loader = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Nuitka_Generator_New(
        yaml$$$function_1_scan$$$genobj_1_scan_context,
        module_yaml,
        const_str_plain_scan,
#if PYTHON_VERSION >= 350
        const_str_plain_scan,
#endif
        codeobj_3a58d3e6d2dd3133129d755c709c5d91,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_Loader;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_stream;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    assert( Py_SIZE( tmp_return_value ) >= 2 ); 


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_1_scan );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_Loader );
    Py_DECREF( par_Loader );
    par_Loader = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_Loader );
    Py_DECREF( par_Loader );
    par_Loader = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_1_scan );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct yaml$$$function_1_scan$$$genobj_1_scan_locals {
    PyObject *var_loader
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    bool tmp_result;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *yaml$$$function_1_scan$$$genobj_1_scan_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void yaml$$$function_1_scan$$$genobj_1_scan_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_loader = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_3a58d3e6d2dd3133129d755c709c5d91, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    if ( generator->m_closure[0] == NULL )
    {
        tmp_called_name_1 = NULL;
    }
    else
    {
        tmp_called_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "Loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[1] == NULL )
    {
        tmp_args_element_name_1 = NULL;
    }
    else
    {
        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 24;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }
    assert( var_loader == NULL );
    var_loader = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_called_instance_1 = var_loader;

    CHECK_OBJECT( tmp_called_instance_1 );
    generator->m_frame->m_frame.f_lineno = 26;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_check_token );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 26;
        type_description_1 = "cco";
        goto try_except_handler_2;
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
    goto loop_end_1;
    branch_no_1:;
    tmp_called_instance_2 = var_loader;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }

    generator->m_frame->m_frame.f_lineno = 27;
    tmp_expression_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_token );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, generator->m_frame, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_called_instance_3 = var_loader;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "cco";
        goto try_except_handler_3;
    }

    generator->m_frame->m_frame.f_lineno = 29;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "cco";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 25;
    }

    if (exception_tb && exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "cco";
    goto try_except_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_1_scan$$$genobj_1_scan );
    return;
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
    // End of try:
    try_end_1:;
    tmp_called_instance_4 = var_loader;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 29;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
            generator->m_closure[1],
            generator->m_closure[0],
            var_loader
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

    goto try_end_2;
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

    Py_XDECREF( var_loader );
    var_loader = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( var_loader );
    var_loader = NULL;


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


static PyObject *impl_yaml$$$function_2_parse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_stream = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_Loader = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Nuitka_Generator_New(
        yaml$$$function_2_parse$$$genobj_1_parse_context,
        module_yaml,
        const_str_plain_parse,
#if PYTHON_VERSION >= 350
        const_str_plain_parse,
#endif
        codeobj_d5536941dd7f6cf479b365302c82dade,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_Loader;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_stream;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    assert( Py_SIZE( tmp_return_value ) >= 2 ); 


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_2_parse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_Loader );
    Py_DECREF( par_Loader );
    par_Loader = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_Loader );
    Py_DECREF( par_Loader );
    par_Loader = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_2_parse );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct yaml$$$function_2_parse$$$genobj_1_parse_locals {
    PyObject *var_loader
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    bool tmp_result;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *yaml$$$function_2_parse$$$genobj_1_parse_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void yaml$$$function_2_parse$$$genobj_1_parse_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_loader = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_d5536941dd7f6cf479b365302c82dade, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    if ( generator->m_closure[0] == NULL )
    {
        tmp_called_name_1 = NULL;
    }
    else
    {
        tmp_called_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "Loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[1] == NULL )
    {
        tmp_args_element_name_1 = NULL;
    }
    else
    {
        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }
    assert( var_loader == NULL );
    var_loader = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_called_instance_1 = var_loader;

    CHECK_OBJECT( tmp_called_instance_1 );
    generator->m_frame->m_frame.f_lineno = 37;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_check_event );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 37;
        type_description_1 = "cco";
        goto try_except_handler_2;
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
    goto loop_end_1;
    branch_no_1:;
    tmp_called_instance_2 = var_loader;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }

    generator->m_frame->m_frame.f_lineno = 38;
    tmp_expression_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_event );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, generator->m_frame, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_called_instance_3 = var_loader;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "cco";
        goto try_except_handler_3;
    }

    generator->m_frame->m_frame.f_lineno = 40;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "cco";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 36;
    }

    if (exception_tb && exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "cco";
    goto try_except_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_2_parse$$$genobj_1_parse );
    return;
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
    // End of try:
    try_end_1:;
    tmp_called_instance_4 = var_loader;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 40;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
            generator->m_closure[1],
            generator->m_closure[0],
            var_loader
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

    goto try_end_2;
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

    Py_XDECREF( var_loader );
    var_loader = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( var_loader );
    var_loader = NULL;


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


static PyObject *impl_yaml$$$function_3_compose( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[ 0 ];
    PyObject *par_Loader = python_pars[ 1 ];
    PyObject *var_loader = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_19b5a104b34ccdcfd02c559012c91043 = NULL;

    struct Nuitka_FrameObject *frame_19b5a104b34ccdcfd02c559012c91043;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_19b5a104b34ccdcfd02c559012c91043, codeobj_19b5a104b34ccdcfd02c559012c91043, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_19b5a104b34ccdcfd02c559012c91043 = cache_frame_19b5a104b34ccdcfd02c559012c91043;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_19b5a104b34ccdcfd02c559012c91043 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_19b5a104b34ccdcfd02c559012c91043 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = par_Loader;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = par_stream;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_19b5a104b34ccdcfd02c559012c91043->m_frame.f_lineno = 47;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_loader == NULL );
    var_loader = tmp_assign_source_1;

    // Tried code:
    tmp_called_instance_1 = var_loader;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_19b5a104b34ccdcfd02c559012c91043->m_frame.f_lineno = 49;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_single_node );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_3_compose );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    tmp_called_instance_2 = var_loader;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_19b5a104b34ccdcfd02c559012c91043->m_frame.f_lineno = 51;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto frame_return_exit_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_19b5a104b34ccdcfd02c559012c91043, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_19b5a104b34ccdcfd02c559012c91043, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_called_instance_3 = var_loader;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }

    frame_19b5a104b34ccdcfd02c559012c91043->m_frame.f_lineno = 51;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 48;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_19b5a104b34ccdcfd02c559012c91043->m_frame) frame_19b5a104b34ccdcfd02c559012c91043->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_3_compose );
    return NULL;
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
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19b5a104b34ccdcfd02c559012c91043 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_19b5a104b34ccdcfd02c559012c91043 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19b5a104b34ccdcfd02c559012c91043 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_19b5a104b34ccdcfd02c559012c91043, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_19b5a104b34ccdcfd02c559012c91043->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_19b5a104b34ccdcfd02c559012c91043, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_19b5a104b34ccdcfd02c559012c91043,
        type_description_1,
        par_stream,
        par_Loader,
        var_loader
    );


    // Release cached frame.
    if ( frame_19b5a104b34ccdcfd02c559012c91043 == cache_frame_19b5a104b34ccdcfd02c559012c91043 )
    {
        Py_DECREF( frame_19b5a104b34ccdcfd02c559012c91043 );
    }
    cache_frame_19b5a104b34ccdcfd02c559012c91043 = NULL;

    assertFrameObject( frame_19b5a104b34ccdcfd02c559012c91043 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_3_compose );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_Loader );
    par_Loader = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( var_loader );
    var_loader = NULL;

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

    Py_XDECREF( par_Loader );
    par_Loader = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( var_loader );
    var_loader = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_3_compose );
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


static PyObject *impl_yaml$$$function_4_compose_all( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_stream = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_Loader = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Nuitka_Generator_New(
        yaml$$$function_4_compose_all$$$genobj_1_compose_all_context,
        module_yaml,
        const_str_plain_compose_all,
#if PYTHON_VERSION >= 350
        const_str_plain_compose_all,
#endif
        codeobj_1056077b1e1bc10bd731bb6e9eafc3c0,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_Loader;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_stream;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    assert( Py_SIZE( tmp_return_value ) >= 2 ); 


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_4_compose_all );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_Loader );
    Py_DECREF( par_Loader );
    par_Loader = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_Loader );
    Py_DECREF( par_Loader );
    par_Loader = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_4_compose_all );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct yaml$$$function_4_compose_all$$$genobj_1_compose_all_locals {
    PyObject *var_loader
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    bool tmp_result;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *yaml$$$function_4_compose_all$$$genobj_1_compose_all_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void yaml$$$function_4_compose_all$$$genobj_1_compose_all_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_loader = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_1056077b1e1bc10bd731bb6e9eafc3c0, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    if ( generator->m_closure[0] == NULL )
    {
        tmp_called_name_1 = NULL;
    }
    else
    {
        tmp_called_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "Loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[1] == NULL )
    {
        tmp_args_element_name_1 = NULL;
    }
    else
    {
        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }
    assert( var_loader == NULL );
    var_loader = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_called_instance_1 = var_loader;

    CHECK_OBJECT( tmp_called_instance_1 );
    generator->m_frame->m_frame.f_lineno = 60;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_check_node );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 60;
        type_description_1 = "cco";
        goto try_except_handler_2;
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
    goto loop_end_1;
    branch_no_1:;
    tmp_called_instance_2 = var_loader;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }

    generator->m_frame->m_frame.f_lineno = 61;
    tmp_expression_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_node );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, generator->m_frame, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_called_instance_3 = var_loader;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "cco";
        goto try_except_handler_3;
    }

    generator->m_frame->m_frame.f_lineno = 63;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "cco";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 59;
    }

    if (exception_tb && exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "cco";
    goto try_except_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_4_compose_all$$$genobj_1_compose_all );
    return;
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
    // End of try:
    try_end_1:;
    tmp_called_instance_4 = var_loader;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 63;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
            generator->m_closure[1],
            generator->m_closure[0],
            var_loader
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

    goto try_end_2;
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

    Py_XDECREF( var_loader );
    var_loader = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( var_loader );
    var_loader = NULL;


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


static PyObject *impl_yaml$$$function_5_load( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[ 0 ];
    PyObject *par_Loader = python_pars[ 1 ];
    PyObject *var_loader = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d66ac1ab2f7bf595e5f8fd36fde8bf11 = NULL;

    struct Nuitka_FrameObject *frame_d66ac1ab2f7bf595e5f8fd36fde8bf11;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d66ac1ab2f7bf595e5f8fd36fde8bf11, codeobj_d66ac1ab2f7bf595e5f8fd36fde8bf11, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d66ac1ab2f7bf595e5f8fd36fde8bf11 = cache_frame_d66ac1ab2f7bf595e5f8fd36fde8bf11;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d66ac1ab2f7bf595e5f8fd36fde8bf11 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d66ac1ab2f7bf595e5f8fd36fde8bf11 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = par_Loader;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_args_element_name_1 = par_stream;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_d66ac1ab2f7bf595e5f8fd36fde8bf11->m_frame.f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_loader == NULL );
    var_loader = tmp_assign_source_1;

    // Tried code:
    tmp_called_instance_1 = var_loader;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_d66ac1ab2f7bf595e5f8fd36fde8bf11->m_frame.f_lineno = 72;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_single_data );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_5_load );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    tmp_called_instance_2 = var_loader;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_d66ac1ab2f7bf595e5f8fd36fde8bf11->m_frame.f_lineno = 74;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto frame_return_exit_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_d66ac1ab2f7bf595e5f8fd36fde8bf11, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_d66ac1ab2f7bf595e5f8fd36fde8bf11, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_called_instance_3 = var_loader;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }

    frame_d66ac1ab2f7bf595e5f8fd36fde8bf11->m_frame.f_lineno = 74;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 71;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d66ac1ab2f7bf595e5f8fd36fde8bf11->m_frame) frame_d66ac1ab2f7bf595e5f8fd36fde8bf11->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_5_load );
    return NULL;
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
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d66ac1ab2f7bf595e5f8fd36fde8bf11 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d66ac1ab2f7bf595e5f8fd36fde8bf11 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d66ac1ab2f7bf595e5f8fd36fde8bf11 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d66ac1ab2f7bf595e5f8fd36fde8bf11, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d66ac1ab2f7bf595e5f8fd36fde8bf11->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d66ac1ab2f7bf595e5f8fd36fde8bf11, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d66ac1ab2f7bf595e5f8fd36fde8bf11,
        type_description_1,
        par_stream,
        par_Loader,
        var_loader
    );


    // Release cached frame.
    if ( frame_d66ac1ab2f7bf595e5f8fd36fde8bf11 == cache_frame_d66ac1ab2f7bf595e5f8fd36fde8bf11 )
    {
        Py_DECREF( frame_d66ac1ab2f7bf595e5f8fd36fde8bf11 );
    }
    cache_frame_d66ac1ab2f7bf595e5f8fd36fde8bf11 = NULL;

    assertFrameObject( frame_d66ac1ab2f7bf595e5f8fd36fde8bf11 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_5_load );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_Loader );
    par_Loader = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( var_loader );
    var_loader = NULL;

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

    Py_XDECREF( par_Loader );
    par_Loader = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( var_loader );
    var_loader = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_5_load );
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


static PyObject *impl_yaml$$$function_6_load_all( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_stream = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_Loader = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Nuitka_Generator_New(
        yaml$$$function_6_load_all$$$genobj_1_load_all_context,
        module_yaml,
        const_str_plain_load_all,
#if PYTHON_VERSION >= 350
        const_str_plain_load_all,
#endif
        codeobj_3d4eee496e532ad57b98b230cba6d048,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_Loader;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_stream;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );
    assert( Py_SIZE( tmp_return_value ) >= 2 ); 


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_6_load_all );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_Loader );
    Py_DECREF( par_Loader );
    par_Loader = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_Loader );
    Py_DECREF( par_Loader );
    par_Loader = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_6_load_all );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct yaml$$$function_6_load_all$$$genobj_1_load_all_locals {
    PyObject *var_loader
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    bool tmp_result;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *yaml$$$function_6_load_all$$$genobj_1_load_all_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void yaml$$$function_6_load_all$$$genobj_1_load_all_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_loader = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_3d4eee496e532ad57b98b230cba6d048, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
    if ( generator->m_closure[0] == NULL )
    {
        tmp_called_name_1 = NULL;
    }
    else
    {
        tmp_called_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "Loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }

    if ( generator->m_closure[1] == NULL )
    {
        tmp_args_element_name_1 = NULL;
    }
    else
    {
        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[1] );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }
    assert( var_loader == NULL );
    var_loader = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_called_instance_1 = var_loader;

    CHECK_OBJECT( tmp_called_instance_1 );
    generator->m_frame->m_frame.f_lineno = 83;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_check_data );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 83;
        type_description_1 = "cco";
        goto try_except_handler_2;
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
    goto loop_end_1;
    branch_no_1:;
    tmp_called_instance_2 = var_loader;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }

    generator->m_frame->m_frame.f_lineno = 84;
    tmp_expression_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_data );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "cco";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( generator->m_frame, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, generator->m_frame, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_called_instance_3 = var_loader;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "cco";
        goto try_except_handler_3;
    }

    generator->m_frame->m_frame.f_lineno = 86;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "cco";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 82;
    }

    if (exception_tb && exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "cco";
    goto try_except_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_6_load_all$$$genobj_1_load_all );
    return;
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
    // End of try:
    try_end_1:;
    tmp_called_instance_4 = var_loader;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }

    generator->m_frame->m_frame.f_lineno = 86;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "cco";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
            generator->m_closure[1],
            generator->m_closure[0],
            var_loader
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

    goto try_end_2;
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

    Py_XDECREF( var_loader );
    var_loader = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( var_loader );
    var_loader = NULL;


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


static PyObject *impl_yaml$$$function_7_safe_load( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[ 0 ];
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
    static struct Nuitka_FrameObject *cache_frame_ae8f467d666092eace24102cbd42c134 = NULL;

    struct Nuitka_FrameObject *frame_ae8f467d666092eace24102cbd42c134;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ae8f467d666092eace24102cbd42c134, codeobj_ae8f467d666092eace24102cbd42c134, module_yaml, sizeof(void *) );
    frame_ae8f467d666092eace24102cbd42c134 = cache_frame_ae8f467d666092eace24102cbd42c134;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ae8f467d666092eace24102cbd42c134 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ae8f467d666092eace24102cbd42c134 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_load );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_load );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "load" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_stream;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_SafeLoader );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SafeLoader );
    }

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SafeLoader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_ae8f467d666092eace24102cbd42c134->m_frame.f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae8f467d666092eace24102cbd42c134 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae8f467d666092eace24102cbd42c134 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ae8f467d666092eace24102cbd42c134 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ae8f467d666092eace24102cbd42c134, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ae8f467d666092eace24102cbd42c134->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ae8f467d666092eace24102cbd42c134, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ae8f467d666092eace24102cbd42c134,
        type_description_1,
        par_stream
    );


    // Release cached frame.
    if ( frame_ae8f467d666092eace24102cbd42c134 == cache_frame_ae8f467d666092eace24102cbd42c134 )
    {
        Py_DECREF( frame_ae8f467d666092eace24102cbd42c134 );
    }
    cache_frame_ae8f467d666092eace24102cbd42c134 = NULL;

    assertFrameObject( frame_ae8f467d666092eace24102cbd42c134 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_7_safe_load );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_stream );
    par_stream = NULL;

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

    Py_XDECREF( par_stream );
    par_stream = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_7_safe_load );
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


static PyObject *impl_yaml$$$function_8_safe_load_all( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[ 0 ];
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
    static struct Nuitka_FrameObject *cache_frame_ce971d88664b67e2f3667a1c33685480 = NULL;

    struct Nuitka_FrameObject *frame_ce971d88664b67e2f3667a1c33685480;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ce971d88664b67e2f3667a1c33685480, codeobj_ce971d88664b67e2f3667a1c33685480, module_yaml, sizeof(void *) );
    frame_ce971d88664b67e2f3667a1c33685480 = cache_frame_ce971d88664b67e2f3667a1c33685480;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ce971d88664b67e2f3667a1c33685480 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ce971d88664b67e2f3667a1c33685480 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_load_all );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_load_all );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "load_all" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_stream;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_SafeLoader );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SafeLoader );
    }

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SafeLoader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_ce971d88664b67e2f3667a1c33685480->m_frame.f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce971d88664b67e2f3667a1c33685480 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce971d88664b67e2f3667a1c33685480 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ce971d88664b67e2f3667a1c33685480 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ce971d88664b67e2f3667a1c33685480, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ce971d88664b67e2f3667a1c33685480->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ce971d88664b67e2f3667a1c33685480, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ce971d88664b67e2f3667a1c33685480,
        type_description_1,
        par_stream
    );


    // Release cached frame.
    if ( frame_ce971d88664b67e2f3667a1c33685480 == cache_frame_ce971d88664b67e2f3667a1c33685480 )
    {
        Py_DECREF( frame_ce971d88664b67e2f3667a1c33685480 );
    }
    cache_frame_ce971d88664b67e2f3667a1c33685480 = NULL;

    assertFrameObject( frame_ce971d88664b67e2f3667a1c33685480 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_8_safe_load_all );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_stream );
    par_stream = NULL;

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

    Py_XDECREF( par_stream );
    par_stream = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_8_safe_load_all );
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


static PyObject *impl_yaml$$$function_9_emit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_events = python_pars[ 0 ];
    PyObject *par_stream = python_pars[ 1 ];
    PyObject *par_Dumper = python_pars[ 2 ];
    PyObject *par_canonical = python_pars[ 3 ];
    PyObject *par_indent = python_pars[ 4 ];
    PyObject *par_width = python_pars[ 5 ];
    PyObject *par_allow_unicode = python_pars[ 6 ];
    PyObject *par_line_break = python_pars[ 7 ];
    PyObject *var_dumper = NULL;
    PyObject *var_getvalue = NULL;
    PyObject *var_event = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_f7508ca6cfb409cd273e0ea7d0cf6e16 = NULL;

    struct Nuitka_FrameObject *frame_f7508ca6cfb409cd273e0ea7d0cf6e16;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_None;
    assert( var_getvalue == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_getvalue = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f7508ca6cfb409cd273e0ea7d0cf6e16, codeobj_f7508ca6cfb409cd273e0ea7d0cf6e16, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f7508ca6cfb409cd273e0ea7d0cf6e16 = cache_frame_f7508ca6cfb409cd273e0ea7d0cf6e16;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f7508ca6cfb409cd273e0ea7d0cf6e16 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f7508ca6cfb409cd273e0ea7d0cf6e16 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_stream;

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
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_f7508ca6cfb409cd273e0ea7d0cf6e16->m_frame.f_lineno = 113;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_StringIO );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_stream;
        par_stream = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_source_name_1 = par_stream;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getvalue );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_getvalue;
        var_getvalue = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_called_name_1 = par_Dumper;

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_stream;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_canonical;
    tmp_dict_value_1 = par_canonical;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "canonical" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 5 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_indent;
    tmp_dict_value_2 = par_indent;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "indent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_width;
    tmp_dict_value_3 = par_width;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "width" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_allow_unicode;
    tmp_dict_value_4 = par_allow_unicode;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_line_break;
    tmp_dict_value_5 = par_line_break;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line_break" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    frame_f7508ca6cfb409cd273e0ea7d0cf6e16->m_frame.f_lineno = 115;
    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_dumper == NULL );
    var_dumper = tmp_assign_source_4;

    // Tried code:
    tmp_iter_arg_1 = par_events;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "events" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_5;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_6 = ITERATOR_NEXT( tmp_value_name_1 );
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


        type_description_1 = "ooooooooooo";
        exception_lineno = 118;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_6;
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

        exception_lineno = 118;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
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

    goto try_except_handler_3;
    branch_end_2:;
    // End of try:
    try_end_1:;
    tmp_assign_source_7 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_7 );
    {
        PyObject *old = var_event;
        var_event = tmp_assign_source_7;
        Py_INCREF( var_event );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_dumper;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_emit );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = var_event;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "event" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }

    frame_f7508ca6cfb409cd273e0ea7d0cf6e16->m_frame.f_lineno = 119;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_f7508ca6cfb409cd273e0ea7d0cf6e16, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_f7508ca6cfb409cd273e0ea7d0cf6e16, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_called_instance_2 = var_dumper;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_5;
    }

    frame_f7508ca6cfb409cd273e0ea7d0cf6e16->m_frame.f_lineno = 121;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 117;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f7508ca6cfb409cd273e0ea7d0cf6e16->m_frame) frame_f7508ca6cfb409cd273e0ea7d0cf6e16->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooo";
    goto try_except_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_9_emit );
    return NULL;
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
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_called_instance_3 = var_dumper;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_f7508ca6cfb409cd273e0ea7d0cf6e16->m_frame.f_lineno = 121;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_1 = var_getvalue;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "getvalue" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "ooooooooooo";
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
    tmp_called_name_3 = var_getvalue;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "getvalue" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_f7508ca6cfb409cd273e0ea7d0cf6e16->m_frame.f_lineno = 123;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7508ca6cfb409cd273e0ea7d0cf6e16 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7508ca6cfb409cd273e0ea7d0cf6e16 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7508ca6cfb409cd273e0ea7d0cf6e16 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f7508ca6cfb409cd273e0ea7d0cf6e16, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f7508ca6cfb409cd273e0ea7d0cf6e16->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f7508ca6cfb409cd273e0ea7d0cf6e16, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f7508ca6cfb409cd273e0ea7d0cf6e16,
        type_description_1,
        par_events,
        par_stream,
        par_Dumper,
        par_canonical,
        par_indent,
        par_width,
        par_allow_unicode,
        par_line_break,
        var_dumper,
        var_getvalue,
        var_event
    );


    // Release cached frame.
    if ( frame_f7508ca6cfb409cd273e0ea7d0cf6e16 == cache_frame_f7508ca6cfb409cd273e0ea7d0cf6e16 )
    {
        Py_DECREF( frame_f7508ca6cfb409cd273e0ea7d0cf6e16 );
    }
    cache_frame_f7508ca6cfb409cd273e0ea7d0cf6e16 = NULL;

    assertFrameObject( frame_f7508ca6cfb409cd273e0ea7d0cf6e16 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_9_emit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_Dumper );
    par_Dumper = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    Py_XDECREF( var_dumper );
    var_dumper = NULL;

    Py_XDECREF( par_events );
    par_events = NULL;

    Py_XDECREF( var_getvalue );
    var_getvalue = NULL;

    Py_XDECREF( par_width );
    par_width = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_line_break );
    par_line_break = NULL;

    Py_XDECREF( par_allow_unicode );
    par_allow_unicode = NULL;

    Py_XDECREF( var_event );
    var_event = NULL;

    Py_XDECREF( par_canonical );
    par_canonical = NULL;

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

    Py_XDECREF( par_Dumper );
    par_Dumper = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    Py_XDECREF( var_dumper );
    var_dumper = NULL;

    Py_XDECREF( par_events );
    par_events = NULL;

    Py_XDECREF( var_getvalue );
    var_getvalue = NULL;

    Py_XDECREF( par_width );
    par_width = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_line_break );
    par_line_break = NULL;

    Py_XDECREF( par_allow_unicode );
    par_allow_unicode = NULL;

    Py_XDECREF( var_event );
    var_event = NULL;

    Py_XDECREF( par_canonical );
    par_canonical = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_9_emit );
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


static PyObject *impl_yaml$$$function_10_serialize_all( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nodes = python_pars[ 0 ];
    PyObject *par_stream = python_pars[ 1 ];
    PyObject *par_Dumper = python_pars[ 2 ];
    PyObject *par_canonical = python_pars[ 3 ];
    PyObject *par_indent = python_pars[ 4 ];
    PyObject *par_width = python_pars[ 5 ];
    PyObject *par_allow_unicode = python_pars[ 6 ];
    PyObject *par_line_break = python_pars[ 7 ];
    PyObject *par_encoding = python_pars[ 8 ];
    PyObject *par_explicit_start = python_pars[ 9 ];
    PyObject *par_explicit_end = python_pars[ 10 ];
    PyObject *par_version = python_pars[ 11 ];
    PyObject *par_tags = python_pars[ 12 ];
    PyObject *var_getvalue = NULL;
    PyObject *var_node = NULL;
    PyObject *var_dumper = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
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
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_0349ae32187b6db29dd4806d2ebfdeb4 = NULL;

    struct Nuitka_FrameObject *frame_0349ae32187b6db29dd4806d2ebfdeb4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_None;
    assert( var_getvalue == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_getvalue = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0349ae32187b6db29dd4806d2ebfdeb4, codeobj_0349ae32187b6db29dd4806d2ebfdeb4, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0349ae32187b6db29dd4806d2ebfdeb4 = cache_frame_0349ae32187b6db29dd4806d2ebfdeb4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0349ae32187b6db29dd4806d2ebfdeb4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0349ae32187b6db29dd4806d2ebfdeb4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_stream;

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
    tmp_compare_left_2 = par_encoding;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_0349ae32187b6db29dd4806d2ebfdeb4->m_frame.f_lineno = 137;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_StringIO );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_stream;
        par_stream = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_0349ae32187b6db29dd4806d2ebfdeb4->m_frame.f_lineno = 139;
    tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_BytesIO );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_stream;
        par_stream = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    branch_end_2:;
    tmp_source_name_1 = par_stream;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getvalue );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_getvalue;
        var_getvalue = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_called_name_1 = par_Dumper;

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_stream;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_canonical;
    tmp_dict_value_1 = par_canonical;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "canonical" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 10 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_indent;
    tmp_dict_value_2 = par_indent;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "indent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_width;
    tmp_dict_value_3 = par_width;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "width" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_allow_unicode;
    tmp_dict_value_4 = par_allow_unicode;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_line_break;
    tmp_dict_value_5 = par_line_break;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line_break" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_encoding;
    tmp_dict_value_6 = par_encoding;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_version;
    tmp_dict_value_7 = par_version;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "version" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain_tags;
    tmp_dict_value_8 = par_tags;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_9 = const_str_plain_explicit_start;
    tmp_dict_value_9 = par_explicit_start;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "explicit_start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_10 = const_str_plain_explicit_end;
    tmp_dict_value_10 = par_explicit_end;

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "explicit_end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    frame_0349ae32187b6db29dd4806d2ebfdeb4->m_frame.f_lineno = 141;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_dumper == NULL );
    var_dumper = tmp_assign_source_5;

    // Tried code:
    tmp_called_instance_3 = var_dumper;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_0349ae32187b6db29dd4806d2ebfdeb4->m_frame.f_lineno = 146;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_open );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_1 = par_nodes;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nodes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_2;
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


        type_description_1 = "oooooooooooooooo";
        exception_lineno = 147;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
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

    tmp_compare_left_3 = exception_keeper_type_1;
    tmp_compare_right_3 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 147;
        type_description_1 = "oooooooooooooooo";
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_3;
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    branch_end_3:;
    // End of try:
    try_end_1:;
    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_node;
        var_node = tmp_assign_source_8;
        Py_INCREF( var_node );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_dumper;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_3;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_serialize );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = var_node;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_3;
    }

    frame_0349ae32187b6db29dd4806d2ebfdeb4->m_frame.f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_called_instance_4 = var_dumper;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_2;
    }

    frame_0349ae32187b6db29dd4806d2ebfdeb4->m_frame.f_lineno = 149;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_0349ae32187b6db29dd4806d2ebfdeb4, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_0349ae32187b6db29dd4806d2ebfdeb4, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_called_instance_5 = var_dumper;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }

    frame_0349ae32187b6db29dd4806d2ebfdeb4->m_frame.f_lineno = 151;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "oooooooooooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 145;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0349ae32187b6db29dd4806d2ebfdeb4->m_frame) frame_0349ae32187b6db29dd4806d2ebfdeb4->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooo";
    goto try_except_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_10_serialize_all );
    return NULL;
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
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;
    tmp_called_instance_6 = var_dumper;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_0349ae32187b6db29dd4806d2ebfdeb4->m_frame.f_lineno = 151;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_1 = var_getvalue;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "getvalue" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_3 = var_getvalue;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "getvalue" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_0349ae32187b6db29dd4806d2ebfdeb4->m_frame.f_lineno = 153;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        type_description_1 = "oooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0349ae32187b6db29dd4806d2ebfdeb4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0349ae32187b6db29dd4806d2ebfdeb4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0349ae32187b6db29dd4806d2ebfdeb4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0349ae32187b6db29dd4806d2ebfdeb4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0349ae32187b6db29dd4806d2ebfdeb4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0349ae32187b6db29dd4806d2ebfdeb4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0349ae32187b6db29dd4806d2ebfdeb4,
        type_description_1,
        par_nodes,
        par_stream,
        par_Dumper,
        par_canonical,
        par_indent,
        par_width,
        par_allow_unicode,
        par_line_break,
        par_encoding,
        par_explicit_start,
        par_explicit_end,
        par_version,
        par_tags,
        var_getvalue,
        var_node,
        var_dumper
    );


    // Release cached frame.
    if ( frame_0349ae32187b6db29dd4806d2ebfdeb4 == cache_frame_0349ae32187b6db29dd4806d2ebfdeb4 )
    {
        Py_DECREF( frame_0349ae32187b6db29dd4806d2ebfdeb4 );
    }
    cache_frame_0349ae32187b6db29dd4806d2ebfdeb4 = NULL;

    assertFrameObject( frame_0349ae32187b6db29dd4806d2ebfdeb4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_10_serialize_all );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_width );
    par_width = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_tags );
    par_tags = NULL;

    Py_XDECREF( par_version );
    par_version = NULL;

    Py_XDECREF( par_line_break );
    par_line_break = NULL;

    Py_XDECREF( par_allow_unicode );
    par_allow_unicode = NULL;

    Py_XDECREF( par_Dumper );
    par_Dumper = NULL;

    Py_XDECREF( par_explicit_end );
    par_explicit_end = NULL;

    Py_XDECREF( par_explicit_start );
    par_explicit_start = NULL;

    Py_XDECREF( var_getvalue );
    var_getvalue = NULL;

    Py_XDECREF( var_node );
    var_node = NULL;

    Py_XDECREF( var_dumper );
    var_dumper = NULL;

    Py_XDECREF( par_nodes );
    par_nodes = NULL;

    Py_XDECREF( par_canonical );
    par_canonical = NULL;

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

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_width );
    par_width = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_tags );
    par_tags = NULL;

    Py_XDECREF( par_version );
    par_version = NULL;

    Py_XDECREF( par_line_break );
    par_line_break = NULL;

    Py_XDECREF( par_allow_unicode );
    par_allow_unicode = NULL;

    Py_XDECREF( par_Dumper );
    par_Dumper = NULL;

    Py_XDECREF( par_explicit_end );
    par_explicit_end = NULL;

    Py_XDECREF( par_explicit_start );
    par_explicit_start = NULL;

    Py_XDECREF( var_getvalue );
    var_getvalue = NULL;

    Py_XDECREF( var_node );
    var_node = NULL;

    Py_XDECREF( var_dumper );
    var_dumper = NULL;

    Py_XDECREF( par_nodes );
    par_nodes = NULL;

    Py_XDECREF( par_canonical );
    par_canonical = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_10_serialize_all );
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


static PyObject *impl_yaml$$$function_11_serialize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_node = python_pars[ 0 ];
    PyObject *par_stream = python_pars[ 1 ];
    PyObject *par_Dumper = python_pars[ 2 ];
    PyObject *par_kwds = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_list_element_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_a3f80ca98af60ea31932b665c47405f6 = NULL;

    struct Nuitka_FrameObject *frame_a3f80ca98af60ea31932b665c47405f6;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a3f80ca98af60ea31932b665c47405f6, codeobj_a3f80ca98af60ea31932b665c47405f6, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a3f80ca98af60ea31932b665c47405f6 = cache_frame_a3f80ca98af60ea31932b665c47405f6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a3f80ca98af60ea31932b665c47405f6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a3f80ca98af60ea31932b665c47405f6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_serialize_all );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_serialize_all );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "serialize_all" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_list_element_1 = par_node;

    CHECK_OBJECT( tmp_list_element_1 );
    tmp_tuple_element_1 = PyList_New( 1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_stream;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_Dumper;
    tmp_dict_value_1 = par_Dumper;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kwds;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a3f80ca98af60ea31932b665c47405f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a3f80ca98af60ea31932b665c47405f6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a3f80ca98af60ea31932b665c47405f6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a3f80ca98af60ea31932b665c47405f6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a3f80ca98af60ea31932b665c47405f6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a3f80ca98af60ea31932b665c47405f6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a3f80ca98af60ea31932b665c47405f6,
        type_description_1,
        par_node,
        par_stream,
        par_Dumper,
        par_kwds
    );


    // Release cached frame.
    if ( frame_a3f80ca98af60ea31932b665c47405f6 == cache_frame_a3f80ca98af60ea31932b665c47405f6 )
    {
        Py_DECREF( frame_a3f80ca98af60ea31932b665c47405f6 );
    }
    cache_frame_a3f80ca98af60ea31932b665c47405f6 = NULL;

    assertFrameObject( frame_a3f80ca98af60ea31932b665c47405f6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_11_serialize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_Dumper );
    Py_DECREF( par_Dumper );
    par_Dumper = NULL;

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_kwds );
    par_kwds = NULL;

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

    CHECK_OBJECT( (PyObject *)par_Dumper );
    Py_DECREF( par_Dumper );
    par_Dumper = NULL;

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_kwds );
    par_kwds = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_11_serialize );
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


static PyObject *impl_yaml$$$function_12_dump_all( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_documents = python_pars[ 0 ];
    PyObject *par_stream = python_pars[ 1 ];
    PyObject *par_Dumper = python_pars[ 2 ];
    PyObject *par_default_style = python_pars[ 3 ];
    PyObject *par_default_flow_style = python_pars[ 4 ];
    PyObject *par_canonical = python_pars[ 5 ];
    PyObject *par_indent = python_pars[ 6 ];
    PyObject *par_width = python_pars[ 7 ];
    PyObject *par_allow_unicode = python_pars[ 8 ];
    PyObject *par_line_break = python_pars[ 9 ];
    PyObject *par_encoding = python_pars[ 10 ];
    PyObject *par_explicit_start = python_pars[ 11 ];
    PyObject *par_explicit_end = python_pars[ 12 ];
    PyObject *par_version = python_pars[ 13 ];
    PyObject *par_tags = python_pars[ 14 ];
    PyObject *var_dumper = NULL;
    PyObject *var_getvalue = NULL;
    PyObject *var_data = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
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
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_a7390a560682743bb3ed41e0e7ecd172 = NULL;

    struct Nuitka_FrameObject *frame_a7390a560682743bb3ed41e0e7ecd172;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_None;
    assert( var_getvalue == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_getvalue = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a7390a560682743bb3ed41e0e7ecd172, codeobj_a7390a560682743bb3ed41e0e7ecd172, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a7390a560682743bb3ed41e0e7ecd172 = cache_frame_a7390a560682743bb3ed41e0e7ecd172;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a7390a560682743bb3ed41e0e7ecd172 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a7390a560682743bb3ed41e0e7ecd172 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_stream;

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
    tmp_compare_left_2 = par_encoding;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a7390a560682743bb3ed41e0e7ecd172->m_frame.f_lineno = 175;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_StringIO );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_stream;
        par_stream = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_io );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_io );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "io" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a7390a560682743bb3ed41e0e7ecd172->m_frame.f_lineno = 177;
    tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_BytesIO );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_stream;
        par_stream = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    branch_end_2:;
    tmp_source_name_1 = par_stream;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getvalue );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_getvalue;
        var_getvalue = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_called_name_1 = par_Dumper;

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_stream;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stream" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_default_style;
    tmp_dict_value_1 = par_default_style;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "default_style" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 12 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_default_flow_style;
    tmp_dict_value_2 = par_default_flow_style;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "default_flow_style" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_canonical;
    tmp_dict_value_3 = par_canonical;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "canonical" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_indent;
    tmp_dict_value_4 = par_indent;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "indent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_width;
    tmp_dict_value_5 = par_width;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "width" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_allow_unicode;
    tmp_dict_value_6 = par_allow_unicode;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_unicode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_line_break;
    tmp_dict_value_7 = par_line_break;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "line_break" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain_encoding;
    tmp_dict_value_8 = par_encoding;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_9 = const_str_plain_version;
    tmp_dict_value_9 = par_version;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "version" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_10 = const_str_plain_tags;
    tmp_dict_value_10 = par_tags;

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_11 = const_str_plain_explicit_start;
    tmp_dict_value_11 = par_explicit_start;

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "explicit_start" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_12 = const_str_plain_explicit_end;
    tmp_dict_value_12 = par_explicit_end;

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "explicit_end" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    frame_a7390a560682743bb3ed41e0e7ecd172->m_frame.f_lineno = 179;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_dumper == NULL );
    var_dumper = tmp_assign_source_5;

    // Tried code:
    tmp_called_instance_3 = var_dumper;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_a7390a560682743bb3ed41e0e7ecd172->m_frame.f_lineno = 186;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_open );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_1 = par_documents;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "documents" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_2;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_2;
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


        type_description_1 = "oooooooooooooooooo";
        exception_lineno = 187;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
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

    tmp_compare_left_3 = exception_keeper_type_1;
    tmp_compare_right_3 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 187;
        type_description_1 = "oooooooooooooooooo";
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
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_3;
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    branch_end_3:;
    // End of try:
    try_end_1:;
    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = var_data;
        var_data = tmp_assign_source_8;
        Py_INCREF( var_data );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_dumper;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_3;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_represent );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = var_data;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_3;
    }

    frame_a7390a560682743bb3ed41e0e7ecd172->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_called_instance_4 = var_dumper;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_2;
    }

    frame_a7390a560682743bb3ed41e0e7ecd172->m_frame.f_lineno = 189;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_close );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_a7390a560682743bb3ed41e0e7ecd172, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_a7390a560682743bb3ed41e0e7ecd172, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_called_instance_5 = var_dumper;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_5;
    }

    frame_a7390a560682743bb3ed41e0e7ecd172->m_frame.f_lineno = 191;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "oooooooooooooooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 185;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a7390a560682743bb3ed41e0e7ecd172->m_frame) frame_a7390a560682743bb3ed41e0e7ecd172->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooo";
    goto try_except_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_12_dump_all );
    return NULL;
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
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;
    tmp_called_instance_6 = var_dumper;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a7390a560682743bb3ed41e0e7ecd172->m_frame.f_lineno = 191;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_dispose );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_1 = var_getvalue;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "getvalue" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_3 = var_getvalue;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "getvalue" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_a7390a560682743bb3ed41e0e7ecd172->m_frame.f_lineno = 193;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7390a560682743bb3ed41e0e7ecd172 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7390a560682743bb3ed41e0e7ecd172 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a7390a560682743bb3ed41e0e7ecd172 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a7390a560682743bb3ed41e0e7ecd172, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a7390a560682743bb3ed41e0e7ecd172->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a7390a560682743bb3ed41e0e7ecd172, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a7390a560682743bb3ed41e0e7ecd172,
        type_description_1,
        par_documents,
        par_stream,
        par_Dumper,
        par_default_style,
        par_default_flow_style,
        par_canonical,
        par_indent,
        par_width,
        par_allow_unicode,
        par_line_break,
        par_encoding,
        par_explicit_start,
        par_explicit_end,
        par_version,
        par_tags,
        var_dumper,
        var_getvalue,
        var_data
    );


    // Release cached frame.
    if ( frame_a7390a560682743bb3ed41e0e7ecd172 == cache_frame_a7390a560682743bb3ed41e0e7ecd172 )
    {
        Py_DECREF( frame_a7390a560682743bb3ed41e0e7ecd172 );
    }
    cache_frame_a7390a560682743bb3ed41e0e7ecd172 = NULL;

    assertFrameObject( frame_a7390a560682743bb3ed41e0e7ecd172 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_12_dump_all );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_width );
    par_width = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_tags );
    par_tags = NULL;

    Py_XDECREF( var_dumper );
    var_dumper = NULL;

    Py_XDECREF( par_version );
    par_version = NULL;

    Py_XDECREF( par_line_break );
    par_line_break = NULL;

    Py_XDECREF( par_allow_unicode );
    par_allow_unicode = NULL;

    Py_XDECREF( par_documents );
    par_documents = NULL;

    Py_XDECREF( par_Dumper );
    par_Dumper = NULL;

    Py_XDECREF( par_explicit_end );
    par_explicit_end = NULL;

    Py_XDECREF( par_explicit_start );
    par_explicit_start = NULL;

    Py_XDECREF( var_getvalue );
    var_getvalue = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( par_default_style );
    par_default_style = NULL;

    Py_XDECREF( par_default_flow_style );
    par_default_flow_style = NULL;

    Py_XDECREF( par_canonical );
    par_canonical = NULL;

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

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_width );
    par_width = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_tags );
    par_tags = NULL;

    Py_XDECREF( var_dumper );
    var_dumper = NULL;

    Py_XDECREF( par_version );
    par_version = NULL;

    Py_XDECREF( par_line_break );
    par_line_break = NULL;

    Py_XDECREF( par_allow_unicode );
    par_allow_unicode = NULL;

    Py_XDECREF( par_documents );
    par_documents = NULL;

    Py_XDECREF( par_Dumper );
    par_Dumper = NULL;

    Py_XDECREF( par_explicit_end );
    par_explicit_end = NULL;

    Py_XDECREF( par_explicit_start );
    par_explicit_start = NULL;

    Py_XDECREF( var_getvalue );
    var_getvalue = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    Py_XDECREF( par_default_style );
    par_default_style = NULL;

    Py_XDECREF( par_default_flow_style );
    par_default_flow_style = NULL;

    Py_XDECREF( par_canonical );
    par_canonical = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_12_dump_all );
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


static PyObject *impl_yaml$$$function_13_dump( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
    PyObject *par_stream = python_pars[ 1 ];
    PyObject *par_Dumper = python_pars[ 2 ];
    PyObject *par_kwds = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_list_element_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_281d529847847e741b1500661110b0a0 = NULL;

    struct Nuitka_FrameObject *frame_281d529847847e741b1500661110b0a0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_281d529847847e741b1500661110b0a0, codeobj_281d529847847e741b1500661110b0a0, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_281d529847847e741b1500661110b0a0 = cache_frame_281d529847847e741b1500661110b0a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_281d529847847e741b1500661110b0a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_281d529847847e741b1500661110b0a0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_dump_all );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dump_all );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dump_all" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_list_element_1 = par_data;

    CHECK_OBJECT( tmp_list_element_1 );
    tmp_tuple_element_1 = PyList_New( 1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_stream;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_Dumper;
    tmp_dict_value_1 = par_Dumper;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kwds;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_281d529847847e741b1500661110b0a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_281d529847847e741b1500661110b0a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_281d529847847e741b1500661110b0a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_281d529847847e741b1500661110b0a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_281d529847847e741b1500661110b0a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_281d529847847e741b1500661110b0a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_281d529847847e741b1500661110b0a0,
        type_description_1,
        par_data,
        par_stream,
        par_Dumper,
        par_kwds
    );


    // Release cached frame.
    if ( frame_281d529847847e741b1500661110b0a0 == cache_frame_281d529847847e741b1500661110b0a0 )
    {
        Py_DECREF( frame_281d529847847e741b1500661110b0a0 );
    }
    cache_frame_281d529847847e741b1500661110b0a0 = NULL;

    assertFrameObject( frame_281d529847847e741b1500661110b0a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_13_dump );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_Dumper );
    Py_DECREF( par_Dumper );
    par_Dumper = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_kwds );
    par_kwds = NULL;

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

    CHECK_OBJECT( (PyObject *)par_Dumper );
    Py_DECREF( par_Dumper );
    par_Dumper = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_kwds );
    par_kwds = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_13_dump );
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


static PyObject *impl_yaml$$$function_14_safe_dump_all( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_documents = python_pars[ 0 ];
    PyObject *par_stream = python_pars[ 1 ];
    PyObject *par_kwds = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_cf8c22f05f24e35a83331f518d8122f5 = NULL;

    struct Nuitka_FrameObject *frame_cf8c22f05f24e35a83331f518d8122f5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cf8c22f05f24e35a83331f518d8122f5, codeobj_cf8c22f05f24e35a83331f518d8122f5, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cf8c22f05f24e35a83331f518d8122f5 = cache_frame_cf8c22f05f24e35a83331f518d8122f5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cf8c22f05f24e35a83331f518d8122f5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cf8c22f05f24e35a83331f518d8122f5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_dump_all );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dump_all );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dump_all" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_documents;

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_stream;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_Dumper;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_SafeDumper );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SafeDumper );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SafeDumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kwds;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf8c22f05f24e35a83331f518d8122f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf8c22f05f24e35a83331f518d8122f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cf8c22f05f24e35a83331f518d8122f5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cf8c22f05f24e35a83331f518d8122f5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cf8c22f05f24e35a83331f518d8122f5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cf8c22f05f24e35a83331f518d8122f5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cf8c22f05f24e35a83331f518d8122f5,
        type_description_1,
        par_documents,
        par_stream,
        par_kwds
    );


    // Release cached frame.
    if ( frame_cf8c22f05f24e35a83331f518d8122f5 == cache_frame_cf8c22f05f24e35a83331f518d8122f5 )
    {
        Py_DECREF( frame_cf8c22f05f24e35a83331f518d8122f5 );
    }
    cache_frame_cf8c22f05f24e35a83331f518d8122f5 = NULL;

    assertFrameObject( frame_cf8c22f05f24e35a83331f518d8122f5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_14_safe_dump_all );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_documents );
    Py_DECREF( par_documents );
    par_documents = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_kwds );
    par_kwds = NULL;

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

    CHECK_OBJECT( (PyObject *)par_documents );
    Py_DECREF( par_documents );
    par_documents = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_kwds );
    par_kwds = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_14_safe_dump_all );
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


static PyObject *impl_yaml$$$function_15_safe_dump( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[ 0 ];
    PyObject *par_stream = python_pars[ 1 ];
    PyObject *par_kwds = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg4_1;
    PyObject *tmp_list_element_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_f57ad6b8af586c0b522e45de60ee23ca = NULL;

    struct Nuitka_FrameObject *frame_f57ad6b8af586c0b522e45de60ee23ca;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f57ad6b8af586c0b522e45de60ee23ca, codeobj_f57ad6b8af586c0b522e45de60ee23ca, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f57ad6b8af586c0b522e45de60ee23ca = cache_frame_f57ad6b8af586c0b522e45de60ee23ca;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f57ad6b8af586c0b522e45de60ee23ca );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f57ad6b8af586c0b522e45de60ee23ca ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_dump_all );

    if (unlikely( tmp_dircall_arg1_1 == NULL ))
    {
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dump_all );
    }

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dump_all" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_list_element_1 = par_data;

    CHECK_OBJECT( tmp_list_element_1 );
    tmp_tuple_element_1 = PyList_New( 1 );
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    tmp_dircall_arg2_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_stream;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_Dumper;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_SafeDumper );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SafeDumper );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SafeDumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dircall_arg4_1 = par_kwds;

    CHECK_OBJECT( tmp_dircall_arg4_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg4_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_pos_keywords_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f57ad6b8af586c0b522e45de60ee23ca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f57ad6b8af586c0b522e45de60ee23ca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f57ad6b8af586c0b522e45de60ee23ca );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f57ad6b8af586c0b522e45de60ee23ca, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f57ad6b8af586c0b522e45de60ee23ca->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f57ad6b8af586c0b522e45de60ee23ca, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f57ad6b8af586c0b522e45de60ee23ca,
        type_description_1,
        par_data,
        par_stream,
        par_kwds
    );


    // Release cached frame.
    if ( frame_f57ad6b8af586c0b522e45de60ee23ca == cache_frame_f57ad6b8af586c0b522e45de60ee23ca )
    {
        Py_DECREF( frame_f57ad6b8af586c0b522e45de60ee23ca );
    }
    cache_frame_f57ad6b8af586c0b522e45de60ee23ca = NULL;

    assertFrameObject( frame_f57ad6b8af586c0b522e45de60ee23ca );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_15_safe_dump );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_kwds );
    par_kwds = NULL;

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

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( par_kwds );
    par_kwds = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_15_safe_dump );
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


static PyObject *impl_yaml$$$function_16_add_implicit_resolver( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tag = python_pars[ 0 ];
    PyObject *par_regexp = python_pars[ 1 ];
    PyObject *par_first = python_pars[ 2 ];
    PyObject *par_Loader = python_pars[ 3 ];
    PyObject *par_Dumper = python_pars[ 4 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_711bae46c88cdf1d45a623c836738bcf = NULL;

    struct Nuitka_FrameObject *frame_711bae46c88cdf1d45a623c836738bcf;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_711bae46c88cdf1d45a623c836738bcf, codeobj_711bae46c88cdf1d45a623c836738bcf, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_711bae46c88cdf1d45a623c836738bcf = cache_frame_711bae46c88cdf1d45a623c836738bcf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_711bae46c88cdf1d45a623c836738bcf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_711bae46c88cdf1d45a623c836738bcf ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_Loader;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_implicit_resolver );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_tag;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tag" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_regexp;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "regexp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_first;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_711bae46c88cdf1d45a623c836738bcf->m_frame.f_lineno = 226;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_Dumper;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_add_implicit_resolver );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_tag;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tag" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_regexp;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "regexp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_first;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "first" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_711bae46c88cdf1d45a623c836738bcf->m_frame.f_lineno = 227;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 227;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_711bae46c88cdf1d45a623c836738bcf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_711bae46c88cdf1d45a623c836738bcf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_711bae46c88cdf1d45a623c836738bcf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_711bae46c88cdf1d45a623c836738bcf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_711bae46c88cdf1d45a623c836738bcf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_711bae46c88cdf1d45a623c836738bcf,
        type_description_1,
        par_tag,
        par_regexp,
        par_first,
        par_Loader,
        par_Dumper
    );


    // Release cached frame.
    if ( frame_711bae46c88cdf1d45a623c836738bcf == cache_frame_711bae46c88cdf1d45a623c836738bcf )
    {
        Py_DECREF( frame_711bae46c88cdf1d45a623c836738bcf );
    }
    cache_frame_711bae46c88cdf1d45a623c836738bcf = NULL;

    assertFrameObject( frame_711bae46c88cdf1d45a623c836738bcf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_16_add_implicit_resolver );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_Dumper );
    par_Dumper = NULL;

    Py_XDECREF( par_Loader );
    par_Loader = NULL;

    Py_XDECREF( par_regexp );
    par_regexp = NULL;

    Py_XDECREF( par_tag );
    par_tag = NULL;

    Py_XDECREF( par_first );
    par_first = NULL;

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

    Py_XDECREF( par_Dumper );
    par_Dumper = NULL;

    Py_XDECREF( par_Loader );
    par_Loader = NULL;

    Py_XDECREF( par_regexp );
    par_regexp = NULL;

    Py_XDECREF( par_tag );
    par_tag = NULL;

    Py_XDECREF( par_first );
    par_first = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_16_add_implicit_resolver );
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


static PyObject *impl_yaml$$$function_17_add_path_resolver( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tag = python_pars[ 0 ];
    PyObject *par_path = python_pars[ 1 ];
    PyObject *par_kind = python_pars[ 2 ];
    PyObject *par_Loader = python_pars[ 3 ];
    PyObject *par_Dumper = python_pars[ 4 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d3ac20010705f719aa64247a0119c20a = NULL;

    struct Nuitka_FrameObject *frame_d3ac20010705f719aa64247a0119c20a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d3ac20010705f719aa64247a0119c20a, codeobj_d3ac20010705f719aa64247a0119c20a, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d3ac20010705f719aa64247a0119c20a = cache_frame_d3ac20010705f719aa64247a0119c20a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d3ac20010705f719aa64247a0119c20a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d3ac20010705f719aa64247a0119c20a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_Loader;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_path_resolver );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_tag;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tag" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_path;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_kind;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kind" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_d3ac20010705f719aa64247a0119c20a->m_frame.f_lineno = 236;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = par_Dumper;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "Dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 237;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_add_path_resolver );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_tag;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tag" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 237;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_path;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "path" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 237;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_kind;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kind" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 237;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_d3ac20010705f719aa64247a0119c20a->m_frame.f_lineno = 237;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3ac20010705f719aa64247a0119c20a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d3ac20010705f719aa64247a0119c20a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d3ac20010705f719aa64247a0119c20a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d3ac20010705f719aa64247a0119c20a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d3ac20010705f719aa64247a0119c20a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d3ac20010705f719aa64247a0119c20a,
        type_description_1,
        par_tag,
        par_path,
        par_kind,
        par_Loader,
        par_Dumper
    );


    // Release cached frame.
    if ( frame_d3ac20010705f719aa64247a0119c20a == cache_frame_d3ac20010705f719aa64247a0119c20a )
    {
        Py_DECREF( frame_d3ac20010705f719aa64247a0119c20a );
    }
    cache_frame_d3ac20010705f719aa64247a0119c20a = NULL;

    assertFrameObject( frame_d3ac20010705f719aa64247a0119c20a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_17_add_path_resolver );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_Dumper );
    par_Dumper = NULL;

    Py_XDECREF( par_kind );
    par_kind = NULL;

    Py_XDECREF( par_Loader );
    par_Loader = NULL;

    Py_XDECREF( par_path );
    par_path = NULL;

    Py_XDECREF( par_tag );
    par_tag = NULL;

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

    Py_XDECREF( par_Dumper );
    par_Dumper = NULL;

    Py_XDECREF( par_kind );
    par_kind = NULL;

    Py_XDECREF( par_Loader );
    par_Loader = NULL;

    Py_XDECREF( par_path );
    par_path = NULL;

    Py_XDECREF( par_tag );
    par_tag = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_17_add_path_resolver );
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


static PyObject *impl_yaml$$$function_18_add_constructor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tag = python_pars[ 0 ];
    PyObject *par_constructor = python_pars[ 1 ];
    PyObject *par_Loader = python_pars[ 2 ];
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b9b71503d411aaad0de90fca66502d9f = NULL;

    struct Nuitka_FrameObject *frame_b9b71503d411aaad0de90fca66502d9f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b9b71503d411aaad0de90fca66502d9f, codeobj_b9b71503d411aaad0de90fca66502d9f, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b9b71503d411aaad0de90fca66502d9f = cache_frame_b9b71503d411aaad0de90fca66502d9f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b9b71503d411aaad0de90fca66502d9f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b9b71503d411aaad0de90fca66502d9f ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_Loader;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_constructor );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_tag;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tag" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_constructor;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "constructor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_b9b71503d411aaad0de90fca66502d9f->m_frame.f_lineno = 245;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9b71503d411aaad0de90fca66502d9f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b9b71503d411aaad0de90fca66502d9f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b9b71503d411aaad0de90fca66502d9f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b9b71503d411aaad0de90fca66502d9f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b9b71503d411aaad0de90fca66502d9f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b9b71503d411aaad0de90fca66502d9f,
        type_description_1,
        par_tag,
        par_constructor,
        par_Loader
    );


    // Release cached frame.
    if ( frame_b9b71503d411aaad0de90fca66502d9f == cache_frame_b9b71503d411aaad0de90fca66502d9f )
    {
        Py_DECREF( frame_b9b71503d411aaad0de90fca66502d9f );
    }
    cache_frame_b9b71503d411aaad0de90fca66502d9f = NULL;

    assertFrameObject( frame_b9b71503d411aaad0de90fca66502d9f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_18_add_constructor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_Loader );
    par_Loader = NULL;

    Py_XDECREF( par_constructor );
    par_constructor = NULL;

    Py_XDECREF( par_tag );
    par_tag = NULL;

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

    Py_XDECREF( par_Loader );
    par_Loader = NULL;

    Py_XDECREF( par_constructor );
    par_constructor = NULL;

    Py_XDECREF( par_tag );
    par_tag = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_18_add_constructor );
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


static PyObject *impl_yaml$$$function_19_add_multi_constructor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tag_prefix = python_pars[ 0 ];
    PyObject *par_multi_constructor = python_pars[ 1 ];
    PyObject *par_Loader = python_pars[ 2 ];
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b19413367ae2504a3b32a21f42cf79fa = NULL;

    struct Nuitka_FrameObject *frame_b19413367ae2504a3b32a21f42cf79fa;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b19413367ae2504a3b32a21f42cf79fa, codeobj_b19413367ae2504a3b32a21f42cf79fa, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b19413367ae2504a3b32a21f42cf79fa = cache_frame_b19413367ae2504a3b32a21f42cf79fa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b19413367ae2504a3b32a21f42cf79fa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b19413367ae2504a3b32a21f42cf79fa ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_Loader;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_multi_constructor );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_tag_prefix;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tag_prefix" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_multi_constructor;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "multi_constructor" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_b19413367ae2504a3b32a21f42cf79fa->m_frame.f_lineno = 254;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b19413367ae2504a3b32a21f42cf79fa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b19413367ae2504a3b32a21f42cf79fa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b19413367ae2504a3b32a21f42cf79fa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b19413367ae2504a3b32a21f42cf79fa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b19413367ae2504a3b32a21f42cf79fa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b19413367ae2504a3b32a21f42cf79fa,
        type_description_1,
        par_tag_prefix,
        par_multi_constructor,
        par_Loader
    );


    // Release cached frame.
    if ( frame_b19413367ae2504a3b32a21f42cf79fa == cache_frame_b19413367ae2504a3b32a21f42cf79fa )
    {
        Py_DECREF( frame_b19413367ae2504a3b32a21f42cf79fa );
    }
    cache_frame_b19413367ae2504a3b32a21f42cf79fa = NULL;

    assertFrameObject( frame_b19413367ae2504a3b32a21f42cf79fa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_19_add_multi_constructor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_Loader );
    par_Loader = NULL;

    Py_XDECREF( par_multi_constructor );
    par_multi_constructor = NULL;

    Py_XDECREF( par_tag_prefix );
    par_tag_prefix = NULL;

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

    Py_XDECREF( par_Loader );
    par_Loader = NULL;

    Py_XDECREF( par_multi_constructor );
    par_multi_constructor = NULL;

    Py_XDECREF( par_tag_prefix );
    par_tag_prefix = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_19_add_multi_constructor );
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


static PyObject *impl_yaml$$$function_20_add_representer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data_type = python_pars[ 0 ];
    PyObject *par_representer = python_pars[ 1 ];
    PyObject *par_Dumper = python_pars[ 2 ];
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_10c5b8836e29dfc23e0a74a3aa6dea2a = NULL;

    struct Nuitka_FrameObject *frame_10c5b8836e29dfc23e0a74a3aa6dea2a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_10c5b8836e29dfc23e0a74a3aa6dea2a, codeobj_10c5b8836e29dfc23e0a74a3aa6dea2a, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_10c5b8836e29dfc23e0a74a3aa6dea2a = cache_frame_10c5b8836e29dfc23e0a74a3aa6dea2a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10c5b8836e29dfc23e0a74a3aa6dea2a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10c5b8836e29dfc23e0a74a3aa6dea2a ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_Dumper;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_representer );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_data_type;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_representer;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "representer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_10c5b8836e29dfc23e0a74a3aa6dea2a->m_frame.f_lineno = 263;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 263;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10c5b8836e29dfc23e0a74a3aa6dea2a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10c5b8836e29dfc23e0a74a3aa6dea2a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10c5b8836e29dfc23e0a74a3aa6dea2a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10c5b8836e29dfc23e0a74a3aa6dea2a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10c5b8836e29dfc23e0a74a3aa6dea2a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10c5b8836e29dfc23e0a74a3aa6dea2a,
        type_description_1,
        par_data_type,
        par_representer,
        par_Dumper
    );


    // Release cached frame.
    if ( frame_10c5b8836e29dfc23e0a74a3aa6dea2a == cache_frame_10c5b8836e29dfc23e0a74a3aa6dea2a )
    {
        Py_DECREF( frame_10c5b8836e29dfc23e0a74a3aa6dea2a );
    }
    cache_frame_10c5b8836e29dfc23e0a74a3aa6dea2a = NULL;

    assertFrameObject( frame_10c5b8836e29dfc23e0a74a3aa6dea2a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_20_add_representer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_data_type );
    par_data_type = NULL;

    Py_XDECREF( par_representer );
    par_representer = NULL;

    Py_XDECREF( par_Dumper );
    par_Dumper = NULL;

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

    Py_XDECREF( par_data_type );
    par_data_type = NULL;

    Py_XDECREF( par_representer );
    par_representer = NULL;

    Py_XDECREF( par_Dumper );
    par_Dumper = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_20_add_representer );
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


static PyObject *impl_yaml$$$function_21_add_multi_representer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data_type = python_pars[ 0 ];
    PyObject *par_multi_representer = python_pars[ 1 ];
    PyObject *par_Dumper = python_pars[ 2 ];
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
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c22f1e7aa477600d909bbb1c4fa06911 = NULL;

    struct Nuitka_FrameObject *frame_c22f1e7aa477600d909bbb1c4fa06911;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c22f1e7aa477600d909bbb1c4fa06911, codeobj_c22f1e7aa477600d909bbb1c4fa06911, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c22f1e7aa477600d909bbb1c4fa06911 = cache_frame_c22f1e7aa477600d909bbb1c4fa06911;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c22f1e7aa477600d909bbb1c4fa06911 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c22f1e7aa477600d909bbb1c4fa06911 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_Dumper;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_multi_representer );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_data_type;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 272;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_multi_representer;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "multi_representer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 272;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_c22f1e7aa477600d909bbb1c4fa06911->m_frame.f_lineno = 272;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c22f1e7aa477600d909bbb1c4fa06911 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c22f1e7aa477600d909bbb1c4fa06911 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c22f1e7aa477600d909bbb1c4fa06911, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c22f1e7aa477600d909bbb1c4fa06911->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c22f1e7aa477600d909bbb1c4fa06911, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c22f1e7aa477600d909bbb1c4fa06911,
        type_description_1,
        par_data_type,
        par_multi_representer,
        par_Dumper
    );


    // Release cached frame.
    if ( frame_c22f1e7aa477600d909bbb1c4fa06911 == cache_frame_c22f1e7aa477600d909bbb1c4fa06911 )
    {
        Py_DECREF( frame_c22f1e7aa477600d909bbb1c4fa06911 );
    }
    cache_frame_c22f1e7aa477600d909bbb1c4fa06911 = NULL;

    assertFrameObject( frame_c22f1e7aa477600d909bbb1c4fa06911 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_21_add_multi_representer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_data_type );
    par_data_type = NULL;

    Py_XDECREF( par_multi_representer );
    par_multi_representer = NULL;

    Py_XDECREF( par_Dumper );
    par_Dumper = NULL;

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

    Py_XDECREF( par_data_type );
    par_data_type = NULL;

    Py_XDECREF( par_multi_representer );
    par_multi_representer = NULL;

    Py_XDECREF( par_Dumper );
    par_Dumper = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_21_add_multi_representer );
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


static PyObject *impl_yaml$$$function_22___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_bases = python_pars[ 2 ];
    PyObject *par_kwds = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_object_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_type_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_62b92aac3fa530019beaf982c9b192a4 = NULL;

    struct Nuitka_FrameObject *frame_62b92aac3fa530019beaf982c9b192a4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_62b92aac3fa530019beaf982c9b192a4, codeobj_62b92aac3fa530019beaf982c9b192a4, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_62b92aac3fa530019beaf982c9b192a4 = cache_frame_62b92aac3fa530019beaf982c9b192a4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_62b92aac3fa530019beaf982c9b192a4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_62b92aac3fa530019beaf982c9b192a4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_type_name_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_YAMLObjectMetaclass );

    if (unlikely( tmp_type_name_1 == NULL ))
    {
        tmp_type_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_YAMLObjectMetaclass );
    }

    if ( tmp_type_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "YAMLObjectMetaclass" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_object_name_1 = par_cls;

    CHECK_OBJECT( tmp_object_name_1 );
    tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
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

        exception_lineno = 279;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_bases;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bases" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_kwds;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwds" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    frame_62b92aac3fa530019beaf982c9b192a4->m_frame.f_lineno = 279;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compexpr_left_1 = const_str_plain_yaml_tag;
    tmp_compexpr_right_1 = par_kwds;

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwds" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_and_left_value_1 = SEQUENCE_CONTAINS( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
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
    tmp_subscribed_name_1 = par_kwds;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kwds" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_str_plain_yaml_tag;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = Py_None;
    tmp_and_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 != tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
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
    tmp_source_name_3 = par_cls;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 281;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_yaml_loader );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_add_constructor );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_cls;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 281;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_yaml_tag );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 281;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_cls;

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 281;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_from_yaml );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 281;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    frame_62b92aac3fa530019beaf982c9b192a4->m_frame.f_lineno = 281;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_7 = par_cls;

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_yaml_dumper );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_add_representer );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_cls;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = par_cls;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_to_yaml );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 282;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    frame_62b92aac3fa530019beaf982c9b192a4->m_frame.f_lineno = 282;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooooN";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62b92aac3fa530019beaf982c9b192a4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62b92aac3fa530019beaf982c9b192a4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62b92aac3fa530019beaf982c9b192a4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62b92aac3fa530019beaf982c9b192a4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62b92aac3fa530019beaf982c9b192a4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_62b92aac3fa530019beaf982c9b192a4,
        type_description_1,
        par_cls,
        par_name,
        par_bases,
        par_kwds,
        NULL
    );


    // Release cached frame.
    if ( frame_62b92aac3fa530019beaf982c9b192a4 == cache_frame_62b92aac3fa530019beaf982c9b192a4 )
    {
        Py_DECREF( frame_62b92aac3fa530019beaf982c9b192a4 );
    }
    cache_frame_62b92aac3fa530019beaf982c9b192a4 = NULL;

    assertFrameObject( frame_62b92aac3fa530019beaf982c9b192a4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_22___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_bases );
    par_bases = NULL;

    Py_XDECREF( par_kwds );
    par_kwds = NULL;

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

    Py_XDECREF( par_name );
    par_name = NULL;

    Py_XDECREF( par_bases );
    par_bases = NULL;

    Py_XDECREF( par_kwds );
    par_kwds = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_22___init__ );
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


static PyObject *impl_yaml$$$function_23_from_yaml( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_loader = python_pars[ 1 ];
    PyObject *par_node = python_pars[ 2 ];
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
    static struct Nuitka_FrameObject *cache_frame_09265c229ea14134b8ed08385920bc97 = NULL;

    struct Nuitka_FrameObject *frame_09265c229ea14134b8ed08385920bc97;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_09265c229ea14134b8ed08385920bc97, codeobj_09265c229ea14134b8ed08385920bc97, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_09265c229ea14134b8ed08385920bc97 = cache_frame_09265c229ea14134b8ed08385920bc97;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_09265c229ea14134b8ed08385920bc97 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_09265c229ea14134b8ed08385920bc97 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_loader;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_construct_yaml_object );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_node;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 303;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_cls;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 303;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_09265c229ea14134b8ed08385920bc97->m_frame.f_lineno = 303;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_09265c229ea14134b8ed08385920bc97 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_09265c229ea14134b8ed08385920bc97 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_09265c229ea14134b8ed08385920bc97 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_09265c229ea14134b8ed08385920bc97, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_09265c229ea14134b8ed08385920bc97->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_09265c229ea14134b8ed08385920bc97, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_09265c229ea14134b8ed08385920bc97,
        type_description_1,
        par_cls,
        par_loader,
        par_node
    );


    // Release cached frame.
    if ( frame_09265c229ea14134b8ed08385920bc97 == cache_frame_09265c229ea14134b8ed08385920bc97 )
    {
        Py_DECREF( frame_09265c229ea14134b8ed08385920bc97 );
    }
    cache_frame_09265c229ea14134b8ed08385920bc97 = NULL;

    assertFrameObject( frame_09265c229ea14134b8ed08385920bc97 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_23_from_yaml );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( par_loader );
    par_loader = NULL;

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

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( par_loader );
    par_loader = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_23_from_yaml );
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


static PyObject *impl_yaml$$$function_24_to_yaml( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_dumper = python_pars[ 1 ];
    PyObject *par_data = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_fafb1edeb132633c20bf756400f158a0 = NULL;

    struct Nuitka_FrameObject *frame_fafb1edeb132633c20bf756400f158a0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fafb1edeb132633c20bf756400f158a0, codeobj_fafb1edeb132633c20bf756400f158a0, module_yaml, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fafb1edeb132633c20bf756400f158a0 = cache_frame_fafb1edeb132633c20bf756400f158a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fafb1edeb132633c20bf756400f158a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fafb1edeb132633c20bf756400f158a0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_dumper;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_represent_yaml_object );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_cls;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 310;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_yaml_tag );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 310;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 3 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_data;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 310;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_cls;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 310;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_flow_style;
    tmp_source_name_3 = par_cls;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "cls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 311;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_yaml_flow_style );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 311;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_fafb1edeb132633c20bf756400f158a0->m_frame.f_lineno = 310;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fafb1edeb132633c20bf756400f158a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fafb1edeb132633c20bf756400f158a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fafb1edeb132633c20bf756400f158a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fafb1edeb132633c20bf756400f158a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fafb1edeb132633c20bf756400f158a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fafb1edeb132633c20bf756400f158a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fafb1edeb132633c20bf756400f158a0,
        type_description_1,
        par_cls,
        par_dumper,
        par_data
    );


    // Release cached frame.
    if ( frame_fafb1edeb132633c20bf756400f158a0 == cache_frame_fafb1edeb132633c20bf756400f158a0 )
    {
        Py_DECREF( frame_fafb1edeb132633c20bf756400f158a0 );
    }
    cache_frame_fafb1edeb132633c20bf756400f158a0 = NULL;

    assertFrameObject( frame_fafb1edeb132633c20bf756400f158a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$$$function_24_to_yaml );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_dumper );
    par_dumper = NULL;

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

    Py_XDECREF( par_dumper );
    par_dumper = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$$$function_24_to_yaml );
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



static PyObject *MAKE_FUNCTION_yaml$$$function_10_serialize_all( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_10_serialize_all,
        const_str_plain_serialize_all,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0349ae32187b6db29dd4806d2ebfdeb4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_c435c4fdcdcaa003646ad3c77380d7d6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_11_serialize( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_11_serialize,
        const_str_plain_serialize,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a3f80ca98af60ea31932b665c47405f6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_e12116e076885996ce65d00020399004,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_12_dump_all( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_12_dump_all,
        const_str_plain_dump_all,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a7390a560682743bb3ed41e0e7ecd172,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_c65a20627ea0cf0c6ad7d3abd910499e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_13_dump( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_13_dump,
        const_str_plain_dump,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_281d529847847e741b1500661110b0a0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_c1848d758000f2f711de4a7afadb7612,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_14_safe_dump_all( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_14_safe_dump_all,
        const_str_plain_safe_dump_all,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cf8c22f05f24e35a83331f518d8122f5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_211d1308cb16f40c14bb13ec4c68b860,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_15_safe_dump( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_15_safe_dump,
        const_str_plain_safe_dump,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f57ad6b8af586c0b522e45de60ee23ca,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_ed7cc8ed13af9fa1d8aa28432f21dc00,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_16_add_implicit_resolver( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_16_add_implicit_resolver,
        const_str_plain_add_implicit_resolver,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_711bae46c88cdf1d45a623c836738bcf,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_2cf1039e43103a38f7e6ff0f1119a36f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_17_add_path_resolver( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_17_add_path_resolver,
        const_str_plain_add_path_resolver,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d3ac20010705f719aa64247a0119c20a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_c7cc7489a5df741689476e7f8da60f90,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_18_add_constructor( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_18_add_constructor,
        const_str_plain_add_constructor,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b9b71503d411aaad0de90fca66502d9f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_9eccfe367df79b309d3b0818cc2961b3,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_19_add_multi_constructor( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_19_add_multi_constructor,
        const_str_plain_add_multi_constructor,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b19413367ae2504a3b32a21f42cf79fa,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_3813a8fdb16d32c68c82d3b678333141,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_1_scan( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_1_scan,
        const_str_plain_scan,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3a58d3e6d2dd3133129d755c709c5d91,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_95ff73faf19aae5c5eba08feef7937d0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_20_add_representer( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_20_add_representer,
        const_str_plain_add_representer,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_10c5b8836e29dfc23e0a74a3aa6dea2a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_ba9ec1f793e848db79a666445266baaf,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_21_add_multi_representer( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_21_add_multi_representer,
        const_str_plain_add_multi_representer,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c22f1e7aa477600d909bbb1c4fa06911,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_03212166b9ecd0d0110f39ddec7603a4,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_22___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_22___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_3a29191702803f2976d13b4af605079c,
#endif
        codeobj_62b92aac3fa530019beaf982c9b192a4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_23_from_yaml(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_23_from_yaml,
        const_str_plain_from_yaml,
#if PYTHON_VERSION >= 300
        const_str_digest_8c7ee70504ed226d674980b798ed4349,
#endif
        codeobj_09265c229ea14134b8ed08385920bc97,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_466cb9283df23e1a836acb83cf6ce973,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_24_to_yaml(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_24_to_yaml,
        const_str_plain_to_yaml,
#if PYTHON_VERSION >= 300
        const_str_digest_74c5cae9aad9f23f3235aefca4689825,
#endif
        codeobj_fafb1edeb132633c20bf756400f158a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_762d675728937f55f0216c1c39338cda,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_2_parse( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_2_parse,
        const_str_plain_parse,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d5536941dd7f6cf479b365302c82dade,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_d6cf9b2a5b9bb2f36bc0d1937aa38d11,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_3_compose( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_3_compose,
        const_str_plain_compose,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_19b5a104b34ccdcfd02c559012c91043,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_17f12407556e724be24fc75a851966f5,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_4_compose_all( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_4_compose_all,
        const_str_plain_compose_all,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1056077b1e1bc10bd731bb6e9eafc3c0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_3d8a0f238bfd2f3cde22605ffe266efa,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_5_load( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_5_load,
        const_str_plain_load,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d66ac1ab2f7bf595e5f8fd36fde8bf11,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_2b43a4ad228e185f2721e2a4b1401c96,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_6_load_all( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_6_load_all,
        const_str_plain_load_all,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3d4eee496e532ad57b98b230cba6d048,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_93425078dbc06e0bd823e4ad55c4bbbb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_7_safe_load(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_7_safe_load,
        const_str_plain_safe_load,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ae8f467d666092eace24102cbd42c134,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_5097af7257b0bf1ee6c4cc4e4d034b20,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_8_safe_load_all(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_8_safe_load_all,
        const_str_plain_safe_load_all,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ce971d88664b67e2f3667a1c33685480,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_1215166bede72df9db454df862426faf,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$$$function_9_emit( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$$$function_9_emit,
        const_str_plain_emit,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f7508ca6cfb409cd273e0ea7d0cf6e16,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml,
        const_str_digest_245f9d6d465874d7432172b4ec106f5c,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_yaml =
{
    PyModuleDef_HEAD_INIT,
    "yaml",   /* m_name */
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

MOD_INIT_DECL( yaml )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_yaml );
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
    puts("yaml: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("yaml: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("yaml: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inityaml" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_yaml = Py_InitModule4(
        "yaml",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_yaml = PyModule_Create( &mdef_yaml );
#endif

    moduledict_yaml = MODULE_DICT( module_yaml );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_yaml,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_yaml,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_yaml,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_yaml );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_yaml, module_yaml );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_classmethod_arg_1;
    PyObject *tmp_classmethod_arg_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
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
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_defaults_8;
    PyObject *tmp_defaults_9;
    PyObject *tmp_defaults_10;
    PyObject *tmp_defaults_11;
    PyObject *tmp_defaults_12;
    PyObject *tmp_defaults_13;
    PyObject *tmp_defaults_14;
    PyObject *tmp_defaults_15;
    PyObject *tmp_defaults_16;
    PyObject *tmp_defaults_17;
    PyObject *tmp_defaults_18;
    PyObject *tmp_defaults_19;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
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
    PyObject *tmp_level_name_8;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_star_imported_3;
    PyObject *tmp_star_imported_4;
    PyObject *tmp_star_imported_5;
    PyObject *tmp_star_imported_6;
    PyObject *tmp_star_imported_7;
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
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_tuple_element_19;
    static struct Nuitka_FrameObject *cache_frame_c8b445ed803be3ad5d668cb54f24d456_2 = NULL;

    struct Nuitka_FrameObject *frame_c8b445ed803be3ad5d668cb54f24d456_2;

    static struct Nuitka_FrameObject *cache_frame_1e4d96ba0c734e04e54a896bc946426f_3 = NULL;

    struct Nuitka_FrameObject *frame_1e4d96ba0c734e04e54a896bc946426f_3;

    struct Nuitka_FrameObject *frame_ee5477cc17a33eaf782d029347b733a1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    PyObject *locals_yaml_274 = NULL;
    PyObject *locals_yaml_284 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_99015480dd4a9f1efe096d5d455883db;
    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_5ec2bda4854425540aa1385af5eb02dc_list );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_ee5477cc17a33eaf782d029347b733a1 = MAKE_MODULE_FRAME( codeobj_ee5477cc17a33eaf782d029347b733a1, module_yaml );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ee5477cc17a33eaf782d029347b733a1 );
    assert( Py_REFCNT( frame_ee5477cc17a33eaf782d029347b733a1 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_error;
    tmp_globals_name_1 = (PyObject *)moduledict_yaml;
    tmp_locals_name_1 = (PyObject *)moduledict_yaml;
    tmp_fromlist_name_1 = const_tuple_str_chr_42_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_ee5477cc17a33eaf782d029347b733a1->m_frame.f_lineno = 2;
    tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_yaml, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    tmp_name_name_2 = const_str_plain_tokens;
    tmp_globals_name_2 = (PyObject *)moduledict_yaml;
    tmp_locals_name_2 = (PyObject *)moduledict_yaml;
    tmp_fromlist_name_2 = const_tuple_str_chr_42_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_ee5477cc17a33eaf782d029347b733a1->m_frame.f_lineno = 4;
    tmp_star_imported_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_yaml, true, tmp_star_imported_2 );
    Py_DECREF( tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    tmp_name_name_3 = const_str_plain_events;
    tmp_globals_name_3 = (PyObject *)moduledict_yaml;
    tmp_locals_name_3 = (PyObject *)moduledict_yaml;
    tmp_fromlist_name_3 = const_tuple_str_chr_42_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_ee5477cc17a33eaf782d029347b733a1->m_frame.f_lineno = 5;
    tmp_star_imported_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_yaml, true, tmp_star_imported_3 );
    Py_DECREF( tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    tmp_name_name_4 = const_str_plain_nodes;
    tmp_globals_name_4 = (PyObject *)moduledict_yaml;
    tmp_locals_name_4 = (PyObject *)moduledict_yaml;
    tmp_fromlist_name_4 = const_tuple_str_chr_42_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_ee5477cc17a33eaf782d029347b733a1->m_frame.f_lineno = 6;
    tmp_star_imported_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_star_imported_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_yaml, true, tmp_star_imported_4 );
    Py_DECREF( tmp_star_imported_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    tmp_name_name_5 = const_str_plain_loader;
    tmp_globals_name_5 = (PyObject *)moduledict_yaml;
    tmp_locals_name_5 = (PyObject *)moduledict_yaml;
    tmp_fromlist_name_5 = const_tuple_str_chr_42_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_ee5477cc17a33eaf782d029347b733a1->m_frame.f_lineno = 8;
    tmp_star_imported_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_star_imported_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_yaml, true, tmp_star_imported_5 );
    Py_DECREF( tmp_star_imported_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    tmp_name_name_6 = const_str_plain_dumper;
    tmp_globals_name_6 = (PyObject *)moduledict_yaml;
    tmp_locals_name_6 = (PyObject *)moduledict_yaml;
    tmp_fromlist_name_6 = const_tuple_str_chr_42_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_ee5477cc17a33eaf782d029347b733a1->m_frame.f_lineno = 9;
    tmp_star_imported_6 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_star_imported_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_yaml, true, tmp_star_imported_6 );
    Py_DECREF( tmp_star_imported_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = const_str_digest_ab32fb99c4fdef84eca9775c418ffb32;
    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_5 );
    // Tried code:
    tmp_name_name_7 = const_str_plain_cyaml;
    tmp_globals_name_7 = (PyObject *)moduledict_yaml;
    tmp_locals_name_7 = (PyObject *)moduledict_yaml;
    tmp_fromlist_name_7 = const_tuple_str_chr_42_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_ee5477cc17a33eaf782d029347b733a1->m_frame.f_lineno = 13;
    tmp_star_imported_7 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_star_imported_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_yaml, true, tmp_star_imported_7 );
    Py_DECREF( tmp_star_imported_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_1;
    }
    tmp_assign_source_6 = Py_True;
    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___with_libyaml__, tmp_assign_source_6 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_ee5477cc17a33eaf782d029347b733a1, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_ee5477cc17a33eaf782d029347b733a1, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

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
    tmp_assign_source_7 = Py_False;
    UPDATE_STRING_DICT0( moduledict_yaml, (Nuitka_StringObject *)const_str_plain___with_libyaml__, tmp_assign_source_7 );
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 12;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ee5477cc17a33eaf782d029347b733a1->m_frame) frame_ee5477cc17a33eaf782d029347b733a1->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
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
    NUITKA_CANNOT_GET_HERE( yaml );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    tmp_name_name_8 = const_str_plain_io;
    tmp_globals_name_8 = (PyObject *)moduledict_yaml;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = Py_None;
    tmp_level_name_8 = const_int_0;
    frame_ee5477cc17a33eaf782d029347b733a1->m_frame.f_lineno = 18;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_io, tmp_assign_source_8 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;

        goto frame_exception_exit_1;
    }

    tmp_defaults_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_9 = MAKE_FUNCTION_yaml$$$function_1_scan( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_scan, tmp_assign_source_9 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;

        goto frame_exception_exit_1;
    }

    tmp_defaults_2 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
    tmp_assign_source_10 = MAKE_FUNCTION_yaml$$$function_2_parse( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_parse, tmp_assign_source_10 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }

    tmp_defaults_3 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_3 );
    tmp_assign_source_11 = MAKE_FUNCTION_yaml$$$function_3_compose( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_compose, tmp_assign_source_11 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    tmp_defaults_4 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_defaults_4, 0, tmp_tuple_element_4 );
    tmp_assign_source_12 = MAKE_FUNCTION_yaml$$$function_4_compose_all( tmp_defaults_4 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_compose_all, tmp_assign_source_12 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;

        goto frame_exception_exit_1;
    }

    tmp_defaults_5 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_defaults_5, 0, tmp_tuple_element_5 );
    tmp_assign_source_13 = MAKE_FUNCTION_yaml$$$function_5_load( tmp_defaults_5 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_load, tmp_assign_source_13 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;

        goto frame_exception_exit_1;
    }

    tmp_defaults_6 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_defaults_6, 0, tmp_tuple_element_6 );
    tmp_assign_source_14 = MAKE_FUNCTION_yaml$$$function_6_load_all( tmp_defaults_6 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_load_all, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_yaml$$$function_7_safe_load(  );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_safe_load, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_yaml$$$function_8_safe_load_all(  );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_safe_load_all, tmp_assign_source_16 );
    tmp_tuple_element_7 = Py_None;
    tmp_defaults_7 = PyTuple_New( 7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_7, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_defaults_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_7, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_7, 2, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_7, 3, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_7, 4, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_7, 5, tmp_tuple_element_7 );
    tmp_tuple_element_7 = Py_None;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_defaults_7, 6, tmp_tuple_element_7 );
    tmp_assign_source_17 = MAKE_FUNCTION_yaml$$$function_9_emit( tmp_defaults_7 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_emit, tmp_assign_source_17 );
    tmp_tuple_element_8 = Py_None;
    tmp_defaults_8 = PyTuple_New( 12 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_8 == NULL ))
    {
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_8 == NULL )
    {
        Py_DECREF( tmp_defaults_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 2, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 3, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 4, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 5, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 6, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 7, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 8, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 9, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 10, tmp_tuple_element_8 );
    tmp_tuple_element_8 = Py_None;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_defaults_8, 11, tmp_tuple_element_8 );
    tmp_assign_source_18 = MAKE_FUNCTION_yaml$$$function_10_serialize_all( tmp_defaults_8 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_serialize_all, tmp_assign_source_18 );
    tmp_tuple_element_9 = Py_None;
    tmp_defaults_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_defaults_9, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_defaults_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_defaults_9, 1, tmp_tuple_element_9 );
    tmp_assign_source_19 = MAKE_FUNCTION_yaml$$$function_11_serialize( tmp_defaults_9 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_serialize, tmp_assign_source_19 );
    tmp_tuple_element_10 = Py_None;
    tmp_defaults_10 = PyTuple_New( 14 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_10 == NULL ))
    {
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_10 == NULL )
    {
        Py_DECREF( tmp_defaults_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 1, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 2, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 3, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 4, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 5, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 6, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 7, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 8, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 9, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 10, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 11, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 12, tmp_tuple_element_10 );
    tmp_tuple_element_10 = Py_None;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_defaults_10, 13, tmp_tuple_element_10 );
    tmp_assign_source_20 = MAKE_FUNCTION_yaml$$$function_12_dump_all( tmp_defaults_10 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_dump_all, tmp_assign_source_20 );
    tmp_tuple_element_11 = Py_None;
    tmp_defaults_11 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_defaults_11, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_11 == NULL ))
    {
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_defaults_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_defaults_11, 1, tmp_tuple_element_11 );
    tmp_assign_source_21 = MAKE_FUNCTION_yaml$$$function_13_dump( tmp_defaults_11 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_dump, tmp_assign_source_21 );
    tmp_defaults_12 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_12 );
    tmp_assign_source_22 = MAKE_FUNCTION_yaml$$$function_14_safe_dump_all( tmp_defaults_12 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_safe_dump_all, tmp_assign_source_22 );
    tmp_defaults_13 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_13 );
    tmp_assign_source_23 = MAKE_FUNCTION_yaml$$$function_15_safe_dump( tmp_defaults_13 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_safe_dump, tmp_assign_source_23 );
    tmp_tuple_element_12 = Py_None;
    tmp_defaults_14 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_defaults_14, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_defaults_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_defaults_14, 1, tmp_tuple_element_12 );
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_12 == NULL )
    {
        Py_DECREF( tmp_defaults_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_defaults_14, 2, tmp_tuple_element_12 );
    tmp_assign_source_24 = MAKE_FUNCTION_yaml$$$function_16_add_implicit_resolver( tmp_defaults_14 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_add_implicit_resolver, tmp_assign_source_24 );
    tmp_tuple_element_13 = Py_None;
    tmp_defaults_15 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_defaults_15, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_defaults_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_defaults_15, 1, tmp_tuple_element_13 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_defaults_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_defaults_15, 2, tmp_tuple_element_13 );
    tmp_assign_source_25 = MAKE_FUNCTION_yaml$$$function_17_add_path_resolver( tmp_defaults_15 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_add_path_resolver, tmp_assign_source_25 );
    tmp_tuple_element_14 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_14 == NULL ))
    {
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;

        goto frame_exception_exit_1;
    }

    tmp_defaults_16 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_defaults_16, 0, tmp_tuple_element_14 );
    tmp_assign_source_26 = MAKE_FUNCTION_yaml$$$function_18_add_constructor( tmp_defaults_16 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_add_constructor, tmp_assign_source_26 );
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
    }

    if ( tmp_tuple_element_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;

        goto frame_exception_exit_1;
    }

    tmp_defaults_17 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_defaults_17, 0, tmp_tuple_element_15 );
    tmp_assign_source_27 = MAKE_FUNCTION_yaml$$$function_19_add_multi_constructor( tmp_defaults_17 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_add_multi_constructor, tmp_assign_source_27 );
    tmp_tuple_element_16 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_16 == NULL ))
    {
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;

        goto frame_exception_exit_1;
    }

    tmp_defaults_18 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_defaults_18, 0, tmp_tuple_element_16 );
    tmp_assign_source_28 = MAKE_FUNCTION_yaml$$$function_20_add_representer( tmp_defaults_18 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_add_representer, tmp_assign_source_28 );
    tmp_tuple_element_17 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

    if (unlikely( tmp_tuple_element_17 == NULL ))
    {
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
    }

    if ( tmp_tuple_element_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Dumper" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 265;

        goto frame_exception_exit_1;
    }

    tmp_defaults_19 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_defaults_19, 0, tmp_tuple_element_17 );
    tmp_assign_source_29 = MAKE_FUNCTION_yaml$$$function_21_add_multi_representer( tmp_defaults_19 );
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_add_multi_representer, tmp_assign_source_29 );
    tmp_assign_source_30 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_30;

    // Tried code:
    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;

        goto try_except_handler_3;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;

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


        exception_lineno = 274;

        goto try_except_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_1:;
    tmp_bases_name_1 = const_tuple_type_type_tuple;
    tmp_assign_source_31 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;

        goto try_except_handler_3;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_31;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;

        goto try_except_handler_3;
    }
    tmp_cond_value_2 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;

        goto try_except_handler_3;
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
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;

        goto try_except_handler_3;
    }
    branch_no_2:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;

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


        exception_lineno = 274;

        goto try_except_handler_3;
    }
    tmp_args_name_1 = const_tuple_str_plain_YAMLObjectMetaclass_tuple_type_type_tuple_tuple;
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_ee5477cc17a33eaf782d029347b733a1->m_frame.f_lineno = 274;
    tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;

        goto try_except_handler_3;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_32 = PyDict_New();
    condexpr_end_2:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_32;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml_274 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_plain_yaml;
    tmp_res = PyObject_SetItem( locals_yaml_274, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;

        goto try_except_handler_5;
    }
    tmp_dictset_value = const_str_digest_754e29a91ecb08d4042410317d0a2ef6;
    tmp_res = PyObject_SetItem( locals_yaml_274, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;

        goto try_except_handler_5;
    }
    tmp_dictset_value = const_str_plain_YAMLObjectMetaclass;
    tmp_res = PyObject_SetItem( locals_yaml_274, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;

        goto try_except_handler_5;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_c8b445ed803be3ad5d668cb54f24d456_2, codeobj_c8b445ed803be3ad5d668cb54f24d456, module_yaml, sizeof(void *) );
    frame_c8b445ed803be3ad5d668cb54f24d456_2 = cache_frame_c8b445ed803be3ad5d668cb54f24d456_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c8b445ed803be3ad5d668cb54f24d456_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c8b445ed803be3ad5d668cb54f24d456_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_yaml$$$function_22___init__(  );
    tmp_res = PyObject_SetItem( locals_yaml_274, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8b445ed803be3ad5d668cb54f24d456_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8b445ed803be3ad5d668cb54f24d456_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c8b445ed803be3ad5d668cb54f24d456_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c8b445ed803be3ad5d668cb54f24d456_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c8b445ed803be3ad5d668cb54f24d456_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c8b445ed803be3ad5d668cb54f24d456_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_c8b445ed803be3ad5d668cb54f24d456_2 == cache_frame_c8b445ed803be3ad5d668cb54f24d456_2 )
    {
        Py_DECREF( frame_c8b445ed803be3ad5d668cb54f24d456_2 );
    }
    cache_frame_c8b445ed803be3ad5d668cb54f24d456_2 = NULL;

    assertFrameObject( frame_c8b445ed803be3ad5d668cb54f24d456_2 );

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
    tmp_tuple_element_18 = const_str_plain_YAMLObjectMetaclass;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = const_tuple_type_type_tuple;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_18 );
    tmp_tuple_element_18 = locals_yaml_274;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_18 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_ee5477cc17a33eaf782d029347b733a1->m_frame.f_lineno = 274;
    tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;

        goto try_except_handler_5;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_34;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    Py_DECREF( locals_yaml_274 );
    locals_yaml_274 = NULL;
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

    Py_DECREF( locals_yaml_274 );
    locals_yaml_274 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml );
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
    NUITKA_CANNOT_GET_HERE( yaml );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 274;
    goto try_except_handler_3;
    outline_result_1:;
    tmp_assign_source_33 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_YAMLObjectMetaclass, tmp_assign_source_33 );
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

    // Tried code:
    tmp_dict_key_1 = const_str_plain_metaclass;
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_YAMLObjectMetaclass );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_YAMLObjectMetaclass );
    }

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "YAMLObjectMetaclass" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 284;

        goto try_except_handler_6;
    }

    tmp_assign_source_35 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_35;

    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

        goto try_except_handler_6;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

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


        exception_lineno = 284;

        goto try_except_handler_6;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_3:;
    tmp_bases_name_2 = const_tuple_empty;
    tmp_assign_source_36 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

        goto try_except_handler_6;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_36;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

        goto try_except_handler_6;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

        goto try_except_handler_6;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

        goto try_except_handler_6;
    }
    branch_no_3:;
    tmp_hasattr_source_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_2 );
    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

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


        exception_lineno = 284;

        goto try_except_handler_6;
    }
    tmp_args_name_3 = const_tuple_str_plain_YAMLObject_tuple_empty_tuple;
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_ee5477cc17a33eaf782d029347b733a1->m_frame.f_lineno = 284;
    tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

        goto try_except_handler_6;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_37 = PyDict_New();
    condexpr_end_4:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_37;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml_284 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_plain_yaml;
    tmp_res = PyObject_SetItem( locals_yaml_284, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

        goto try_except_handler_8;
    }
    tmp_dictset_value = const_str_digest_61ee3c0a5dca9b4a263bd1503c98c244;
    tmp_res = PyObject_SetItem( locals_yaml_284, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

        goto try_except_handler_8;
    }
    tmp_dictset_value = const_str_plain_YAMLObject;
    tmp_res = PyObject_SetItem( locals_yaml_284, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

        goto try_except_handler_8;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_1e4d96ba0c734e04e54a896bc946426f_3, codeobj_1e4d96ba0c734e04e54a896bc946426f, module_yaml, sizeof(void *) );
    frame_1e4d96ba0c734e04e54a896bc946426f_3 = cache_frame_1e4d96ba0c734e04e54a896bc946426f_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1e4d96ba0c734e04e54a896bc946426f_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1e4d96ba0c734e04e54a896bc946426f_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = const_tuple_empty;
    tmp_res = PyObject_SetItem( locals_yaml_284, const_str_plain___slots__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = PyObject_GetItem( locals_yaml_284, const_str_plain_Loader );

    if ( tmp_dictset_value == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_dictset_value = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Loader );

        if (unlikely( tmp_dictset_value == NULL ))
        {
            tmp_dictset_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Loader );
        }

        if ( tmp_dictset_value == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Loader" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 292;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    tmp_res = PyObject_SetItem( locals_yaml_284, const_str_plain_yaml_loader, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = PyObject_GetItem( locals_yaml_284, const_str_plain_Dumper );

    if ( tmp_dictset_value == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_dictset_value = GET_STRING_DICT_VALUE( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_Dumper );

        if (unlikely( tmp_dictset_value == NULL ))
        {
            tmp_dictset_value = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Dumper );
        }

        if ( tmp_dictset_value == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Dumper" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 293;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    tmp_res = PyObject_SetItem( locals_yaml_284, const_str_plain_yaml_dumper, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = Py_None;
    tmp_res = PyObject_SetItem( locals_yaml_284, const_str_plain_yaml_tag, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_dictset_value = Py_None;
    tmp_res = PyObject_SetItem( locals_yaml_284, const_str_plain_yaml_flow_style, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_yaml_284, const_str_plain_classmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_cond_value_5 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_2 = "N";
        goto frame_exception_exit_3;
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
    tmp_called_name_4 = PyObject_GetItem( locals_yaml_284, const_str_plain_classmethod );

    if ( tmp_called_name_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 298;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_args_element_name_1 = MAKE_FUNCTION_yaml$$$function_23_from_yaml(  );
    frame_1e4d96ba0c734e04e54a896bc946426f_3->m_frame.f_lineno = 298;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_classmethod_arg_1 = MAKE_FUNCTION_yaml$$$function_23_from_yaml(  );
    tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_1 );
    Py_DECREF( tmp_classmethod_arg_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    condexpr_end_5:;
    tmp_res = PyObject_SetItem( locals_yaml_284, const_str_plain_from_yaml, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_yaml_284, const_str_plain_classmethod );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
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
    tmp_called_name_5 = PyObject_GetItem( locals_yaml_284, const_str_plain_classmethod );

    if ( tmp_called_name_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "classmethod" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 305;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_args_element_name_2 = MAKE_FUNCTION_yaml$$$function_24_to_yaml(  );
    frame_1e4d96ba0c734e04e54a896bc946426f_3->m_frame.f_lineno = 305;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_classmethod_arg_2 = MAKE_FUNCTION_yaml$$$function_24_to_yaml(  );
    tmp_dictset_value = BUILTIN_CLASSMETHOD( tmp_classmethod_arg_2 );
    Py_DECREF( tmp_classmethod_arg_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    condexpr_end_6:;
    tmp_res = PyObject_SetItem( locals_yaml_284, const_str_plain_to_yaml, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e4d96ba0c734e04e54a896bc946426f_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1e4d96ba0c734e04e54a896bc946426f_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1e4d96ba0c734e04e54a896bc946426f_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1e4d96ba0c734e04e54a896bc946426f_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1e4d96ba0c734e04e54a896bc946426f_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1e4d96ba0c734e04e54a896bc946426f_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_1e4d96ba0c734e04e54a896bc946426f_3 == cache_frame_1e4d96ba0c734e04e54a896bc946426f_3 )
    {
        Py_DECREF( frame_1e4d96ba0c734e04e54a896bc946426f_3 );
    }
    cache_frame_1e4d96ba0c734e04e54a896bc946426f_3 = NULL;

    assertFrameObject( frame_1e4d96ba0c734e04e54a896bc946426f_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_8;
    skip_nested_handling_2:;
    tmp_called_name_6 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_tuple_element_19 = const_str_plain_YAMLObject;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_19 );
    tmp_tuple_element_19 = const_tuple_empty;
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_19 );
    tmp_tuple_element_19 = locals_yaml_284;
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_19 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_ee5477cc17a33eaf782d029347b733a1->m_frame.f_lineno = 284;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;

        goto try_except_handler_8;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_39;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_8;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    Py_DECREF( locals_yaml_284 );
    locals_yaml_284 = NULL;
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

    Py_DECREF( locals_yaml_284 );
    locals_yaml_284 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml );
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
    NUITKA_CANNOT_GET_HERE( yaml );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 284;
    goto try_except_handler_6;
    outline_result_2:;
    tmp_assign_source_38 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_yaml, (Nuitka_StringObject *)const_str_plain_YAMLObject, tmp_assign_source_38 );
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

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
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
    RESTORE_FRAME_EXCEPTION( frame_ee5477cc17a33eaf782d029347b733a1 );
#endif
    popFrameStack();

    assertFrameObject( frame_ee5477cc17a33eaf782d029347b733a1 );

    goto frame_no_exception_3;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee5477cc17a33eaf782d029347b733a1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ee5477cc17a33eaf782d029347b733a1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ee5477cc17a33eaf782d029347b733a1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ee5477cc17a33eaf782d029347b733a1, exception_lineno );
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


    return MOD_RETURN_VALUE( module_yaml );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

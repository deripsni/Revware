/* Generated code for Python source for module 'yaml.events'
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

/* The _module_yaml$events is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_yaml$events;
PyDictObject *moduledict_yaml$events;

/* The module constants used, if any. */
static PyObject *const_tuple_str_plain_Event_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_anchor;
extern PyObject *const_str_plain_tag;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_flow_style;
extern PyObject *const_str_plain___name__;
extern PyObject *const_tuple_str_plain_self_str_plain_key_tuple;
static PyObject *const_tuple_9db134e1f07296a4a0ef3ef7a9da725c_tuple;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_StreamEndEvent;
static PyObject *const_str_digest_98d9524016f706cc352b985b72d2324e;
extern PyObject *const_str_plain_DocumentStartEvent;
extern PyObject *const_tuple_none_none_none_none_none_tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_NodeEvent;
extern PyObject *const_str_plain_encoding;
static PyObject *const_str_digest_da254b646d8336648c31c6ae7fd1b430;
extern PyObject *const_str_plain_tags;
extern PyObject *const_str_plain_SequenceEndEvent;
static PyObject *const_tuple_77254042c40750b8d9ed020641dc77c6_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_start_mark_str_plain_end_mark_tuple;
extern PyObject *const_str_plain_StreamStartEvent;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_AliasEvent;
extern PyObject *const_str_digest_69b6ecec1ddb0b99fd2288f02d4834e9;
extern PyObject *const_str_plain_MappingEndEvent;
extern PyObject *const_str_plain_key;
static PyObject *const_str_digest_82210f03da9114ea6049029d623b73dc;
extern PyObject *const_str_plain_value;
static PyObject *const_str_digest_06dae18be60a750535a248e9b5509ada;
extern PyObject *const_str_plain_arguments;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_style;
extern PyObject *const_str_plain_ScalarEvent;
static PyObject *const_str_digest_e9162c8eb27830dd42d0ee4f1ead6f0a;
static PyObject *const_tuple_210ac5938217e17f246228d362233506_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_eb95c1d6a9344f1473bea93007389e6d;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
extern PyObject *const_tuple_str_plain_self_str_plain_arguments_str_plain_attributes_tuple;
extern PyObject *const_str_plain___repr__;
static PyObject *const_str_digest_4fcb4f7183a747dc5e70071a0f3fa802;
extern PyObject *const_str_plain_start_mark;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_73c074e8ddab6e61ef1cf745ebfb3772;
static PyObject *const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
extern PyObject *const_str_angle_listcomp;
extern PyObject *const_str_digest_a7636f57d1f8f80548278378b7bf84e2;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_6d15eca70054c09c9444403b2e0f55e3_tuple;
static PyObject *const_tuple_277d39fe6b9115e0eef3f8f45a91a593_tuple;
extern PyObject *const_str_plain_version;
static PyObject *const_str_digest_b8c8c111aa1f97d7178c8e1089f63b9d;
static PyObject *const_tuple_af04a27b2a0807acfca9a7cca1e87785_tuple;
extern PyObject *const_tuple_a0c28b2ebb0fb8579466bfb2d200e598_tuple;
static PyObject *const_str_digest_de4c438452c04ae2740866a90c3acfdb;
extern PyObject *const_str_plain_CollectionEndEvent;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_implicit;
extern PyObject *const_str_plain_attributes;
extern PyObject *const_str_plain_DocumentEndEvent;
extern PyObject *const_str_plain_SequenceStartEvent;
extern PyObject *const_str_plain_CollectionStartEvent;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_MappingStartEvent;
extern PyObject *const_str_plain_explicit;
extern PyObject *const_str_plain_Event;
extern PyObject *const_str_plain_end_mark;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_Event_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Event_tuple_type_object_tuple_tuple, 0, const_str_plain_Event ); Py_INCREF( const_str_plain_Event );
    PyTuple_SET_ITEM( const_tuple_str_plain_Event_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_tuple_9db134e1f07296a4a0ef3ef7a9da725c_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_9db134e1f07296a4a0ef3ef7a9da725c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9db134e1f07296a4a0ef3ef7a9da725c_tuple, 1, const_str_plain_start_mark ); Py_INCREF( const_str_plain_start_mark );
    PyTuple_SET_ITEM( const_tuple_9db134e1f07296a4a0ef3ef7a9da725c_tuple, 2, const_str_plain_end_mark ); Py_INCREF( const_str_plain_end_mark );
    PyTuple_SET_ITEM( const_tuple_9db134e1f07296a4a0ef3ef7a9da725c_tuple, 3, const_str_plain_explicit ); Py_INCREF( const_str_plain_explicit );
    PyTuple_SET_ITEM( const_tuple_9db134e1f07296a4a0ef3ef7a9da725c_tuple, 4, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    PyTuple_SET_ITEM( const_tuple_9db134e1f07296a4a0ef3ef7a9da725c_tuple, 5, const_str_plain_tags ); Py_INCREF( const_str_plain_tags );
    const_str_digest_98d9524016f706cc352b985b72d2324e = UNSTREAM_STRING( &constant_bin[ 749611 ], 27, 0 );
    const_str_digest_da254b646d8336648c31c6ae7fd1b430 = UNSTREAM_STRING( &constant_bin[ 749624 ], 14, 0 );
    const_tuple_77254042c40750b8d9ed020641dc77c6_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_77254042c40750b8d9ed020641dc77c6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_77254042c40750b8d9ed020641dc77c6_tuple, 1, const_str_plain_start_mark ); Py_INCREF( const_str_plain_start_mark );
    PyTuple_SET_ITEM( const_tuple_77254042c40750b8d9ed020641dc77c6_tuple, 2, const_str_plain_end_mark ); Py_INCREF( const_str_plain_end_mark );
    PyTuple_SET_ITEM( const_tuple_77254042c40750b8d9ed020641dc77c6_tuple, 3, const_str_plain_explicit ); Py_INCREF( const_str_plain_explicit );
    const_str_digest_82210f03da9114ea6049029d623b73dc = UNSTREAM_STRING( &constant_bin[ 749638 ], 18, 0 );
    const_str_digest_06dae18be60a750535a248e9b5509ada = UNSTREAM_STRING( &constant_bin[ 749656 ], 20, 0 );
    const_str_digest_e9162c8eb27830dd42d0ee4f1ead6f0a = UNSTREAM_STRING( &constant_bin[ 749676 ], 14, 0 );
    const_tuple_210ac5938217e17f246228d362233506_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_210ac5938217e17f246228d362233506_tuple, 0, const_str_plain_anchor ); Py_INCREF( const_str_plain_anchor );
    PyTuple_SET_ITEM( const_tuple_210ac5938217e17f246228d362233506_tuple, 1, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    PyTuple_SET_ITEM( const_tuple_210ac5938217e17f246228d362233506_tuple, 2, const_str_plain_implicit ); Py_INCREF( const_str_plain_implicit );
    PyTuple_SET_ITEM( const_tuple_210ac5938217e17f246228d362233506_tuple, 3, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_eb95c1d6a9344f1473bea93007389e6d = UNSTREAM_STRING( &constant_bin[ 749690 ], 20, 0 );
    const_str_digest_4fcb4f7183a747dc5e70071a0f3fa802 = UNSTREAM_STRING( &constant_bin[ 749710 ], 86, 0 );
    const_str_digest_73c074e8ddab6e61ef1cf745ebfb3772 = UNSTREAM_STRING( &constant_bin[ 749796 ], 25, 0 );
    const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e = UNSTREAM_STRING( &constant_bin[ 749664 ], 11, 0 );
    const_tuple_6d15eca70054c09c9444403b2e0f55e3_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_6d15eca70054c09c9444403b2e0f55e3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_6d15eca70054c09c9444403b2e0f55e3_tuple, 1, const_str_plain_anchor ); Py_INCREF( const_str_plain_anchor );
    PyTuple_SET_ITEM( const_tuple_6d15eca70054c09c9444403b2e0f55e3_tuple, 2, const_str_plain_start_mark ); Py_INCREF( const_str_plain_start_mark );
    PyTuple_SET_ITEM( const_tuple_6d15eca70054c09c9444403b2e0f55e3_tuple, 3, const_str_plain_end_mark ); Py_INCREF( const_str_plain_end_mark );
    const_tuple_277d39fe6b9115e0eef3f8f45a91a593_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_277d39fe6b9115e0eef3f8f45a91a593_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_277d39fe6b9115e0eef3f8f45a91a593_tuple, 1, const_str_plain_anchor ); Py_INCREF( const_str_plain_anchor );
    PyTuple_SET_ITEM( const_tuple_277d39fe6b9115e0eef3f8f45a91a593_tuple, 2, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    PyTuple_SET_ITEM( const_tuple_277d39fe6b9115e0eef3f8f45a91a593_tuple, 3, const_str_plain_implicit ); Py_INCREF( const_str_plain_implicit );
    PyTuple_SET_ITEM( const_tuple_277d39fe6b9115e0eef3f8f45a91a593_tuple, 4, const_str_plain_start_mark ); Py_INCREF( const_str_plain_start_mark );
    PyTuple_SET_ITEM( const_tuple_277d39fe6b9115e0eef3f8f45a91a593_tuple, 5, const_str_plain_end_mark ); Py_INCREF( const_str_plain_end_mark );
    PyTuple_SET_ITEM( const_tuple_277d39fe6b9115e0eef3f8f45a91a593_tuple, 6, const_str_plain_flow_style ); Py_INCREF( const_str_plain_flow_style );
    const_str_digest_b8c8c111aa1f97d7178c8e1089f63b9d = UNSTREAM_STRING( &constant_bin[ 749821 ], 25, 0 );
    const_tuple_af04a27b2a0807acfca9a7cca1e87785_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_af04a27b2a0807acfca9a7cca1e87785_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_af04a27b2a0807acfca9a7cca1e87785_tuple, 1, const_str_plain_anchor ); Py_INCREF( const_str_plain_anchor );
    PyTuple_SET_ITEM( const_tuple_af04a27b2a0807acfca9a7cca1e87785_tuple, 2, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    PyTuple_SET_ITEM( const_tuple_af04a27b2a0807acfca9a7cca1e87785_tuple, 3, const_str_plain_implicit ); Py_INCREF( const_str_plain_implicit );
    PyTuple_SET_ITEM( const_tuple_af04a27b2a0807acfca9a7cca1e87785_tuple, 4, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_af04a27b2a0807acfca9a7cca1e87785_tuple, 5, const_str_plain_start_mark ); Py_INCREF( const_str_plain_start_mark );
    PyTuple_SET_ITEM( const_tuple_af04a27b2a0807acfca9a7cca1e87785_tuple, 6, const_str_plain_end_mark ); Py_INCREF( const_str_plain_end_mark );
    PyTuple_SET_ITEM( const_tuple_af04a27b2a0807acfca9a7cca1e87785_tuple, 7, const_str_plain_style ); Py_INCREF( const_str_plain_style );
    const_str_digest_de4c438452c04ae2740866a90c3acfdb = UNSTREAM_STRING( &constant_bin[ 749846 ], 29, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_yaml$events( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_28b37eddac20691886c91dcfbe68c130;
static PyCodeObject *codeobj_81e55bfd0112ce551fb0187de0896971;
static PyCodeObject *codeobj_a912e102c8938c4e309085b977a7ffb7;
static PyCodeObject *codeobj_b68147bfe93af6c9f6039da300c0b483;
static PyCodeObject *codeobj_52dacda0855d4b0a09545e0d435a4299;
static PyCodeObject *codeobj_6b0353651b09f6ca27dac3868089df38;
static PyCodeObject *codeobj_2393af8099c496c8dfee8caa00f30bb0;
static PyCodeObject *codeobj_bb5a1e256b8287da49a1cc3258704a87;
static PyCodeObject *codeobj_4f72b75d5987d1398e69ef3bbec90bb9;
static PyCodeObject *codeobj_99d477e638440b9e4a5ca797a2bfd52b;
static PyCodeObject *codeobj_ff1880f987868794d4ee29e9e1a5711a;
static PyCodeObject *codeobj_521469b87cc1609aafd082370e627003;
static PyCodeObject *codeobj_12713a9211759de4bbd642d1ac5ba66d;
static PyCodeObject *codeobj_c4007358eccaf59fe21bf78a299bdfab;
static PyCodeObject *codeobj_5656f19dd72468f71740df64c0ef8e27;
static PyCodeObject *codeobj_79264b573f55ce800c1e967bd4c8d35a;
static PyCodeObject *codeobj_2d4c63ff88e28911c229806ddbd87511;
static PyCodeObject *codeobj_e271e3b65721b1f2ec4b9347b7845e2d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_4fcb4f7183a747dc5e70071a0f3fa802;
    codeobj_28b37eddac20691886c91dcfbe68c130 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 9, const_tuple_str_plain_self_str_plain_key_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_81e55bfd0112ce551fb0187de0896971 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcomp, 11, const_tuple_str_plain_self_str_plain_key_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a912e102c8938c4e309085b977a7ffb7 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_06dae18be60a750535a248e9b5509ada, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_b68147bfe93af6c9f6039da300c0b483 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CollectionStartEvent, 21, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_52dacda0855d4b0a09545e0d435a4299 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DocumentEndEvent, 54, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_6b0353651b09f6ca27dac3868089df38 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DocumentStartEvent, 45, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_2393af8099c496c8dfee8caa00f30bb0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Event, 4, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_bb5a1e256b8287da49a1cc3258704a87 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_NodeEvent, 15, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_4f72b75d5987d1398e69ef3bbec90bb9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ScalarEvent, 64, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_99d477e638440b9e4a5ca797a2bfd52b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_StreamStartEvent, 36, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_ff1880f987868794d4ee29e9e1a5711a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 5, const_tuple_str_plain_self_str_plain_start_mark_str_plain_end_mark_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_521469b87cc1609aafd082370e627003 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 16, const_tuple_6d15eca70054c09c9444403b2e0f55e3_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_12713a9211759de4bbd642d1ac5ba66d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 22, const_tuple_277d39fe6b9115e0eef3f8f45a91a593_tuple, 7, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c4007358eccaf59fe21bf78a299bdfab = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 37, const_tuple_a0c28b2ebb0fb8579466bfb2d200e598_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5656f19dd72468f71740df64c0ef8e27 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 46, const_tuple_9db134e1f07296a4a0ef3ef7a9da725c_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_79264b573f55ce800c1e967bd4c8d35a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 55, const_tuple_77254042c40750b8d9ed020641dc77c6_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2d4c63ff88e28911c229806ddbd87511 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 65, const_tuple_af04a27b2a0807acfca9a7cca1e87785_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e271e3b65721b1f2ec4b9347b7845e2d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 8, const_tuple_str_plain_self_str_plain_arguments_str_plain_attributes_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_yaml$events$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$events$$$function_2___repr__(  );


static PyObject *MAKE_FUNCTION_yaml$events$$$function_3___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$events$$$function_4___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$events$$$function_5___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$events$$$function_6___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$events$$$function_7___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_yaml$events$$$function_8___init__( PyObject *defaults );


// The module function definitions.
static PyObject *impl_yaml$events$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_start_mark = python_pars[ 1 ];
    PyObject *par_end_mark = python_pars[ 2 ];
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
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_ff1880f987868794d4ee29e9e1a5711a = NULL;

    struct Nuitka_FrameObject *frame_ff1880f987868794d4ee29e9e1a5711a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ff1880f987868794d4ee29e9e1a5711a, codeobj_ff1880f987868794d4ee29e9e1a5711a, module_yaml$events, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ff1880f987868794d4ee29e9e1a5711a = cache_frame_ff1880f987868794d4ee29e9e1a5711a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ff1880f987868794d4ee29e9e1a5711a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ff1880f987868794d4ee29e9e1a5711a ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_start_mark;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_start_mark, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_end_mark;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end_mark" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 7;
        type_description_1 = "ooo";
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

        exception_lineno = 7;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_end_mark, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff1880f987868794d4ee29e9e1a5711a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ff1880f987868794d4ee29e9e1a5711a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ff1880f987868794d4ee29e9e1a5711a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ff1880f987868794d4ee29e9e1a5711a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ff1880f987868794d4ee29e9e1a5711a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ff1880f987868794d4ee29e9e1a5711a,
        type_description_1,
        par_self,
        par_start_mark,
        par_end_mark
    );


    // Release cached frame.
    if ( frame_ff1880f987868794d4ee29e9e1a5711a == cache_frame_ff1880f987868794d4ee29e9e1a5711a )
    {
        Py_DECREF( frame_ff1880f987868794d4ee29e9e1a5711a );
    }
    cache_frame_ff1880f987868794d4ee29e9e1a5711a = NULL;

    assertFrameObject( frame_ff1880f987868794d4ee29e9e1a5711a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_start_mark );
    par_start_mark = NULL;

    Py_XDECREF( par_end_mark );
    par_end_mark = NULL;

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

    Py_XDECREF( par_start_mark );
    par_start_mark = NULL;

    Py_XDECREF( par_end_mark );
    par_end_mark = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_1___init__ );
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


static PyObject *impl_yaml$events$$$function_2___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_arguments = NULL;
    PyObject *var_attributes = NULL;
    PyObject *outline_0_var_key = NULL;
    PyObject *outline_1_var_key = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_list_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
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
    PyObject *tmp_assign_source_10;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static struct Nuitka_FrameObject *cache_frame_28b37eddac20691886c91dcfbe68c130_2 = NULL;

    struct Nuitka_FrameObject *frame_28b37eddac20691886c91dcfbe68c130_2;

    static struct Nuitka_FrameObject *cache_frame_81e55bfd0112ce551fb0187de0896971_3 = NULL;

    struct Nuitka_FrameObject *frame_81e55bfd0112ce551fb0187de0896971_3;

    static struct Nuitka_FrameObject *cache_frame_e271e3b65721b1f2ec4b9347b7845e2d = NULL;

    struct Nuitka_FrameObject *frame_e271e3b65721b1f2ec4b9347b7845e2d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e271e3b65721b1f2ec4b9347b7845e2d, codeobj_e271e3b65721b1f2ec4b9347b7845e2d, module_yaml$events, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e271e3b65721b1f2ec4b9347b7845e2d = cache_frame_e271e3b65721b1f2ec4b9347b7845e2d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e271e3b65721b1f2ec4b9347b7845e2d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e271e3b65721b1f2ec4b9347b7845e2d ) == 2 ); // Frame stack

    // Framed code:
    tmp_iter_arg_1 = const_tuple_210ac5938217e17f246228d362233506_tuple;
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( !(tmp_assign_source_2 == NULL) );
    assert( tmp_listcomp_1__$0 == NULL );
    tmp_listcomp_1__$0 = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_listcomp_1__contraction == NULL );
    tmp_listcomp_1__contraction = tmp_assign_source_3;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_28b37eddac20691886c91dcfbe68c130_2, codeobj_28b37eddac20691886c91dcfbe68c130, module_yaml$events, sizeof(void *)+sizeof(void *) );
    frame_28b37eddac20691886c91dcfbe68c130_2 = cache_frame_28b37eddac20691886c91dcfbe68c130_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_28b37eddac20691886c91dcfbe68c130_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_28b37eddac20691886c91dcfbe68c130_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_listcomp_1__$0;

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


        type_description_2 = "oo";
        exception_lineno = 9;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_listcomp_1__iter_value_0;
        tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
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

        exception_lineno = 9;
        type_description_2 = "oo";
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
    tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = outline_0_var_key;
        outline_0_var_key = tmp_assign_source_5;
        Py_INCREF( outline_0_var_key );
        Py_XDECREF( old );
    }

    tmp_hasattr_source_1 = par_self;

    if ( tmp_hasattr_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 10;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }

    tmp_hasattr_attr_1 = outline_0_var_key;

    CHECK_OBJECT( tmp_hasattr_attr_1 );
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        type_description_2 = "oo";
        goto try_except_handler_3;
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
    tmp_append_list_1 = tmp_listcomp_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_append_value_1 = outline_0_var_key;

    CHECK_OBJECT( tmp_append_value_1 );
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        type_description_2 = "oo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_listcomp_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_2___repr__ );
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
    RESTORE_FRAME_EXCEPTION( frame_28b37eddac20691886c91dcfbe68c130_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_28b37eddac20691886c91dcfbe68c130_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_28b37eddac20691886c91dcfbe68c130_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_28b37eddac20691886c91dcfbe68c130_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_28b37eddac20691886c91dcfbe68c130_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_28b37eddac20691886c91dcfbe68c130_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_28b37eddac20691886c91dcfbe68c130_2,
        type_description_2,
        par_self,
        outline_0_var_key
    );


    // Release cached frame.
    if ( frame_28b37eddac20691886c91dcfbe68c130_2 == cache_frame_28b37eddac20691886c91dcfbe68c130_2 )
    {
        Py_DECREF( frame_28b37eddac20691886c91dcfbe68c130_2 );
    }
    cache_frame_28b37eddac20691886c91dcfbe68c130_2 = NULL;

    assertFrameObject( frame_28b37eddac20691886c91dcfbe68c130_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "ooo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_2___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_key );
    outline_0_var_key = NULL;

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

    Py_XDECREF( outline_0_var_key );
    outline_0_var_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_2___repr__ );
    return NULL;
    outline_exception_1:;
    exception_lineno = 9;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_assign_source_1 = tmp_outline_return_value_1;
    assert( var_attributes == NULL );
    var_attributes = tmp_assign_source_1;

    tmp_source_name_1 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( !(tmp_called_name_1 == NULL) );
    // Tried code:
    tmp_iter_arg_2 = var_attributes;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_1 = "ooo";
        goto try_except_handler_5;
    }
    assert( tmp_listcomp_2__$0 == NULL );
    tmp_listcomp_2__$0 = tmp_assign_source_7;

    tmp_assign_source_8 = PyList_New( 0 );
    assert( tmp_listcomp_2__contraction == NULL );
    tmp_listcomp_2__contraction = tmp_assign_source_8;

    MAKE_OR_REUSE_FRAME( cache_frame_81e55bfd0112ce551fb0187de0896971_3, codeobj_81e55bfd0112ce551fb0187de0896971, module_yaml$events, sizeof(void *)+sizeof(void *) );
    frame_81e55bfd0112ce551fb0187de0896971_3 = cache_frame_81e55bfd0112ce551fb0187de0896971_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_81e55bfd0112ce551fb0187de0896971_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_81e55bfd0112ce551fb0187de0896971_3 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_listcomp_2__$0;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_9 = ITERATOR_NEXT( tmp_value_name_2 );
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


        type_description_2 = "oo";
        exception_lineno = 11;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_listcomp_2__iter_value_0;
        tmp_listcomp_2__iter_value_0 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    goto try_end_2;
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

    tmp_compare_left_2 = exception_keeper_type_4;
    tmp_compare_right_2 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_4 );
        Py_XDECREF( exception_keeper_value_4 );
        Py_XDECREF( exception_keeper_tb_4 );

        exception_lineno = 11;
        type_description_2 = "oo";
        goto try_except_handler_6;
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

    goto try_except_handler_6;
    branch_end_3:;
    // End of try:
    try_end_2:;
    tmp_assign_source_10 = tmp_listcomp_2__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_10 );
    {
        PyObject *old = outline_1_var_key;
        outline_1_var_key = tmp_assign_source_10;
        Py_INCREF( outline_1_var_key );
        Py_XDECREF( old );
    }

    tmp_append_list_2 = tmp_listcomp_2__contraction;

    CHECK_OBJECT( tmp_append_list_2 );
    tmp_left_name_1 = const_str_digest_69b6ecec1ddb0b99fd2288f02d4834e9;
    tmp_tuple_element_1 = outline_1_var_key;

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_right_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_getattr_target_1 = par_self;

    if ( tmp_getattr_target_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;
        type_description_2 = "oo";
        goto try_except_handler_6;
    }

    tmp_getattr_attr_1 = outline_1_var_key;

    CHECK_OBJECT( tmp_getattr_attr_1 );
    tmp_tuple_element_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 11;
        type_description_2 = "oo";
        goto try_except_handler_6;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_append_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_2 = "oo";
        goto try_except_handler_6;
    }
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_2 = "oo";
        goto try_except_handler_6;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_2 = "oo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_2 = tmp_listcomp_2__contraction;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_2___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
    Py_DECREF( tmp_listcomp_2__$0 );
    tmp_listcomp_2__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
    Py_DECREF( tmp_listcomp_2__contraction );
    tmp_listcomp_2__contraction = NULL;

    Py_XDECREF( tmp_listcomp_2__iter_value_0 );
    tmp_listcomp_2__iter_value_0 = NULL;

    goto frame_return_exit_3;
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

    CHECK_OBJECT( (PyObject *)tmp_listcomp_2__$0 );
    Py_DECREF( tmp_listcomp_2__$0 );
    tmp_listcomp_2__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcomp_2__contraction );
    Py_DECREF( tmp_listcomp_2__contraction );
    tmp_listcomp_2__contraction = NULL;

    Py_XDECREF( tmp_listcomp_2__iter_value_0 );
    tmp_listcomp_2__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_3;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81e55bfd0112ce551fb0187de0896971_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_3:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_81e55bfd0112ce551fb0187de0896971_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_5;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_81e55bfd0112ce551fb0187de0896971_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_81e55bfd0112ce551fb0187de0896971_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_81e55bfd0112ce551fb0187de0896971_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_81e55bfd0112ce551fb0187de0896971_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_81e55bfd0112ce551fb0187de0896971_3,
        type_description_2,
        par_self,
        outline_1_var_key
    );


    // Release cached frame.
    if ( frame_81e55bfd0112ce551fb0187de0896971_3 == cache_frame_81e55bfd0112ce551fb0187de0896971_3 )
    {
        Py_DECREF( frame_81e55bfd0112ce551fb0187de0896971_3 );
    }
    cache_frame_81e55bfd0112ce551fb0187de0896971_3 = NULL;

    assertFrameObject( frame_81e55bfd0112ce551fb0187de0896971_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;
    type_description_1 = "ooo";
    goto try_except_handler_5;
    skip_nested_handling_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_2___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    Py_XDECREF( outline_1_var_key );
    outline_1_var_key = NULL;

    goto outline_result_2;
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

    Py_XDECREF( outline_1_var_key );
    outline_1_var_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_2___repr__ );
    return NULL;
    outline_exception_2:;
    exception_lineno = 11;
    goto frame_exception_exit_1;
    outline_result_2:;
    tmp_args_element_name_1 = tmp_outline_return_value_2;
    frame_e271e3b65721b1f2ec4b9347b7845e2d->m_frame.f_lineno = 11;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_arguments == NULL );
    var_arguments = tmp_assign_source_6;

    tmp_left_name_2 = const_str_digest_a7636f57d1f8f80548278378b7bf84e2;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 13;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_arguments;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "arguments" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 13;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_2 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e271e3b65721b1f2ec4b9347b7845e2d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e271e3b65721b1f2ec4b9347b7845e2d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e271e3b65721b1f2ec4b9347b7845e2d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e271e3b65721b1f2ec4b9347b7845e2d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e271e3b65721b1f2ec4b9347b7845e2d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e271e3b65721b1f2ec4b9347b7845e2d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e271e3b65721b1f2ec4b9347b7845e2d,
        type_description_1,
        par_self,
        var_arguments,
        var_attributes
    );


    // Release cached frame.
    if ( frame_e271e3b65721b1f2ec4b9347b7845e2d == cache_frame_e271e3b65721b1f2ec4b9347b7845e2d )
    {
        Py_DECREF( frame_e271e3b65721b1f2ec4b9347b7845e2d );
    }
    cache_frame_e271e3b65721b1f2ec4b9347b7845e2d = NULL;

    assertFrameObject( frame_e271e3b65721b1f2ec4b9347b7845e2d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_2___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_arguments );
    var_arguments = NULL;

    Py_XDECREF( var_attributes );
    var_attributes = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_arguments );
    var_arguments = NULL;

    Py_XDECREF( var_attributes );
    var_attributes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_2___repr__ );
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


static PyObject *impl_yaml$events$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_anchor = python_pars[ 1 ];
    PyObject *par_start_mark = python_pars[ 2 ];
    PyObject *par_end_mark = python_pars[ 3 ];
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
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_521469b87cc1609aafd082370e627003 = NULL;

    struct Nuitka_FrameObject *frame_521469b87cc1609aafd082370e627003;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_521469b87cc1609aafd082370e627003, codeobj_521469b87cc1609aafd082370e627003, module_yaml$events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_521469b87cc1609aafd082370e627003 = cache_frame_521469b87cc1609aafd082370e627003;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_521469b87cc1609aafd082370e627003 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_521469b87cc1609aafd082370e627003 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_anchor;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_anchor, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_start_mark;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start_mark" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;
        type_description_1 = "oooo";
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

        exception_lineno = 18;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_start_mark, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_end_mark;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end_mark" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 19;
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

        exception_lineno = 19;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_end_mark, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_521469b87cc1609aafd082370e627003 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_521469b87cc1609aafd082370e627003 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_521469b87cc1609aafd082370e627003, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_521469b87cc1609aafd082370e627003->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_521469b87cc1609aafd082370e627003, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_521469b87cc1609aafd082370e627003,
        type_description_1,
        par_self,
        par_anchor,
        par_start_mark,
        par_end_mark
    );


    // Release cached frame.
    if ( frame_521469b87cc1609aafd082370e627003 == cache_frame_521469b87cc1609aafd082370e627003 )
    {
        Py_DECREF( frame_521469b87cc1609aafd082370e627003 );
    }
    cache_frame_521469b87cc1609aafd082370e627003 = NULL;

    assertFrameObject( frame_521469b87cc1609aafd082370e627003 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_start_mark );
    par_start_mark = NULL;

    Py_XDECREF( par_end_mark );
    par_end_mark = NULL;

    Py_XDECREF( par_anchor );
    par_anchor = NULL;

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

    Py_XDECREF( par_start_mark );
    par_start_mark = NULL;

    Py_XDECREF( par_end_mark );
    par_end_mark = NULL;

    Py_XDECREF( par_anchor );
    par_anchor = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_3___init__ );
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


static PyObject *impl_yaml$events$$$function_4___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_anchor = python_pars[ 1 ];
    PyObject *par_tag = python_pars[ 2 ];
    PyObject *par_implicit = python_pars[ 3 ];
    PyObject *par_start_mark = python_pars[ 4 ];
    PyObject *par_end_mark = python_pars[ 5 ];
    PyObject *par_flow_style = python_pars[ 6 ];
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
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_12713a9211759de4bbd642d1ac5ba66d = NULL;

    struct Nuitka_FrameObject *frame_12713a9211759de4bbd642d1ac5ba66d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_12713a9211759de4bbd642d1ac5ba66d, codeobj_12713a9211759de4bbd642d1ac5ba66d, module_yaml$events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_12713a9211759de4bbd642d1ac5ba66d = cache_frame_12713a9211759de4bbd642d1ac5ba66d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_12713a9211759de4bbd642d1ac5ba66d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_12713a9211759de4bbd642d1ac5ba66d ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_anchor;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_anchor, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_tag;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tag" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;
        type_description_1 = "ooooooo";
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

        exception_lineno = 25;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_tag, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_implicit;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "implicit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "ooooooo";
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

        exception_lineno = 26;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_implicit, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_start_mark;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start_mark" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "ooooooo";
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

        exception_lineno = 27;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_start_mark, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = par_end_mark;

    if ( tmp_assattr_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end_mark" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_end_mark, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = par_flow_style;

    if ( tmp_assattr_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "flow_style" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = par_self;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_flow_style, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12713a9211759de4bbd642d1ac5ba66d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12713a9211759de4bbd642d1ac5ba66d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_12713a9211759de4bbd642d1ac5ba66d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_12713a9211759de4bbd642d1ac5ba66d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_12713a9211759de4bbd642d1ac5ba66d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_12713a9211759de4bbd642d1ac5ba66d,
        type_description_1,
        par_self,
        par_anchor,
        par_tag,
        par_implicit,
        par_start_mark,
        par_end_mark,
        par_flow_style
    );


    // Release cached frame.
    if ( frame_12713a9211759de4bbd642d1ac5ba66d == cache_frame_12713a9211759de4bbd642d1ac5ba66d )
    {
        Py_DECREF( frame_12713a9211759de4bbd642d1ac5ba66d );
    }
    cache_frame_12713a9211759de4bbd642d1ac5ba66d = NULL;

    assertFrameObject( frame_12713a9211759de4bbd642d1ac5ba66d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_4___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_implicit );
    par_implicit = NULL;

    Py_XDECREF( par_start_mark );
    par_start_mark = NULL;

    Py_XDECREF( par_end_mark );
    par_end_mark = NULL;

    Py_XDECREF( par_flow_style );
    par_flow_style = NULL;

    Py_XDECREF( par_tag );
    par_tag = NULL;

    Py_XDECREF( par_anchor );
    par_anchor = NULL;

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

    Py_XDECREF( par_implicit );
    par_implicit = NULL;

    Py_XDECREF( par_start_mark );
    par_start_mark = NULL;

    Py_XDECREF( par_end_mark );
    par_end_mark = NULL;

    Py_XDECREF( par_flow_style );
    par_flow_style = NULL;

    Py_XDECREF( par_tag );
    par_tag = NULL;

    Py_XDECREF( par_anchor );
    par_anchor = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_4___init__ );
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


static PyObject *impl_yaml$events$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_start_mark = python_pars[ 1 ];
    PyObject *par_end_mark = python_pars[ 2 ];
    PyObject *par_encoding = python_pars[ 3 ];
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
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_c4007358eccaf59fe21bf78a299bdfab = NULL;

    struct Nuitka_FrameObject *frame_c4007358eccaf59fe21bf78a299bdfab;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c4007358eccaf59fe21bf78a299bdfab, codeobj_c4007358eccaf59fe21bf78a299bdfab, module_yaml$events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c4007358eccaf59fe21bf78a299bdfab = cache_frame_c4007358eccaf59fe21bf78a299bdfab;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c4007358eccaf59fe21bf78a299bdfab );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c4007358eccaf59fe21bf78a299bdfab ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_start_mark;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_start_mark, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_end_mark;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end_mark" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "oooo";
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

        exception_lineno = 39;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_end_mark, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_encoding;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encoding" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
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

        exception_lineno = 40;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_encoding, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4007358eccaf59fe21bf78a299bdfab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c4007358eccaf59fe21bf78a299bdfab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c4007358eccaf59fe21bf78a299bdfab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c4007358eccaf59fe21bf78a299bdfab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c4007358eccaf59fe21bf78a299bdfab, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c4007358eccaf59fe21bf78a299bdfab,
        type_description_1,
        par_self,
        par_start_mark,
        par_end_mark,
        par_encoding
    );


    // Release cached frame.
    if ( frame_c4007358eccaf59fe21bf78a299bdfab == cache_frame_c4007358eccaf59fe21bf78a299bdfab )
    {
        Py_DECREF( frame_c4007358eccaf59fe21bf78a299bdfab );
    }
    cache_frame_c4007358eccaf59fe21bf78a299bdfab = NULL;

    assertFrameObject( frame_c4007358eccaf59fe21bf78a299bdfab );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_start_mark );
    par_start_mark = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_end_mark );
    par_end_mark = NULL;

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

    Py_XDECREF( par_start_mark );
    par_start_mark = NULL;

    Py_XDECREF( par_encoding );
    par_encoding = NULL;

    Py_XDECREF( par_end_mark );
    par_end_mark = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_5___init__ );
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


static PyObject *impl_yaml$events$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_start_mark = python_pars[ 1 ];
    PyObject *par_end_mark = python_pars[ 2 ];
    PyObject *par_explicit = python_pars[ 3 ];
    PyObject *par_version = python_pars[ 4 ];
    PyObject *par_tags = python_pars[ 5 ];
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
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_5656f19dd72468f71740df64c0ef8e27 = NULL;

    struct Nuitka_FrameObject *frame_5656f19dd72468f71740df64c0ef8e27;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5656f19dd72468f71740df64c0ef8e27, codeobj_5656f19dd72468f71740df64c0ef8e27, module_yaml$events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5656f19dd72468f71740df64c0ef8e27 = cache_frame_5656f19dd72468f71740df64c0ef8e27;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5656f19dd72468f71740df64c0ef8e27 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5656f19dd72468f71740df64c0ef8e27 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_start_mark;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_start_mark, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_end_mark;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end_mark" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "oooooo";
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

        exception_lineno = 49;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_end_mark, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_explicit;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "explicit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "oooooo";
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

        exception_lineno = 50;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_explicit, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_version;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "version" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooooo";
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

        exception_lineno = 51;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_version, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = par_tags;

    if ( tmp_assattr_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_tags, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5656f19dd72468f71740df64c0ef8e27 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5656f19dd72468f71740df64c0ef8e27 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5656f19dd72468f71740df64c0ef8e27, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5656f19dd72468f71740df64c0ef8e27->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5656f19dd72468f71740df64c0ef8e27, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5656f19dd72468f71740df64c0ef8e27,
        type_description_1,
        par_self,
        par_start_mark,
        par_end_mark,
        par_explicit,
        par_version,
        par_tags
    );


    // Release cached frame.
    if ( frame_5656f19dd72468f71740df64c0ef8e27 == cache_frame_5656f19dd72468f71740df64c0ef8e27 )
    {
        Py_DECREF( frame_5656f19dd72468f71740df64c0ef8e27 );
    }
    cache_frame_5656f19dd72468f71740df64c0ef8e27 = NULL;

    assertFrameObject( frame_5656f19dd72468f71740df64c0ef8e27 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_start_mark );
    par_start_mark = NULL;

    Py_XDECREF( par_end_mark );
    par_end_mark = NULL;

    Py_XDECREF( par_tags );
    par_tags = NULL;

    Py_XDECREF( par_version );
    par_version = NULL;

    Py_XDECREF( par_explicit );
    par_explicit = NULL;

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

    Py_XDECREF( par_start_mark );
    par_start_mark = NULL;

    Py_XDECREF( par_end_mark );
    par_end_mark = NULL;

    Py_XDECREF( par_tags );
    par_tags = NULL;

    Py_XDECREF( par_version );
    par_version = NULL;

    Py_XDECREF( par_explicit );
    par_explicit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_6___init__ );
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


static PyObject *impl_yaml$events$$$function_7___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_start_mark = python_pars[ 1 ];
    PyObject *par_end_mark = python_pars[ 2 ];
    PyObject *par_explicit = python_pars[ 3 ];
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
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_79264b573f55ce800c1e967bd4c8d35a = NULL;

    struct Nuitka_FrameObject *frame_79264b573f55ce800c1e967bd4c8d35a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_79264b573f55ce800c1e967bd4c8d35a, codeobj_79264b573f55ce800c1e967bd4c8d35a, module_yaml$events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_79264b573f55ce800c1e967bd4c8d35a = cache_frame_79264b573f55ce800c1e967bd4c8d35a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_79264b573f55ce800c1e967bd4c8d35a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_79264b573f55ce800c1e967bd4c8d35a ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_start_mark;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_start_mark, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_end_mark;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end_mark" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooo";
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

        exception_lineno = 58;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_end_mark, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_explicit;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "explicit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
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

        exception_lineno = 59;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_explicit, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79264b573f55ce800c1e967bd4c8d35a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_79264b573f55ce800c1e967bd4c8d35a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_79264b573f55ce800c1e967bd4c8d35a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_79264b573f55ce800c1e967bd4c8d35a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_79264b573f55ce800c1e967bd4c8d35a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_79264b573f55ce800c1e967bd4c8d35a,
        type_description_1,
        par_self,
        par_start_mark,
        par_end_mark,
        par_explicit
    );


    // Release cached frame.
    if ( frame_79264b573f55ce800c1e967bd4c8d35a == cache_frame_79264b573f55ce800c1e967bd4c8d35a )
    {
        Py_DECREF( frame_79264b573f55ce800c1e967bd4c8d35a );
    }
    cache_frame_79264b573f55ce800c1e967bd4c8d35a = NULL;

    assertFrameObject( frame_79264b573f55ce800c1e967bd4c8d35a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_7___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_start_mark );
    par_start_mark = NULL;

    Py_XDECREF( par_end_mark );
    par_end_mark = NULL;

    Py_XDECREF( par_explicit );
    par_explicit = NULL;

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

    Py_XDECREF( par_start_mark );
    par_start_mark = NULL;

    Py_XDECREF( par_end_mark );
    par_end_mark = NULL;

    Py_XDECREF( par_explicit );
    par_explicit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_7___init__ );
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


static PyObject *impl_yaml$events$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_anchor = python_pars[ 1 ];
    PyObject *par_tag = python_pars[ 2 ];
    PyObject *par_implicit = python_pars[ 3 ];
    PyObject *par_value = python_pars[ 4 ];
    PyObject *par_start_mark = python_pars[ 5 ];
    PyObject *par_end_mark = python_pars[ 6 ];
    PyObject *par_style = python_pars[ 7 ];
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
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_2d4c63ff88e28911c229806ddbd87511 = NULL;

    struct Nuitka_FrameObject *frame_2d4c63ff88e28911c229806ddbd87511;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2d4c63ff88e28911c229806ddbd87511, codeobj_2d4c63ff88e28911c229806ddbd87511, module_yaml$events, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2d4c63ff88e28911c229806ddbd87511 = cache_frame_2d4c63ff88e28911c229806ddbd87511;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2d4c63ff88e28911c229806ddbd87511 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2d4c63ff88e28911c229806ddbd87511 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_anchor;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_anchor, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_tag;

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tag" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oooooooo";
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

        exception_lineno = 68;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_tag, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_implicit;

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "implicit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooooooo";
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

        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_implicit, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_value;

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooooo";
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

        exception_lineno = 70;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_value, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = par_start_mark;

    if ( tmp_assattr_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "start_mark" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_5 = par_self;

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_start_mark, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = par_end_mark;

    if ( tmp_assattr_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "end_mark" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = par_self;

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_end_mark, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = par_style;

    if ( tmp_assattr_name_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "style" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_7 = par_self;

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_style, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d4c63ff88e28911c229806ddbd87511 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2d4c63ff88e28911c229806ddbd87511 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2d4c63ff88e28911c229806ddbd87511, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2d4c63ff88e28911c229806ddbd87511->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2d4c63ff88e28911c229806ddbd87511, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2d4c63ff88e28911c229806ddbd87511,
        type_description_1,
        par_self,
        par_anchor,
        par_tag,
        par_implicit,
        par_value,
        par_start_mark,
        par_end_mark,
        par_style
    );


    // Release cached frame.
    if ( frame_2d4c63ff88e28911c229806ddbd87511 == cache_frame_2d4c63ff88e28911c229806ddbd87511 )
    {
        Py_DECREF( frame_2d4c63ff88e28911c229806ddbd87511 );
    }
    cache_frame_2d4c63ff88e28911c229806ddbd87511 = NULL;

    assertFrameObject( frame_2d4c63ff88e28911c229806ddbd87511 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_implicit );
    par_implicit = NULL;

    Py_XDECREF( par_start_mark );
    par_start_mark = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_end_mark );
    par_end_mark = NULL;

    Py_XDECREF( par_style );
    par_style = NULL;

    Py_XDECREF( par_tag );
    par_tag = NULL;

    Py_XDECREF( par_anchor );
    par_anchor = NULL;

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

    Py_XDECREF( par_implicit );
    par_implicit = NULL;

    Py_XDECREF( par_start_mark );
    par_start_mark = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_end_mark );
    par_end_mark = NULL;

    Py_XDECREF( par_style );
    par_style = NULL;

    Py_XDECREF( par_tag );
    par_tag = NULL;

    Py_XDECREF( par_anchor );
    par_anchor = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events$$$function_8___init__ );
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



static PyObject *MAKE_FUNCTION_yaml$events$$$function_1___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$events$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_da254b646d8336648c31c6ae7fd1b430,
#endif
        codeobj_ff1880f987868794d4ee29e9e1a5711a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml$events,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$events$$$function_2___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$events$$$function_2___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        const_str_digest_e9162c8eb27830dd42d0ee4f1ead6f0a,
#endif
        codeobj_e271e3b65721b1f2ec4b9347b7845e2d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml$events,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$events$$$function_3___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$events$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_82210f03da9114ea6049029d623b73dc,
#endif
        codeobj_521469b87cc1609aafd082370e627003,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml$events,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$events$$$function_4___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$events$$$function_4___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_de4c438452c04ae2740866a90c3acfdb,
#endif
        codeobj_12713a9211759de4bbd642d1ac5ba66d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml$events,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$events$$$function_5___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$events$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_73c074e8ddab6e61ef1cf745ebfb3772,
#endif
        codeobj_c4007358eccaf59fe21bf78a299bdfab,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml$events,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$events$$$function_6___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$events$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_98d9524016f706cc352b985b72d2324e,
#endif
        codeobj_5656f19dd72468f71740df64c0ef8e27,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml$events,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$events$$$function_7___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$events$$$function_7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_b8c8c111aa1f97d7178c8e1089f63b9d,
#endif
        codeobj_79264b573f55ce800c1e967bd4c8d35a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml$events,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_yaml$events$$$function_8___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_yaml$events$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_eb95c1d6a9344f1473bea93007389e6d,
#endif
        codeobj_2d4c63ff88e28911c229806ddbd87511,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_yaml$events,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_yaml$events =
{
    PyModuleDef_HEAD_INIT,
    "yaml.events",   /* m_name */
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

MOD_INIT_DECL( yaml$events )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_yaml$events );
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
    puts("yaml.events: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("yaml.events: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("yaml.events: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inityaml$events" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_yaml$events = Py_InitModule4(
        "yaml.events",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_yaml$events = PyModule_Create( &mdef_yaml$events );
#endif

    moduledict_yaml$events = MODULE_DICT( module_yaml$events );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_yaml$events,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_yaml$events,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_yaml$events,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_yaml$events );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e, module_yaml$events );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *outline_13_var___class__ = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__bases = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__bases = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__bases = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
    PyObject *tmp_class_creation_14__bases = NULL;
    PyObject *tmp_class_creation_14__class_decl_dict = NULL;
    PyObject *tmp_class_creation_14__metaclass = NULL;
    PyObject *tmp_class_creation_14__prepared = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
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
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
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
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
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
    PyObject *tmp_args_name_15;
    PyObject *tmp_args_name_16;
    PyObject *tmp_args_name_17;
    PyObject *tmp_args_name_18;
    PyObject *tmp_args_name_19;
    PyObject *tmp_args_name_20;
    PyObject *tmp_args_name_21;
    PyObject *tmp_args_name_22;
    PyObject *tmp_args_name_23;
    PyObject *tmp_args_name_24;
    PyObject *tmp_args_name_25;
    PyObject *tmp_args_name_26;
    PyObject *tmp_args_name_27;
    PyObject *tmp_args_name_28;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
    PyObject *tmp_bases_name_7;
    PyObject *tmp_bases_name_8;
    PyObject *tmp_bases_name_9;
    PyObject *tmp_bases_name_10;
    PyObject *tmp_bases_name_11;
    PyObject *tmp_bases_name_12;
    PyObject *tmp_bases_name_13;
    PyObject *tmp_bases_name_14;
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
    int tmp_cond_truth_27;
    int tmp_cond_truth_28;
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
    PyObject *tmp_cond_value_27;
    PyObject *tmp_cond_value_28;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
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
    PyObject *tmp_dict_name_22;
    PyObject *tmp_dict_name_23;
    PyObject *tmp_dict_name_24;
    PyObject *tmp_dict_name_25;
    PyObject *tmp_dict_name_26;
    PyObject *tmp_dict_name_27;
    PyObject *tmp_dict_name_28;
    PyObject *tmp_dict_name_29;
    PyObject *tmp_dict_name_30;
    PyObject *tmp_dict_name_31;
    PyObject *tmp_dict_name_32;
    PyObject *tmp_dict_name_33;
    PyObject *tmp_dict_name_34;
    PyObject *tmp_dict_name_35;
    PyObject *tmp_dict_name_36;
    PyObject *tmp_dict_name_37;
    PyObject *tmp_dict_name_38;
    PyObject *tmp_dict_name_39;
    PyObject *tmp_dict_name_40;
    PyObject *tmp_dict_name_41;
    PyObject *tmp_dict_name_42;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_attr_6;
    PyObject *tmp_hasattr_attr_7;
    PyObject *tmp_hasattr_attr_8;
    PyObject *tmp_hasattr_attr_9;
    PyObject *tmp_hasattr_attr_10;
    PyObject *tmp_hasattr_attr_11;
    PyObject *tmp_hasattr_attr_12;
    PyObject *tmp_hasattr_attr_13;
    PyObject *tmp_hasattr_attr_14;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_hasattr_source_7;
    PyObject *tmp_hasattr_source_8;
    PyObject *tmp_hasattr_source_9;
    PyObject *tmp_hasattr_source_10;
    PyObject *tmp_hasattr_source_11;
    PyObject *tmp_hasattr_source_12;
    PyObject *tmp_hasattr_source_13;
    PyObject *tmp_hasattr_source_14;
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
    PyObject *tmp_key_name_22;
    PyObject *tmp_key_name_23;
    PyObject *tmp_key_name_24;
    PyObject *tmp_key_name_25;
    PyObject *tmp_key_name_26;
    PyObject *tmp_key_name_27;
    PyObject *tmp_key_name_28;
    PyObject *tmp_key_name_29;
    PyObject *tmp_key_name_30;
    PyObject *tmp_key_name_31;
    PyObject *tmp_key_name_32;
    PyObject *tmp_key_name_33;
    PyObject *tmp_key_name_34;
    PyObject *tmp_key_name_35;
    PyObject *tmp_key_name_36;
    PyObject *tmp_key_name_37;
    PyObject *tmp_key_name_38;
    PyObject *tmp_key_name_39;
    PyObject *tmp_key_name_40;
    PyObject *tmp_key_name_41;
    PyObject *tmp_key_name_42;
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
    PyObject *tmp_kw_name_15;
    PyObject *tmp_kw_name_16;
    PyObject *tmp_kw_name_17;
    PyObject *tmp_kw_name_18;
    PyObject *tmp_kw_name_19;
    PyObject *tmp_kw_name_20;
    PyObject *tmp_kw_name_21;
    PyObject *tmp_kw_name_22;
    PyObject *tmp_kw_name_23;
    PyObject *tmp_kw_name_24;
    PyObject *tmp_kw_name_25;
    PyObject *tmp_kw_name_26;
    PyObject *tmp_kw_name_27;
    PyObject *tmp_kw_name_28;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
    PyObject *tmp_metaclass_name_6;
    PyObject *tmp_metaclass_name_7;
    PyObject *tmp_metaclass_name_8;
    PyObject *tmp_metaclass_name_9;
    PyObject *tmp_metaclass_name_10;
    PyObject *tmp_metaclass_name_11;
    PyObject *tmp_metaclass_name_12;
    PyObject *tmp_metaclass_name_13;
    PyObject *tmp_metaclass_name_14;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    PyObject *tmp_outline_return_value_7;
    PyObject *tmp_outline_return_value_8;
    PyObject *tmp_outline_return_value_9;
    PyObject *tmp_outline_return_value_10;
    PyObject *tmp_outline_return_value_11;
    PyObject *tmp_outline_return_value_12;
    PyObject *tmp_outline_return_value_13;
    PyObject *tmp_outline_return_value_14;
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
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_subscript_name_13;
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
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_tuple_element_24;
    PyObject *tmp_tuple_element_25;
    PyObject *tmp_tuple_element_26;
    PyObject *tmp_tuple_element_27;
    PyObject *tmp_tuple_element_28;
    PyObject *tmp_tuple_element_29;
    PyObject *tmp_tuple_element_30;
    PyObject *tmp_tuple_element_31;
    PyObject *tmp_tuple_element_32;
    PyObject *tmp_tuple_element_33;
    PyObject *tmp_tuple_element_34;
    PyObject *tmp_tuple_element_35;
    PyObject *tmp_tuple_element_36;
    PyObject *tmp_tuple_element_37;
    PyObject *tmp_tuple_element_38;
    PyObject *tmp_tuple_element_39;
    PyObject *tmp_tuple_element_40;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    PyObject *tmp_type_arg_7;
    PyObject *tmp_type_arg_8;
    PyObject *tmp_type_arg_9;
    PyObject *tmp_type_arg_10;
    PyObject *tmp_type_arg_11;
    PyObject *tmp_type_arg_12;
    PyObject *tmp_type_arg_13;
    static struct Nuitka_FrameObject *cache_frame_2393af8099c496c8dfee8caa00f30bb0_2 = NULL;

    struct Nuitka_FrameObject *frame_2393af8099c496c8dfee8caa00f30bb0_2;

    static struct Nuitka_FrameObject *cache_frame_bb5a1e256b8287da49a1cc3258704a87_3 = NULL;

    struct Nuitka_FrameObject *frame_bb5a1e256b8287da49a1cc3258704a87_3;

    static struct Nuitka_FrameObject *cache_frame_b68147bfe93af6c9f6039da300c0b483_4 = NULL;

    struct Nuitka_FrameObject *frame_b68147bfe93af6c9f6039da300c0b483_4;

    static struct Nuitka_FrameObject *cache_frame_99d477e638440b9e4a5ca797a2bfd52b_5 = NULL;

    struct Nuitka_FrameObject *frame_99d477e638440b9e4a5ca797a2bfd52b_5;

    static struct Nuitka_FrameObject *cache_frame_6b0353651b09f6ca27dac3868089df38_6 = NULL;

    struct Nuitka_FrameObject *frame_6b0353651b09f6ca27dac3868089df38_6;

    static struct Nuitka_FrameObject *cache_frame_52dacda0855d4b0a09545e0d435a4299_7 = NULL;

    struct Nuitka_FrameObject *frame_52dacda0855d4b0a09545e0d435a4299_7;

    static struct Nuitka_FrameObject *cache_frame_4f72b75d5987d1398e69ef3bbec90bb9_8 = NULL;

    struct Nuitka_FrameObject *frame_4f72b75d5987d1398e69ef3bbec90bb9_8;

    struct Nuitka_FrameObject *frame_a912e102c8938c4e309085b977a7ffb7;

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
    tmp_outline_return_value_8 = NULL;
    tmp_outline_return_value_9 = NULL;
    tmp_outline_return_value_10 = NULL;
    tmp_outline_return_value_11 = NULL;
    tmp_outline_return_value_12 = NULL;
    tmp_outline_return_value_13 = NULL;
    tmp_outline_return_value_14 = NULL;
    PyObject *locals_yaml$events_61 = NULL;
    PyObject *locals_yaml$events_31 = NULL;
    PyObject *locals_yaml$events_75 = NULL;
    PyObject *locals_yaml$events_64 = NULL;
    PyObject *locals_yaml$events_15 = NULL;
    PyObject *locals_yaml$events_54 = NULL;
    PyObject *locals_yaml$events_4 = NULL;
    PyObject *locals_yaml$events_42 = NULL;
    PyObject *locals_yaml$events_21 = NULL;
    PyObject *locals_yaml$events_36 = NULL;
    PyObject *locals_yaml$events_45 = NULL;
    PyObject *locals_yaml$events_81 = NULL;
    PyObject *locals_yaml$events_84 = NULL;
    PyObject *locals_yaml$events_78 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_4fcb4f7183a747dc5e70071a0f3fa802;
    UPDATE_STRING_DICT0( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_4;

    // Frame without reuse.
    frame_a912e102c8938c4e309085b977a7ffb7 = MAKE_MODULE_FRAME( codeobj_a912e102c8938c4e309085b977a7ffb7, module_yaml$events );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a912e102c8938c4e309085b977a7ffb7 );
    assert( Py_REFCNT( frame_a912e102c8938c4e309085b977a7ffb7 ) == 2 );

    // Framed code:
    // Tried code:
    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
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


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_1:;
    tmp_bases_name_1 = const_tuple_type_object_tuple;
    tmp_assign_source_5 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_5;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    tmp_cond_value_2 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
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


        exception_lineno = 4;

        goto try_except_handler_1;
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


        exception_lineno = 4;

        goto try_except_handler_1;
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


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    tmp_args_name_1 = const_tuple_str_plain_Event_tuple_type_object_tuple_tuple;
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 4;
    tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_6 = PyDict_New();
    condexpr_end_2:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_6;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml$events_4 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
    tmp_res = PyObject_SetItem( locals_yaml$events_4, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_plain_Event;
    tmp_res = PyObject_SetItem( locals_yaml$events_4, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_2393af8099c496c8dfee8caa00f30bb0_2, codeobj_2393af8099c496c8dfee8caa00f30bb0, module_yaml$events, sizeof(void *) );
    frame_2393af8099c496c8dfee8caa00f30bb0_2 = cache_frame_2393af8099c496c8dfee8caa00f30bb0_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2393af8099c496c8dfee8caa00f30bb0_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2393af8099c496c8dfee8caa00f30bb0_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_1 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_dictset_value = MAKE_FUNCTION_yaml$events$$$function_1___init__( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_yaml$events_4, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_yaml$events$$$function_2___repr__(  );
    tmp_res = PyObject_SetItem( locals_yaml$events_4, const_str_plain___repr__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2393af8099c496c8dfee8caa00f30bb0_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2393af8099c496c8dfee8caa00f30bb0_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2393af8099c496c8dfee8caa00f30bb0_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2393af8099c496c8dfee8caa00f30bb0_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2393af8099c496c8dfee8caa00f30bb0_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2393af8099c496c8dfee8caa00f30bb0_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_2393af8099c496c8dfee8caa00f30bb0_2 == cache_frame_2393af8099c496c8dfee8caa00f30bb0_2 )
    {
        Py_DECREF( frame_2393af8099c496c8dfee8caa00f30bb0_2 );
    }
    cache_frame_2393af8099c496c8dfee8caa00f30bb0_2 = NULL;

    assertFrameObject( frame_2393af8099c496c8dfee8caa00f30bb0_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_1 = const_str_plain_Event;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_yaml$events_4;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_1 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 4;
    tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_8;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_yaml$events_4 );
    locals_yaml$events_4 = NULL;
    goto try_return_handler_2;
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

    Py_DECREF( locals_yaml$events_4 );
    locals_yaml$events_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 4;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_7 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_Event, tmp_assign_source_7 );
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
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
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_Event );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Event );
    }

    if ( tmp_tuple_element_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Event" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 15;

        goto try_except_handler_4;
    }

    tmp_assign_source_9 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_9, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_9;

    tmp_assign_source_10 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_10;

    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_4;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_4;
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


        exception_lineno = 15;

        goto try_except_handler_4;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_subscribed_name_1 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_4;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_4;
    }
    condexpr_end_3:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_11 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_4;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_11;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_4;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_4;
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


        exception_lineno = 15;

        goto try_except_handler_4;
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


        exception_lineno = 15;

        goto try_except_handler_4;
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


        exception_lineno = 15;

        goto try_except_handler_4;
    }
    tmp_tuple_element_3 = const_str_plain_NodeEvent;
    tmp_args_name_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 15;
    tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_4;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_12 = PyDict_New();
    condexpr_end_4:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_12;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml$events_15 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
    tmp_res = PyObject_SetItem( locals_yaml$events_15, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_6;
    }
    tmp_dictset_value = const_str_plain_NodeEvent;
    tmp_res = PyObject_SetItem( locals_yaml$events_15, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_6;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_bb5a1e256b8287da49a1cc3258704a87_3, codeobj_bb5a1e256b8287da49a1cc3258704a87, module_yaml$events, sizeof(void *) );
    frame_bb5a1e256b8287da49a1cc3258704a87_3 = cache_frame_bb5a1e256b8287da49a1cc3258704a87_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bb5a1e256b8287da49a1cc3258704a87_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bb5a1e256b8287da49a1cc3258704a87_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_2 = const_tuple_none_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_dictset_value = MAKE_FUNCTION_yaml$events$$$function_3___init__( tmp_defaults_2 );
    tmp_res = PyObject_SetItem( locals_yaml$events_15, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb5a1e256b8287da49a1cc3258704a87_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb5a1e256b8287da49a1cc3258704a87_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bb5a1e256b8287da49a1cc3258704a87_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bb5a1e256b8287da49a1cc3258704a87_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bb5a1e256b8287da49a1cc3258704a87_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bb5a1e256b8287da49a1cc3258704a87_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_bb5a1e256b8287da49a1cc3258704a87_3 == cache_frame_bb5a1e256b8287da49a1cc3258704a87_3 )
    {
        Py_DECREF( frame_bb5a1e256b8287da49a1cc3258704a87_3 );
    }
    cache_frame_bb5a1e256b8287da49a1cc3258704a87_3 = NULL;

    assertFrameObject( frame_bb5a1e256b8287da49a1cc3258704a87_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_6;
    skip_nested_handling_2:;
    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_tuple_element_4 = const_str_plain_NodeEvent;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_4 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_yaml$events_15;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_4 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 15;
    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_6;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_14;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    Py_DECREF( locals_yaml$events_15 );
    locals_yaml$events_15 = NULL;
    goto try_return_handler_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_yaml$events_15 );
    locals_yaml$events_15 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    goto outline_result_2;
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

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 15;
    goto try_except_handler_4;
    outline_result_2:;
    tmp_assign_source_13 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_NodeEvent, tmp_assign_source_13 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

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
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_NodeEvent );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NodeEvent );
    }

    if ( tmp_tuple_element_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NodeEvent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;

        goto try_except_handler_7;
    }

    tmp_assign_source_15 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_15, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_15;

    tmp_assign_source_16 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_16;

    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_7;
    }
    tmp_cond_value_5 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_7;
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


        exception_lineno = 21;

        goto try_except_handler_7;
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


        exception_lineno = 21;

        goto try_except_handler_7;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_7;
    }
    condexpr_end_5:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_17 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_7;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_17;

    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_7;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_7;
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


        exception_lineno = 21;

        goto try_except_handler_7;
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


        exception_lineno = 21;

        goto try_except_handler_7;
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


        exception_lineno = 21;

        goto try_except_handler_7;
    }
    tmp_tuple_element_6 = const_str_plain_CollectionStartEvent;
    tmp_args_name_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_6 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_6 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 21;
    tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_7;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_18 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_18;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml$events_21 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
    tmp_res = PyObject_SetItem( locals_yaml$events_21, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_9;
    }
    tmp_dictset_value = const_str_plain_CollectionStartEvent;
    tmp_res = PyObject_SetItem( locals_yaml$events_21, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_9;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_b68147bfe93af6c9f6039da300c0b483_4, codeobj_b68147bfe93af6c9f6039da300c0b483, module_yaml$events, sizeof(void *) );
    frame_b68147bfe93af6c9f6039da300c0b483_4 = cache_frame_b68147bfe93af6c9f6039da300c0b483_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b68147bfe93af6c9f6039da300c0b483_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b68147bfe93af6c9f6039da300c0b483_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_3 = const_tuple_none_none_none_tuple;
    Py_INCREF( tmp_defaults_3 );
    tmp_dictset_value = MAKE_FUNCTION_yaml$events$$$function_4___init__( tmp_defaults_3 );
    tmp_res = PyObject_SetItem( locals_yaml$events_21, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b68147bfe93af6c9f6039da300c0b483_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b68147bfe93af6c9f6039da300c0b483_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b68147bfe93af6c9f6039da300c0b483_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b68147bfe93af6c9f6039da300c0b483_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b68147bfe93af6c9f6039da300c0b483_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b68147bfe93af6c9f6039da300c0b483_4,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_b68147bfe93af6c9f6039da300c0b483_4 == cache_frame_b68147bfe93af6c9f6039da300c0b483_4 )
    {
        Py_DECREF( frame_b68147bfe93af6c9f6039da300c0b483_4 );
    }
    cache_frame_b68147bfe93af6c9f6039da300c0b483_4 = NULL;

    assertFrameObject( frame_b68147bfe93af6c9f6039da300c0b483_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_9;
    skip_nested_handling_3:;
    tmp_called_name_6 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_6 );
    tmp_tuple_element_7 = const_str_plain_CollectionStartEvent;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_7 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = locals_yaml$events_21;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_7 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 21;
    tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto try_except_handler_9;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_20;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_9;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    Py_DECREF( locals_yaml$events_21 );
    locals_yaml$events_21 = NULL;
    goto try_return_handler_8;
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

    Py_DECREF( locals_yaml$events_21 );
    locals_yaml$events_21 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_8:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    goto outline_result_3;
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

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 21;
    goto try_except_handler_7;
    outline_result_3:;
    tmp_assign_source_19 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_CollectionStartEvent, tmp_assign_source_19 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
    tmp_tuple_element_8 = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_Event );

    if (unlikely( tmp_tuple_element_8 == NULL ))
    {
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Event );
    }

    if ( tmp_tuple_element_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Event" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 31;

        goto try_except_handler_10;
    }

    tmp_assign_source_21 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_assign_source_21, 0, tmp_tuple_element_8 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_21;

    tmp_assign_source_22 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_22;

    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_10;
    }
    tmp_cond_value_7 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_10;
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


        exception_lineno = 31;

        goto try_except_handler_10;
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


        exception_lineno = 31;

        goto try_except_handler_10;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_10;
    }
    condexpr_end_7:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_bases_name_4 );
    tmp_assign_source_23 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_23;

    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_10;
    }
    tmp_cond_value_8 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_10;
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


        exception_lineno = 31;

        goto try_except_handler_10;
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


        exception_lineno = 31;

        goto try_except_handler_10;
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


        exception_lineno = 31;

        goto try_except_handler_10;
    }
    tmp_tuple_element_9 = const_str_plain_CollectionEndEvent;
    tmp_args_name_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_9 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_9 );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 31;
    tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_10;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_assign_source_24 = PyDict_New();
    condexpr_end_8:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_24;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml$events_31 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
    tmp_res = PyObject_SetItem( locals_yaml$events_31, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_12;
    }
    tmp_dictset_value = const_str_plain_CollectionEndEvent;
    tmp_res = PyObject_SetItem( locals_yaml$events_31, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_12;
    }
    tmp_called_name_8 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_tuple_element_10 = const_str_plain_CollectionEndEvent;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_10 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_10 );
    tmp_tuple_element_10 = locals_yaml$events_31;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_10 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 31;
    tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_12;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_26;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    Py_DECREF( locals_yaml$events_31 );
    locals_yaml$events_31 = NULL;
    goto try_return_handler_11;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_yaml$events_31 );
    locals_yaml$events_31 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    goto outline_result_4;
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

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 31;
    goto try_except_handler_10;
    outline_result_4:;
    tmp_assign_source_25 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_CollectionEndEvent, tmp_assign_source_25 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
    tmp_tuple_element_11 = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_Event );

    if (unlikely( tmp_tuple_element_11 == NULL ))
    {
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Event );
    }

    if ( tmp_tuple_element_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Event" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;

        goto try_except_handler_13;
    }

    tmp_assign_source_27 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_11 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_27;

    tmp_assign_source_28 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_28;

    tmp_key_name_13 = const_str_plain_metaclass;
    tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_13 );
    tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_13;
    }
    tmp_cond_value_9 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_13;
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


        exception_lineno = 36;

        goto try_except_handler_13;
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


        exception_lineno = 36;

        goto try_except_handler_13;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_13;
    }
    condexpr_end_9:;
    tmp_bases_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_bases_name_5 );
    tmp_assign_source_29 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    Py_DECREF( tmp_metaclass_name_5 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_13;
    }
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_29;

    tmp_key_name_15 = const_str_plain_metaclass;
    tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_15 );
    tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_13;
    }
    tmp_cond_value_10 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_13;
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


        exception_lineno = 36;

        goto try_except_handler_13;
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


        exception_lineno = 36;

        goto try_except_handler_13;
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


        exception_lineno = 36;

        goto try_except_handler_13;
    }
    tmp_tuple_element_12 = const_str_plain_StreamStartEvent;
    tmp_args_name_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_12 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_12 );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 36;
    tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_13;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_assign_source_30 = PyDict_New();
    condexpr_end_10:;
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_30;

    tmp_set_locals = tmp_class_creation_5__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml$events_36 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
    tmp_res = PyObject_SetItem( locals_yaml$events_36, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_15;
    }
    tmp_dictset_value = const_str_plain_StreamStartEvent;
    tmp_res = PyObject_SetItem( locals_yaml$events_36, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_15;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_99d477e638440b9e4a5ca797a2bfd52b_5, codeobj_99d477e638440b9e4a5ca797a2bfd52b, module_yaml$events, sizeof(void *) );
    frame_99d477e638440b9e4a5ca797a2bfd52b_5 = cache_frame_99d477e638440b9e4a5ca797a2bfd52b_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_99d477e638440b9e4a5ca797a2bfd52b_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_99d477e638440b9e4a5ca797a2bfd52b_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_4 = const_tuple_none_none_none_tuple;
    Py_INCREF( tmp_defaults_4 );
    tmp_dictset_value = MAKE_FUNCTION_yaml$events$$$function_5___init__( tmp_defaults_4 );
    tmp_res = PyObject_SetItem( locals_yaml$events_36, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99d477e638440b9e4a5ca797a2bfd52b_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99d477e638440b9e4a5ca797a2bfd52b_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_99d477e638440b9e4a5ca797a2bfd52b_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_99d477e638440b9e4a5ca797a2bfd52b_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_99d477e638440b9e4a5ca797a2bfd52b_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_99d477e638440b9e4a5ca797a2bfd52b_5,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_99d477e638440b9e4a5ca797a2bfd52b_5 == cache_frame_99d477e638440b9e4a5ca797a2bfd52b_5 )
    {
        Py_DECREF( frame_99d477e638440b9e4a5ca797a2bfd52b_5 );
    }
    cache_frame_99d477e638440b9e4a5ca797a2bfd52b_5 = NULL;

    assertFrameObject( frame_99d477e638440b9e4a5ca797a2bfd52b_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_15;
    skip_nested_handling_4:;
    tmp_called_name_10 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_tuple_element_13 = const_str_plain_StreamStartEvent;
    tmp_args_name_10 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_13 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_13 );
    tmp_tuple_element_13 = locals_yaml$events_36;
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_13 );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_10 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 36;
    tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_15;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_32;

    tmp_outline_return_value_5 = outline_4_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_5 );
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_15;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    Py_DECREF( locals_yaml$events_36 );
    locals_yaml$events_36 = NULL;
    goto try_return_handler_14;
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

    Py_DECREF( locals_yaml$events_36 );
    locals_yaml$events_36 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_14;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_14:;
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    goto outline_result_5;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 36;
    goto try_except_handler_13;
    outline_result_5:;
    tmp_assign_source_31 = tmp_outline_return_value_5;
    UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_StreamStartEvent, tmp_assign_source_31 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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

    // Tried code:
    tmp_tuple_element_14 = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_Event );

    if (unlikely( tmp_tuple_element_14 == NULL ))
    {
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Event );
    }

    if ( tmp_tuple_element_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Event" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;

        goto try_except_handler_16;
    }

    tmp_assign_source_33 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_assign_source_33, 0, tmp_tuple_element_14 );
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_33;

    tmp_assign_source_34 = PyDict_New();
    assert( tmp_class_creation_6__class_decl_dict == NULL );
    tmp_class_creation_6__class_decl_dict = tmp_assign_source_34;

    tmp_key_name_16 = const_str_plain_metaclass;
    tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_16 );
    tmp_res = PyDict_Contains( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_16;
    }
    tmp_cond_value_11 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_16;
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
    tmp_dict_name_17 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_17 );
    tmp_key_name_17 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_16;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_subscribed_name_5 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_16;
    }
    tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_16;
    }
    condexpr_end_11:;
    tmp_bases_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_bases_name_6 );
    tmp_assign_source_35 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    Py_DECREF( tmp_metaclass_name_6 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_16;
    }
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_35;

    tmp_key_name_18 = const_str_plain_metaclass;
    tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_18 );
    tmp_res = PyDict_Contains( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_16;
    }
    tmp_cond_value_12 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_16;
    }
    if ( tmp_cond_truth_12 == 1 )
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


        exception_lineno = 42;

        goto try_except_handler_16;
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


        exception_lineno = 42;

        goto try_except_handler_16;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_source_name_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_source_name_6 );
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_16;
    }
    tmp_tuple_element_15 = const_str_plain_StreamEndEvent;
    tmp_args_name_11 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_15 );
    tmp_tuple_element_15 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_15 );
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_15 );
    tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_11 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 42;
    tmp_assign_source_36 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_11 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_16;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_36 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_36;

    tmp_set_locals = tmp_class_creation_6__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml$events_42 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
    tmp_res = PyObject_SetItem( locals_yaml$events_42, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_18;
    }
    tmp_dictset_value = const_str_plain_StreamEndEvent;
    tmp_res = PyObject_SetItem( locals_yaml$events_42, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_18;
    }
    tmp_called_name_12 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_12 );
    tmp_tuple_element_16 = const_str_plain_StreamEndEvent;
    tmp_args_name_12 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_16 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_16 );
    tmp_tuple_element_16 = locals_yaml$events_42;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_16 );
    tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_12 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 42;
    tmp_assign_source_38 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_18;
    }
    assert( outline_5_var___class__ == NULL );
    outline_5_var___class__ = tmp_assign_source_38;

    tmp_outline_return_value_6 = outline_5_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_6 );
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    Py_DECREF( locals_yaml$events_42 );
    locals_yaml$events_42 = NULL;
    goto try_return_handler_17;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_yaml$events_42 );
    locals_yaml$events_42 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_17;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_17:;
    CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
    Py_DECREF( outline_5_var___class__ );
    outline_5_var___class__ = NULL;

    goto outline_result_6;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 42;
    goto try_except_handler_16;
    outline_result_6:;
    tmp_assign_source_37 = tmp_outline_return_value_6;
    UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_StreamEndEvent, tmp_assign_source_37 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_decl_dict );
    Py_DECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__prepared );
    Py_DECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Tried code:
    tmp_tuple_element_17 = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_Event );

    if (unlikely( tmp_tuple_element_17 == NULL ))
    {
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Event );
    }

    if ( tmp_tuple_element_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Event" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;

        goto try_except_handler_19;
    }

    tmp_assign_source_39 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_assign_source_39, 0, tmp_tuple_element_17 );
    assert( tmp_class_creation_7__bases == NULL );
    tmp_class_creation_7__bases = tmp_assign_source_39;

    tmp_assign_source_40 = PyDict_New();
    assert( tmp_class_creation_7__class_decl_dict == NULL );
    tmp_class_creation_7__class_decl_dict = tmp_assign_source_40;

    tmp_key_name_19 = const_str_plain_metaclass;
    tmp_dict_name_19 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_19 );
    tmp_res = PyDict_Contains( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_19;
    }
    tmp_cond_value_13 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_19;
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
    tmp_dict_name_20 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_20 );
    tmp_key_name_20 = const_str_plain_metaclass;
    tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_19;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_subscribed_name_6 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_type_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_19;
    }
    tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_6 );
    Py_DECREF( tmp_type_arg_6 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_19;
    }
    condexpr_end_13:;
    tmp_bases_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_bases_name_7 );
    tmp_assign_source_41 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
    Py_DECREF( tmp_metaclass_name_7 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_19;
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


        exception_lineno = 45;

        goto try_except_handler_19;
    }
    tmp_cond_value_14 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_19;
    }
    if ( tmp_cond_truth_14 == 1 )
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


        exception_lineno = 45;

        goto try_except_handler_19;
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


        exception_lineno = 45;

        goto try_except_handler_19;
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
    tmp_source_name_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_19;
    }
    tmp_tuple_element_18 = const_str_plain_DocumentStartEvent;
    tmp_args_name_13 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_tuple_element_18 );
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_18 );
    tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_13 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 45;
    tmp_assign_source_42 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_name_13 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_19;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_assign_source_42 = PyDict_New();
    condexpr_end_14:;
    assert( tmp_class_creation_7__prepared == NULL );
    tmp_class_creation_7__prepared = tmp_assign_source_42;

    tmp_set_locals = tmp_class_creation_7__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml$events_45 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
    tmp_res = PyObject_SetItem( locals_yaml$events_45, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_21;
    }
    tmp_dictset_value = const_str_plain_DocumentStartEvent;
    tmp_res = PyObject_SetItem( locals_yaml$events_45, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_21;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_6b0353651b09f6ca27dac3868089df38_6, codeobj_6b0353651b09f6ca27dac3868089df38, module_yaml$events, sizeof(void *) );
    frame_6b0353651b09f6ca27dac3868089df38_6 = cache_frame_6b0353651b09f6ca27dac3868089df38_6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6b0353651b09f6ca27dac3868089df38_6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6b0353651b09f6ca27dac3868089df38_6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_5 = const_tuple_none_none_none_none_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_dictset_value = MAKE_FUNCTION_yaml$events$$$function_6___init__( tmp_defaults_5 );
    tmp_res = PyObject_SetItem( locals_yaml$events_45, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b0353651b09f6ca27dac3868089df38_6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;

    frame_exception_exit_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6b0353651b09f6ca27dac3868089df38_6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6b0353651b09f6ca27dac3868089df38_6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6b0353651b09f6ca27dac3868089df38_6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6b0353651b09f6ca27dac3868089df38_6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6b0353651b09f6ca27dac3868089df38_6,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_6b0353651b09f6ca27dac3868089df38_6 == cache_frame_6b0353651b09f6ca27dac3868089df38_6 )
    {
        Py_DECREF( frame_6b0353651b09f6ca27dac3868089df38_6 );
    }
    cache_frame_6b0353651b09f6ca27dac3868089df38_6 = NULL;

    assertFrameObject( frame_6b0353651b09f6ca27dac3868089df38_6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;

    frame_no_exception_5:;

    goto skip_nested_handling_5;
    nested_frame_exit_5:;

    goto try_except_handler_21;
    skip_nested_handling_5:;
    tmp_called_name_14 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_14 );
    tmp_tuple_element_19 = const_str_plain_DocumentStartEvent;
    tmp_args_name_14 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_19 );
    tmp_tuple_element_19 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_tuple_element_19 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_19 );
    tmp_tuple_element_19 = locals_yaml$events_45;
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_19 );
    tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_14 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 45;
    tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_args_name_14 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto try_except_handler_21;
    }
    assert( outline_6_var___class__ == NULL );
    outline_6_var___class__ = tmp_assign_source_44;

    tmp_outline_return_value_7 = outline_6_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_7 );
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_21;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_21:;
    Py_DECREF( locals_yaml$events_45 );
    locals_yaml$events_45 = NULL;
    goto try_return_handler_20;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_yaml$events_45 );
    locals_yaml$events_45 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_20;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_20:;
    CHECK_OBJECT( (PyObject *)outline_6_var___class__ );
    Py_DECREF( outline_6_var___class__ );
    outline_6_var___class__ = NULL;

    goto outline_result_7;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto outline_exception_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 45;
    goto try_except_handler_19;
    outline_result_7:;
    tmp_assign_source_43 = tmp_outline_return_value_7;
    UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_DocumentStartEvent, tmp_assign_source_43 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_decl_dict );
    Py_DECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__prepared );
    Py_DECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Tried code:
    tmp_tuple_element_20 = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_Event );

    if (unlikely( tmp_tuple_element_20 == NULL ))
    {
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Event );
    }

    if ( tmp_tuple_element_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Event" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto try_except_handler_22;
    }

    tmp_assign_source_45 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_assign_source_45, 0, tmp_tuple_element_20 );
    assert( tmp_class_creation_8__bases == NULL );
    tmp_class_creation_8__bases = tmp_assign_source_45;

    tmp_assign_source_46 = PyDict_New();
    assert( tmp_class_creation_8__class_decl_dict == NULL );
    tmp_class_creation_8__class_decl_dict = tmp_assign_source_46;

    tmp_key_name_22 = const_str_plain_metaclass;
    tmp_dict_name_22 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_22 );
    tmp_res = PyDict_Contains( tmp_dict_name_22, tmp_key_name_22 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_22;
    }
    tmp_cond_value_15 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_22;
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
    tmp_dict_name_23 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_23 );
    tmp_key_name_23 = const_str_plain_metaclass;
    tmp_metaclass_name_8 = DICT_GET_ITEM( tmp_dict_name_23, tmp_key_name_23 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_22;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_subscribed_name_7 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = const_int_0;
    tmp_type_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_type_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_22;
    }
    tmp_metaclass_name_8 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_22;
    }
    condexpr_end_15:;
    tmp_bases_name_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_bases_name_8 );
    tmp_assign_source_47 = SELECT_METACLASS( tmp_metaclass_name_8, tmp_bases_name_8 );
    Py_DECREF( tmp_metaclass_name_8 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_22;
    }
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_47;

    tmp_key_name_24 = const_str_plain_metaclass;
    tmp_dict_name_24 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_24 );
    tmp_res = PyDict_Contains( tmp_dict_name_24, tmp_key_name_24 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_22;
    }
    tmp_cond_value_16 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_22;
    }
    if ( tmp_cond_truth_16 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_22;
    }
    branch_no_8:;
    tmp_hasattr_source_8 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_8 );
    tmp_hasattr_attr_8 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_8, tmp_hasattr_attr_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_22;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_source_name_8 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_source_name_8 );
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_22;
    }
    tmp_tuple_element_21 = const_str_plain_DocumentEndEvent;
    tmp_args_name_15 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_args_name_15, 0, tmp_tuple_element_21 );
    tmp_tuple_element_21 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_tuple_element_21 );
    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_args_name_15, 1, tmp_tuple_element_21 );
    tmp_kw_name_15 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_15 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 54;
    tmp_assign_source_48 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_15, tmp_kw_name_15 );
    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_name_15 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_22;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_assign_source_48 = PyDict_New();
    condexpr_end_16:;
    assert( tmp_class_creation_8__prepared == NULL );
    tmp_class_creation_8__prepared = tmp_assign_source_48;

    tmp_set_locals = tmp_class_creation_8__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml$events_54 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
    tmp_res = PyObject_SetItem( locals_yaml$events_54, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_24;
    }
    tmp_dictset_value = const_str_plain_DocumentEndEvent;
    tmp_res = PyObject_SetItem( locals_yaml$events_54, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_24;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_52dacda0855d4b0a09545e0d435a4299_7, codeobj_52dacda0855d4b0a09545e0d435a4299, module_yaml$events, sizeof(void *) );
    frame_52dacda0855d4b0a09545e0d435a4299_7 = cache_frame_52dacda0855d4b0a09545e0d435a4299_7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_52dacda0855d4b0a09545e0d435a4299_7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_52dacda0855d4b0a09545e0d435a4299_7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_6 = const_tuple_none_none_none_tuple;
    Py_INCREF( tmp_defaults_6 );
    tmp_dictset_value = MAKE_FUNCTION_yaml$events$$$function_7___init__( tmp_defaults_6 );
    tmp_res = PyObject_SetItem( locals_yaml$events_54, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52dacda0855d4b0a09545e0d435a4299_7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;

    frame_exception_exit_7:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_52dacda0855d4b0a09545e0d435a4299_7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_52dacda0855d4b0a09545e0d435a4299_7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_52dacda0855d4b0a09545e0d435a4299_7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_52dacda0855d4b0a09545e0d435a4299_7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_52dacda0855d4b0a09545e0d435a4299_7,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_52dacda0855d4b0a09545e0d435a4299_7 == cache_frame_52dacda0855d4b0a09545e0d435a4299_7 )
    {
        Py_DECREF( frame_52dacda0855d4b0a09545e0d435a4299_7 );
    }
    cache_frame_52dacda0855d4b0a09545e0d435a4299_7 = NULL;

    assertFrameObject( frame_52dacda0855d4b0a09545e0d435a4299_7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_6;

    frame_no_exception_6:;

    goto skip_nested_handling_6;
    nested_frame_exit_6:;

    goto try_except_handler_24;
    skip_nested_handling_6:;
    tmp_called_name_16 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_16 );
    tmp_tuple_element_22 = const_str_plain_DocumentEndEvent;
    tmp_args_name_16 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_tuple_element_22 );
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_16, 1, tmp_tuple_element_22 );
    tmp_tuple_element_22 = locals_yaml$events_54;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_16, 2, tmp_tuple_element_22 );
    tmp_kw_name_16 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_16 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 54;
    tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_16, tmp_kw_name_16 );
    Py_DECREF( tmp_args_name_16 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto try_except_handler_24;
    }
    assert( outline_7_var___class__ == NULL );
    outline_7_var___class__ = tmp_assign_source_50;

    tmp_outline_return_value_8 = outline_7_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_8 );
    Py_INCREF( tmp_outline_return_value_8 );
    goto try_return_handler_24;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_24:;
    Py_DECREF( locals_yaml$events_54 );
    locals_yaml$events_54 = NULL;
    goto try_return_handler_23;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_yaml$events_54 );
    locals_yaml$events_54 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_23;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_23:;
    CHECK_OBJECT( (PyObject *)outline_7_var___class__ );
    Py_DECREF( outline_7_var___class__ );
    outline_7_var___class__ = NULL;

    goto outline_result_8;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto outline_exception_8;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_8:;
    exception_lineno = 54;
    goto try_except_handler_22;
    outline_result_8:;
    tmp_assign_source_49 = tmp_outline_return_value_8;
    UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_DocumentEndEvent, tmp_assign_source_49 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__bases );
    Py_DECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_decl_dict );
    Py_DECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__prepared );
    Py_DECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Tried code:
    tmp_tuple_element_23 = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_NodeEvent );

    if (unlikely( tmp_tuple_element_23 == NULL ))
    {
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NodeEvent );
    }

    if ( tmp_tuple_element_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NodeEvent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;

        goto try_except_handler_25;
    }

    tmp_assign_source_51 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_assign_source_51, 0, tmp_tuple_element_23 );
    assert( tmp_class_creation_9__bases == NULL );
    tmp_class_creation_9__bases = tmp_assign_source_51;

    tmp_assign_source_52 = PyDict_New();
    assert( tmp_class_creation_9__class_decl_dict == NULL );
    tmp_class_creation_9__class_decl_dict = tmp_assign_source_52;

    tmp_key_name_25 = const_str_plain_metaclass;
    tmp_dict_name_25 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_25 );
    tmp_res = PyDict_Contains( tmp_dict_name_25, tmp_key_name_25 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_25;
    }
    tmp_cond_value_17 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_25;
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
    tmp_dict_name_26 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_26 );
    tmp_key_name_26 = const_str_plain_metaclass;
    tmp_metaclass_name_9 = DICT_GET_ITEM( tmp_dict_name_26, tmp_key_name_26 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_25;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_subscribed_name_8 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_subscribed_name_8 );
    tmp_subscript_name_8 = const_int_0;
    tmp_type_arg_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_type_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_25;
    }
    tmp_metaclass_name_9 = BUILTIN_TYPE1( tmp_type_arg_8 );
    Py_DECREF( tmp_type_arg_8 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_25;
    }
    condexpr_end_17:;
    tmp_bases_name_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_bases_name_9 );
    tmp_assign_source_53 = SELECT_METACLASS( tmp_metaclass_name_9, tmp_bases_name_9 );
    Py_DECREF( tmp_metaclass_name_9 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_25;
    }
    assert( tmp_class_creation_9__metaclass == NULL );
    tmp_class_creation_9__metaclass = tmp_assign_source_53;

    tmp_key_name_27 = const_str_plain_metaclass;
    tmp_dict_name_27 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_27 );
    tmp_res = PyDict_Contains( tmp_dict_name_27, tmp_key_name_27 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_25;
    }
    tmp_cond_value_18 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_25;
    }
    if ( tmp_cond_truth_18 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_25;
    }
    branch_no_9:;
    tmp_hasattr_source_9 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_9 );
    tmp_hasattr_attr_9 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_9, tmp_hasattr_attr_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_25;
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
    tmp_source_name_9 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_source_name_9 );
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___prepare__ );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_25;
    }
    tmp_tuple_element_24 = const_str_plain_AliasEvent;
    tmp_args_name_17 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_17, 0, tmp_tuple_element_24 );
    tmp_tuple_element_24 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_tuple_element_24 );
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_17, 1, tmp_tuple_element_24 );
    tmp_kw_name_17 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_17 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 61;
    tmp_assign_source_54 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_17, tmp_kw_name_17 );
    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_name_17 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_25;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_54 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_class_creation_9__prepared == NULL );
    tmp_class_creation_9__prepared = tmp_assign_source_54;

    tmp_set_locals = tmp_class_creation_9__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml$events_61 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
    tmp_res = PyObject_SetItem( locals_yaml$events_61, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_27;
    }
    tmp_dictset_value = const_str_plain_AliasEvent;
    tmp_res = PyObject_SetItem( locals_yaml$events_61, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_27;
    }
    tmp_called_name_18 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_called_name_18 );
    tmp_tuple_element_25 = const_str_plain_AliasEvent;
    tmp_args_name_18 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_args_name_18, 0, tmp_tuple_element_25 );
    tmp_tuple_element_25 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_tuple_element_25 );
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_args_name_18, 1, tmp_tuple_element_25 );
    tmp_tuple_element_25 = locals_yaml$events_61;
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_args_name_18, 2, tmp_tuple_element_25 );
    tmp_kw_name_18 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_18 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 61;
    tmp_assign_source_56 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_18, tmp_kw_name_18 );
    Py_DECREF( tmp_args_name_18 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_27;
    }
    assert( outline_8_var___class__ == NULL );
    outline_8_var___class__ = tmp_assign_source_56;

    tmp_outline_return_value_9 = outline_8_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_9 );
    Py_INCREF( tmp_outline_return_value_9 );
    goto try_return_handler_27;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_27:;
    Py_DECREF( locals_yaml$events_61 );
    locals_yaml$events_61 = NULL;
    goto try_return_handler_26;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_yaml$events_61 );
    locals_yaml$events_61 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_26;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_26:;
    CHECK_OBJECT( (PyObject *)outline_8_var___class__ );
    Py_DECREF( outline_8_var___class__ );
    outline_8_var___class__ = NULL;

    goto outline_result_9;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto outline_exception_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_9:;
    exception_lineno = 61;
    goto try_except_handler_25;
    outline_result_9:;
    tmp_assign_source_55 = tmp_outline_return_value_9;
    UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_AliasEvent, tmp_assign_source_55 );
    goto try_end_9;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__bases );
    Py_DECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_decl_dict );
    Py_DECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__prepared );
    Py_DECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Tried code:
    tmp_tuple_element_26 = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_NodeEvent );

    if (unlikely( tmp_tuple_element_26 == NULL ))
    {
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NodeEvent );
    }

    if ( tmp_tuple_element_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NodeEvent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;

        goto try_except_handler_28;
    }

    tmp_assign_source_57 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_assign_source_57, 0, tmp_tuple_element_26 );
    assert( tmp_class_creation_10__bases == NULL );
    tmp_class_creation_10__bases = tmp_assign_source_57;

    tmp_assign_source_58 = PyDict_New();
    assert( tmp_class_creation_10__class_decl_dict == NULL );
    tmp_class_creation_10__class_decl_dict = tmp_assign_source_58;

    tmp_key_name_28 = const_str_plain_metaclass;
    tmp_dict_name_28 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_28 );
    tmp_res = PyDict_Contains( tmp_dict_name_28, tmp_key_name_28 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_28;
    }
    tmp_cond_value_19 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_28;
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
    tmp_dict_name_29 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_29 );
    tmp_key_name_29 = const_str_plain_metaclass;
    tmp_metaclass_name_10 = DICT_GET_ITEM( tmp_dict_name_29, tmp_key_name_29 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_28;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_subscribed_name_9 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_subscribed_name_9 );
    tmp_subscript_name_9 = const_int_0;
    tmp_type_arg_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_type_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_28;
    }
    tmp_metaclass_name_10 = BUILTIN_TYPE1( tmp_type_arg_9 );
    Py_DECREF( tmp_type_arg_9 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_28;
    }
    condexpr_end_19:;
    tmp_bases_name_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_bases_name_10 );
    tmp_assign_source_59 = SELECT_METACLASS( tmp_metaclass_name_10, tmp_bases_name_10 );
    Py_DECREF( tmp_metaclass_name_10 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_28;
    }
    assert( tmp_class_creation_10__metaclass == NULL );
    tmp_class_creation_10__metaclass = tmp_assign_source_59;

    tmp_key_name_30 = const_str_plain_metaclass;
    tmp_dict_name_30 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_30 );
    tmp_res = PyDict_Contains( tmp_dict_name_30, tmp_key_name_30 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_28;
    }
    tmp_cond_value_20 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_28;
    }
    if ( tmp_cond_truth_20 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_28;
    }
    branch_no_10:;
    tmp_hasattr_source_10 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_10 );
    tmp_hasattr_attr_10 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_10, tmp_hasattr_attr_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_28;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_20;
    }
    else
    {
        goto condexpr_false_20;
    }
    condexpr_true_20:;
    tmp_source_name_10 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_28;
    }
    tmp_tuple_element_27 = const_str_plain_ScalarEvent;
    tmp_args_name_19 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_args_name_19, 0, tmp_tuple_element_27 );
    tmp_tuple_element_27 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_tuple_element_27 );
    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_args_name_19, 1, tmp_tuple_element_27 );
    tmp_kw_name_19 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_19 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 64;
    tmp_assign_source_60 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_19, tmp_kw_name_19 );
    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_name_19 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_28;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_assign_source_60 = PyDict_New();
    condexpr_end_20:;
    assert( tmp_class_creation_10__prepared == NULL );
    tmp_class_creation_10__prepared = tmp_assign_source_60;

    tmp_set_locals = tmp_class_creation_10__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml$events_64 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
    tmp_res = PyObject_SetItem( locals_yaml$events_64, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_30;
    }
    tmp_dictset_value = const_str_plain_ScalarEvent;
    tmp_res = PyObject_SetItem( locals_yaml$events_64, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_30;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_4f72b75d5987d1398e69ef3bbec90bb9_8, codeobj_4f72b75d5987d1398e69ef3bbec90bb9, module_yaml$events, sizeof(void *) );
    frame_4f72b75d5987d1398e69ef3bbec90bb9_8 = cache_frame_4f72b75d5987d1398e69ef3bbec90bb9_8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4f72b75d5987d1398e69ef3bbec90bb9_8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4f72b75d5987d1398e69ef3bbec90bb9_8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_defaults_7 = const_tuple_none_none_none_tuple;
    Py_INCREF( tmp_defaults_7 );
    tmp_dictset_value = MAKE_FUNCTION_yaml$events$$$function_8___init__( tmp_defaults_7 );
    tmp_res = PyObject_SetItem( locals_yaml$events_64, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f72b75d5987d1398e69ef3bbec90bb9_8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;

    frame_exception_exit_8:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4f72b75d5987d1398e69ef3bbec90bb9_8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4f72b75d5987d1398e69ef3bbec90bb9_8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4f72b75d5987d1398e69ef3bbec90bb9_8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4f72b75d5987d1398e69ef3bbec90bb9_8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4f72b75d5987d1398e69ef3bbec90bb9_8,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_4f72b75d5987d1398e69ef3bbec90bb9_8 == cache_frame_4f72b75d5987d1398e69ef3bbec90bb9_8 )
    {
        Py_DECREF( frame_4f72b75d5987d1398e69ef3bbec90bb9_8 );
    }
    cache_frame_4f72b75d5987d1398e69ef3bbec90bb9_8 = NULL;

    assertFrameObject( frame_4f72b75d5987d1398e69ef3bbec90bb9_8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_7;

    frame_no_exception_7:;

    goto skip_nested_handling_7;
    nested_frame_exit_7:;

    goto try_except_handler_30;
    skip_nested_handling_7:;
    tmp_called_name_20 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_called_name_20 );
    tmp_tuple_element_28 = const_str_plain_ScalarEvent;
    tmp_args_name_20 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_20, 0, tmp_tuple_element_28 );
    tmp_tuple_element_28 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_tuple_element_28 );
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_20, 1, tmp_tuple_element_28 );
    tmp_tuple_element_28 = locals_yaml$events_64;
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_args_name_20, 2, tmp_tuple_element_28 );
    tmp_kw_name_20 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_20 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 64;
    tmp_assign_source_62 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_20, tmp_kw_name_20 );
    Py_DECREF( tmp_args_name_20 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_30;
    }
    assert( outline_9_var___class__ == NULL );
    outline_9_var___class__ = tmp_assign_source_62;

    tmp_outline_return_value_10 = outline_9_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_10 );
    Py_INCREF( tmp_outline_return_value_10 );
    goto try_return_handler_30;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_30:;
    Py_DECREF( locals_yaml$events_64 );
    locals_yaml$events_64 = NULL;
    goto try_return_handler_29;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_yaml$events_64 );
    locals_yaml$events_64 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto try_except_handler_29;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_29:;
    CHECK_OBJECT( (PyObject *)outline_9_var___class__ );
    Py_DECREF( outline_9_var___class__ );
    outline_9_var___class__ = NULL;

    goto outline_result_10;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto outline_exception_10;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_10:;
    exception_lineno = 64;
    goto try_except_handler_28;
    outline_result_10:;
    tmp_assign_source_61 = tmp_outline_return_value_10;
    UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_ScalarEvent, tmp_assign_source_61 );
    goto try_end_10;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__bases );
    Py_DECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class_decl_dict );
    Py_DECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__metaclass );
    Py_DECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__prepared );
    Py_DECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Tried code:
    tmp_tuple_element_29 = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_CollectionStartEvent );

    if (unlikely( tmp_tuple_element_29 == NULL ))
    {
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CollectionStartEvent );
    }

    if ( tmp_tuple_element_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CollectionStartEvent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;

        goto try_except_handler_31;
    }

    tmp_assign_source_63 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_assign_source_63, 0, tmp_tuple_element_29 );
    assert( tmp_class_creation_11__bases == NULL );
    tmp_class_creation_11__bases = tmp_assign_source_63;

    tmp_assign_source_64 = PyDict_New();
    assert( tmp_class_creation_11__class_decl_dict == NULL );
    tmp_class_creation_11__class_decl_dict = tmp_assign_source_64;

    tmp_key_name_31 = const_str_plain_metaclass;
    tmp_dict_name_31 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_31 );
    tmp_res = PyDict_Contains( tmp_dict_name_31, tmp_key_name_31 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_31;
    }
    tmp_cond_value_21 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_21 = CHECK_IF_TRUE( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_31;
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
    tmp_dict_name_32 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_32 );
    tmp_key_name_32 = const_str_plain_metaclass;
    tmp_metaclass_name_11 = DICT_GET_ITEM( tmp_dict_name_32, tmp_key_name_32 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_31;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_subscribed_name_10 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_subscribed_name_10 );
    tmp_subscript_name_10 = const_int_0;
    tmp_type_arg_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_type_arg_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_31;
    }
    tmp_metaclass_name_11 = BUILTIN_TYPE1( tmp_type_arg_10 );
    Py_DECREF( tmp_type_arg_10 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_31;
    }
    condexpr_end_21:;
    tmp_bases_name_11 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_bases_name_11 );
    tmp_assign_source_65 = SELECT_METACLASS( tmp_metaclass_name_11, tmp_bases_name_11 );
    Py_DECREF( tmp_metaclass_name_11 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_31;
    }
    assert( tmp_class_creation_11__metaclass == NULL );
    tmp_class_creation_11__metaclass = tmp_assign_source_65;

    tmp_key_name_33 = const_str_plain_metaclass;
    tmp_dict_name_33 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_33 );
    tmp_res = PyDict_Contains( tmp_dict_name_33, tmp_key_name_33 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_31;
    }
    tmp_cond_value_22 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_22 = CHECK_IF_TRUE( tmp_cond_value_22 );
    if ( tmp_cond_truth_22 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_31;
    }
    if ( tmp_cond_truth_22 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_31;
    }
    branch_no_11:;
    tmp_hasattr_source_11 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_11 );
    tmp_hasattr_attr_11 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_11, tmp_hasattr_attr_11 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_31;
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
    tmp_source_name_11 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_source_name_11 );
    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___prepare__ );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_31;
    }
    tmp_tuple_element_30 = const_str_plain_SequenceStartEvent;
    tmp_args_name_21 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_args_name_21, 0, tmp_tuple_element_30 );
    tmp_tuple_element_30 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_tuple_element_30 );
    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_args_name_21, 1, tmp_tuple_element_30 );
    tmp_kw_name_21 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_21 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 75;
    tmp_assign_source_66 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_21, tmp_kw_name_21 );
    Py_DECREF( tmp_called_name_21 );
    Py_DECREF( tmp_args_name_21 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_31;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_assign_source_66 = PyDict_New();
    condexpr_end_22:;
    assert( tmp_class_creation_11__prepared == NULL );
    tmp_class_creation_11__prepared = tmp_assign_source_66;

    tmp_set_locals = tmp_class_creation_11__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml$events_75 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
    tmp_res = PyObject_SetItem( locals_yaml$events_75, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_33;
    }
    tmp_dictset_value = const_str_plain_SequenceStartEvent;
    tmp_res = PyObject_SetItem( locals_yaml$events_75, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_33;
    }
    tmp_called_name_22 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_called_name_22 );
    tmp_tuple_element_31 = const_str_plain_SequenceStartEvent;
    tmp_args_name_22 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_args_name_22, 0, tmp_tuple_element_31 );
    tmp_tuple_element_31 = tmp_class_creation_11__bases;

    CHECK_OBJECT( tmp_tuple_element_31 );
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_args_name_22, 1, tmp_tuple_element_31 );
    tmp_tuple_element_31 = locals_yaml$events_75;
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_args_name_22, 2, tmp_tuple_element_31 );
    tmp_kw_name_22 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_22 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 75;
    tmp_assign_source_68 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_22, tmp_kw_name_22 );
    Py_DECREF( tmp_args_name_22 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;

        goto try_except_handler_33;
    }
    assert( outline_10_var___class__ == NULL );
    outline_10_var___class__ = tmp_assign_source_68;

    tmp_outline_return_value_11 = outline_10_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_11 );
    Py_INCREF( tmp_outline_return_value_11 );
    goto try_return_handler_33;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_33:;
    Py_DECREF( locals_yaml$events_75 );
    locals_yaml$events_75 = NULL;
    goto try_return_handler_32;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_yaml$events_75 );
    locals_yaml$events_75 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto try_except_handler_32;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_32:;
    CHECK_OBJECT( (PyObject *)outline_10_var___class__ );
    Py_DECREF( outline_10_var___class__ );
    outline_10_var___class__ = NULL;

    goto outline_result_11;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto outline_exception_11;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_11:;
    exception_lineno = 75;
    goto try_except_handler_31;
    outline_result_11:;
    tmp_assign_source_67 = tmp_outline_return_value_11;
    UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_SequenceStartEvent, tmp_assign_source_67 );
    goto try_end_11;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    Py_XDECREF( tmp_class_creation_11__class_decl_dict );
    tmp_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_11__prepared );
    tmp_class_creation_11__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__bases );
    Py_DECREF( tmp_class_creation_11__bases );
    tmp_class_creation_11__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class_decl_dict );
    Py_DECREF( tmp_class_creation_11__class_decl_dict );
    tmp_class_creation_11__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__metaclass );
    Py_DECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__prepared );
    Py_DECREF( tmp_class_creation_11__prepared );
    tmp_class_creation_11__prepared = NULL;

    // Tried code:
    tmp_tuple_element_32 = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_CollectionEndEvent );

    if (unlikely( tmp_tuple_element_32 == NULL ))
    {
        tmp_tuple_element_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CollectionEndEvent );
    }

    if ( tmp_tuple_element_32 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CollectionEndEvent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;

        goto try_except_handler_34;
    }

    tmp_assign_source_69 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_assign_source_69, 0, tmp_tuple_element_32 );
    assert( tmp_class_creation_12__bases == NULL );
    tmp_class_creation_12__bases = tmp_assign_source_69;

    tmp_assign_source_70 = PyDict_New();
    assert( tmp_class_creation_12__class_decl_dict == NULL );
    tmp_class_creation_12__class_decl_dict = tmp_assign_source_70;

    tmp_key_name_34 = const_str_plain_metaclass;
    tmp_dict_name_34 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_34 );
    tmp_res = PyDict_Contains( tmp_dict_name_34, tmp_key_name_34 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_34;
    }
    tmp_cond_value_23 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_23 = CHECK_IF_TRUE( tmp_cond_value_23 );
    if ( tmp_cond_truth_23 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_34;
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
    tmp_dict_name_35 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_35 );
    tmp_key_name_35 = const_str_plain_metaclass;
    tmp_metaclass_name_12 = DICT_GET_ITEM( tmp_dict_name_35, tmp_key_name_35 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_34;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_subscribed_name_11 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_subscribed_name_11 );
    tmp_subscript_name_11 = const_int_0;
    tmp_type_arg_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_type_arg_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_34;
    }
    tmp_metaclass_name_12 = BUILTIN_TYPE1( tmp_type_arg_11 );
    Py_DECREF( tmp_type_arg_11 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_34;
    }
    condexpr_end_23:;
    tmp_bases_name_12 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_bases_name_12 );
    tmp_assign_source_71 = SELECT_METACLASS( tmp_metaclass_name_12, tmp_bases_name_12 );
    Py_DECREF( tmp_metaclass_name_12 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_34;
    }
    assert( tmp_class_creation_12__metaclass == NULL );
    tmp_class_creation_12__metaclass = tmp_assign_source_71;

    tmp_key_name_36 = const_str_plain_metaclass;
    tmp_dict_name_36 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_36 );
    tmp_res = PyDict_Contains( tmp_dict_name_36, tmp_key_name_36 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_34;
    }
    tmp_cond_value_24 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_24 = CHECK_IF_TRUE( tmp_cond_value_24 );
    if ( tmp_cond_truth_24 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_34;
    }
    if ( tmp_cond_truth_24 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_34;
    }
    branch_no_12:;
    tmp_hasattr_source_12 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_12 );
    tmp_hasattr_attr_12 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_12, tmp_hasattr_attr_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_34;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_24;
    }
    else
    {
        goto condexpr_false_24;
    }
    condexpr_true_24:;
    tmp_source_name_12 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___prepare__ );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_34;
    }
    tmp_tuple_element_33 = const_str_plain_SequenceEndEvent;
    tmp_args_name_23 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_args_name_23, 0, tmp_tuple_element_33 );
    tmp_tuple_element_33 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_tuple_element_33 );
    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_args_name_23, 1, tmp_tuple_element_33 );
    tmp_kw_name_23 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_23 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 78;
    tmp_assign_source_72 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_23, tmp_kw_name_23 );
    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_args_name_23 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_34;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_assign_source_72 = PyDict_New();
    condexpr_end_24:;
    assert( tmp_class_creation_12__prepared == NULL );
    tmp_class_creation_12__prepared = tmp_assign_source_72;

    tmp_set_locals = tmp_class_creation_12__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml$events_78 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
    tmp_res = PyObject_SetItem( locals_yaml$events_78, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_36;
    }
    tmp_dictset_value = const_str_plain_SequenceEndEvent;
    tmp_res = PyObject_SetItem( locals_yaml$events_78, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_36;
    }
    tmp_called_name_24 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_called_name_24 );
    tmp_tuple_element_34 = const_str_plain_SequenceEndEvent;
    tmp_args_name_24 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_24, 0, tmp_tuple_element_34 );
    tmp_tuple_element_34 = tmp_class_creation_12__bases;

    CHECK_OBJECT( tmp_tuple_element_34 );
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_24, 1, tmp_tuple_element_34 );
    tmp_tuple_element_34 = locals_yaml$events_78;
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_24, 2, tmp_tuple_element_34 );
    tmp_kw_name_24 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_24 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 78;
    tmp_assign_source_74 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_24, tmp_kw_name_24 );
    Py_DECREF( tmp_args_name_24 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;

        goto try_except_handler_36;
    }
    assert( outline_11_var___class__ == NULL );
    outline_11_var___class__ = tmp_assign_source_74;

    tmp_outline_return_value_12 = outline_11_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_12 );
    Py_INCREF( tmp_outline_return_value_12 );
    goto try_return_handler_36;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_36:;
    Py_DECREF( locals_yaml$events_78 );
    locals_yaml$events_78 = NULL;
    goto try_return_handler_35;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_yaml$events_78 );
    locals_yaml$events_78 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto try_except_handler_35;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_35:;
    CHECK_OBJECT( (PyObject *)outline_11_var___class__ );
    Py_DECREF( outline_11_var___class__ );
    outline_11_var___class__ = NULL;

    goto outline_result_12;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto outline_exception_12;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_12:;
    exception_lineno = 78;
    goto try_except_handler_34;
    outline_result_12:;
    tmp_assign_source_73 = tmp_outline_return_value_12;
    UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_SequenceEndEvent, tmp_assign_source_73 );
    goto try_end_12;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    Py_XDECREF( tmp_class_creation_12__class_decl_dict );
    tmp_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_12__prepared );
    tmp_class_creation_12__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__bases );
    Py_DECREF( tmp_class_creation_12__bases );
    tmp_class_creation_12__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class_decl_dict );
    Py_DECREF( tmp_class_creation_12__class_decl_dict );
    tmp_class_creation_12__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__metaclass );
    Py_DECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__prepared );
    Py_DECREF( tmp_class_creation_12__prepared );
    tmp_class_creation_12__prepared = NULL;

    // Tried code:
    tmp_tuple_element_35 = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_CollectionStartEvent );

    if (unlikely( tmp_tuple_element_35 == NULL ))
    {
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CollectionStartEvent );
    }

    if ( tmp_tuple_element_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CollectionStartEvent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;

        goto try_except_handler_37;
    }

    tmp_assign_source_75 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_assign_source_75, 0, tmp_tuple_element_35 );
    assert( tmp_class_creation_13__bases == NULL );
    tmp_class_creation_13__bases = tmp_assign_source_75;

    tmp_assign_source_76 = PyDict_New();
    assert( tmp_class_creation_13__class_decl_dict == NULL );
    tmp_class_creation_13__class_decl_dict = tmp_assign_source_76;

    tmp_key_name_37 = const_str_plain_metaclass;
    tmp_dict_name_37 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_37 );
    tmp_res = PyDict_Contains( tmp_dict_name_37, tmp_key_name_37 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_37;
    }
    tmp_cond_value_25 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_25 = CHECK_IF_TRUE( tmp_cond_value_25 );
    if ( tmp_cond_truth_25 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_37;
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
    tmp_dict_name_38 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_38 );
    tmp_key_name_38 = const_str_plain_metaclass;
    tmp_metaclass_name_13 = DICT_GET_ITEM( tmp_dict_name_38, tmp_key_name_38 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_37;
    }
    goto condexpr_end_25;
    condexpr_false_25:;
    tmp_subscribed_name_12 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_subscribed_name_12 );
    tmp_subscript_name_12 = const_int_0;
    tmp_type_arg_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_type_arg_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_37;
    }
    tmp_metaclass_name_13 = BUILTIN_TYPE1( tmp_type_arg_12 );
    Py_DECREF( tmp_type_arg_12 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_37;
    }
    condexpr_end_25:;
    tmp_bases_name_13 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_bases_name_13 );
    tmp_assign_source_77 = SELECT_METACLASS( tmp_metaclass_name_13, tmp_bases_name_13 );
    Py_DECREF( tmp_metaclass_name_13 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_37;
    }
    assert( tmp_class_creation_13__metaclass == NULL );
    tmp_class_creation_13__metaclass = tmp_assign_source_77;

    tmp_key_name_39 = const_str_plain_metaclass;
    tmp_dict_name_39 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_39 );
    tmp_res = PyDict_Contains( tmp_dict_name_39, tmp_key_name_39 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_37;
    }
    tmp_cond_value_26 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_26 = CHECK_IF_TRUE( tmp_cond_value_26 );
    if ( tmp_cond_truth_26 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_37;
    }
    if ( tmp_cond_truth_26 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_dictdel_dict = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_37;
    }
    branch_no_13:;
    tmp_hasattr_source_13 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_13 );
    tmp_hasattr_attr_13 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_13, tmp_hasattr_attr_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_37;
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
    tmp_source_name_13 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___prepare__ );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_37;
    }
    tmp_tuple_element_36 = const_str_plain_MappingStartEvent;
    tmp_args_name_25 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_args_name_25, 0, tmp_tuple_element_36 );
    tmp_tuple_element_36 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_tuple_element_36 );
    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_args_name_25, 1, tmp_tuple_element_36 );
    tmp_kw_name_25 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_25 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 81;
    tmp_assign_source_78 = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_25, tmp_kw_name_25 );
    Py_DECREF( tmp_called_name_25 );
    Py_DECREF( tmp_args_name_25 );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_37;
    }
    goto condexpr_end_26;
    condexpr_false_26:;
    tmp_assign_source_78 = PyDict_New();
    condexpr_end_26:;
    assert( tmp_class_creation_13__prepared == NULL );
    tmp_class_creation_13__prepared = tmp_assign_source_78;

    tmp_set_locals = tmp_class_creation_13__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml$events_81 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
    tmp_res = PyObject_SetItem( locals_yaml$events_81, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_39;
    }
    tmp_dictset_value = const_str_plain_MappingStartEvent;
    tmp_res = PyObject_SetItem( locals_yaml$events_81, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_39;
    }
    tmp_called_name_26 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_called_name_26 );
    tmp_tuple_element_37 = const_str_plain_MappingStartEvent;
    tmp_args_name_26 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_args_name_26, 0, tmp_tuple_element_37 );
    tmp_tuple_element_37 = tmp_class_creation_13__bases;

    CHECK_OBJECT( tmp_tuple_element_37 );
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_args_name_26, 1, tmp_tuple_element_37 );
    tmp_tuple_element_37 = locals_yaml$events_81;
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_args_name_26, 2, tmp_tuple_element_37 );
    tmp_kw_name_26 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_26 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 81;
    tmp_assign_source_80 = CALL_FUNCTION( tmp_called_name_26, tmp_args_name_26, tmp_kw_name_26 );
    Py_DECREF( tmp_args_name_26 );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;

        goto try_except_handler_39;
    }
    assert( outline_12_var___class__ == NULL );
    outline_12_var___class__ = tmp_assign_source_80;

    tmp_outline_return_value_13 = outline_12_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_13 );
    Py_INCREF( tmp_outline_return_value_13 );
    goto try_return_handler_39;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_39:;
    Py_DECREF( locals_yaml$events_81 );
    locals_yaml$events_81 = NULL;
    goto try_return_handler_38;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_yaml$events_81 );
    locals_yaml$events_81 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto try_except_handler_38;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_38:;
    CHECK_OBJECT( (PyObject *)outline_12_var___class__ );
    Py_DECREF( outline_12_var___class__ );
    outline_12_var___class__ = NULL;

    goto outline_result_13;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto outline_exception_13;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_13:;
    exception_lineno = 81;
    goto try_except_handler_37;
    outline_result_13:;
    tmp_assign_source_79 = tmp_outline_return_value_13;
    UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_MappingStartEvent, tmp_assign_source_79 );
    goto try_end_13;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    Py_XDECREF( tmp_class_creation_13__class_decl_dict );
    tmp_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_13__prepared );
    tmp_class_creation_13__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__bases );
    Py_DECREF( tmp_class_creation_13__bases );
    tmp_class_creation_13__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class_decl_dict );
    Py_DECREF( tmp_class_creation_13__class_decl_dict );
    tmp_class_creation_13__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__metaclass );
    Py_DECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__prepared );
    Py_DECREF( tmp_class_creation_13__prepared );
    tmp_class_creation_13__prepared = NULL;

    // Tried code:
    tmp_tuple_element_38 = GET_STRING_DICT_VALUE( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_CollectionEndEvent );

    if (unlikely( tmp_tuple_element_38 == NULL ))
    {
        tmp_tuple_element_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CollectionEndEvent );
    }

    if ( tmp_tuple_element_38 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CollectionEndEvent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;

        goto try_except_handler_40;
    }

    tmp_assign_source_81 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_assign_source_81, 0, tmp_tuple_element_38 );
    assert( tmp_class_creation_14__bases == NULL );
    tmp_class_creation_14__bases = tmp_assign_source_81;

    tmp_assign_source_82 = PyDict_New();
    assert( tmp_class_creation_14__class_decl_dict == NULL );
    tmp_class_creation_14__class_decl_dict = tmp_assign_source_82;

    tmp_key_name_40 = const_str_plain_metaclass;
    tmp_dict_name_40 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_40 );
    tmp_res = PyDict_Contains( tmp_dict_name_40, tmp_key_name_40 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    tmp_cond_value_27 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_27 = CHECK_IF_TRUE( tmp_cond_value_27 );
    if ( tmp_cond_truth_27 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    if ( tmp_cond_truth_27 == 1 )
    {
        goto condexpr_true_27;
    }
    else
    {
        goto condexpr_false_27;
    }
    condexpr_true_27:;
    tmp_dict_name_41 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_41 );
    tmp_key_name_41 = const_str_plain_metaclass;
    tmp_metaclass_name_14 = DICT_GET_ITEM( tmp_dict_name_41, tmp_key_name_41 );
    if ( tmp_metaclass_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    goto condexpr_end_27;
    condexpr_false_27:;
    tmp_subscribed_name_13 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_subscribed_name_13 );
    tmp_subscript_name_13 = const_int_0;
    tmp_type_arg_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
    if ( tmp_type_arg_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    tmp_metaclass_name_14 = BUILTIN_TYPE1( tmp_type_arg_13 );
    Py_DECREF( tmp_type_arg_13 );
    if ( tmp_metaclass_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    condexpr_end_27:;
    tmp_bases_name_14 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_bases_name_14 );
    tmp_assign_source_83 = SELECT_METACLASS( tmp_metaclass_name_14, tmp_bases_name_14 );
    Py_DECREF( tmp_metaclass_name_14 );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    assert( tmp_class_creation_14__metaclass == NULL );
    tmp_class_creation_14__metaclass = tmp_assign_source_83;

    tmp_key_name_42 = const_str_plain_metaclass;
    tmp_dict_name_42 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_42 );
    tmp_res = PyDict_Contains( tmp_dict_name_42, tmp_key_name_42 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    tmp_cond_value_28 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_28 = CHECK_IF_TRUE( tmp_cond_value_28 );
    if ( tmp_cond_truth_28 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    if ( tmp_cond_truth_28 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_dictdel_dict = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    branch_no_14:;
    tmp_hasattr_source_14 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_14 );
    tmp_hasattr_attr_14 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_14, tmp_hasattr_attr_14 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_28;
    }
    else
    {
        goto condexpr_false_28;
    }
    condexpr_true_28:;
    tmp_source_name_14 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_source_name_14 );
    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___prepare__ );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    tmp_tuple_element_39 = const_str_plain_MappingEndEvent;
    tmp_args_name_27 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_args_name_27, 0, tmp_tuple_element_39 );
    tmp_tuple_element_39 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_tuple_element_39 );
    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_args_name_27, 1, tmp_tuple_element_39 );
    tmp_kw_name_27 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_27 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 84;
    tmp_assign_source_84 = CALL_FUNCTION( tmp_called_name_27, tmp_args_name_27, tmp_kw_name_27 );
    Py_DECREF( tmp_called_name_27 );
    Py_DECREF( tmp_args_name_27 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_40;
    }
    goto condexpr_end_28;
    condexpr_false_28:;
    tmp_assign_source_84 = PyDict_New();
    condexpr_end_28:;
    assert( tmp_class_creation_14__prepared == NULL );
    tmp_class_creation_14__prepared = tmp_assign_source_84;

    tmp_set_locals = tmp_class_creation_14__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_yaml$events_84 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_d71a9d53c2d733a5ca4d5ea60240c95e;
    tmp_res = PyObject_SetItem( locals_yaml$events_84, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_42;
    }
    tmp_dictset_value = const_str_plain_MappingEndEvent;
    tmp_res = PyObject_SetItem( locals_yaml$events_84, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_42;
    }
    tmp_called_name_28 = tmp_class_creation_14__metaclass;

    CHECK_OBJECT( tmp_called_name_28 );
    tmp_tuple_element_40 = const_str_plain_MappingEndEvent;
    tmp_args_name_28 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_args_name_28, 0, tmp_tuple_element_40 );
    tmp_tuple_element_40 = tmp_class_creation_14__bases;

    CHECK_OBJECT( tmp_tuple_element_40 );
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_args_name_28, 1, tmp_tuple_element_40 );
    tmp_tuple_element_40 = locals_yaml$events_84;
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_args_name_28, 2, tmp_tuple_element_40 );
    tmp_kw_name_28 = tmp_class_creation_14__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_28 );
    frame_a912e102c8938c4e309085b977a7ffb7->m_frame.f_lineno = 84;
    tmp_assign_source_86 = CALL_FUNCTION( tmp_called_name_28, tmp_args_name_28, tmp_kw_name_28 );
    Py_DECREF( tmp_args_name_28 );
    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_42;
    }
    assert( outline_13_var___class__ == NULL );
    outline_13_var___class__ = tmp_assign_source_86;

    tmp_outline_return_value_14 = outline_13_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_14 );
    Py_INCREF( tmp_outline_return_value_14 );
    goto try_return_handler_42;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_42:;
    Py_DECREF( locals_yaml$events_84 );
    locals_yaml$events_84 = NULL;
    goto try_return_handler_41;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_yaml$events_84 );
    locals_yaml$events_84 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto try_except_handler_41;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_41:;
    CHECK_OBJECT( (PyObject *)outline_13_var___class__ );
    Py_DECREF( outline_13_var___class__ );
    outline_13_var___class__ = NULL;

    goto outline_result_14;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto outline_exception_14;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( yaml$events );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_14:;
    exception_lineno = 84;
    goto try_except_handler_40;
    outline_result_14:;
    tmp_assign_source_85 = tmp_outline_return_value_14;
    UPDATE_STRING_DICT1( moduledict_yaml$events, (Nuitka_StringObject *)const_str_plain_MappingEndEvent, tmp_assign_source_85 );
    goto try_end_14;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    Py_XDECREF( tmp_class_creation_14__class_decl_dict );
    tmp_class_creation_14__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_14__prepared );
    tmp_class_creation_14__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a912e102c8938c4e309085b977a7ffb7 );
#endif
    popFrameStack();

    assertFrameObject( frame_a912e102c8938c4e309085b977a7ffb7 );

    goto frame_no_exception_8;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a912e102c8938c4e309085b977a7ffb7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a912e102c8938c4e309085b977a7ffb7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a912e102c8938c4e309085b977a7ffb7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a912e102c8938c4e309085b977a7ffb7, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_8:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__bases );
    Py_DECREF( tmp_class_creation_14__bases );
    tmp_class_creation_14__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__class_decl_dict );
    Py_DECREF( tmp_class_creation_14__class_decl_dict );
    tmp_class_creation_14__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__metaclass );
    Py_DECREF( tmp_class_creation_14__metaclass );
    tmp_class_creation_14__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_14__prepared );
    Py_DECREF( tmp_class_creation_14__prepared );
    tmp_class_creation_14__prepared = NULL;


    return MOD_RETURN_VALUE( module_yaml$events );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

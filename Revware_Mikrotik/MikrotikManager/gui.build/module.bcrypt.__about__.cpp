/* Generated code for Python source for module 'bcrypt.__about__'
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

/* The _module_bcrypt$__about__ is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_bcrypt$__about__;
PyDictObject *moduledict_bcrypt$__about__;

/* The module constants used, if any. */
extern PyObject *const_str_plain___copyright__;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain___summary__;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_acbdf5b55efa6df934bd1c77bb0f2c10;
static PyObject *const_str_digest_e2afbe8a1efde1d18da3f3304dcd043d;
static PyObject *const_str_digest_ba00fc8fac63adc6a0106fe16f916429;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_e1150b3d58e5512b1b936654722327b2;
static PyObject *const_str_digest_dc103a713eda539420ba42a3a4966787;
extern PyObject *const_str_plain_bcrypt;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_list_b5215a344cdfe40170e16c947ed7b43b_list;
static PyObject *const_str_digest_68018ff76519212609a7968014aa79ba;
extern PyObject *const_str_plain___email__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_e14a9bfbd4e794b49f189a1a46d45753;
extern PyObject *const_str_plain___uri__;
extern PyObject *const_str_plain___author__;
extern PyObject *const_str_plain___license__;
extern PyObject *const_str_digest_1f67343b5259d1f6dbf7947bec2fa63d;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___title__;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_a1cb526010eb7ddf660b434a62933209;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_d535aff386dde91d182cbd09cb66f7c1;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_acbdf5b55efa6df934bd1c77bb0f2c10 = UNSTREAM_STRING( &constant_bin[ 100573 ], 23, 0 );
    const_str_digest_e2afbe8a1efde1d18da3f3304dcd043d = UNSTREAM_STRING( &constant_bin[ 100596 ], 31, 0 );
    const_str_digest_ba00fc8fac63adc6a0106fe16f916429 = UNSTREAM_STRING( &constant_bin[ 100627 ], 16, 0 );
    const_str_digest_e1150b3d58e5512b1b936654722327b2 = UNSTREAM_STRING( &constant_bin[ 100643 ], 58, 0 );
    const_str_digest_dc103a713eda539420ba42a3a4966787 = UNSTREAM_STRING( &constant_bin[ 100701 ], 19, 0 );
    const_str_digest_68018ff76519212609a7968014aa79ba = UNSTREAM_STRING( &constant_bin[ 100720 ], 27, 0 );
    const_str_digest_e14a9bfbd4e794b49f189a1a46d45753 = UNSTREAM_STRING( &constant_bin[ 100747 ], 25, 0 );
    const_str_digest_a1cb526010eb7ddf660b434a62933209 = UNSTREAM_STRING( &constant_bin[ 82873 ], 5, 0 );
    const_str_digest_d535aff386dde91d182cbd09cb66f7c1 = UNSTREAM_STRING( &constant_bin[ 100772 ], 45, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_bcrypt$__about__( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e2e0a7f3544664a1b671c87bde30aaa0;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_dc103a713eda539420ba42a3a4966787 );
    codeobj_e2e0a7f3544664a1b671c87bde30aaa0 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e14a9bfbd4e794b49f189a1a46d45753, 1, const_tuple_empty, 0, 0, CO_NOFREE | CO_FUTURE_UNICODE_LITERALS );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_bcrypt$__about__ =
{
    PyModuleDef_HEAD_INIT,
    "bcrypt.__about__",   /* m_name */
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

MOD_INIT_DECL( bcrypt$__about__ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_bcrypt$__about__ );
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
    puts("bcrypt.__about__: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("bcrypt.__about__: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("bcrypt.__about__: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initbcrypt$__about__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_bcrypt$__about__ = Py_InitModule4(
        "bcrypt.__about__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_bcrypt$__about__ = PyModule_Create( &mdef_bcrypt$__about__ );
#endif

    moduledict_bcrypt$__about__ = MODULE_DICT( module_bcrypt$__about__ );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_bcrypt$__about__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_bcrypt$__about__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_bcrypt$__about__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_bcrypt$__about__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_ba00fc8fac63adc6a0106fe16f916429, module_bcrypt$__about__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    struct Nuitka_FrameObject *frame_e2e0a7f3544664a1b671c87bde30aaa0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_e2e0a7f3544664a1b671c87bde30aaa0 = MAKE_MODULE_FRAME( codeobj_e2e0a7f3544664a1b671c87bde30aaa0, module_bcrypt$__about__ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e2e0a7f3544664a1b671c87bde30aaa0 );
    assert( Py_REFCNT( frame_e2e0a7f3544664a1b671c87bde30aaa0 ) == 2 );

    // Framed code:
    frame_e2e0a7f3544664a1b671c87bde30aaa0->m_frame.f_lineno = 16;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( !(tmp_import_name_from_1 == NULL) );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    frame_e2e0a7f3544664a1b671c87bde30aaa0->m_frame.f_lineno = 17;
    tmp_import_name_from_2 = PyImport_ImportModule("__future__");
    assert( !(tmp_import_name_from_2 == NULL) );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    frame_e2e0a7f3544664a1b671c87bde30aaa0->m_frame.f_lineno = 18;
    tmp_import_name_from_3 = PyImport_ImportModule("__future__");
    assert( !(tmp_import_name_from_3 == NULL) );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_unicode_literals );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_6 );
    tmp_assign_source_7 = LIST_COPY( const_list_b5215a344cdfe40170e16c947ed7b43b_list );
    UPDATE_STRING_DICT1( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_plain_bcrypt;
    UPDATE_STRING_DICT0( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_e1150b3d58e5512b1b936654722327b2;
    UPDATE_STRING_DICT0( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___summary__, tmp_assign_source_9 );
    tmp_assign_source_10 = const_str_digest_e2afbe8a1efde1d18da3f3304dcd043d;
    UPDATE_STRING_DICT0( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___uri__, tmp_assign_source_10 );
    tmp_assign_source_11 = const_str_digest_a1cb526010eb7ddf660b434a62933209;
    UPDATE_STRING_DICT0( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_11 );
    tmp_assign_source_12 = const_str_digest_d535aff386dde91d182cbd09cb66f7c1;
    UPDATE_STRING_DICT0( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_12 );
    tmp_assign_source_13 = const_str_digest_1f67343b5259d1f6dbf7947bec2fa63d;
    UPDATE_STRING_DICT0( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___email__, tmp_assign_source_13 );
    tmp_assign_source_14 = const_str_digest_68018ff76519212609a7968014aa79ba;
    UPDATE_STRING_DICT0( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_14 );
    tmp_called_instance_1 = const_str_digest_acbdf5b55efa6df934bd1c77bb0f2c10;
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___author__ );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___author__ );
    }

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_e2e0a7f3544664a1b671c87bde30aaa0->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_bcrypt$__about__, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_15 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2e0a7f3544664a1b671c87bde30aaa0 );
#endif
    popFrameStack();

    assertFrameObject( frame_e2e0a7f3544664a1b671c87bde30aaa0 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e2e0a7f3544664a1b671c87bde30aaa0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e2e0a7f3544664a1b671c87bde30aaa0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e2e0a7f3544664a1b671c87bde30aaa0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e2e0a7f3544664a1b671c87bde30aaa0, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_bcrypt$__about__ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

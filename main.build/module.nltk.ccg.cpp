/* Generated code for Python source for module 'nltk.ccg'
 * created by Nuitka version 0.5.25
 *
 * This code is in part copyright 2017 Kay Hayen.
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

/* The _module_nltk$ccg is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_nltk$ccg;
PyDictObject *moduledict_nltk$ccg;

/* The module constants used, if any. */
static PyObject *const_str_digest_8c88038224705f19ab4741619e876f5d;
static PyObject *const_str_digest_85f710cce9c4eb811fb1836d29194867;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_f1b65197d4e9ee1712d0f9d3334db36b;
extern PyObject *const_str_plain___file__;
static PyObject *const_list_str_digest_85f710cce9c4eb811fb1836d29194867_list;
extern PyObject *const_str_chr_42;
extern PyObject *const_tuple_empty;
static PyObject *const_list_374c4b1ec8144681394d00d16d7295b8_list;
extern PyObject *const_str_plain_combinator;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_lexicon;
static PyObject *const_str_digest_6617a2890a11256ad423ccc35a3c6b76;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_chart;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_ccg;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_8c88038224705f19ab4741619e876f5d = UNSTREAM_STRING( &constant_bin[ 5116 ], 8, 0 );
    const_str_digest_85f710cce9c4eb811fb1836d29194867 = UNSTREAM_STRING( &constant_bin[ 5124 ], 41, 0 );
    const_str_digest_f1b65197d4e9ee1712d0f9d3334db36b = UNSTREAM_STRING( &constant_bin[ 5165 ], 88, 0 );
    const_list_str_digest_85f710cce9c4eb811fb1836d29194867_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_85f710cce9c4eb811fb1836d29194867_list, 0, const_str_digest_85f710cce9c4eb811fb1836d29194867 ); Py_INCREF( const_str_digest_85f710cce9c4eb811fb1836d29194867 );
    const_list_374c4b1ec8144681394d00d16d7295b8_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 5253 ], 471 );
    const_str_digest_6617a2890a11256ad423ccc35a3c6b76 = UNSTREAM_STRING( &constant_bin[ 5724 ], 53, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nltk$ccg( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d2b41b5ed36ac8954ace524794e3a096;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_6617a2890a11256ad423ccc35a3c6b76;
    codeobj_d2b41b5ed36ac8954ace524794e3a096 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ccg, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nltk$ccg =
{
    PyModuleDef_HEAD_INIT,
    "nltk.ccg",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineType();
extern void _initCompiledCoroutineWrapperType();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( nltk$ccg )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nltk$ccg );
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
    _initCompiledCoroutineType();
    _initCompiledCoroutineWrapperType();
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
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("nltk.ccg: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("nltk.ccg: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnltk$ccg" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nltk$ccg = Py_InitModule4(
        "nltk.ccg",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nltk$ccg = PyModule_Create( &mdef_nltk$ccg );
#endif

    moduledict_nltk$ccg = (PyDictObject *)((PyModuleObject *)module_nltk$ccg)->md_dict;

    CHECK_OBJECT( module_nltk$ccg );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_8c88038224705f19ab4741619e876f5d, module_nltk$ccg );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nltk$ccg );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_star_imported_3;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_f1b65197d4e9ee1712d0f9d3334db36b;
    UPDATE_STRING_DICT0( moduledict_nltk$ccg, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_6617a2890a11256ad423ccc35a3c6b76;
    UPDATE_STRING_DICT0( moduledict_nltk$ccg, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_85f710cce9c4eb811fb1836d29194867_list );
    UPDATE_STRING_DICT1( moduledict_nltk$ccg, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_d2b41b5ed36ac8954ace524794e3a096, module_nltk$ccg );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nltk$ccg)->md_dict;
    frame_module->f_lineno = 14;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_combinator, tmp_import_globals_1, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$ccg, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_2 = ((PyModuleObject *)module_nltk$ccg)->md_dict;
    frame_module->f_lineno = 15;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_plain_chart, tmp_import_globals_2, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$ccg, true, tmp_star_imported_2 );
    Py_DECREF( tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_3 = ((PyModuleObject *)module_nltk$ccg)->md_dict;
    frame_module->f_lineno = 16;
    tmp_star_imported_3 = IMPORT_MODULE( const_str_plain_lexicon, tmp_import_globals_3, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$ccg, true, tmp_star_imported_3 );
    Py_DECREF( tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_module, exception_lineno );
    }
    else if ( exception_tb->tb_frame != frame_module )
    {
        PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_module, exception_lineno );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }

    // Put the previous frame back on top.
    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_module->f_executing -= 1;
#endif
    Py_DECREF( frame_module );

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_4 = LIST_COPY( const_list_374c4b1ec8144681394d00d16d7295b8_list );
    UPDATE_STRING_DICT1( moduledict_nltk$ccg, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );

    return MOD_RETURN_VALUE( module_nltk$ccg );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
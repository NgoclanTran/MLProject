/* Generated code for Python source for module 'nltk.cluster'
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

/* The _module_nltk$cluster is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_nltk$cluster;
PyDictObject *moduledict_nltk$cluster;

/* The module constants used, if any. */
static PyObject *const_str_digest_9a4fbc307981c58f7399a47e6cb5c70f;
extern PyObject *const_str_chr_42;
extern PyObject *const_int_neg_1;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_digest_4e36ad32eaaf1f40be28047eb23207e5;
extern PyObject *const_str_plain_Dendrogram;
extern PyObject *const_str_plain_em;
extern PyObject *const_str_plain_util;
extern PyObject *const_str_plain_VectorSpaceClusterer;
extern PyObject *const_str_plain_KMeansClusterer;
static PyObject *const_str_digest_625add99b0239cac7efd1ccc6024d854;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
static PyObject *const_list_1c2ed597b392900c30d766abf4d97f40_list;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_gaac;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_digest_cf989dca30cdd82f41eb8b0894c78edf;
static PyObject *const_list_str_digest_cf989dca30cdd82f41eb8b0894c78edf_list;
extern PyObject *const_str_plain_kmeans;
extern PyObject *const_str_plain_cluster;
extern PyObject *const_str_plain_EMClusterer;
extern PyObject *const_str_plain_GAAClusterer;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_9a4fbc307981c58f7399a47e6cb5c70f = UNSTREAM_STRING( &constant_bin[ 115125 ], 57, 0 );
    const_str_digest_4e36ad32eaaf1f40be28047eb23207e5 = UNSTREAM_STRING( &constant_bin[ 115182 ], 12, 0 );
    const_str_digest_625add99b0239cac7efd1ccc6024d854 = UNSTREAM_STRING( &constant_bin[ 115194 ], 3825, 0 );
    const_list_1c2ed597b392900c30d766abf4d97f40_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_1c2ed597b392900c30d766abf4d97f40_list, 0, const_str_plain_KMeansClusterer ); Py_INCREF( const_str_plain_KMeansClusterer );
    PyList_SET_ITEM( const_list_1c2ed597b392900c30d766abf4d97f40_list, 1, const_str_plain_GAAClusterer ); Py_INCREF( const_str_plain_GAAClusterer );
    PyList_SET_ITEM( const_list_1c2ed597b392900c30d766abf4d97f40_list, 2, const_str_plain_EMClusterer ); Py_INCREF( const_str_plain_EMClusterer );
    PyList_SET_ITEM( const_list_1c2ed597b392900c30d766abf4d97f40_list, 3, const_str_plain_VectorSpaceClusterer ); Py_INCREF( const_str_plain_VectorSpaceClusterer );
    PyList_SET_ITEM( const_list_1c2ed597b392900c30d766abf4d97f40_list, 4, const_str_plain_Dendrogram ); Py_INCREF( const_str_plain_Dendrogram );
    const_str_digest_cf989dca30cdd82f41eb8b0894c78edf = UNSTREAM_STRING( &constant_bin[ 115125 ], 45, 0 );
    const_list_str_digest_cf989dca30cdd82f41eb8b0894c78edf_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_cf989dca30cdd82f41eb8b0894c78edf_list, 0, const_str_digest_cf989dca30cdd82f41eb8b0894c78edf ); Py_INCREF( const_str_digest_cf989dca30cdd82f41eb8b0894c78edf );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nltk$cluster( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_61bf2573cfcf71ac00f22ac41cf2f66f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_9a4fbc307981c58f7399a47e6cb5c70f;
    codeobj_61bf2573cfcf71ac00f22ac41cf2f66f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cluster, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nltk$cluster =
{
    PyModuleDef_HEAD_INIT,
    "nltk.cluster",   /* m_name */
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

MOD_INIT_DECL( nltk$cluster )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nltk$cluster );
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
    puts("nltk.cluster: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("nltk.cluster: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnltk$cluster" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nltk$cluster = Py_InitModule4(
        "nltk.cluster",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nltk$cluster = PyModule_Create( &mdef_nltk$cluster );
#endif

    moduledict_nltk$cluster = (PyDictObject *)((PyModuleObject *)module_nltk$cluster)->md_dict;

    CHECK_OBJECT( module_nltk$cluster );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_4e36ad32eaaf1f40be28047eb23207e5, module_nltk$cluster );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nltk$cluster );

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
    PyObject *tmp_import_globals_4;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_star_imported_3;
    PyObject *tmp_star_imported_4;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_625add99b0239cac7efd1ccc6024d854;
    UPDATE_STRING_DICT0( moduledict_nltk$cluster, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_9a4fbc307981c58f7399a47e6cb5c70f;
    UPDATE_STRING_DICT0( moduledict_nltk$cluster, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_cf989dca30cdd82f41eb8b0894c78edf_list );
    UPDATE_STRING_DICT1( moduledict_nltk$cluster, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_61bf2573cfcf71ac00f22ac41cf2f66f, module_nltk$cluster );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nltk$cluster)->md_dict;
    frame_module->f_lineno = 82;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_util, tmp_import_globals_1, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$cluster, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_2 = ((PyModuleObject *)module_nltk$cluster)->md_dict;
    frame_module->f_lineno = 83;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_plain_kmeans, tmp_import_globals_2, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$cluster, true, tmp_star_imported_2 );
    Py_DECREF( tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_3 = ((PyModuleObject *)module_nltk$cluster)->md_dict;
    frame_module->f_lineno = 84;
    tmp_star_imported_3 = IMPORT_MODULE( const_str_plain_gaac, tmp_import_globals_3, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$cluster, true, tmp_star_imported_3 );
    Py_DECREF( tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_4 = ((PyModuleObject *)module_nltk$cluster)->md_dict;
    frame_module->f_lineno = 85;
    tmp_star_imported_4 = IMPORT_MODULE( const_str_plain_em, tmp_import_globals_4, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$cluster, true, tmp_star_imported_4 );
    Py_DECREF( tmp_star_imported_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
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
    tmp_assign_source_4 = LIST_COPY( const_list_1c2ed597b392900c30d766abf4d97f40_list );
    UPDATE_STRING_DICT1( moduledict_nltk$cluster, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );

    return MOD_RETURN_VALUE( module_nltk$cluster );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

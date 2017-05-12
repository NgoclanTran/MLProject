/* Generated code for Python source for module 'nltk.classify'
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

/* The _module_nltk$classify is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_nltk$classify;
PyDictObject *moduledict_nltk$classify;

/* The module constants used, if any. */
extern PyObject *const_str_plain_config_megam;
extern PyObject *const_str_plain_rte_features;
extern PyObject *const_str_chr_42;
static PyObject *const_str_digest_3efa4a3c0d3672899a08e87ae4996a7b;
extern PyObject *const_int_neg_1;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_classify;
extern PyObject *const_str_plain_rte_classifier;
static PyObject *const_str_digest_1888c023dc0f69de24dff64a5e742b9c;
static PyObject *const_list_905572d41d64bf42d29c381042ac8b80_list;
static PyObject *const_str_digest_dc516b9b619cdaa797354025cef0cbc1;
extern PyObject *const_str_plain_util;
extern PyObject *const_str_plain_MultiClassifierI;
extern PyObject *const_str_plain_train_maxent_classifier;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_e2ac0cbd35aca77117d5d6d9bc9e4e96;
extern PyObject *const_str_plain_ClassifierI;
static PyObject *const_list_e85449a19d969abf3a60cd2cc882de75_list;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_RTEFeatureExtractor;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_numpy;
static PyObject *const_list_str_digest_e2ac0cbd35aca77117d5d6d9bc9e4e96_list;
extern PyObject *const_str_plain_weka;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_decisiontree;
extern PyObject *const_str_plain_megam;
extern PyObject *const_str_plain_maxent;
extern PyObject *const_str_plain_MaxentClassifier;
extern PyObject *const_str_plain_DecisionTreeClassifier;
extern PyObject *const_str_plain_WekaClassifier;
extern PyObject *const_str_plain_config_weka;
extern PyObject *const_str_plain_NaiveBayesClassifier;
extern PyObject *const_str_plain_api;
extern PyObject *const_str_plain_BinaryMaxentFeatureEncoding;
extern PyObject *const_str_plain_naivebayes;
extern PyObject *const_str_plain_ConditionalExponentialClassifier;
extern PyObject *const_str_plain_rte_classify;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_3efa4a3c0d3672899a08e87ae4996a7b = UNSTREAM_STRING( &constant_bin[ 64090 ], 3376, 0 );
    const_str_digest_1888c023dc0f69de24dff64a5e742b9c = UNSTREAM_STRING( &constant_bin[ 67466 ], 58, 0 );
    const_list_905572d41d64bf42d29c381042ac8b80_list = PyList_New( 10 );
    PyList_SET_ITEM( const_list_905572d41d64bf42d29c381042ac8b80_list, 0, const_str_plain_ClassifierI ); Py_INCREF( const_str_plain_ClassifierI );
    PyList_SET_ITEM( const_list_905572d41d64bf42d29c381042ac8b80_list, 1, const_str_plain_MultiClassifierI ); Py_INCREF( const_str_plain_MultiClassifierI );
    PyList_SET_ITEM( const_list_905572d41d64bf42d29c381042ac8b80_list, 2, const_str_plain_NaiveBayesClassifier ); Py_INCREF( const_str_plain_NaiveBayesClassifier );
    PyList_SET_ITEM( const_list_905572d41d64bf42d29c381042ac8b80_list, 3, const_str_plain_DecisionTreeClassifier ); Py_INCREF( const_str_plain_DecisionTreeClassifier );
    PyList_SET_ITEM( const_list_905572d41d64bf42d29c381042ac8b80_list, 4, const_str_plain_WekaClassifier ); Py_INCREF( const_str_plain_WekaClassifier );
    PyList_SET_ITEM( const_list_905572d41d64bf42d29c381042ac8b80_list, 5, const_str_plain_config_weka ); Py_INCREF( const_str_plain_config_weka );
    PyList_SET_ITEM( const_list_905572d41d64bf42d29c381042ac8b80_list, 6, const_str_plain_config_megam ); Py_INCREF( const_str_plain_config_megam );
    PyList_SET_ITEM( const_list_905572d41d64bf42d29c381042ac8b80_list, 7, const_str_plain_rte_classifier ); Py_INCREF( const_str_plain_rte_classifier );
    PyList_SET_ITEM( const_list_905572d41d64bf42d29c381042ac8b80_list, 8, const_str_plain_rte_features ); Py_INCREF( const_str_plain_rte_features );
    PyList_SET_ITEM( const_list_905572d41d64bf42d29c381042ac8b80_list, 9, const_str_plain_RTEFeatureExtractor ); Py_INCREF( const_str_plain_RTEFeatureExtractor );
    const_str_digest_dc516b9b619cdaa797354025cef0cbc1 = UNSTREAM_STRING( &constant_bin[ 67524 ], 13, 0 );
    const_str_digest_e2ac0cbd35aca77117d5d6d9bc9e4e96 = UNSTREAM_STRING( &constant_bin[ 67466 ], 46, 0 );
    const_list_e85449a19d969abf3a60cd2cc882de75_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_e85449a19d969abf3a60cd2cc882de75_list, 0, const_str_plain_MaxentClassifier ); Py_INCREF( const_str_plain_MaxentClassifier );
    PyList_SET_ITEM( const_list_e85449a19d969abf3a60cd2cc882de75_list, 1, const_str_plain_BinaryMaxentFeatureEncoding ); Py_INCREF( const_str_plain_BinaryMaxentFeatureEncoding );
    PyList_SET_ITEM( const_list_e85449a19d969abf3a60cd2cc882de75_list, 2, const_str_plain_ConditionalExponentialClassifier ); Py_INCREF( const_str_plain_ConditionalExponentialClassifier );
    PyList_SET_ITEM( const_list_e85449a19d969abf3a60cd2cc882de75_list, 3, const_str_plain_train_maxent_classifier ); Py_INCREF( const_str_plain_train_maxent_classifier );
    const_list_str_digest_e2ac0cbd35aca77117d5d6d9bc9e4e96_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_e2ac0cbd35aca77117d5d6d9bc9e4e96_list, 0, const_str_digest_e2ac0cbd35aca77117d5d6d9bc9e4e96 ); Py_INCREF( const_str_digest_e2ac0cbd35aca77117d5d6d9bc9e4e96 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nltk$classify( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9ec20016e5301cd41ee90828d6edb9b4;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_1888c023dc0f69de24dff64a5e742b9c;
    codeobj_9ec20016e5301cd41ee90828d6edb9b4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_classify, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nltk$classify =
{
    PyModuleDef_HEAD_INIT,
    "nltk.classify",   /* m_name */
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

MOD_INIT_DECL( nltk$classify )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nltk$classify );
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
    puts("nltk.classify: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("nltk.classify: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnltk$classify" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nltk$classify = Py_InitModule4(
        "nltk.classify",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nltk$classify = PyModule_Create( &mdef_nltk$classify );
#endif

    moduledict_nltk$classify = (PyDictObject *)((PyModuleObject *)module_nltk$classify)->md_dict;

    CHECK_OBJECT( module_nltk$classify );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_dc516b9b619cdaa797354025cef0cbc1, module_nltk$classify );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nltk$classify );

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
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_globals_9;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_right_name_1;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_star_imported_3;
    PyObject *tmp_star_imported_4;
    PyObject *tmp_star_imported_5;
    PyObject *tmp_star_imported_6;
    PyObject *tmp_star_imported_7;
    PyObject *tmp_star_imported_8;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_3efa4a3c0d3672899a08e87ae4996a7b;
    UPDATE_STRING_DICT0( moduledict_nltk$classify, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_1888c023dc0f69de24dff64a5e742b9c;
    UPDATE_STRING_DICT0( moduledict_nltk$classify, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_e2ac0cbd35aca77117d5d6d9bc9e4e96_list );
    UPDATE_STRING_DICT1( moduledict_nltk$classify, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_9ec20016e5301cd41ee90828d6edb9b4, module_nltk$classify );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nltk$classify)->md_dict;
    frame_module->f_lineno = 84;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_weka, tmp_import_globals_1, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$classify, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_2 = ((PyModuleObject *)module_nltk$classify)->md_dict;
    frame_module->f_lineno = 85;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_plain_megam, tmp_import_globals_2, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$classify, true, tmp_star_imported_2 );
    Py_DECREF( tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_3 = ((PyModuleObject *)module_nltk$classify)->md_dict;
    frame_module->f_lineno = 87;
    tmp_star_imported_3 = IMPORT_MODULE( const_str_plain_api, tmp_import_globals_3, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$classify, true, tmp_star_imported_3 );
    Py_DECREF( tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_4 = ((PyModuleObject *)module_nltk$classify)->md_dict;
    frame_module->f_lineno = 88;
    tmp_star_imported_4 = IMPORT_MODULE( const_str_plain_util, tmp_import_globals_4, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$classify, true, tmp_star_imported_4 );
    Py_DECREF( tmp_star_imported_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_5 = ((PyModuleObject *)module_nltk$classify)->md_dict;
    frame_module->f_lineno = 89;
    tmp_star_imported_5 = IMPORT_MODULE( const_str_plain_naivebayes, tmp_import_globals_5, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$classify, true, tmp_star_imported_5 );
    Py_DECREF( tmp_star_imported_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_6 = ((PyModuleObject *)module_nltk$classify)->md_dict;
    frame_module->f_lineno = 90;
    tmp_star_imported_6 = IMPORT_MODULE( const_str_plain_decisiontree, tmp_import_globals_6, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$classify, true, tmp_star_imported_6 );
    Py_DECREF( tmp_star_imported_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_7 = ((PyModuleObject *)module_nltk$classify)->md_dict;
    frame_module->f_lineno = 91;
    tmp_star_imported_7 = IMPORT_MODULE( const_str_plain_rte_classify, tmp_import_globals_7, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$classify, true, tmp_star_imported_7 );
    Py_DECREF( tmp_star_imported_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LIST_COPY( const_list_905572d41d64bf42d29c381042ac8b80_list );
    UPDATE_STRING_DICT1( moduledict_nltk$classify, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    // Tried code:
    tmp_import_globals_8 = ((PyModuleObject *)module_nltk$classify)->md_dict;
    frame_module->f_lineno = 113;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_8, Py_None, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_nltk$classify, (Nuitka_StringObject *)const_str_plain_numpy, tmp_assign_source_5 );
    tmp_import_globals_9 = ((PyModuleObject *)module_nltk$classify)->md_dict;
    frame_module->f_lineno = 114;
    tmp_star_imported_8 = IMPORT_MODULE( const_str_plain_maxent, tmp_import_globals_9, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto try_except_handler_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$classify, true, tmp_star_imported_8 );
    Py_DECREF( tmp_star_imported_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto try_except_handler_1;
    }
    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_nltk$classify, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 115;
        goto try_except_handler_1;
    }

    tmp_right_name_1 = LIST_COPY( const_list_e85449a19d969abf3a60cd2cc882de75_list );
    tmp_assign_source_6 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_nltk$classify, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
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
    exception_lineno = -1;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_module );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_module, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_no_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nltk$classify );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
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

    return MOD_RETURN_VALUE( module_nltk$classify );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

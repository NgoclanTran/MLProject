/* Generated code for Python source for module '__main__'
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

/* The _module___main__ is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The module constants used, if any. */
static PyObject *const_int_neg_1;
static PyObject *const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_8_int_pos_6_list;
extern PyObject *const_str_plain_site;
extern PyObject *const_str_plain___main__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_a;
static PyObject *const_str_angle_module;
extern PyObject *const_tuple_empty;
static PyObject *const_int_pos_6;
static PyObject *const_str_plain_max;
static PyObject *const_int_pos_4;
static PyObject *const_str_plain_types;
static PyObject *const_int_pos_2;
static PyObject *const_int_pos_3;
static PyObject *const_str_plain_os;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
static PyObject *const_int_pos_8;
static PyObject *const_str_digest_0ea01ec05125d98fd2823d5c2c57eaca;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_int_neg_1 = PyInt_FromLong( -1l );
    const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_8_int_pos_6_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_8_int_pos_6_list, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_int_pos_2 = PyInt_FromLong( 2l );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_8_int_pos_6_list, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_int_pos_3 = PyInt_FromLong( 3l );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_8_int_pos_6_list, 2, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    const_int_pos_4 = PyInt_FromLong( 4l );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_8_int_pos_6_list, 3, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    const_int_pos_8 = PyInt_FromLong( 8l );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_8_int_pos_6_list, 4, const_int_pos_8 ); Py_INCREF( const_int_pos_8 );
    const_int_pos_6 = PyInt_FromLong( 6l );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_8_int_pos_6_list, 5, const_int_pos_6 ); Py_INCREF( const_int_pos_6 );
    const_str_plain_a = UNSTREAM_CHAR( 97, 1 );
    const_str_angle_module = UNSTREAM_STRING( &constant_bin[ 0 ], 8, 0 );
    const_str_plain_max = UNSTREAM_STRING( &constant_bin[ 8 ], 3, 1 );
    const_str_plain_types = UNSTREAM_STRING( &constant_bin[ 11 ], 5, 1 );
    const_str_plain_os = UNSTREAM_STRING( &constant_bin[ 16 ], 2, 1 );
    const_str_digest_0ea01ec05125d98fd2823d5c2c57eaca = UNSTREAM_STRING( &constant_bin[ 18 ], 44, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_46233e47ef464d4c24ec24508fffe73d;
/* For use in MainProgram.cpp. */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_0ea01ec05125d98fd2823d5c2c57eaca;
    codeobj_46233e47ef464d4c24ec24508fffe73d = MAKE_CODEOBJ( module_filename_obj, const_str_angle_module, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_main = codeobj_46233e47ef464d4c24ec24508fffe73d;
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef___main__ =
{
    PyModuleDef_HEAD_INIT,
    "__main__",   /* m_name */
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

MOD_INIT_DECL( __main__ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module___main__ );
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
    puts("__main__: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("__main__: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in init__main__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module___main__ = Py_InitModule4(
        "__main__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module___main__ = PyModule_Create( &mdef___main__ );
#endif

    moduledict___main__ = (PyDictObject *)((PyModuleObject *)module___main__)->md_dict;

    CHECK_OBJECT( module___main__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain___main__, module___main__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module___main__ );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !1
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_print_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_46233e47ef464d4c24ec24508fffe73d, module___main__ );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module___main__)->md_dict;
    frame_module->f_lineno = 1;
    tmp_unused = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_1, Py_None, const_tuple_empty, const_int_neg_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_2 = ((PyModuleObject *)module___main__)->md_dict;
    frame_module->f_lineno = 1;
    tmp_unused = IMPORT_MODULE( const_str_plain_types, tmp_import_globals_2, Py_None, const_tuple_empty, const_int_neg_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_3 = ((PyModuleObject *)module___main__)->md_dict;
    frame_module->f_lineno = 1;
    tmp_unused = IMPORT_MODULE( const_str_plain_site, tmp_import_globals_3, Py_None, const_tuple_empty, const_int_neg_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_0ea01ec05125d98fd2823d5c2c57eaca;
    UPDATE_STRING_DICT0( moduledict___main__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_int_pos_1_int_pos_2_int_pos_3_int_pos_4_int_pos_8_int_pos_6_list );
    UPDATE_STRING_DICT1( moduledict___main__, (Nuitka_StringObject *)const_str_plain_a, tmp_assign_source_3 );
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict___main__, (Nuitka_StringObject *)const_str_plain_a );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_a );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "a" );
        exception_tb = NULL;

        exception_lineno = 5;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 5;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_print_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_print_value );

        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
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

    return MOD_RETURN_VALUE( module___main__ );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

/* Generated code for Python source for module 'nltk.yamltags'
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

/* The _module_nltk$yamltags is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_nltk$yamltags;
PyDictObject *moduledict_nltk$yamltags;

/* The module constants used, if any. */
extern PyObject *const_str_plain_classpath;
extern PyObject *const_str_plain_mod;
static PyObject *const_str_plain_module_path;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_dot;
static PyObject *const_tuple_str_plain_classpath_str_plain_loader_tuple;
static PyObject *const_tuple_b45c90be73eb543e8b2eb0288f23270e_tuple;
static PyObject *const_tuple_d4e5c9a7e601c257ca75dd95db9a15f3_tuple;
static PyObject *const_str_plain_custom_import;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_join;
static PyObject *const_str_digest_abd3ba21b037cbdc8fcf9a314350bee2;
extern PyObject *const_str_plain_yaml;
extern PyObject *const_tuple_str_dot_tuple;
static PyObject *const_str_digest_c0b4d7931b835e01bc5d67955029b014;
extern PyObject *const_str_plain_split;
static PyObject *const_str_plain_register_tag;
static PyObject *const_str_plain_metaloader;
static PyObject *const_tuple_40ab2c264f76d52d2c146a440955bfce_tuple;
static PyObject *const_str_digest_d3479c8e40363629cbf2cf44f43a8a7d;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_tag;
extern PyObject *const_str_plain___all__;
static PyObject *const_unicode_digest_2af9dea18fbf71d522b3742dc094a3e5;
extern PyObject *const_str_plain_yamltags;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_classref;
static PyObject *const_str_digest_c8babac804ac4b3c3d1e005ff2f2175a;
static PyObject *const_tuple_649384b1aa6f0c1a0c34339917ad3750_tuple;
static PyObject *const_str_plain_components;
extern PyObject *const_str_plain___file__;
static PyObject *const_list_ddb7e32ff622b3a3bb5a0220848fc81d_list;
extern PyObject *const_str_plain_loader;
static PyObject *const_str_plain_comp;
static PyObject *const_unicode_digest_993414de81a70a51cfc9fde07d6ddce6;
extern PyObject *const_str_plain_add_constructor;
extern PyObject *const_unicode_chr_33;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_from_yaml;
extern PyObject *const_str_plain_kwds;
static PyObject *const_tuple_str_plain_tag_str_plain_classpath_tuple;
extern PyObject *const_str_plain_args;
static PyObject *const_unicode_digest_18c22d9ac4efff705013d414bbdbd422;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_module_path = UNSTREAM_STRING( &constant_bin[ 909801 ], 11, 1 );
    const_tuple_str_plain_classpath_str_plain_loader_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_classpath_str_plain_loader_tuple, 0, const_str_plain_classpath ); Py_INCREF( const_str_plain_classpath );
    PyTuple_SET_ITEM( const_tuple_str_plain_classpath_str_plain_loader_tuple, 1, const_str_plain_loader ); Py_INCREF( const_str_plain_loader );
    const_tuple_b45c90be73eb543e8b2eb0288f23270e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_b45c90be73eb543e8b2eb0288f23270e_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_plain_components = UNSTREAM_STRING( &constant_bin[ 253991 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_b45c90be73eb543e8b2eb0288f23270e_tuple, 1, const_str_plain_components ); Py_INCREF( const_str_plain_components );
    PyTuple_SET_ITEM( const_tuple_b45c90be73eb543e8b2eb0288f23270e_tuple, 2, const_str_plain_module_path ); Py_INCREF( const_str_plain_module_path );
    PyTuple_SET_ITEM( const_tuple_b45c90be73eb543e8b2eb0288f23270e_tuple, 3, const_str_plain_mod ); Py_INCREF( const_str_plain_mod );
    const_str_plain_comp = UNSTREAM_STRING( &constant_bin[ 451 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_b45c90be73eb543e8b2eb0288f23270e_tuple, 4, const_str_plain_comp ); Py_INCREF( const_str_plain_comp );
    const_tuple_d4e5c9a7e601c257ca75dd95db9a15f3_tuple = PyTuple_New( 2 );
    const_unicode_digest_993414de81a70a51cfc9fde07d6ddce6 = UNSTREAM_UNICODE( &constant_bin[ 909812 ], 9 );
    PyTuple_SET_ITEM( const_tuple_d4e5c9a7e601c257ca75dd95db9a15f3_tuple, 0, const_unicode_digest_993414de81a70a51cfc9fde07d6ddce6 ); Py_INCREF( const_unicode_digest_993414de81a70a51cfc9fde07d6ddce6 );
    const_str_digest_c0b4d7931b835e01bc5d67955029b014 = UNSTREAM_STRING( &constant_bin[ 909821 ], 20, 0 );
    PyTuple_SET_ITEM( const_tuple_d4e5c9a7e601c257ca75dd95db9a15f3_tuple, 1, const_str_digest_c0b4d7931b835e01bc5d67955029b014 ); Py_INCREF( const_str_digest_c0b4d7931b835e01bc5d67955029b014 );
    const_str_plain_custom_import = UNSTREAM_STRING( &constant_bin[ 909841 ], 13, 1 );
    const_str_digest_abd3ba21b037cbdc8fcf9a314350bee2 = UNSTREAM_STRING( &constant_bin[ 909854 ], 49, 0 );
    const_str_plain_register_tag = UNSTREAM_STRING( &constant_bin[ 909903 ], 12, 1 );
    const_str_plain_metaloader = UNSTREAM_STRING( &constant_bin[ 909915 ], 10, 1 );
    const_tuple_40ab2c264f76d52d2c146a440955bfce_tuple = PyTuple_New( 2 );
    const_unicode_digest_18c22d9ac4efff705013d414bbdbd422 = UNSTREAM_UNICODE( &constant_bin[ 909925 ], 11 );
    PyTuple_SET_ITEM( const_tuple_40ab2c264f76d52d2c146a440955bfce_tuple, 0, const_unicode_digest_18c22d9ac4efff705013d414bbdbd422 ); Py_INCREF( const_unicode_digest_18c22d9ac4efff705013d414bbdbd422 );
    const_str_digest_c8babac804ac4b3c3d1e005ff2f2175a = UNSTREAM_STRING( &constant_bin[ 909936 ], 24, 0 );
    PyTuple_SET_ITEM( const_tuple_40ab2c264f76d52d2c146a440955bfce_tuple, 1, const_str_digest_c8babac804ac4b3c3d1e005ff2f2175a ); Py_INCREF( const_str_digest_c8babac804ac4b3c3d1e005ff2f2175a );
    const_str_digest_d3479c8e40363629cbf2cf44f43a8a7d = UNSTREAM_STRING( &constant_bin[ 909960 ], 13, 0 );
    const_unicode_digest_2af9dea18fbf71d522b3742dc094a3e5 = UNSTREAM_UNICODE( &constant_bin[ 909973 ], 30 );
    const_str_plain_classref = UNSTREAM_STRING( &constant_bin[ 910003 ], 8, 1 );
    const_tuple_649384b1aa6f0c1a0c34339917ad3750_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_649384b1aa6f0c1a0c34339917ad3750_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_649384b1aa6f0c1a0c34339917ad3750_tuple, 1, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    PyTuple_SET_ITEM( const_tuple_649384b1aa6f0c1a0c34339917ad3750_tuple, 2, const_str_plain_classref ); Py_INCREF( const_str_plain_classref );
    PyTuple_SET_ITEM( const_tuple_649384b1aa6f0c1a0c34339917ad3750_tuple, 3, const_str_plain_classpath ); Py_INCREF( const_str_plain_classpath );
    const_list_ddb7e32ff622b3a3bb5a0220848fc81d_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_ddb7e32ff622b3a3bb5a0220848fc81d_list, 0, const_str_plain_custom_import ); Py_INCREF( const_str_plain_custom_import );
    PyList_SET_ITEM( const_list_ddb7e32ff622b3a3bb5a0220848fc81d_list, 1, const_str_plain_metaloader ); Py_INCREF( const_str_plain_metaloader );
    PyList_SET_ITEM( const_list_ddb7e32ff622b3a3bb5a0220848fc81d_list, 2, const_str_plain_register_tag ); Py_INCREF( const_str_plain_register_tag );
    const_tuple_str_plain_tag_str_plain_classpath_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_tag_str_plain_classpath_tuple, 0, const_str_plain_tag ); Py_INCREF( const_str_plain_tag );
    PyTuple_SET_ITEM( const_tuple_str_plain_tag_str_plain_classpath_tuple, 1, const_str_plain_classpath ); Py_INCREF( const_str_plain_classpath );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nltk$yamltags( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_14ec1015a05008b818c77f6703680da7;
static PyCodeObject *codeobj_7466ad32bc0de45a986621eaea795020;
static PyCodeObject *codeobj_2b2f6d73ee570b6523e973cbedc343f8;
static PyCodeObject *codeobj_d5333e2c2c505189d2917ae713ef1faf;
static PyCodeObject *codeobj_87646d30fd504525a3d13c5cb2c27d88;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_abd3ba21b037cbdc8fcf9a314350bee2;
    codeobj_14ec1015a05008b818c77f6703680da7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_custom_import, 12, const_tuple_b45c90be73eb543e8b2eb0288f23270e_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7466ad32bc0de45a986621eaea795020 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_loader, 21, const_tuple_649384b1aa6f0c1a0c34339917ad3750_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS );
    codeobj_2b2f6d73ee570b6523e973cbedc343f8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_metaloader, 20, const_tuple_str_plain_classpath_str_plain_loader_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d5333e2c2c505189d2917ae713ef1faf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_register_tag, 26, const_tuple_str_plain_tag_str_plain_classpath_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_87646d30fd504525a3d13c5cb2c27d88 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_yamltags, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_nltk$yamltags$$$function_1_custom_import(  );


static PyObject *MAKE_FUNCTION_nltk$yamltags$$$function_2_metaloader(  );


static PyObject *MAKE_FUNCTION_nltk$yamltags$$$function_2_metaloader$$$function_1_loader( struct Nuitka_CellObject *closure_classpath );


static PyObject *MAKE_FUNCTION_nltk$yamltags$$$function_3_register_tag(  );


// The module function definitions.
static PyObject *impl_nltk$yamltags$$$function_1_custom_import( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *var_components = NULL;
    PyObject *var_module_path = NULL;
    PyObject *var_mod = NULL;
    PyObject *var_comp = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_import_fromlist_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_level_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_modulename_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_14ec1015a05008b818c77f6703680da7, module_nltk$yamltags );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_called_instance_1 = par_name;

    frame_function->f_lineno = 13;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    assert( var_components == NULL );
    var_components = tmp_assign_source_1;

    tmp_source_name_1 = const_str_dot;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( tmp_called_name_1 != NULL );
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = var_components;

    tmp_args_element_name_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    assert( var_module_path == NULL );
    var_module_path = tmp_assign_source_2;

    tmp_import_modulename_1 = var_module_path;

    tmp_import_fromlist_1 = const_tuple_empty;
    tmp_import_level_1 = const_int_neg_1;
    tmp_import_globals_1 = ((PyModuleObject *)module_nltk$yamltags)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_name )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_name,
            par_name
        );

        assert( res == 0 );
    }

    if ( var_components )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_components,
            var_components
        );

        assert( res == 0 );
    }

    if ( var_module_path )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_module_path,
            var_module_path
        );

        assert( res == 0 );
    }

    if ( var_mod )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_mod,
            var_mod
        );

        assert( res == 0 );
    }

    if ( var_comp )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_comp,
            var_comp
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 15;
    tmp_assign_source_3 = IMPORT_MODULE( tmp_import_modulename_1, tmp_import_globals_1, tmp_import_locals_1, tmp_import_fromlist_1, tmp_import_level_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    assert( var_mod == NULL );
    var_mod = tmp_assign_source_3;

    tmp_sliceslicedel_index_lower_2 = 1;
    tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
    tmp_slice_source_2 = var_components;

    tmp_iter_arg_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_4;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 16;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_comp;
        var_comp = tmp_assign_source_6;
        Py_INCREF( var_comp );
        Py_XDECREF( old );
    }

    tmp_getattr_target_1 = var_mod;

    if ( tmp_getattr_target_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "mod" );
        exception_tb = NULL;

        exception_lineno = 17;
        goto try_except_handler_2;
    }

    tmp_getattr_attr_1 = var_comp;

    tmp_assign_source_7 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_mod;
        var_mod = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
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
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = var_mod;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "mod" );
        exception_tb = NULL;

        exception_lineno = 18;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
                );

                assert( res == 0 );
            }

            if ( var_components )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_components,
                    var_components
                );

                assert( res == 0 );
            }

            if ( var_module_path )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module_path,
                    var_module_path
                );

                assert( res == 0 );
            }

            if ( var_mod )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mod,
                    var_mod
                );

                assert( res == 0 );
            }

            if ( var_comp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_comp,
                    var_comp
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nltk$yamltags$$$function_1_custom_import );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_components );
    Py_DECREF( var_components );
    var_components = NULL;

    CHECK_OBJECT( (PyObject *)var_module_path );
    Py_DECREF( var_module_path );
    var_module_path = NULL;

    Py_XDECREF( var_mod );
    var_mod = NULL;

    Py_XDECREF( var_comp );
    var_comp = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_module_path );
    var_module_path = NULL;

    Py_XDECREF( var_mod );
    var_mod = NULL;

    Py_XDECREF( var_comp );
    var_comp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nltk$yamltags$$$function_1_custom_import );
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


static PyObject *impl_nltk$yamltags$$$function_2_metaloader( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_classpath = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_loader = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = MAKE_FUNCTION_nltk$yamltags$$$function_2_metaloader$$$function_1_loader( par_classpath );
    assert( var_loader == NULL );
    var_loader = tmp_assign_source_1;

    // Tried code:
    tmp_return_value = var_loader;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nltk$yamltags$$$function_2_metaloader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_classpath );
    Py_DECREF( par_classpath );
    par_classpath = NULL;

    CHECK_OBJECT( (PyObject *)var_loader );
    Py_DECREF( var_loader );
    var_loader = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nltk$yamltags$$$function_2_metaloader );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_nltk$yamltags$$$function_2_metaloader$$$function_1_loader( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwds = python_pars[ 1 ];
    PyObject *var_classref = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7466ad32bc0de45a986621eaea795020, module_nltk$yamltags );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nltk$yamltags, (Nuitka_StringObject *)const_str_plain_custom_import );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_custom_import );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "custom_import" );
        exception_tb = NULL;

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "classpath" );
        exception_tb = NULL;

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    assert( var_classref == NULL );
    var_classref = tmp_assign_source_1;

    tmp_source_name_1 = var_classref;

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_from_yaml );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_args;

    tmp_dircall_arg3_1 = par_kwds;

    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_6_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_args,
                    par_args
                );

                assert( res == 0 );
            }

            if ( par_kwds )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kwds,
                    par_kwds
                );

                assert( res == 0 );
            }

            if ( var_classref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_classref,
                    var_classref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_classpath,
                    self->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nltk$yamltags$$$function_2_metaloader$$$function_1_loader );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    CHECK_OBJECT( (PyObject *)var_classref );
    Py_DECREF( var_classref );
    var_classref = NULL;

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
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    Py_XDECREF( var_classref );
    var_classref = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nltk$yamltags$$$function_2_metaloader$$$function_1_loader );
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


static PyObject *impl_nltk$yamltags$$$function_3_register_tag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tag = python_pars[ 0 ];
    PyObject *par_classpath = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
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
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d5333e2c2c505189d2917ae713ef1faf, module_nltk$yamltags );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_nltk$yamltags, (Nuitka_StringObject *)const_str_plain_yaml );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_yaml );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "yaml" );
        exception_tb = NULL;

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_constructor );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_unicode_chr_33;
    tmp_right_name_1 = par_tag;

    tmp_args_element_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nltk$yamltags, (Nuitka_StringObject *)const_str_plain_metaloader );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_metaloader );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "metaloader" );
        exception_tb = NULL;

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_classpath;

    frame_function->f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 27;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_nltk$yamltags, (Nuitka_StringObject *)const_str_plain_yaml );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_yaml );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "yaml" );
        exception_tb = NULL;

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_add_constructor );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = const_unicode_digest_2af9dea18fbf71d522b3742dc094a3e5;
    tmp_right_name_2 = par_tag;

    tmp_args_element_name_4 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_nltk$yamltags, (Nuitka_StringObject *)const_str_plain_metaloader );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_metaloader );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "metaloader" );
        exception_tb = NULL;

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_classpath;

    frame_function->f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 28;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_tag )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tag,
                    par_tag
                );

                assert( res == 0 );
            }

            if ( par_classpath )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_classpath,
                    par_classpath
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nltk$yamltags$$$function_3_register_tag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tag );
    Py_DECREF( par_tag );
    par_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_classpath );
    Py_DECREF( par_classpath );
    par_classpath = NULL;

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
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_tag );
    Py_DECREF( par_tag );
    par_tag = NULL;

    CHECK_OBJECT( (PyObject *)par_classpath );
    Py_DECREF( par_classpath );
    par_classpath = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nltk$yamltags$$$function_3_register_tag );
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



static PyObject *MAKE_FUNCTION_nltk$yamltags$$$function_1_custom_import(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nltk$yamltags$$$function_1_custom_import,
        const_str_plain_custom_import,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_14ec1015a05008b818c77f6703680da7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nltk$yamltags,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nltk$yamltags$$$function_2_metaloader(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nltk$yamltags$$$function_2_metaloader,
        const_str_plain_metaloader,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2b2f6d73ee570b6523e973cbedc343f8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nltk$yamltags,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nltk$yamltags$$$function_2_metaloader$$$function_1_loader( struct Nuitka_CellObject *closure_classpath )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nltk$yamltags$$$function_2_metaloader$$$function_1_loader,
        const_str_plain_loader,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7466ad32bc0de45a986621eaea795020,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nltk$yamltags,
        Py_None,
        1
    );

result->m_closure[0] = closure_classpath;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nltk$yamltags$$$function_3_register_tag(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nltk$yamltags$$$function_3_register_tag,
        const_str_plain_register_tag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d5333e2c2c505189d2917ae713ef1faf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nltk$yamltags,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nltk$yamltags =
{
    PyModuleDef_HEAD_INIT,
    "nltk.yamltags",   /* m_name */
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

MOD_INIT_DECL( nltk$yamltags )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nltk$yamltags );
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
    puts("nltk.yamltags: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("nltk.yamltags: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnltk$yamltags" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nltk$yamltags = Py_InitModule4(
        "nltk.yamltags",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nltk$yamltags = PyModule_Create( &mdef_nltk$yamltags );
#endif

    moduledict_nltk$yamltags = (PyDictObject *)((PyModuleObject *)module_nltk$yamltags)->md_dict;

    CHECK_OBJECT( module_nltk$yamltags );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d3479c8e40363629cbf2cf44f43a8a7d, module_nltk$yamltags );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nltk$yamltags );

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
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_import_globals_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_nltk$yamltags, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_abd3ba21b037cbdc8fcf9a314350bee2;
    UPDATE_STRING_DICT0( moduledict_nltk$yamltags, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_87646d30fd504525a3d13c5cb2c27d88, module_nltk$yamltags );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nltk$yamltags)->md_dict;
    frame_module->f_lineno = 1;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_yaml, tmp_import_globals_1, Py_None, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nltk$yamltags, (Nuitka_StringObject *)const_str_plain_yaml, tmp_assign_source_3 );
    tmp_assign_source_4 = MAKE_FUNCTION_nltk$yamltags$$$function_1_custom_import(  );
    UPDATE_STRING_DICT1( moduledict_nltk$yamltags, (Nuitka_StringObject *)const_str_plain_custom_import, tmp_assign_source_4 );
    tmp_assign_source_5 = MAKE_FUNCTION_nltk$yamltags$$$function_2_metaloader(  );
    UPDATE_STRING_DICT1( moduledict_nltk$yamltags, (Nuitka_StringObject *)const_str_plain_metaloader, tmp_assign_source_5 );
    tmp_assign_source_6 = MAKE_FUNCTION_nltk$yamltags$$$function_3_register_tag(  );
    UPDATE_STRING_DICT1( moduledict_nltk$yamltags, (Nuitka_StringObject *)const_str_plain_register_tag, tmp_assign_source_6 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nltk$yamltags, (Nuitka_StringObject *)const_str_plain_register_tag );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register_tag );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "register_tag" );
        exception_tb = NULL;

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 31;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_40ab2c264f76d52d2c146a440955bfce_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nltk$yamltags, (Nuitka_StringObject *)const_str_plain_register_tag );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_register_tag );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "register_tag" );
        exception_tb = NULL;

        exception_lineno = 32;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 32;
    tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_d4e5c9a7e601c257ca75dd95db9a15f3_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
    tmp_assign_source_7 = LIST_COPY( const_list_ddb7e32ff622b3a3bb5a0220848fc81d_list );
    UPDATE_STRING_DICT1( moduledict_nltk$yamltags, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );

    return MOD_RETURN_VALUE( module_nltk$yamltags );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

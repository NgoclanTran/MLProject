/* Generated code for Python source for module 'nltk.tag'
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

/* The _module_nltk$tag is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_nltk$tag;
PyDictObject *moduledict_nltk$tag;

/* The module constants used, if any. */
static PyObject *const_str_digest_6b368677bc7e29352897b876458dec81;
static PyObject *const_list_8f64f88b78c712766ef84ec6e2fb0626_list;
static PyObject *const_list_e089443d00220c39668c69937b72bd3c_list;
static PyObject *const_str_digest_7c57284170525e69a69d713964a19f0b;
extern PyObject *const_str_plain_DefaultTagger;
extern PyObject *const_str_plain_RegexpTagger;
extern PyObject *const_str_plain_load;
extern PyObject *const_str_plain_FastBrillTaggerTrainer;
extern PyObject *const_str_plain_sequential;
extern PyObject *const_int_neg_1;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_batch_tag;
extern PyObject *const_str_plain_tnt;
extern PyObject *const_str_plain_brill;
static PyObject *const_str_digest_313b5712e044742a04baf1375c766741;
static PyObject *const_str_plain__POS_TAGGER;
extern PyObject *const_str_plain_util;
extern PyObject *const_str_plain_HiddenMarkovModelTagger;
static PyObject *const_str_plain_batch_pos_tag;
extern PyObject *const_str_plain_hmm;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_simplify;
static PyObject *const_str_digest_c91eafb82e5fb1b656883797d19b6d31;
extern PyObject *const_str_plain_TrigramTagger;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_BigramTagger;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_tag;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_digest_c5677b4058a47a95b6a66712c7b008a0;
extern PyObject *const_str_plain_HiddenMarkovModelTrainer;
static PyObject *const_tuple_str_plain_sentences_str_plain_tagger_tuple;
extern PyObject *const_str_plain_BrillTagger;
extern PyObject *const_str_plain_data;
static PyObject *const_list_str_digest_6b368677bc7e29352897b876458dec81_list;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_tokens_str_plain_tagger_tuple;
extern PyObject *const_str_plain_numpy;
static PyObject *const_str_digest_f59fc1aaff2894c861b54149865a3066;
extern PyObject *const_str_plain_pos_tag;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_tokens;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_NgramTagger;
extern PyObject *const_str_plain_untag;
extern PyObject *const_str_plain_TaggerI;
extern PyObject *const_str_plain_sentences;
extern PyObject *const_str_plain_BrillTaggerTrainer;
extern PyObject *const_str_plain_hunpos;
static PyObject *const_str_digest_0f96f4c0879de9d729ba5a08b06bd3ca;
extern PyObject *const_str_plain_AffixTagger;
extern PyObject *const_str_plain_UnigramTagger;
extern PyObject *const_str_plain_api;
extern PyObject *const_str_plain_tagger;
extern PyObject *const_str_plain_nltk;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_6b368677bc7e29352897b876458dec81 = UNSTREAM_STRING( &constant_bin[ 758753 ], 41, 0 );
    const_list_8f64f88b78c712766ef84ec6e2fb0626_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_8f64f88b78c712766ef84ec6e2fb0626_list, 0, const_str_plain_HiddenMarkovModelTagger ); Py_INCREF( const_str_plain_HiddenMarkovModelTagger );
    PyList_SET_ITEM( const_list_8f64f88b78c712766ef84ec6e2fb0626_list, 1, const_str_plain_HiddenMarkovModelTrainer ); Py_INCREF( const_str_plain_HiddenMarkovModelTrainer );
    const_list_e089443d00220c39668c69937b72bd3c_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_e089443d00220c39668c69937b72bd3c_list, 0, const_str_plain_TaggerI ); Py_INCREF( const_str_plain_TaggerI );
    PyList_SET_ITEM( const_list_e089443d00220c39668c69937b72bd3c_list, 1, const_str_plain_pos_tag ); Py_INCREF( const_str_plain_pos_tag );
    const_str_plain_batch_pos_tag = UNSTREAM_STRING( &constant_bin[ 758794 ], 13, 1 );
    PyList_SET_ITEM( const_list_e089443d00220c39668c69937b72bd3c_list, 2, const_str_plain_batch_pos_tag ); Py_INCREF( const_str_plain_batch_pos_tag );
    PyList_SET_ITEM( const_list_e089443d00220c39668c69937b72bd3c_list, 3, const_str_plain_DefaultTagger ); Py_INCREF( const_str_plain_DefaultTagger );
    PyList_SET_ITEM( const_list_e089443d00220c39668c69937b72bd3c_list, 4, const_str_plain_UnigramTagger ); Py_INCREF( const_str_plain_UnigramTagger );
    PyList_SET_ITEM( const_list_e089443d00220c39668c69937b72bd3c_list, 5, const_str_plain_BigramTagger ); Py_INCREF( const_str_plain_BigramTagger );
    PyList_SET_ITEM( const_list_e089443d00220c39668c69937b72bd3c_list, 6, const_str_plain_TrigramTagger ); Py_INCREF( const_str_plain_TrigramTagger );
    PyList_SET_ITEM( const_list_e089443d00220c39668c69937b72bd3c_list, 7, const_str_plain_NgramTagger ); Py_INCREF( const_str_plain_NgramTagger );
    PyList_SET_ITEM( const_list_e089443d00220c39668c69937b72bd3c_list, 8, const_str_plain_AffixTagger ); Py_INCREF( const_str_plain_AffixTagger );
    PyList_SET_ITEM( const_list_e089443d00220c39668c69937b72bd3c_list, 9, const_str_plain_RegexpTagger ); Py_INCREF( const_str_plain_RegexpTagger );
    PyList_SET_ITEM( const_list_e089443d00220c39668c69937b72bd3c_list, 10, const_str_plain_BrillTagger ); Py_INCREF( const_str_plain_BrillTagger );
    PyList_SET_ITEM( const_list_e089443d00220c39668c69937b72bd3c_list, 11, const_str_plain_BrillTaggerTrainer ); Py_INCREF( const_str_plain_BrillTaggerTrainer );
    PyList_SET_ITEM( const_list_e089443d00220c39668c69937b72bd3c_list, 12, const_str_plain_FastBrillTaggerTrainer ); Py_INCREF( const_str_plain_FastBrillTaggerTrainer );
    PyList_SET_ITEM( const_list_e089443d00220c39668c69937b72bd3c_list, 13, const_str_plain_untag ); Py_INCREF( const_str_plain_untag );
    const_str_digest_7c57284170525e69a69d713964a19f0b = UNSTREAM_STRING( &constant_bin[ 758807 ], 53, 0 );
    const_str_digest_313b5712e044742a04baf1375c766741 = UNSTREAM_STRING( &constant_bin[ 758860 ], 101, 0 );
    const_str_plain__POS_TAGGER = UNSTREAM_STRING( &constant_bin[ 758961 ], 11, 1 );
    const_str_digest_c91eafb82e5fb1b656883797d19b6d31 = UNSTREAM_STRING( &constant_bin[ 758972 ], 203, 0 );
    const_tuple_str_plain_sentences_str_plain_tagger_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sentences_str_plain_tagger_tuple, 0, const_str_plain_sentences ); Py_INCREF( const_str_plain_sentences );
    PyTuple_SET_ITEM( const_tuple_str_plain_sentences_str_plain_tagger_tuple, 1, const_str_plain_tagger ); Py_INCREF( const_str_plain_tagger );
    const_list_str_digest_6b368677bc7e29352897b876458dec81_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_6b368677bc7e29352897b876458dec81_list, 0, const_str_digest_6b368677bc7e29352897b876458dec81 ); Py_INCREF( const_str_digest_6b368677bc7e29352897b876458dec81 );
    const_tuple_str_plain_tokens_str_plain_tagger_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_tokens_str_plain_tagger_tuple, 0, const_str_plain_tokens ); Py_INCREF( const_str_plain_tokens );
    PyTuple_SET_ITEM( const_tuple_str_plain_tokens_str_plain_tagger_tuple, 1, const_str_plain_tagger ); Py_INCREF( const_str_plain_tagger );
    const_str_digest_f59fc1aaff2894c861b54149865a3066 = UNSTREAM_STRING( &constant_bin[ 759175 ], 141, 0 );
    const_str_digest_0f96f4c0879de9d729ba5a08b06bd3ca = UNSTREAM_STRING( &constant_bin[ 759316 ], 49, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nltk$tag( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_11d11a0fbac5918c7a6b127bca6d48ef;
static PyCodeObject *codeobj_d6786d53f7bdd6232541f37e58a82efe;
static PyCodeObject *codeobj_b2e8e34488f7ba696e6dfb58f69e1bcf;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_7c57284170525e69a69d713964a19f0b;
    codeobj_11d11a0fbac5918c7a6b127bca6d48ef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_batch_pos_tag, 66, const_tuple_str_plain_sentences_str_plain_tagger_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d6786d53f7bdd6232541f37e58a82efe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pos_tag, 58, const_tuple_str_plain_tokens_str_plain_tagger_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b2e8e34488f7ba696e6dfb58f69e1bcf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tag, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_nltk$tag$$$function_1_pos_tag(  );


static PyObject *MAKE_FUNCTION_nltk$tag$$$function_2_batch_pos_tag(  );


// The module function definitions.
static PyObject *impl_nltk$tag$$$function_1_pos_tag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tokens = python_pars[ 0 ];
    PyObject *var_tagger = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d6786d53f7bdd6232541f37e58a82efe, module_nltk$tag );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain_nltk );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nltk );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "nltk" );
        exception_tb = NULL;

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_data );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_load );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain__POS_TAGGER );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__POS_TAGGER );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_POS_TAGGER" );
        exception_tb = NULL;

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 63;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    assert( var_tagger == NULL );
    var_tagger = tmp_assign_source_1;

    tmp_called_instance_1 = var_tagger;

    tmp_args_element_name_2 = par_tokens;

    frame_function->f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_tag, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
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
            if ( par_tokens )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tokens,
                    par_tokens
                );

                assert( res == 0 );
            }

            if ( var_tagger )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tagger,
                    var_tagger
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
    NUITKA_CANNOT_GET_HERE( nltk$tag$$$function_1_pos_tag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tokens );
    Py_DECREF( par_tokens );
    par_tokens = NULL;

    CHECK_OBJECT( (PyObject *)var_tagger );
    Py_DECREF( var_tagger );
    var_tagger = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tokens );
    Py_DECREF( par_tokens );
    par_tokens = NULL;

    Py_XDECREF( var_tagger );
    var_tagger = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nltk$tag$$$function_1_pos_tag );
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


static PyObject *impl_nltk$tag$$$function_2_batch_pos_tag( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sentences = python_pars[ 0 ];
    PyObject *var_tagger = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_11d11a0fbac5918c7a6b127bca6d48ef, module_nltk$tag );
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain_nltk );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nltk );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "nltk" );
        exception_tb = NULL;

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_data );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_load );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain__POS_TAGGER );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__POS_TAGGER );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_POS_TAGGER" );
        exception_tb = NULL;

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto frame_exception_exit_1;
    }
    assert( var_tagger == NULL );
    var_tagger = tmp_assign_source_1;

    tmp_called_instance_1 = var_tagger;

    tmp_args_element_name_2 = par_sentences;

    frame_function->f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_batch_tag, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
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
            if ( par_sentences )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sentences,
                    par_sentences
                );

                assert( res == 0 );
            }

            if ( var_tagger )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tagger,
                    var_tagger
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
    NUITKA_CANNOT_GET_HERE( nltk$tag$$$function_2_batch_pos_tag );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_sentences );
    Py_DECREF( par_sentences );
    par_sentences = NULL;

    CHECK_OBJECT( (PyObject *)var_tagger );
    Py_DECREF( var_tagger );
    var_tagger = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sentences );
    Py_DECREF( par_sentences );
    par_sentences = NULL;

    Py_XDECREF( var_tagger );
    var_tagger = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nltk$tag$$$function_2_batch_pos_tag );
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



static PyObject *MAKE_FUNCTION_nltk$tag$$$function_1_pos_tag(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nltk$tag$$$function_1_pos_tag,
        const_str_plain_pos_tag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d6786d53f7bdd6232541f37e58a82efe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nltk$tag,
        const_str_digest_313b5712e044742a04baf1375c766741,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nltk$tag$$$function_2_batch_pos_tag(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nltk$tag$$$function_2_batch_pos_tag,
        const_str_plain_batch_pos_tag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_11d11a0fbac5918c7a6b127bca6d48ef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nltk$tag,
        const_str_digest_f59fc1aaff2894c861b54149865a3066,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nltk$tag =
{
    PyModuleDef_HEAD_INIT,
    "nltk.tag",   /* m_name */
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

MOD_INIT_DECL( nltk$tag )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nltk$tag );
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
    puts("nltk.tag: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("nltk.tag: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnltk$tag" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nltk$tag = Py_InitModule4(
        "nltk.tag",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nltk$tag = PyModule_Create( &mdef_nltk$tag );
#endif

    moduledict_nltk$tag = (PyDictObject *)((PyModuleObject *)module_nltk$tag)->md_dict;

    CHECK_OBJECT( module_nltk$tag );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c5677b4058a47a95b6a66712c7b008a0, module_nltk$tag );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nltk$tag );

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
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
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
    PyObject *tmp_import_globals_10;
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
    tmp_assign_source_1 = const_str_digest_c91eafb82e5fb1b656883797d19b6d31;
    UPDATE_STRING_DICT0( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7c57284170525e69a69d713964a19f0b;
    UPDATE_STRING_DICT0( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_6b368677bc7e29352897b876458dec81_list );
    UPDATE_STRING_DICT1( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_b2e8e34488f7ba696e6dfb58f69e1bcf, module_nltk$tag );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nltk$tag)->md_dict;
    frame_module->f_lineno = 15;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_api, tmp_import_globals_1, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$tag, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_2 = ((PyModuleObject *)module_nltk$tag)->md_dict;
    frame_module->f_lineno = 16;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_plain_util, tmp_import_globals_2, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$tag, true, tmp_star_imported_2 );
    Py_DECREF( tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_3 = ((PyModuleObject *)module_nltk$tag)->md_dict;
    frame_module->f_lineno = 17;
    tmp_star_imported_3 = IMPORT_MODULE( const_str_plain_simplify, tmp_import_globals_3, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$tag, true, tmp_star_imported_3 );
    Py_DECREF( tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_4 = ((PyModuleObject *)module_nltk$tag)->md_dict;
    frame_module->f_lineno = 18;
    tmp_star_imported_4 = IMPORT_MODULE( const_str_plain_sequential, tmp_import_globals_4, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$tag, true, tmp_star_imported_4 );
    Py_DECREF( tmp_star_imported_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_5 = ((PyModuleObject *)module_nltk$tag)->md_dict;
    frame_module->f_lineno = 19;
    tmp_star_imported_5 = IMPORT_MODULE( const_str_plain_brill, tmp_import_globals_5, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$tag, true, tmp_star_imported_5 );
    Py_DECREF( tmp_star_imported_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_6 = ((PyModuleObject *)module_nltk$tag)->md_dict;
    frame_module->f_lineno = 20;
    tmp_star_imported_6 = IMPORT_MODULE( const_str_plain_tnt, tmp_import_globals_6, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$tag, true, tmp_star_imported_6 );
    Py_DECREF( tmp_star_imported_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_7 = ((PyModuleObject *)module_nltk$tag)->md_dict;
    frame_module->f_lineno = 21;
    tmp_star_imported_7 = IMPORT_MODULE( const_str_plain_hunpos, tmp_import_globals_7, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$tag, true, tmp_star_imported_7 );
    Py_DECREF( tmp_star_imported_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_8 = ((PyModuleObject *)module_nltk$tag)->md_dict;
    frame_module->f_lineno = 22;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_nltk, tmp_import_globals_8, Py_None, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain_nltk, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_e089443d00220c39668c69937b72bd3c_list );
    UPDATE_STRING_DICT1( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    // Tried code:
    tmp_import_globals_9 = ((PyModuleObject *)module_nltk$tag)->md_dict;
    frame_module->f_lineno = 49;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_9, Py_None, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain_numpy, tmp_assign_source_6 );
    tmp_import_globals_10 = ((PyModuleObject *)module_nltk$tag)->md_dict;
    frame_module->f_lineno = 50;
    tmp_star_imported_8 = IMPORT_MODULE( const_str_plain_hmm, tmp_import_globals_10, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$tag, true, tmp_star_imported_8 );
    Py_DECREF( tmp_star_imported_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_1;
    }
    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain___all__ );

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

        exception_lineno = 51;
        goto try_except_handler_1;
    }

    tmp_right_name_1 = LIST_COPY( const_list_8f64f88b78c712766ef84ec6e2fb0626_list );
    tmp_assign_source_7 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
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


        exception_lineno = 53;
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
    NUITKA_CANNOT_GET_HERE( nltk$tag );
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
    tmp_assign_source_8 = const_str_digest_0f96f4c0879de9d729ba5a08b06bd3ca;
    UPDATE_STRING_DICT0( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain__POS_TAGGER, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_nltk$tag$$$function_1_pos_tag(  );
    UPDATE_STRING_DICT1( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain_pos_tag, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_nltk$tag$$$function_2_batch_pos_tag(  );
    UPDATE_STRING_DICT1( moduledict_nltk$tag, (Nuitka_StringObject *)const_str_plain_batch_pos_tag, tmp_assign_source_10 );

    return MOD_RETURN_VALUE( module_nltk$tag );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

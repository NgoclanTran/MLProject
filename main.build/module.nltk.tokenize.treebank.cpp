/* Generated code for Python source for module 'nltk.tokenize.treebank'
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

/* The _module_nltk$tokenize$treebank is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_nltk$tokenize$treebank;
PyDictObject *moduledict_nltk$tokenize$treebank;

/* The module constants used, if any. */
static PyObject *const_str_digest_f85b365b50ab6dedd9e106f05b82a172;
static PyObject *const_str_digest_7e8656a6bb392f84723fcc85ea50a159;
extern PyObject *const_str_digest_3336fc1882fa73e7aa6fbde4e85fd250;
static PyObject *const_str_digest_464edca104c6cc19bafccdc323a4c494;
static PyObject *const_str_digest_acee9693b56b68816d1ddfc3d8a5d3d9;
extern PyObject *const_str_plain_sub;
static PyObject *const_str_digest_92ccc9d64beb831e1f6d0846d5cebbff;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_text;
extern PyObject *const_int_neg_1;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_tuple_str_digest_4569063af87fb9ed756f0f6884800d20_tuple;
extern PyObject *const_str_plain_regexp;
static PyObject *const_str_digest_985333059461d974b3a9d6b2e13beb33;
static PyObject *const_tuple_str_digest_464edca104c6cc19bafccdc323a4c494_tuple;
static PyObject *const_str_digest_4ceff16f6b2e63684775daf32f908a59;
static PyObject *const_tuple_str_digest_7e8656a6bb392f84723fcc85ea50a159_tuple;
static PyObject *const_str_digest_feb0081e3c634911a6307e432b9eb26c;
static PyObject *const_str_digest_7df7b0ff77c48fd4572e30450bf32b65;
extern PyObject *const_str_plain_split;
static PyObject *const_tuple_str_digest_0644ef7ada04ef46ef2c7eddc2e3660a_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_836e5087147ad9fb90e7978629088121;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_d709f59193ae543cd980ab3f1deaccb5;
static PyObject *const_str_plain_CONTRACTIONS3;
static PyObject *const_str_plain_CONTRACTIONS2;
static PyObject *const_tuple_str_digest_c655d3082258f4b90ea87aa02125eb5a_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_ccf365b4312c34b26a23b264b6d4ce40;
static PyObject *const_tuple_str_digest_2ac37477e8af840f8833c92c95f535ed_tuple;
static PyObject *const_tuple_str_digest_a1970687f40deffedfdb79e474824ce9_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_ab7c9c25ddfae7dfcaae54db6a34858e;
static PyObject *const_str_digest_4c20df555106789fb907e0f9f2ff8e90;
static PyObject *const_str_digest_4569063af87fb9ed756f0f6884800d20;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_TreebankWordTokenizer;
static PyObject *const_str_digest_7b885751fe72ce96ef65f08136816112;
static PyObject *const_tuple_str_plain_self_str_plain_text_str_plain_regexp_tuple;
static PyObject *const_tuple_str_digest_4c20df555106789fb907e0f9f2ff8e90_tuple;
static PyObject *const_tuple_str_digest_7b885751fe72ce96ef65f08136816112_tuple;
static PyObject *const_tuple_str_digest_6a5391ec4b78ae2fe914ebb9f36f3c77_tuple;
static PyObject *const_str_digest_980ba680e17ee2d010a39bdbe9600015;
static PyObject *const_tuple_str_digest_ccf365b4312c34b26a23b264b6d4ce40_tuple;
extern PyObject *const_str_plain_TokenizerI;
static PyObject *const_str_digest_0644ef7ada04ef46ef2c7eddc2e3660a;
static PyObject *const_str_digest_255299b01bcba0f4ad523604c10b84d3;
extern PyObject *const_str_plain_tokenize;
extern PyObject *const_str_plain_compile;
static PyObject *const_tuple_str_digest_acee9693b56b68816d1ddfc3d8a5d3d9_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_digest_6a5391ec4b78ae2fe914ebb9f36f3c77;
extern PyObject *const_str_plain_treebank;
static PyObject *const_str_digest_a1970687f40deffedfdb79e474824ce9;
static PyObject *const_str_digest_38d570932bae3f12e723b25aca60590a;
extern PyObject *const_str_plain_api;
static PyObject *const_str_digest_9a103a1a2c6bcb7dd6e84b353d745f47;
static PyObject *const_str_digest_c655d3082258f4b90ea87aa02125eb5a;
static PyObject *const_str_digest_2ac37477e8af840f8833c92c95f535ed;
extern PyObject *const_str_plain_re;
static PyObject *const_tuple_str_digest_985333059461d974b3a9d6b2e13beb33_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_f85b365b50ab6dedd9e106f05b82a172 = UNSTREAM_STRING( &constant_bin[ 857910 ], 4, 0 );
    const_str_digest_7e8656a6bb392f84723fcc85ea50a159 = UNSTREAM_STRING( &constant_bin[ 857914 ], 35, 0 );
    const_str_digest_464edca104c6cc19bafccdc323a4c494 = UNSTREAM_STRING( &constant_bin[ 857949 ], 17, 0 );
    const_str_digest_acee9693b56b68816d1ddfc3d8a5d3d9 = UNSTREAM_STRING( &constant_bin[ 857966 ], 17, 0 );
    const_str_digest_92ccc9d64beb831e1f6d0846d5cebbff = UNSTREAM_STRING( &constant_bin[ 857983 ], 117, 0 );
    const_tuple_str_digest_4569063af87fb9ed756f0f6884800d20_tuple = PyTuple_New( 1 );
    const_str_digest_4569063af87fb9ed756f0f6884800d20 = UNSTREAM_STRING( &constant_bin[ 858100 ], 17, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_4569063af87fb9ed756f0f6884800d20_tuple, 0, const_str_digest_4569063af87fb9ed756f0f6884800d20 ); Py_INCREF( const_str_digest_4569063af87fb9ed756f0f6884800d20 );
    const_str_digest_985333059461d974b3a9d6b2e13beb33 = UNSTREAM_STRING( &constant_bin[ 858117 ], 17, 0 );
    const_tuple_str_digest_464edca104c6cc19bafccdc323a4c494_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_464edca104c6cc19bafccdc323a4c494_tuple, 0, const_str_digest_464edca104c6cc19bafccdc323a4c494 ); Py_INCREF( const_str_digest_464edca104c6cc19bafccdc323a4c494 );
    const_str_digest_4ceff16f6b2e63684775daf32f908a59 = UNSTREAM_STRING( &constant_bin[ 858134 ], 5, 0 );
    const_tuple_str_digest_7e8656a6bb392f84723fcc85ea50a159_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7e8656a6bb392f84723fcc85ea50a159_tuple, 0, const_str_digest_7e8656a6bb392f84723fcc85ea50a159 ); Py_INCREF( const_str_digest_7e8656a6bb392f84723fcc85ea50a159 );
    const_str_digest_feb0081e3c634911a6307e432b9eb26c = UNSTREAM_STRING( &constant_bin[ 56787 ], 3, 0 );
    const_str_digest_7df7b0ff77c48fd4572e30450bf32b65 = UNSTREAM_STRING( &constant_bin[ 161892 ], 3, 0 );
    const_tuple_str_digest_0644ef7ada04ef46ef2c7eddc2e3660a_tuple = PyTuple_New( 1 );
    const_str_digest_0644ef7ada04ef46ef2c7eddc2e3660a = UNSTREAM_STRING( &constant_bin[ 858139 ], 17, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_0644ef7ada04ef46ef2c7eddc2e3660a_tuple, 0, const_str_digest_0644ef7ada04ef46ef2c7eddc2e3660a ); Py_INCREF( const_str_digest_0644ef7ada04ef46ef2c7eddc2e3660a );
    const_str_digest_836e5087147ad9fb90e7978629088121 = UNSTREAM_STRING( &constant_bin[ 858156 ], 17, 0 );
    const_str_digest_d709f59193ae543cd980ab3f1deaccb5 = UNSTREAM_STRING( &constant_bin[ 858173 ], 538, 0 );
    const_str_plain_CONTRACTIONS3 = UNSTREAM_STRING( &constant_bin[ 858711 ], 13, 1 );
    const_str_plain_CONTRACTIONS2 = UNSTREAM_STRING( &constant_bin[ 858724 ], 13, 1 );
    const_tuple_str_digest_c655d3082258f4b90ea87aa02125eb5a_tuple = PyTuple_New( 1 );
    const_str_digest_c655d3082258f4b90ea87aa02125eb5a = UNSTREAM_STRING( &constant_bin[ 858737 ], 15, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c655d3082258f4b90ea87aa02125eb5a_tuple, 0, const_str_digest_c655d3082258f4b90ea87aa02125eb5a ); Py_INCREF( const_str_digest_c655d3082258f4b90ea87aa02125eb5a );
    const_str_digest_ccf365b4312c34b26a23b264b6d4ce40 = UNSTREAM_STRING( &constant_bin[ 858752 ], 17, 0 );
    const_tuple_str_digest_2ac37477e8af840f8833c92c95f535ed_tuple = PyTuple_New( 1 );
    const_str_digest_2ac37477e8af840f8833c92c95f535ed = UNSTREAM_STRING( &constant_bin[ 858769 ], 16, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_2ac37477e8af840f8833c92c95f535ed_tuple, 0, const_str_digest_2ac37477e8af840f8833c92c95f535ed ); Py_INCREF( const_str_digest_2ac37477e8af840f8833c92c95f535ed );
    const_tuple_str_digest_a1970687f40deffedfdb79e474824ce9_tuple = PyTuple_New( 1 );
    const_str_digest_a1970687f40deffedfdb79e474824ce9 = UNSTREAM_STRING( &constant_bin[ 858785 ], 22, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a1970687f40deffedfdb79e474824ce9_tuple, 0, const_str_digest_a1970687f40deffedfdb79e474824ce9 ); Py_INCREF( const_str_digest_a1970687f40deffedfdb79e474824ce9 );
    const_str_digest_ab7c9c25ddfae7dfcaae54db6a34858e = UNSTREAM_STRING( &constant_bin[ 858807 ], 9, 0 );
    const_str_digest_4c20df555106789fb907e0f9f2ff8e90 = UNSTREAM_STRING( &constant_bin[ 858816 ], 21, 0 );
    const_str_digest_7b885751fe72ce96ef65f08136816112 = UNSTREAM_STRING( &constant_bin[ 858837 ], 18, 0 );
    const_tuple_str_plain_self_str_plain_text_str_plain_regexp_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_text_str_plain_regexp_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_text_str_plain_regexp_tuple, 1, const_str_plain_text ); Py_INCREF( const_str_plain_text );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_text_str_plain_regexp_tuple, 2, const_str_plain_regexp ); Py_INCREF( const_str_plain_regexp );
    const_tuple_str_digest_4c20df555106789fb907e0f9f2ff8e90_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_4c20df555106789fb907e0f9f2ff8e90_tuple, 0, const_str_digest_4c20df555106789fb907e0f9f2ff8e90 ); Py_INCREF( const_str_digest_4c20df555106789fb907e0f9f2ff8e90 );
    const_tuple_str_digest_7b885751fe72ce96ef65f08136816112_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7b885751fe72ce96ef65f08136816112_tuple, 0, const_str_digest_7b885751fe72ce96ef65f08136816112 ); Py_INCREF( const_str_digest_7b885751fe72ce96ef65f08136816112 );
    const_tuple_str_digest_6a5391ec4b78ae2fe914ebb9f36f3c77_tuple = PyTuple_New( 1 );
    const_str_digest_6a5391ec4b78ae2fe914ebb9f36f3c77 = UNSTREAM_STRING( &constant_bin[ 858855 ], 16, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6a5391ec4b78ae2fe914ebb9f36f3c77_tuple, 0, const_str_digest_6a5391ec4b78ae2fe914ebb9f36f3c77 ); Py_INCREF( const_str_digest_6a5391ec4b78ae2fe914ebb9f36f3c77 );
    const_str_digest_980ba680e17ee2d010a39bdbe9600015 = UNSTREAM_STRING( &constant_bin[ 858871 ], 5, 0 );
    const_tuple_str_digest_ccf365b4312c34b26a23b264b6d4ce40_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_ccf365b4312c34b26a23b264b6d4ce40_tuple, 0, const_str_digest_ccf365b4312c34b26a23b264b6d4ce40 ); Py_INCREF( const_str_digest_ccf365b4312c34b26a23b264b6d4ce40 );
    const_str_digest_255299b01bcba0f4ad523604c10b84d3 = UNSTREAM_STRING( &constant_bin[ 858876 ], 8, 0 );
    const_tuple_str_digest_acee9693b56b68816d1ddfc3d8a5d3d9_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_acee9693b56b68816d1ddfc3d8a5d3d9_tuple, 0, const_str_digest_acee9693b56b68816d1ddfc3d8a5d3d9 ); Py_INCREF( const_str_digest_acee9693b56b68816d1ddfc3d8a5d3d9 );
    const_str_digest_38d570932bae3f12e723b25aca60590a = UNSTREAM_STRING( &constant_bin[ 858884 ], 22, 0 );
    const_str_digest_9a103a1a2c6bcb7dd6e84b353d745f47 = UNSTREAM_STRING( &constant_bin[ 858906 ], 58, 0 );
    const_tuple_str_digest_985333059461d974b3a9d6b2e13beb33_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_985333059461d974b3a9d6b2e13beb33_tuple, 0, const_str_digest_985333059461d974b3a9d6b2e13beb33 ); Py_INCREF( const_str_digest_985333059461d974b3a9d6b2e13beb33 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nltk$tokenize$treebank( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_bca034f5928dd39d1d69dabc1dc0ac66;
static PyCodeObject *codeobj_8f21ca207ab7631eb9152388b6b80453;
static PyCodeObject *codeobj_e702d9e5063e5eaafd7735509b2bd716;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_9a103a1a2c6bcb7dd6e84b353d745f47;
    codeobj_bca034f5928dd39d1d69dabc1dc0ac66 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_TreebankWordTokenizer, 21, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_8f21ca207ab7631eb9152388b6b80453 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_tokenize, 51, const_tuple_str_plain_self_str_plain_text_str_plain_regexp_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e702d9e5063e5eaafd7735509b2bd716 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_treebank, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_nltk$tokenize$treebank$$$class_1_TreebankWordTokenizer( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_nltk$tokenize$treebank$$$class_1_TreebankWordTokenizer$$$function_1_tokenize(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_nltk$tokenize$treebank$$$class_1_TreebankWordTokenizer( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var_CONTRACTIONS2 = NULL;
    PyObject *var_CONTRACTIONS3 = NULL;
    PyObject *var_tokenize = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_called_instance_10;
    PyObject *tmp_called_instance_11;
    PyObject *tmp_called_instance_12;
    PyObject *tmp_called_instance_13;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_38d570932bae3f12e723b25aca60590a;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_d709f59193ae543cd980ab3f1deaccb5;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bca034f5928dd39d1d69dabc1dc0ac66, module_nltk$tokenize$treebank );
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
    tmp_assign_source_3 = PyList_New( 11 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 37;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 37;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_7e8656a6bb392f84723fcc85ea50a159_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 38;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_7b885751fe72ce96ef65f08136816112_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 39;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 39;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_6a5391ec4b78ae2fe914ebb9f36f3c77_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 40;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 40;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_acee9693b56b68816d1ddfc3d8a5d3d9_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 3, tmp_list_element_1 );
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 41;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 41;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_0644ef7ada04ef46ef2c7eddc2e3660a_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 4, tmp_list_element_1 );
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 42;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_464edca104c6cc19bafccdc323a4c494_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 5, tmp_list_element_1 );
    tmp_called_instance_7 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_7 == NULL ))
    {
        tmp_called_instance_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 43;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_4569063af87fb9ed756f0f6884800d20_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 6, tmp_list_element_1 );
    tmp_called_instance_8 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_8 == NULL ))
    {
        tmp_called_instance_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 44;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_985333059461d974b3a9d6b2e13beb33_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 7, tmp_list_element_1 );
    tmp_called_instance_9 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_9 == NULL ))
    {
        tmp_called_instance_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 45;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_c655d3082258f4b90ea87aa02125eb5a_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 8, tmp_list_element_1 );
    tmp_called_instance_10 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_10 == NULL ))
    {
        tmp_called_instance_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 46;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 46;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_2ac37477e8af840f8833c92c95f535ed_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 46;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 9, tmp_list_element_1 );
    tmp_called_instance_11 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_11 == NULL ))
    {
        tmp_called_instance_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 47;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 47;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_ccf365b4312c34b26a23b264b6d4ce40_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 10, tmp_list_element_1 );
    assert( var_CONTRACTIONS2 == NULL );
    var_CONTRACTIONS2 = tmp_assign_source_3;

    tmp_assign_source_4 = PyList_New( 2 );
    tmp_called_instance_12 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_12 == NULL ))
    {
        tmp_called_instance_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 48;
    tmp_list_element_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_a1970687f40deffedfdb79e474824ce9_tuple, 0 ) );

    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_4, 0, tmp_list_element_2 );
    tmp_called_instance_13 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_13 == NULL ))
    {
        tmp_called_instance_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 49;
    tmp_list_element_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_str_digest_4c20df555106789fb907e0f9f2ff8e90_tuple, 0 ) );

    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_4 );

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_4, 1, tmp_list_element_2 );
    assert( var_CONTRACTIONS3 == NULL );
    var_CONTRACTIONS3 = tmp_assign_source_4;


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
            if ( var___module__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___module__,
                    var___module__
                );

                assert( res == 0 );
            }

            if ( var___doc__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___doc__,
                    var___doc__
                );

                assert( res == 0 );
            }

            if ( var_CONTRACTIONS2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_CONTRACTIONS2,
                    var_CONTRACTIONS2
                );

                assert( res == 0 );
            }

            if ( var_CONTRACTIONS3 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_CONTRACTIONS3,
                    var_CONTRACTIONS3
                );

                assert( res == 0 );
            }

            if ( var_tokenize )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tokenize,
                    var_tokenize
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

    tmp_assign_source_5 = MAKE_FUNCTION_nltk$tokenize$treebank$$$class_1_TreebankWordTokenizer$$$function_1_tokenize(  );
    assert( var_tokenize == NULL );
    var_tokenize = tmp_assign_source_5;

    tmp_return_value = PyDict_New();
    if ( var___module__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__
        );

        assert( res == 0 );
    }

    if ( var___doc__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__
        );

        assert( res == 0 );
    }

    if ( var_CONTRACTIONS2 )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_CONTRACTIONS2,
            var_CONTRACTIONS2
        );

        assert( res == 0 );
    }

    if ( var_CONTRACTIONS3 )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_CONTRACTIONS3,
            var_CONTRACTIONS3
        );

        assert( res == 0 );
    }

    if ( var_tokenize )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_tokenize,
            var_tokenize
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nltk$tokenize$treebank$$$class_1_TreebankWordTokenizer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var_CONTRACTIONS2 );
    Py_DECREF( var_CONTRACTIONS2 );
    var_CONTRACTIONS2 = NULL;

    CHECK_OBJECT( (PyObject *)var_CONTRACTIONS3 );
    Py_DECREF( var_CONTRACTIONS3 );
    var_CONTRACTIONS3 = NULL;

    CHECK_OBJECT( (PyObject *)var_tokenize );
    Py_DECREF( var_tokenize );
    var_tokenize = NULL;

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

    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var_CONTRACTIONS2 );
    var_CONTRACTIONS2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nltk$tokenize$treebank$$$class_1_TreebankWordTokenizer );
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


static PyObject *impl_nltk$tokenize$treebank$$$class_1_TreebankWordTokenizer$$$function_1_tokenize( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_text = python_pars[ 1 ];
    PyObject *var_regexp = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
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
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8f21ca207ab7631eb9152388b6b80453, module_nltk$tokenize$treebank );
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
    tmp_source_name_1 = par_self;

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_CONTRACTIONS2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 52;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_regexp;
        var_regexp = tmp_assign_source_3;
        Py_INCREF( var_regexp );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_regexp;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sub );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = const_str_digest_3336fc1882fa73e7aa6fbde4e85fd250;
    tmp_args_element_name_2 = par_text;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "text" );
        exception_tb = NULL;

        exception_lineno = 53;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 53;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_text;
        par_text = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
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

    tmp_source_name_3 = par_self;

    tmp_iter_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_CONTRACTIONS3 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_5;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 54;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_regexp;
        var_regexp = tmp_assign_source_7;
        Py_INCREF( var_regexp );
        Py_XDECREF( old );
    }

    tmp_source_name_4 = var_regexp;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_sub );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_3;
    }
    tmp_args_element_name_3 = const_str_digest_255299b01bcba0f4ad523604c10b84d3;
    tmp_args_element_name_4 = par_text;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "text" );
        exception_tb = NULL;

        exception_lineno = 55;
        goto try_except_handler_3;
    }

    frame_function->f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_3;
    }
    {
        PyObject *old = par_text;
        par_text = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sub );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_str_digest_836e5087147ad9fb90e7978629088121;
    tmp_args_element_name_6 = const_str_digest_f85b365b50ab6dedd9e106f05b82a172;
    tmp_args_element_name_7 = par_text;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "text" );
        exception_tb = NULL;

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 58;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_text;
        par_text = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = const_str_digest_4ceff16f6b2e63684775daf32f908a59;
    tmp_args_element_name_9 = const_str_digest_7df7b0ff77c48fd4572e30450bf32b65;
    tmp_args_element_name_10 = par_text;

    frame_function->f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_assign_source_10 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_sub, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_text;
        assert( old != NULL );
        par_text = tmp_assign_source_10;
        Py_DECREF( old );
    }

    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = const_str_digest_980ba680e17ee2d010a39bdbe9600015;
    tmp_args_element_name_12 = const_str_digest_7df7b0ff77c48fd4572e30450bf32b65;
    tmp_args_element_name_13 = par_text;

    frame_function->f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_assign_source_11 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_sub, call_args );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_text;
        assert( old != NULL );
        par_text = tmp_assign_source_11;
        Py_DECREF( old );
    }

    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 68;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = const_str_digest_ab7c9c25ddfae7dfcaae54db6a34858e;
    tmp_args_element_name_15 = const_str_digest_feb0081e3c634911a6307e432b9eb26c;
    tmp_args_element_name_16 = par_text;

    frame_function->f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16 };
        tmp_assign_source_12 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_3, const_str_plain_sub, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_text;
        assert( old != NULL );
        par_text = tmp_assign_source_12;
        Py_DECREF( old );
    }

    tmp_called_instance_4 = par_text;

    frame_function->f_lineno = 70;
    tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_split );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_text )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_text,
                    par_text
                );

                assert( res == 0 );
            }

            if ( var_regexp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_regexp,
                    var_regexp
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
    NUITKA_CANNOT_GET_HERE( nltk$tokenize$treebank$$$class_1_TreebankWordTokenizer$$$function_1_tokenize );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_text );
    Py_DECREF( par_text );
    par_text = NULL;

    Py_XDECREF( var_regexp );
    var_regexp = NULL;

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
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_text );
    par_text = NULL;

    Py_XDECREF( var_regexp );
    var_regexp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nltk$tokenize$treebank$$$class_1_TreebankWordTokenizer$$$function_1_tokenize );
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



static PyObject *MAKE_FUNCTION_nltk$tokenize$treebank$$$class_1_TreebankWordTokenizer$$$function_1_tokenize(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nltk$tokenize$treebank$$$class_1_TreebankWordTokenizer$$$function_1_tokenize,
        const_str_plain_tokenize,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8f21ca207ab7631eb9152388b6b80453,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nltk$tokenize$treebank,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nltk$tokenize$treebank =
{
    PyModuleDef_HEAD_INIT,
    "nltk.tokenize.treebank",   /* m_name */
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

MOD_INIT_DECL( nltk$tokenize$treebank )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nltk$tokenize$treebank );
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
    puts("nltk.tokenize.treebank: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("nltk.tokenize.treebank: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnltk$tokenize$treebank" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nltk$tokenize$treebank = Py_InitModule4(
        "nltk.tokenize.treebank",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_nltk$tokenize$treebank = PyModule_Create( &mdef_nltk$tokenize$treebank );
#endif

    moduledict_nltk$tokenize$treebank = (PyDictObject *)((PyModuleObject *)module_nltk$tokenize$treebank)->md_dict;

    CHECK_OBJECT( module_nltk$tokenize$treebank );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_38d570932bae3f12e723b25aca60590a, module_nltk$tokenize$treebank );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_nltk$tokenize$treebank );

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
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_key_name_1;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_tuple_element_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_92ccc9d64beb831e1f6d0846d5cebbff;
    UPDATE_STRING_DICT0( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_9a103a1a2c6bcb7dd6e84b353d745f47;
    UPDATE_STRING_DICT0( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_e702d9e5063e5eaafd7735509b2bd716, module_nltk$tokenize$treebank );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_nltk$tokenize$treebank)->md_dict;
    frame_module->f_lineno = 13;
    tmp_assign_source_3 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_1, Py_None, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_nltk$tokenize$treebank)->md_dict;
    frame_module->f_lineno = 14;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_api, tmp_import_globals_2, Py_None, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_nltk$tokenize$treebank, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    // Tried code:
    tmp_assign_source_4 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_TokenizerI );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TokenizerI );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "TokenizerI" );
        exception_tb = NULL;

        exception_lineno = 21;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_4, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_4;

    tmp_assign_source_5 = impl_nltk$tokenize$treebank$$$class_1_TreebankWordTokenizer( NULL );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_5;

    tmp_compare_left_1 = const_str_plain___metaclass__;
    tmp_compare_right_1 = tmp_class_creation_1__class_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_dict;

    tmp_key_name_1 = const_str_plain___metaclass__;
    tmp_assign_source_6 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_6 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_6;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_TreebankWordTokenizer;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 21;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_7;

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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
    tmp_assign_source_8 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_nltk$tokenize$treebank, (Nuitka_StringObject *)const_str_plain_TreebankWordTokenizer, tmp_assign_source_8 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;


    return MOD_RETURN_VALUE( module_nltk$tokenize$treebank );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}

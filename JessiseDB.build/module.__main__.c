/* Generated code for Python module '__main__'
 * created by Nuitka version 0.6.19.7
 *
 * This code is in part copyright 2021 Kay Hayen.
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

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module___main__" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module___main__;
PyDictObject *moduledict___main__;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[225];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[225];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("__main__"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for(int i = 0; i < 225; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 1
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants___main__(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for(int i = 0; i < 225; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_586c3651c7a0d000c34a1ec464748c13;
static PyCodeObject *codeobj_1fdea552a98882270c74bdf9465d7162;
/* For use in "MainProgram.c". */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[172]; CHECK_OBJECT(module_filename_obj);
    codeobj_586c3651c7a0d000c34a1ec464748c13 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[223], NULL, NULL, 0, 0, 0);
    codeobj_1fdea552a98882270c74bdf9465d7162 = MAKE_CODEOBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[222], mod_consts[224], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION___main__$$$function__1_Shell();


// The module function definitions.
static PyObject *impl___main__$$$function__1_Shell(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_userNameGot = NULL;
    PyObject *var_userPasswordGot = NULL;
    PyObject *var_boot = NULL;
    PyObject *var_UserInfo = NULL;
    PyObject *var_Error = NULL;
    PyObject *var_start_time = NULL;
    PyObject *var_recieve = NULL;
    PyObject *var_startIndex = NULL;
    PyObject *var_IndexFor = NULL;
    PyObject *var_IndexWith = NULL;
    PyObject *var_IndexWithStart = NULL;
    PyObject *var_dataFrame = NULL;
    PyObject *var_dataBase = NULL;
    PyObject *var_data = NULL;
    PyObject *var_fromIndex = NULL;
    PyObject *var_ToIndex = NULL;
    PyObject *var_WithIndex = NULL;
    PyObject *var_baseAndFrame = NULL;
    PyObject *var_sourcePath = NULL;
    PyObject *var_targetBase = NULL;
    PyObject *var_targetFrame = NULL;
    PyObject *var_encoder = NULL;
    PyObject *var_endIndex = NULL;
    PyObject *var_addUserName = NULL;
    PyObject *var_addUserAuthority = NULL;
    PyObject *var_addUserPasswd = NULL;
    PyObject *var_dotIndex = NULL;
    PyObject *var_dataBaseUsed = NULL;
    PyObject *var_extract = NULL;
    PyObject *var_usingFrame = NULL;
    PyObject *var_limitIndex = NULL;
    PyObject *var_math_symblos = NULL;
    PyObject *var_i = NULL;
    PyObject *var_caching_dataframe = NULL;
    PyObject *var_save_name = NULL;
    PyObject *var_save_format = NULL;
    PyObject *var_colName = NULL;
    PyObject *var_RowIndex = NULL;
    PyObject *var_withIndex = NULL;
    PyObject *var_colIndex = NULL;
    PyObject *var_end_time = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_1fdea552a98882270c74bdf9465d7162;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
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
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
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
    PyObject *exception_preserved_type_4;
    PyObject *exception_preserved_value_4;
    PyTracebackObject *exception_preserved_tb_4;
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
    PyObject *exception_preserved_type_5;
    PyObject *exception_preserved_value_5;
    PyTracebackObject *exception_preserved_tb_5;
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
    PyObject *exception_preserved_type_6;
    PyObject *exception_preserved_value_6;
    PyTracebackObject *exception_preserved_tb_6;
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
    PyObject *exception_preserved_type_7;
    PyObject *exception_preserved_value_7;
    PyTracebackObject *exception_preserved_tb_7;
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
    PyObject *exception_preserved_type_8;
    PyObject *exception_preserved_value_8;
    PyTracebackObject *exception_preserved_tb_8;
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
    PyObject *exception_preserved_type_9;
    PyObject *exception_preserved_value_9;
    PyTracebackObject *exception_preserved_tb_9;
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
    PyObject *exception_preserved_type_10;
    PyObject *exception_preserved_value_10;
    PyTracebackObject *exception_preserved_tb_10;
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
    PyObject *exception_preserved_type_11;
    PyObject *exception_preserved_value_11;
    PyTracebackObject *exception_preserved_tb_11;
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
    PyObject *exception_preserved_type_12;
    PyObject *exception_preserved_value_12;
    PyTracebackObject *exception_preserved_tb_12;
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
    PyObject *exception_preserved_type_13;
    PyObject *exception_preserved_value_13;
    PyTracebackObject *exception_preserved_tb_13;
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
    PyObject *exception_preserved_type_14;
    PyObject *exception_preserved_value_14;
    PyTracebackObject *exception_preserved_tb_14;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_preserved_type_15;
    PyObject *exception_preserved_value_15;
    PyTracebackObject *exception_preserved_tb_15;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_preserved_type_16;
    PyObject *exception_preserved_value_16;
    PyTracebackObject *exception_preserved_tb_16;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_preserved_type_17;
    PyObject *exception_preserved_value_17;
    PyTracebackObject *exception_preserved_tb_17;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    static struct Nuitka_FrameObject *cache_frame_1fdea552a98882270c74bdf9465d7162 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1fdea552a98882270c74bdf9465d7162)) {
        Py_XDECREF(cache_frame_1fdea552a98882270c74bdf9465d7162);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1fdea552a98882270c74bdf9465d7162 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1fdea552a98882270c74bdf9465d7162 = MAKE_FUNCTION_FRAME(codeobj_1fdea552a98882270c74bdf9465d7162, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1fdea552a98882270c74bdf9465d7162->m_type_description == NULL);
    frame_1fdea552a98882270c74bdf9465d7162 = cache_frame_1fdea552a98882270c74bdf9465d7162;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1fdea552a98882270c74bdf9465d7162);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1fdea552a98882270c74bdf9465d7162) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_value_1 != NULL);
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 32;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[1]);

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_userNameGot == NULL);
        var_userNameGot = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 33;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[3]);

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_userPasswordGot == NULL);
        var_userPasswordGot = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_userNameGot);
        tmp_args_element_value_1 = var_userNameGot;
        CHECK_OBJECT(var_userPasswordGot);
        tmp_args_element_value_2 = var_userPasswordGot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 35;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_boot == NULL);
        var_boot = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_1 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 36;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_UserInfo == NULL);
        var_UserInfo = tmp_assign_source_4;
    }
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = EXC_VALUE(PyThreadState_GET());
        assert(var_Error == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_Error = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_4 != NULL);
        tmp_tuple_element_1 = mod_consts[7];
        tmp_string_concat_values_1 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_userNameGot);
            tmp_format_value_1 = var_userNameGot;
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[9];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_1 = var_Error;
            tmp_format_value_2 = PyObject_Unicode(tmp_unicode_arg_1);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_3 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 38;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 34;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        if (var_UserInfo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 39;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = var_UserInfo;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_8);
    }
    loop_start_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 47;
        tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[14]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_start_time;
            var_start_time = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[0]);
        assert(tmp_called_value_5 != NULL);
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 49;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[15]);

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_recieve;
            var_recieve = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var_recieve);
        tmp_compexpr_left_3 = var_recieve;
        tmp_compexpr_right_3 = LIST_COPY(mod_consts[16]);
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        Py_DECREF(tmp_compexpr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_2;
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_6 != NULL);
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 51;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[17]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto loop_end_1;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_4 = mod_consts[20];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_5 = var_recieve;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_compexpr_left_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_1 = var_recieve;
        tmp_subscript_value_1 = mod_consts[22];
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_UserInfo == NULL) {
            Py_DECREF(tmp_kw_call_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_2 = var_UserInfo;
        tmp_subscript_value_2 = mod_consts[23];
        tmp_kw_call_value_1_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 57;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, kw_values, mod_consts[24]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_4 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 58;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[25]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_4;
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

    // Preserve existing published exception id 2.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_2, &exception_preserved_value_2, &exception_preserved_tb_2);

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_4, exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_5 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_5, tmp_compexpr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_12;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_8 != NULL);
        tmp_tuple_element_2 = mod_consts[26];
        tmp_string_concat_values_2 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_unicode_arg_2;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_2 = var_Error;
            tmp_format_value_3 = PyObject_Unicode(tmp_unicode_arg_2);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_3 = mod_consts[8];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_6 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 60;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 56;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_7;
    branch_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_5;
    // End of try:
    try_end_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_7 = mod_consts[27];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_8 = var_recieve;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_compexpr_left_6 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_compexpr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        Py_DECREF(tmp_compexpr_left_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
        assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_value_1;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_3 = var_recieve;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[28]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 63;
        tmp_left_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[29]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_1 = mod_consts[30];
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_startIndex;
            var_startIndex = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_value_2;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_right_value_2;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_4 = var_recieve;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[28]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 64;
        tmp_left_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[31]);

        Py_DECREF(tmp_called_value_10);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_2 = mod_consts[32];
        tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_left_value_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_IndexFor;
            var_IndexFor = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_5 = var_recieve;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[28]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 65;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[33]);

        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_IndexWith;
            var_IndexWith = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_value_3;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_right_value_3;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_6 = var_recieve;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[28]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 66;
        tmp_left_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[33]);

        Py_DECREF(tmp_called_value_12);
        if (tmp_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_3 = mod_consts[34];
        tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_left_value_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_IndexWithStart;
            var_IndexWithStart = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_8 = var_recieve;
        CHECK_OBJECT(var_startIndex);
        tmp_start_value_1 = var_startIndex;
        CHECK_OBJECT(var_IndexFor);
        tmp_left_value_4 = var_IndexFor;
        tmp_right_value_4 = mod_consts[32];
        tmp_stop_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_4, tmp_right_value_4);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_3 = MAKE_SLICEOBJ2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_3 == NULL));
        tmp_expression_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[35]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 69;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_13, mod_consts[36]);

        Py_DECREF(tmp_called_value_13);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_dataFrame;
            var_dataFrame = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_start_value_2;
        PyObject *tmp_stop_value_2;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_10 = var_recieve;
        CHECK_OBJECT(var_IndexFor);
        tmp_start_value_2 = var_IndexFor;
        CHECK_OBJECT(var_IndexWith);
        tmp_stop_value_2 = var_IndexWith;
        tmp_subscript_value_4 = MAKE_SLICEOBJ2(tmp_start_value_2, tmp_stop_value_2);
        assert(!(tmp_subscript_value_4 == NULL));
        tmp_expression_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[35]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 70;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_14, mod_consts[36]);

        Py_DECREF(tmp_called_value_14);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_dataBase;
            var_dataBase = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_start_value_3;
        PyObject *tmp_stop_value_3;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_11 = var_recieve;
        CHECK_OBJECT(var_IndexWithStart);
        tmp_start_value_3 = var_IndexWithStart;
        tmp_stop_value_3 = Py_None;
        tmp_subscript_value_5 = MAKE_SLICEOBJ2(tmp_start_value_3, tmp_stop_value_3);
        assert(!(tmp_subscript_value_5 == NULL));
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_data;
            var_data = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_15;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_1;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_dataBase);
        tmp_kw_call_value_0_2 = var_dataBase;
        CHECK_OBJECT(var_dataFrame);
        tmp_kw_call_value_1_2 = var_dataFrame;
        CHECK_OBJECT(var_data);
        tmp_kw_call_value_2_1 = var_data;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 72;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1};

            tmp_assign_source_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_15, kw_values, mod_consts[38]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_6 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 73;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[39]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_5);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT(var_recieve);
        tmp_compexpr_left_7 = var_recieve;
        tmp_compexpr_right_7 = mod_consts[40];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_7, tmp_compexpr_right_7);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
        assert(tmp_condition_result_7 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_6;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 75;
        tmp_call_result_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_16);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_9 = mod_consts[42];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_10 = var_recieve;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_compexpr_left_8 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_7,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_compexpr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_8 = Py_None;
        tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_left_8);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        assert(tmp_condition_result_8 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_8:;
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_12 = var_recieve;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[28]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 79;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[43]);

        Py_DECREF(tmp_called_value_17);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_fromIndex;
            var_fromIndex = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_13 = var_recieve;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[28]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 80;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[44]);

        Py_DECREF(tmp_called_value_18);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_ToIndex;
            var_ToIndex = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_14 = var_recieve;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[28]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 81;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[33]);

        Py_DECREF(tmp_called_value_19);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_WithIndex;
            var_WithIndex = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_start_value_4;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        PyObject *tmp_stop_value_4;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_16 = var_recieve;
        CHECK_OBJECT(var_ToIndex);
        tmp_left_value_5 = var_ToIndex;
        tmp_right_value_5 = mod_consts[45];
        tmp_start_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_5, tmp_right_value_5);
        if (tmp_start_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_WithIndex);
        tmp_stop_value_4 = var_WithIndex;
        tmp_subscript_value_6 = MAKE_SLICEOBJ2(tmp_start_value_4, tmp_stop_value_4);
        Py_DECREF(tmp_start_value_4);
        assert(!(tmp_subscript_value_6 == NULL));
        tmp_expression_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[35]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 82;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_20, mod_consts[36]);

        Py_DECREF(tmp_called_value_20);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_baseAndFrame;
            var_baseAndFrame = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_start_value_5;
        PyObject *tmp_left_value_6;
        PyObject *tmp_right_value_6;
        PyObject *tmp_stop_value_5;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_18 = var_recieve;
        CHECK_OBJECT(var_fromIndex);
        tmp_left_value_6 = var_fromIndex;
        tmp_right_value_6 = mod_consts[34];
        tmp_start_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_6, tmp_right_value_6);
        if (tmp_start_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_ToIndex);
        tmp_stop_value_5 = var_ToIndex;
        tmp_subscript_value_7 = MAKE_SLICEOBJ2(tmp_start_value_5, tmp_stop_value_5);
        Py_DECREF(tmp_start_value_5);
        assert(!(tmp_subscript_value_7 == NULL));
        tmp_expression_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_7);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[35]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 83;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_21, mod_consts[36]);

        Py_DECREF(tmp_called_value_21);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_sourcePath;
            var_sourcePath = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_stop_value_6;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(var_baseAndFrame);
        tmp_expression_value_19 = var_baseAndFrame;
        CHECK_OBJECT(var_baseAndFrame);
        tmp_expression_value_20 = var_baseAndFrame;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[28]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 84;
        tmp_stop_value_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_22, mod_consts[46]);

        Py_DECREF(tmp_called_value_22);
        if (tmp_stop_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_subscript_value_8 = MAKE_SLICEOBJ1(tmp_stop_value_6);
        Py_DECREF(tmp_stop_value_6);
        assert(!(tmp_subscript_value_8 == NULL));
        tmp_assign_source_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_targetBase;
            var_targetBase = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_start_value_6;
        PyObject *tmp_left_value_7;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_right_value_7;
        PyObject *tmp_stop_value_7;
        CHECK_OBJECT(var_baseAndFrame);
        tmp_expression_value_21 = var_baseAndFrame;
        CHECK_OBJECT(var_baseAndFrame);
        tmp_expression_value_22 = var_baseAndFrame;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[28]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 85;
        tmp_left_value_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_23, mod_consts[46]);

        Py_DECREF(tmp_called_value_23);
        if (tmp_left_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_right_value_7 = mod_consts[47];
        tmp_start_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_7, tmp_right_value_7);
        Py_DECREF(tmp_left_value_7);
        if (tmp_start_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_stop_value_7 = Py_None;
        tmp_subscript_value_9 = MAKE_SLICEOBJ2(tmp_start_value_6, tmp_stop_value_7);
        Py_DECREF(tmp_start_value_6);
        assert(!(tmp_subscript_value_9 == NULL));
        tmp_assign_source_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_targetFrame;
            var_targetFrame = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_start_value_7;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_8;
        PyObject *tmp_stop_value_8;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_23 = var_recieve;
        CHECK_OBJECT(var_WithIndex);
        tmp_left_value_8 = var_WithIndex;
        tmp_right_value_8 = mod_consts[34];
        tmp_start_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_8, tmp_right_value_8);
        if (tmp_start_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_stop_value_8 = Py_None;
        tmp_subscript_value_10 = MAKE_SLICEOBJ2(tmp_start_value_7, tmp_stop_value_8);
        Py_DECREF(tmp_start_value_7);
        assert(!(tmp_subscript_value_10 == NULL));
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_encoder;
            var_encoder = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_24;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_11;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_sourcePath);
        tmp_kw_call_value_0_3 = var_sourcePath;
        CHECK_OBJECT(var_targetBase);
        tmp_kw_call_value_1_3 = var_targetBase;
        CHECK_OBJECT(var_targetFrame);
        tmp_kw_call_value_2_2 = var_targetFrame;
        CHECK_OBJECT(var_encoder);
        tmp_kw_call_value_3_1 = var_encoder;
        if (var_UserInfo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_24 = var_UserInfo;
        tmp_subscript_value_11 = mod_consts[23];
        tmp_kw_call_value_4_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_11);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 90;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_2, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_assign_source_29 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_24, kw_values, mod_consts[49]);
        }

        Py_DECREF(tmp_kw_call_value_4_1);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_8 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 91;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[50]);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto try_end_7;
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

    // Preserve existing published exception id 3.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_3, &exception_preserved_value_3, &exception_preserved_tb_3);

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_7);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_7, exception_keeper_tb_7);
    PUBLISH_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        tmp_compexpr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_9 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_9, tmp_compexpr_right_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_30;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_called_value_25 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_25 != NULL);
        tmp_tuple_element_3 = mod_consts[51];
        tmp_string_concat_values_3 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_format_value_5;
            PyObject *tmp_unicode_arg_3;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            if (var_sourcePath == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 93;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_format_value_4 = var_sourcePath;
            tmp_format_spec_4 = mod_consts[8];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[53];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_3 = var_Error;
            tmp_format_value_5 = PyObject_Unicode(tmp_unicode_arg_3);
            if (tmp_format_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_5 = mod_consts[8];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_11 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 93;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_8);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_10;
    // End of try:
    try_end_8:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 78;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
    branch_end_9:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_5;
    // End of try:
    try_end_9:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT(var_recieve);
        tmp_compexpr_left_10 = var_recieve;
        tmp_compexpr_right_10 = mod_consts[54];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_10, tmp_compexpr_right_10);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
        assert(tmp_condition_result_10 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_10:;
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_26;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 96;
        tmp_assign_source_31 = CALL_FUNCTION_NO_ARGS(tmp_called_value_26);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_9 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 97;
        tmp_call_result_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[56]);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto try_end_10;
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

    // Preserve existing published exception id 4.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_4, &exception_preserved_value_4, &exception_preserved_tb_4);

    if (exception_keeper_tb_10 == NULL) {
        exception_keeper_tb_10 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_10);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_keeper_tb_10 = ADD_TRACEBACK(exception_keeper_tb_10, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_10);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_10, exception_keeper_tb_10);
    PUBLISH_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    // Tried code:
    {
        bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        tmp_compexpr_left_11 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_11 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_11, tmp_compexpr_right_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_32;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        tmp_called_value_27 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_27 != NULL);
        tmp_tuple_element_4 = mod_consts[57];
        tmp_string_concat_values_4 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_6;
            PyObject *tmp_unicode_arg_4;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_4 = var_Error;
            tmp_format_value_6 = PyObject_Unicode(tmp_unicode_arg_4);
            if (tmp_format_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_6 = mod_consts[8];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_args_element_value_12 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 99;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_10);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_13;
    // End of try:
    try_end_11:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_11;
    branch_no_11:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 95;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
    branch_end_11:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_5;
    // End of try:
    try_end_12:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(exception_preserved_type_4, exception_preserved_value_4, exception_preserved_tb_4);

    goto try_end_10;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_10:;
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        CHECK_OBJECT(var_recieve);
        tmp_compexpr_left_12 = var_recieve;
        tmp_compexpr_right_12 = mod_consts[58];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_12, tmp_compexpr_right_12);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
        assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_12:;
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_28;
        PyObject *tmp_kw_call_value_0_4;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        tmp_kw_call_value_0_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_kw_call_value_0_4 == NULL)) {
            tmp_kw_call_value_0_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 102;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};

            tmp_assign_source_33 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_28, kw_values, mod_consts[60]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_10 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 103;
        tmp_call_result_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[56]);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        Py_DECREF(tmp_call_result_11);
    }
    goto try_end_13;
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

    // Preserve existing published exception id 5.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_5, &exception_preserved_value_5, &exception_preserved_tb_5);

    if (exception_keeper_tb_13 == NULL) {
        exception_keeper_tb_13 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_13);
    } else if (exception_keeper_lineno_13 != 0) {
        exception_keeper_tb_13 = ADD_TRACEBACK(exception_keeper_tb_13, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_13);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_13, exception_keeper_tb_13);
    PUBLISH_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
    // Tried code:
    {
        bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        tmp_compexpr_left_13 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_13 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_13, tmp_compexpr_right_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_34;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_5;
        tmp_called_value_29 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_29 != NULL);
        tmp_tuple_element_5 = mod_consts[61];
        tmp_string_concat_values_5 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_7;
            PyObject *tmp_unicode_arg_5;
            PyObject *tmp_format_spec_7;
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_5 = var_Error;
            tmp_format_value_7 = PyObject_Unicode(tmp_unicode_arg_5);
            if (tmp_format_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_format_spec_7 = mod_consts[8];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_string_concat_values_5);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_args_element_value_13 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 105;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_12);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_16;
    // End of try:
    try_end_14:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_13;
    branch_no_13:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 101;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
    branch_end_13:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5);

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_5;
    // End of try:
    try_end_15:;
    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(exception_preserved_type_5, exception_preserved_value_5, exception_preserved_tb_5);

    goto try_end_13;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_13:;
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_14 = mod_consts[62];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_15 = var_recieve;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_compexpr_left_14 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_11,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_compexpr_left_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_14 = Py_None;
        tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_14, tmp_compexpr_right_14);
        Py_DECREF(tmp_compexpr_left_14);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
        assert(tmp_condition_result_14 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_14:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_called_instance_13;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 108;
        tmp_called_instance_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[64],
            PyTuple_GET_ITEM(mod_consts[65], 0)
        );

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 108;
        tmp_expression_value_25 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[66]);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[35]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 108;
        tmp_compexpr_left_15 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_30, mod_consts[67]);

        Py_DECREF(tmp_called_value_30);
        if (tmp_compexpr_left_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_15 = mod_consts[68];
        tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_15, tmp_compexpr_right_15);
        Py_DECREF(tmp_compexpr_left_15);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
        assert(tmp_condition_result_15 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_26 = var_recieve;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[28]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 109;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_31, mod_consts[69]);

        Py_DECREF(tmp_called_value_31);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_startIndex;
            var_startIndex = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_27 = var_recieve;
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[28]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 110;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_32, mod_consts[44]);

        Py_DECREF(tmp_called_value_32);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_endIndex;
            var_endIndex = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_start_value_8;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_9;
        PyObject *tmp_stop_value_9;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_29 = var_recieve;
        CHECK_OBJECT(var_startIndex);
        tmp_left_value_9 = var_startIndex;
        tmp_right_value_9 = mod_consts[34];
        tmp_start_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_9, tmp_right_value_9);
        if (tmp_start_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_endIndex);
        tmp_stop_value_9 = var_endIndex;
        tmp_subscript_value_12 = MAKE_SLICEOBJ2(tmp_start_value_8, tmp_stop_value_9);
        Py_DECREF(tmp_start_value_8);
        assert(!(tmp_subscript_value_12 == NULL));
        tmp_expression_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_12);
        Py_DECREF(tmp_subscript_value_12);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[35]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 111;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_33, mod_consts[36]);

        Py_DECREF(tmp_called_value_33);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_addUserName;
            var_addUserName = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_start_value_9;
        PyObject *tmp_left_value_10;
        PyObject *tmp_right_value_10;
        PyObject *tmp_stop_value_10;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_31 = var_recieve;
        CHECK_OBJECT(var_endIndex);
        tmp_left_value_10 = var_endIndex;
        tmp_right_value_10 = mod_consts[45];
        tmp_start_value_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_10, tmp_right_value_10);
        if (tmp_start_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_stop_value_10 = Py_None;
        tmp_subscript_value_13 = MAKE_SLICEOBJ2(tmp_start_value_9, tmp_stop_value_10);
        Py_DECREF(tmp_start_value_9);
        assert(!(tmp_subscript_value_13 == NULL));
        tmp_expression_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_13);
        Py_DECREF(tmp_subscript_value_13);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[35]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 112;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_34, mod_consts[36]);

        Py_DECREF(tmp_called_value_34);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_addUserAuthority;
            var_addUserAuthority = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_string_concat_values_6;
        PyObject *tmp_tuple_element_6;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_6 = mod_consts[70];
        tmp_string_concat_values_6 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_8;
            PyObject *tmp_format_spec_8;
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
            CHECK_OBJECT(var_addUserName);
            tmp_format_value_8 = var_addUserName;
            tmp_format_spec_8 = mod_consts[8];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_8, tmp_format_spec_8);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[71];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_string_concat_values_6);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_args_element_value_16 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_6);
        Py_DECREF(tmp_string_concat_values_6);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 113;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_16);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_addUserPasswd;
            var_addUserPasswd = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_36;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_3;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        CHECK_OBJECT(var_addUserName);
        tmp_kw_call_value_0_5 = var_addUserName;
        CHECK_OBJECT(var_addUserPasswd);
        tmp_kw_call_value_1_4 = var_addUserPasswd;
        CHECK_OBJECT(var_addUserAuthority);
        tmp_kw_call_value_2_3 = var_addUserAuthority;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 115;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_4, tmp_kw_call_value_2_3};

            tmp_assign_source_40 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_36, kw_values, mod_consts[73]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_call_result_13;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_14 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 116;
        tmp_call_result_13 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[74]);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_13);
    }
    goto try_end_16;
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

    // Preserve existing published exception id 6.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_6, &exception_preserved_value_6, &exception_preserved_tb_6);

    if (exception_keeper_tb_16 == NULL) {
        exception_keeper_tb_16 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_16);
    } else if (exception_keeper_lineno_16 != 0) {
        exception_keeper_tb_16 = ADD_TRACEBACK(exception_keeper_tb_16, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_16);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_16, exception_keeper_tb_16);
    PUBLISH_EXCEPTION(&exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16);
    // Tried code:
    {
        bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        tmp_compexpr_left_16 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_16 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_16, tmp_compexpr_right_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_16 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_41;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_string_concat_values_7;
        PyObject *tmp_tuple_element_7;
        tmp_called_value_37 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_37 != NULL);
        tmp_tuple_element_7 = mod_consts[75];
        tmp_string_concat_values_7 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_9;
            PyObject *tmp_format_spec_9;
            PyObject *tmp_format_value_10;
            PyObject *tmp_format_spec_10;
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 0, tmp_tuple_element_7);
            CHECK_OBJECT(var_addUserName);
            tmp_format_value_9 = var_addUserName;
            tmp_format_spec_9 = mod_consts[8];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_9, tmp_format_spec_9);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[76];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 2, tmp_tuple_element_7);
            CHECK_OBJECT(var_Error);
            tmp_format_value_10 = var_Error;
            tmp_format_spec_10 = mod_consts[8];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tmp_format_value_10, tmp_format_spec_10);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 3, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_string_concat_values_7);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_args_element_value_17 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_7);
        Py_DECREF(tmp_string_concat_values_7);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 118;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        Py_DECREF(tmp_call_result_14);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_19;
    // End of try:
    try_end_17:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_16;
    branch_no_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 114;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
    branch_end_16:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(exception_preserved_type_6, exception_preserved_value_6, exception_preserved_tb_6);

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_5;
    // End of try:
    try_end_18:;
    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(exception_preserved_type_6, exception_preserved_value_6, exception_preserved_tb_6);

    goto try_end_16;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_16:;
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_call_result_15;
        tmp_called_value_38 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_38 != NULL);
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 120;
        tmp_call_result_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_38, mod_consts[77]);

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_15);
    }
    branch_end_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_17;
        PyObject *tmp_compexpr_right_17;
        CHECK_OBJECT(var_recieve);
        tmp_compexpr_left_17 = var_recieve;
        tmp_compexpr_right_17 = mod_consts[78];
        tmp_condition_result_17 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_17, tmp_compexpr_right_17);
        if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
        assert(tmp_condition_result_17 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_17:;
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_39;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 123;
        tmp_assign_source_42 = CALL_FUNCTION_NO_ARGS(tmp_called_value_39);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_call_result_16;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_15 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 124;
        tmp_call_result_16 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, mod_consts[80]);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        Py_DECREF(tmp_call_result_16);
    }
    goto try_end_19;
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

    // Preserve existing published exception id 7.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_7, &exception_preserved_value_7, &exception_preserved_tb_7);

    if (exception_keeper_tb_19 == NULL) {
        exception_keeper_tb_19 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_19);
    } else if (exception_keeper_lineno_19 != 0) {
        exception_keeper_tb_19 = ADD_TRACEBACK(exception_keeper_tb_19, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_19);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_19, exception_keeper_tb_19);
    PUBLISH_EXCEPTION(&exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19);
    // Tried code:
    {
        bool tmp_condition_result_18;
        PyObject *tmp_compexpr_left_18;
        PyObject *tmp_compexpr_right_18;
        tmp_compexpr_left_18 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_18 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_18, tmp_compexpr_right_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_43;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_string_concat_values_8;
        PyObject *tmp_tuple_element_8;
        tmp_called_value_40 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_40 != NULL);
        tmp_tuple_element_8 = mod_consts[81];
        tmp_string_concat_values_8 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_11;
            PyObject *tmp_unicode_arg_6;
            PyObject *tmp_format_spec_11;
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 0, tmp_tuple_element_8);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_6 = var_Error;
            tmp_format_value_11 = PyObject_Unicode(tmp_unicode_arg_6);
            if (tmp_format_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            tmp_format_spec_11 = mod_consts[8];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tmp_format_value_11, tmp_format_spec_11);
            Py_DECREF(tmp_format_value_11);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_string_concat_values_8);
        goto try_except_handler_23;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_args_element_value_18 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_8);
        Py_DECREF(tmp_string_concat_values_8);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 126;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        Py_DECREF(tmp_call_result_17);
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_22;
    // End of try:
    try_end_20:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_18;
    branch_no_18:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 122;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
    branch_end_18:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(exception_preserved_type_7, exception_preserved_value_7, exception_preserved_tb_7);

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_5;
    // End of try:
    try_end_21:;
    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(exception_preserved_type_7, exception_preserved_value_7, exception_preserved_tb_7);

    goto try_end_19;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_19:;
    goto branch_end_17;
    branch_no_17:;
    {
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_compexpr_left_19;
        PyObject *tmp_compexpr_right_19;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_19 = mod_consts[82];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_20 = var_recieve;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 128;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_compexpr_left_19 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_16,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_compexpr_left_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_19 = Py_None;
        tmp_condition_result_19 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_19, tmp_compexpr_right_19);
        Py_DECREF(tmp_compexpr_left_19);
        if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
        assert(tmp_condition_result_19 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_32 = var_recieve;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[28]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 129;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_41, mod_consts[46]);

        Py_DECREF(tmp_called_value_41);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_dotIndex;
            var_dotIndex = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_stop_value_11;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_34 = var_recieve;
        CHECK_OBJECT(var_dotIndex);
        tmp_stop_value_11 = var_dotIndex;
        tmp_subscript_value_14 = MAKE_SLICEOBJ1(tmp_stop_value_11);
        assert(!(tmp_subscript_value_14 == NULL));
        tmp_expression_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_14);
        Py_DECREF(tmp_subscript_value_14);
        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[35]);
        Py_DECREF(tmp_expression_value_33);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 130;
        tmp_assign_source_45 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_42, mod_consts[83]);

        Py_DECREF(tmp_called_value_42);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_targetBase;
            var_targetBase = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_start_value_10;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_11;
        PyObject *tmp_stop_value_12;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_35 = var_recieve;
        CHECK_OBJECT(var_dotIndex);
        tmp_left_value_11 = var_dotIndex;
        tmp_right_value_11 = mod_consts[47];
        tmp_start_value_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_11, tmp_right_value_11);
        if (tmp_start_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_stop_value_12 = Py_None;
        tmp_subscript_value_15 = MAKE_SLICEOBJ2(tmp_start_value_10, tmp_stop_value_12);
        Py_DECREF(tmp_start_value_10);
        assert(!(tmp_subscript_value_15 == NULL));
        tmp_assign_source_46 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_15);
        Py_DECREF(tmp_subscript_value_15);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_targetFrame;
            var_targetFrame = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_call_result_18;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_5;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(var_targetBase);
        tmp_kw_call_value_0_6 = var_targetBase;
        CHECK_OBJECT(var_targetFrame);
        tmp_kw_call_value_1_5 = var_targetFrame;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 133;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_5};

            tmp_call_result_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_43, kw_values, mod_consts[85]);
        }

        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        Py_DECREF(tmp_call_result_18);
    }
    goto try_end_22;
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

    // Preserve existing published exception id 8.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_8, &exception_preserved_value_8, &exception_preserved_tb_8);

    if (exception_keeper_tb_22 == NULL) {
        exception_keeper_tb_22 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_22);
    } else if (exception_keeper_lineno_22 != 0) {
        exception_keeper_tb_22 = ADD_TRACEBACK(exception_keeper_tb_22, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_22);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_22, &exception_keeper_value_22, &exception_keeper_tb_22);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_22, exception_keeper_tb_22);
    PUBLISH_EXCEPTION(&exception_keeper_type_22, &exception_keeper_value_22, &exception_keeper_tb_22);
    // Tried code:
    {
        bool tmp_condition_result_20;
        PyObject *tmp_compexpr_left_20;
        PyObject *tmp_compexpr_right_20;
        tmp_compexpr_left_20 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_20 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_20, tmp_compexpr_right_20);
        assert(!(tmp_res == -1));
        tmp_condition_result_20 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_47;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_string_concat_values_9;
        PyObject *tmp_tuple_element_9;
        tmp_called_value_44 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_44 != NULL);
        tmp_tuple_element_9 = mod_consts[86];
        tmp_string_concat_values_9 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_12;
            PyObject *tmp_unicode_arg_7;
            PyObject *tmp_format_spec_12;
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 0, tmp_tuple_element_9);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_7 = var_Error;
            tmp_format_value_12 = PyObject_Unicode(tmp_unicode_arg_7);
            if (tmp_format_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            tmp_format_spec_12 = mod_consts[8];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tmp_format_value_12, tmp_format_spec_12);
            Py_DECREF(tmp_format_value_12);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_string_concat_values_9);
        goto try_except_handler_26;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_args_element_value_21 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_9);
        Py_DECREF(tmp_string_concat_values_9);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 135;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_19);
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_25;
    // End of try:
    try_end_23:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_20;
    branch_no_20:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 132;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
    branch_end_20:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(exception_preserved_type_8, exception_preserved_value_8, exception_preserved_tb_8);

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_5;
    // End of try:
    try_end_24:;
    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(exception_preserved_type_8, exception_preserved_value_8, exception_preserved_tb_8);

    goto try_end_22;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_22:;
    goto branch_end_19;
    branch_no_19:;
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_compexpr_left_21;
        PyObject *tmp_compexpr_right_21;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_22 = mod_consts[87];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_23 = var_recieve;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 137;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_compexpr_left_21 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_17,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_compexpr_left_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_21 = Py_None;
        tmp_condition_result_21 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_21, tmp_compexpr_right_21);
        Py_DECREF(tmp_compexpr_left_21);
        if (tmp_condition_result_21 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
        assert(tmp_condition_result_21 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_21:;
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_value_45;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_16;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_kw_call_value_0_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_kw_call_value_0_7 == NULL)) {
            tmp_kw_call_value_0_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        if (var_UserInfo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_expression_value_36 = var_UserInfo;
        tmp_subscript_value_16 = mod_consts[23];
        tmp_kw_call_value_1_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_16);
        if (tmp_kw_call_value_1_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 139;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_6};

            tmp_assign_source_48 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_45, kw_values, mod_consts[89]);
        }

        Py_DECREF(tmp_kw_call_value_1_6);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_18;
        PyObject *tmp_call_result_20;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_18 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 140;
        tmp_call_result_20 = CALL_METHOD_NO_ARGS(tmp_called_instance_18, mod_consts[90]);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_20);
    }
    goto try_end_25;
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

    // Preserve existing published exception id 9.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_9, &exception_preserved_value_9, &exception_preserved_tb_9);

    if (exception_keeper_tb_25 == NULL) {
        exception_keeper_tb_25 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_25);
    } else if (exception_keeper_lineno_25 != 0) {
        exception_keeper_tb_25 = ADD_TRACEBACK(exception_keeper_tb_25, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_25);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_25, &exception_keeper_value_25, &exception_keeper_tb_25);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_25, exception_keeper_tb_25);
    PUBLISH_EXCEPTION(&exception_keeper_type_25, &exception_keeper_value_25, &exception_keeper_tb_25);
    // Tried code:
    {
        bool tmp_condition_result_22;
        PyObject *tmp_compexpr_left_22;
        PyObject *tmp_compexpr_right_22;
        tmp_compexpr_left_22 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_22 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_22, tmp_compexpr_right_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_22 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_49;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_string_concat_values_10;
        PyObject *tmp_tuple_element_10;
        tmp_called_value_46 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_46 != NULL);
        tmp_tuple_element_10 = mod_consts[91];
        tmp_string_concat_values_10 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_13;
            PyObject *tmp_format_spec_13;
            PyObject *tmp_format_value_14;
            PyObject *tmp_unicode_arg_8;
            PyObject *tmp_format_spec_14;
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 0, tmp_tuple_element_10);
            tmp_format_value_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_format_value_13 == NULL)) {
                tmp_format_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_format_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            tmp_format_spec_13 = mod_consts[8];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tmp_format_value_13, tmp_format_spec_13);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[92];
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 2, tmp_tuple_element_10);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_8 = var_Error;
            tmp_format_value_14 = PyObject_Unicode(tmp_unicode_arg_8);
            if (tmp_format_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            tmp_format_spec_14 = mod_consts[8];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tmp_format_value_14, tmp_format_spec_14);
            Py_DECREF(tmp_format_value_14);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 3, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_string_concat_values_10);
        goto try_except_handler_29;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_args_element_value_24 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_10);
        Py_DECREF(tmp_string_concat_values_10);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 142;
        tmp_call_result_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_24);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        Py_DECREF(tmp_call_result_21);
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto try_except_handler_28;
    // End of try:
    try_end_26:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_22;
    branch_no_22:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 138;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
    branch_end_22:;
    goto try_end_27;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(exception_preserved_type_9, exception_preserved_value_9, exception_preserved_tb_9);

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_5;
    // End of try:
    try_end_27:;
    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(exception_preserved_type_9, exception_preserved_value_9, exception_preserved_tb_9);

    goto try_end_25;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_25:;
    goto branch_end_21;
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_compexpr_left_23;
        PyObject *tmp_compexpr_right_23;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_19 == NULL)) {
            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_25 = mod_consts[93];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_26 = var_recieve;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_compexpr_left_23 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_19,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_compexpr_left_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_23 = Py_None;
        tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_23, tmp_compexpr_right_23);
        Py_DECREF(tmp_compexpr_left_23);
        if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
        assert(tmp_condition_result_23 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_37;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_37 = var_recieve;
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[28]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 145;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_47, mod_consts[46]);

        Py_DECREF(tmp_called_value_47);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_dotIndex;
            var_dotIndex = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_start_value_11;
        PyObject *tmp_stop_value_13;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_39 = var_recieve;
        CHECK_OBJECT(var_dotIndex);
        tmp_start_value_11 = var_dotIndex;
        tmp_stop_value_13 = Py_None;
        tmp_subscript_value_17 = MAKE_SLICEOBJ2(tmp_start_value_11, tmp_stop_value_13);
        assert(!(tmp_subscript_value_17 == NULL));
        tmp_expression_value_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_17);
        Py_DECREF(tmp_subscript_value_17);
        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[35]);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 146;
        tmp_assign_source_51 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_48, mod_consts[36]);

        Py_DECREF(tmp_called_value_48);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_targetFrame;
            var_targetFrame = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_stop_value_14;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_41 = var_recieve;
        CHECK_OBJECT(var_dotIndex);
        tmp_stop_value_14 = var_dotIndex;
        tmp_subscript_value_18 = MAKE_SLICEOBJ1(tmp_stop_value_14);
        assert(!(tmp_subscript_value_18 == NULL));
        tmp_expression_value_40 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_18);
        Py_DECREF(tmp_subscript_value_18);
        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[35]);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 147;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_49, mod_consts[94]);

        Py_DECREF(tmp_called_value_49);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_targetBase;
            var_targetBase = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_value_50;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_kw_call_value_1_7;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        CHECK_OBJECT(var_targetBase);
        tmp_kw_call_value_0_8 = var_targetBase;
        CHECK_OBJECT(var_targetFrame);
        tmp_kw_call_value_1_7 = var_targetFrame;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 149;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_7};

            tmp_assign_source_53 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_50, kw_values, mod_consts[96]);
        }

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_22;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_20 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 150;
        tmp_call_result_22 = CALL_METHOD_NO_ARGS(tmp_called_instance_20, mod_consts[90]);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        Py_DECREF(tmp_call_result_22);
    }
    goto try_end_28;
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

    // Preserve existing published exception id 10.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_10, &exception_preserved_value_10, &exception_preserved_tb_10);

    if (exception_keeper_tb_28 == NULL) {
        exception_keeper_tb_28 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_28);
    } else if (exception_keeper_lineno_28 != 0) {
        exception_keeper_tb_28 = ADD_TRACEBACK(exception_keeper_tb_28, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_28);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_28, &exception_keeper_value_28, &exception_keeper_tb_28);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_28, exception_keeper_tb_28);
    PUBLISH_EXCEPTION(&exception_keeper_type_28, &exception_keeper_value_28, &exception_keeper_tb_28);
    // Tried code:
    {
        bool tmp_condition_result_24;
        PyObject *tmp_compexpr_left_24;
        PyObject *tmp_compexpr_right_24;
        tmp_compexpr_left_24 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_24 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_24, tmp_compexpr_right_24);
        assert(!(tmp_res == -1));
        tmp_condition_result_24 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_54;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_string_concat_values_11;
        PyObject *tmp_tuple_element_11;
        tmp_called_value_51 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_51 != NULL);
        tmp_tuple_element_11 = mod_consts[97];
        tmp_string_concat_values_11 = PyTuple_New(6);
        {
            PyObject *tmp_format_value_15;
            PyObject *tmp_format_spec_15;
            PyObject *tmp_format_value_16;
            PyObject *tmp_format_spec_16;
            PyObject *tmp_format_value_17;
            PyObject *tmp_unicode_arg_9;
            PyObject *tmp_format_spec_17;
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 0, tmp_tuple_element_11);
            CHECK_OBJECT(var_targetBase);
            tmp_format_value_15 = var_targetBase;
            tmp_format_spec_15 = mod_consts[8];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tmp_format_value_15, tmp_format_spec_15);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[98];
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 2, tmp_tuple_element_11);
            CHECK_OBJECT(var_targetFrame);
            tmp_format_value_16 = var_targetFrame;
            tmp_format_spec_16 = mod_consts[8];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tmp_format_value_16, tmp_format_spec_16);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 3, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[76];
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 4, tmp_tuple_element_11);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_9 = var_Error;
            tmp_format_value_17 = PyObject_Unicode(tmp_unicode_arg_9);
            if (tmp_format_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_11;
            }
            tmp_format_spec_17 = mod_consts[8];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tmp_format_value_17, tmp_format_spec_17);
            Py_DECREF(tmp_format_value_17);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 5, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_string_concat_values_11);
        goto try_except_handler_32;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_args_element_value_27 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_11);
        Py_DECREF(tmp_string_concat_values_11);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 152;
        tmp_call_result_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        Py_DECREF(tmp_call_result_23);
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto try_except_handler_31;
    // End of try:
    try_end_29:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_24;
    branch_no_24:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 148;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
    branch_end_24:;
    goto try_end_30;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(exception_preserved_type_10, exception_preserved_value_10, exception_preserved_tb_10);

    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto try_except_handler_5;
    // End of try:
    try_end_30:;
    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(exception_preserved_type_10, exception_preserved_value_10, exception_preserved_tb_10);

    goto try_end_28;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_28:;
    goto branch_end_23;
    branch_no_23:;
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_compexpr_left_25;
        PyObject *tmp_compexpr_right_25;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_28 = mod_consts[99];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_29 = var_recieve;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 153;
        {
            PyObject *call_args[] = {tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_compexpr_left_25 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_21,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_compexpr_left_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_25 = Py_None;
        tmp_condition_result_25 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_25, tmp_compexpr_right_25);
        Py_DECREF(tmp_compexpr_left_25);
        if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
        assert(tmp_condition_result_25 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_start_value_12;
        PyObject *tmp_left_value_12;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_right_value_12;
        PyObject *tmp_stop_value_15;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_43 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_44 = var_recieve;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[28]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 154;
        tmp_left_value_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_53, mod_consts[100]);

        Py_DECREF(tmp_called_value_53);
        if (tmp_left_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_12 = mod_consts[101];
        tmp_start_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_12, tmp_right_value_12);
        Py_DECREF(tmp_left_value_12);
        if (tmp_start_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_stop_value_15 = Py_None;
        tmp_subscript_value_19 = MAKE_SLICEOBJ2(tmp_start_value_12, tmp_stop_value_15);
        Py_DECREF(tmp_start_value_12);
        assert(!(tmp_subscript_value_19 == NULL));
        tmp_expression_value_42 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_19);
        Py_DECREF(tmp_subscript_value_19);
        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[35]);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 154;
        tmp_assign_source_55 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_52, mod_consts[36]);

        Py_DECREF(tmp_called_value_52);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_dataBaseUsed;
            var_dataBaseUsed = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_54;
        PyObject *tmp_kw_call_value_0_9;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_dataBaseUsed);
        tmp_kw_call_value_0_9 = var_dataBaseUsed;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 155;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_9};

            tmp_assign_source_56 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_54, kw_values, mod_consts[60]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_compexpr_left_26;
        PyObject *tmp_compexpr_right_26;
        PyObject *tmp_called_instance_22;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_22 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 156;
        tmp_compexpr_left_26 = CALL_METHOD_NO_ARGS(tmp_called_instance_22, mod_consts[103]);
        if (tmp_compexpr_left_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_26 = Py_True;
        tmp_condition_result_26 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_26, tmp_compexpr_right_26);
        Py_DECREF(tmp_compexpr_left_26);
        if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
        assert(tmp_condition_result_26 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(var_dataBaseUsed);
        tmp_assign_source_57 = var_dataBaseUsed;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_57);
    }
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_string_concat_values_12;
        PyObject *tmp_tuple_element_12;
        tmp_called_value_55 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_55 != NULL);
        tmp_tuple_element_12 = mod_consts[104];
        tmp_string_concat_values_12 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_18;
            PyObject *tmp_format_spec_18;
            PyTuple_SET_ITEM0(tmp_string_concat_values_12, 0, tmp_tuple_element_12);
            CHECK_OBJECT(var_dataBaseUsed);
            tmp_format_value_18 = var_dataBaseUsed;
            tmp_format_spec_18 = mod_consts[8];
            tmp_tuple_element_12 = BUILTIN_FORMAT(tmp_format_value_18, tmp_format_spec_18);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_12, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[105];
            PyTuple_SET_ITEM0(tmp_string_concat_values_12, 2, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_string_concat_values_12);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_args_element_value_30 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_12);
        Py_DECREF(tmp_string_concat_values_12);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 158;
        tmp_call_result_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_55, tmp_args_element_value_30);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_24);
    }
    goto branch_end_26;
    branch_no_26:;
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_compexpr_left_27;
        PyObject *tmp_compexpr_right_27;
        PyObject *tmp_called_instance_23;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_23 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 159;
        tmp_compexpr_left_27 = CALL_METHOD_NO_ARGS(tmp_called_instance_23, mod_consts[103]);
        if (tmp_compexpr_left_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_27 = Py_False;
        tmp_condition_result_27 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_27, tmp_compexpr_right_27);
        Py_DECREF(tmp_compexpr_left_27);
        if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
        assert(tmp_condition_result_27 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_27:;
    {
        PyObject *tmp_called_value_56;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_string_concat_values_13;
        PyObject *tmp_tuple_element_13;
        tmp_called_value_56 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_56 != NULL);
        tmp_tuple_element_13 = mod_consts[106];
        tmp_string_concat_values_13 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_19;
            PyObject *tmp_format_spec_19;
            PyTuple_SET_ITEM0(tmp_string_concat_values_13, 0, tmp_tuple_element_13);
            CHECK_OBJECT(var_dataBaseUsed);
            tmp_format_value_19 = var_dataBaseUsed;
            tmp_format_spec_19 = mod_consts[8];
            tmp_tuple_element_13 = BUILTIN_FORMAT(tmp_format_value_19, tmp_format_spec_19);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_13, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[107];
            PyTuple_SET_ITEM0(tmp_string_concat_values_13, 2, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_string_concat_values_13);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_args_element_value_31 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_13);
        Py_DECREF(tmp_string_concat_values_13);
        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 160;
        tmp_call_result_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_31);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_25);
    }
    branch_no_27:;
    branch_end_26:;
    goto branch_end_25;
    branch_no_25:;
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_compexpr_left_28;
        PyObject *tmp_compexpr_right_28;
        CHECK_OBJECT(var_recieve);
        tmp_compexpr_left_28 = var_recieve;
        tmp_compexpr_right_28 = mod_consts[108];
        tmp_condition_result_28 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_28, tmp_compexpr_right_28);
        if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
        assert(tmp_condition_result_28 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_57;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 162;
        tmp_assign_source_58 = CALL_FUNCTION_NO_ARGS(tmp_called_value_57);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_58;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_24;
        PyObject *tmp_call_result_26;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_24 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 163;
        tmp_call_result_26 = CALL_METHOD_NO_ARGS(tmp_called_instance_24, mod_consts[110]);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_26);
    }
    goto branch_end_28;
    branch_no_28:;
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_compexpr_left_29;
        PyObject *tmp_compexpr_right_29;
        PyObject *tmp_called_instance_25;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_32 = mod_consts[111];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_33 = var_recieve;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 164;
        {
            PyObject *call_args[] = {tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_compexpr_left_29 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_25,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_compexpr_left_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_29 = Py_None;
        tmp_condition_result_29 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_29, tmp_compexpr_right_29);
        Py_DECREF(tmp_compexpr_left_29);
        if (tmp_condition_result_29 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
        assert(tmp_condition_result_29 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_45;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_45 = var_recieve;
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[28]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 167;
        tmp_assign_source_59 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_58, mod_consts[43]);

        Py_DECREF(tmp_called_value_58);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_fromIndex;
            var_fromIndex = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_start_value_13;
        PyObject *tmp_left_value_13;
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_right_value_13;
        PyObject *tmp_stop_value_16;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_46 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_47 = var_recieve;
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[28]);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 168;
        tmp_left_value_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_59, mod_consts[112]);

        Py_DECREF(tmp_called_value_59);
        if (tmp_left_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_13 = mod_consts[113];
        tmp_start_value_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_13, tmp_right_value_13);
        Py_DECREF(tmp_left_value_13);
        if (tmp_start_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_fromIndex);
        tmp_stop_value_16 = var_fromIndex;
        tmp_subscript_value_20 = MAKE_SLICEOBJ2(tmp_start_value_13, tmp_stop_value_16);
        Py_DECREF(tmp_start_value_13);
        assert(!(tmp_subscript_value_20 == NULL));
        tmp_assign_source_60 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_20);
        Py_DECREF(tmp_subscript_value_20);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_extract;
            var_extract = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_start_value_14;
        PyObject *tmp_left_value_14;
        PyObject *tmp_right_value_14;
        PyObject *tmp_stop_value_17;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_48 = var_recieve;
        CHECK_OBJECT(var_fromIndex);
        tmp_left_value_14 = var_fromIndex;
        tmp_right_value_14 = mod_consts[34];
        tmp_start_value_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_14, tmp_right_value_14);
        if (tmp_start_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_stop_value_17 = Py_None;
        tmp_subscript_value_21 = MAKE_SLICEOBJ2(tmp_start_value_14, tmp_stop_value_17);
        Py_DECREF(tmp_start_value_14);
        assert(!(tmp_subscript_value_21 == NULL));
        tmp_assign_source_61 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_21);
        Py_DECREF(tmp_subscript_value_21);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_usingFrame;
            var_usingFrame = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT(var_usingFrame);
        tmp_assign_source_62 = var_usingFrame;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_63);
    }
    {
        bool tmp_condition_result_30;
        PyObject *tmp_compexpr_left_30;
        PyObject *tmp_compexpr_right_30;
        tmp_compexpr_left_30 = mod_consts[115];
        CHECK_OBJECT(var_recieve);
        tmp_compexpr_right_30 = var_recieve;
        tmp_res = PySequence_Contains(tmp_compexpr_right_30, tmp_compexpr_left_30);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_30 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_49;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_49 = var_recieve;
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[28]);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 177;
        tmp_assign_source_64 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_60, mod_consts[116]);

        Py_DECREF(tmp_called_value_60);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_limitIndex;
            var_limitIndex = tmp_assign_source_64;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_start_value_15;
        PyObject *tmp_left_value_15;
        PyObject *tmp_right_value_15;
        PyObject *tmp_stop_value_18;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_50 = var_recieve;
        CHECK_OBJECT(var_limitIndex);
        tmp_left_value_15 = var_limitIndex;
        tmp_right_value_15 = mod_consts[117];
        tmp_start_value_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_15, tmp_right_value_15);
        if (tmp_start_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_stop_value_18 = Py_None;
        tmp_subscript_value_22 = MAKE_SLICEOBJ2(tmp_start_value_15, tmp_stop_value_18);
        Py_DECREF(tmp_start_value_15);
        assert(!(tmp_subscript_value_22 == NULL));
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_22);
        Py_DECREF(tmp_subscript_value_22);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_65 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_65);
    }
    branch_no_30:;
    // Tried code:
    {
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_compexpr_left_31;
        PyObject *tmp_compexpr_right_31;
        tmp_compexpr_left_31 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_compexpr_left_31 == NULL)) {
            tmp_compexpr_left_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_compexpr_left_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        tmp_compexpr_right_31 = Py_None;
        tmp_condition_result_31 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_31, tmp_compexpr_right_31);
        if (tmp_condition_result_31 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
        assert(tmp_condition_result_31 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_31:;
    {
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_compexpr_left_32;
        PyObject *tmp_compexpr_right_32;
        tmp_compexpr_left_32 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_compexpr_left_32 == NULL)) {
            tmp_compexpr_left_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_compexpr_left_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        tmp_compexpr_right_32 = Py_None;
        tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_32, tmp_compexpr_right_32);
        if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
        assert(tmp_condition_result_32 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_32:;
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_61;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_kw_call_value_3_2;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        tmp_kw_call_value_0_10 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_kw_call_value_0_10 == NULL)) {
            tmp_kw_call_value_0_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_kw_call_value_0_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        CHECK_OBJECT(var_usingFrame);
        tmp_kw_call_value_1_8 = var_usingFrame;
        CHECK_OBJECT(var_extract);
        tmp_kw_call_value_2_4 = var_extract;
        tmp_kw_call_value_3_2 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_kw_call_value_3_2 == NULL)) {
            tmp_kw_call_value_3_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_kw_call_value_3_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 184;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_10, tmp_kw_call_value_1_8, tmp_kw_call_value_2_4, tmp_kw_call_value_3_2};

            tmp_assign_source_66 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_61, kw_values, mod_consts[119]);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    branch_no_32:;
    goto branch_end_31;
    branch_no_31:;
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_compexpr_left_33;
        PyObject *tmp_compexpr_right_33;
        tmp_compexpr_left_33 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_compexpr_left_33 == NULL)) {
            tmp_compexpr_left_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_compexpr_left_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        tmp_compexpr_right_33 = Py_None;
        tmp_condition_result_33 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_33, tmp_compexpr_right_33);
        if (tmp_condition_result_33 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
        assert(tmp_condition_result_33 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_33:;
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_62;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_kw_call_value_2_5;
        PyObject *tmp_kw_call_value_3_3;
        PyObject *tmp_expression_value_51;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        tmp_kw_call_value_0_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_kw_call_value_0_11 == NULL)) {
            tmp_kw_call_value_0_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_kw_call_value_0_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        CHECK_OBJECT(var_usingFrame);
        tmp_kw_call_value_1_9 = var_usingFrame;
        CHECK_OBJECT(var_extract);
        tmp_kw_call_value_2_5 = var_extract;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        tmp_kw_call_value_3_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[121]);
        if (tmp_kw_call_value_3_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 187;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_9, tmp_kw_call_value_2_5, tmp_kw_call_value_3_3};

            tmp_assign_source_67 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_62, kw_values, mod_consts[119]);
        }

        Py_DECREF(tmp_kw_call_value_3_3);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    branch_no_33:;
    branch_end_31:;
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = LIST_COPY(mod_consts[122]);
        {
            PyObject *old = var_math_symblos;
            var_math_symblos = tmp_assign_source_68;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_iter_arg_1;
        if (var_extract == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }

        tmp_iter_arg_1 = var_extract;
        tmp_assign_source_69 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        {
            PyObject *old = tmp_for_loop_1__for_iterator;
            tmp_for_loop_1__for_iterator = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_70 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_70 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 193;
                goto try_except_handler_34;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_70;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_71;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_71 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_71;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_34;
        PyObject *tmp_compexpr_left_34;
        PyObject *tmp_compexpr_right_34;
        CHECK_OBJECT(var_i);
        tmp_compexpr_left_34 = var_i;
        CHECK_OBJECT(var_math_symblos);
        tmp_compexpr_right_34 = var_math_symblos;
        tmp_res = PySequence_Contains(tmp_compexpr_right_34, tmp_compexpr_left_34);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        tmp_condition_result_34 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_instance_26;
        if (var_boot == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[124]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }

        tmp_called_instance_26 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 197;
        tmp_assign_source_72 = CALL_METHOD_NO_ARGS(tmp_called_instance_26, mod_consts[125]);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        {
            PyObject *old = var_caching_dataframe;
            var_caching_dataframe = tmp_assign_source_72;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_string_concat_values_14;
        PyObject *tmp_tuple_element_14;
        tmp_called_value_63 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_63 != NULL);
        tmp_tuple_element_14 = mod_consts[126];
        tmp_string_concat_values_14 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_20;
            PyObject *tmp_format_spec_20;
            PyTuple_SET_ITEM0(tmp_string_concat_values_14, 0, tmp_tuple_element_14);
            if (var_usingFrame == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[127]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 198;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_14;
            }

            tmp_format_value_20 = var_usingFrame;
            tmp_format_spec_20 = mod_consts[8];
            tmp_tuple_element_14 = BUILTIN_FORMAT(tmp_format_value_20, tmp_format_spec_20);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_14, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_string_concat_values_14);
        goto try_except_handler_34;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_args_element_value_34 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_14);
        Py_DECREF(tmp_string_concat_values_14);
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 198;
        tmp_call_result_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_63, tmp_args_element_value_34);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        Py_DECREF(tmp_call_result_27);
    }
    branch_no_34:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 193;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_34;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_31;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto try_except_handler_33;
    // End of try:
    try_end_31:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_35;
        PyObject *tmp_compexpr_left_35;
        PyObject *tmp_compexpr_right_35;
        tmp_compexpr_left_35 = mod_consts[128];
        if (var_extract == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }

        tmp_compexpr_right_35 = var_extract;
        tmp_res = PySequence_Contains(tmp_compexpr_right_35, tmp_compexpr_left_35);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        tmp_condition_result_35 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_35 != false) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_instance_27;
        if (var_boot == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[124]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }

        tmp_called_instance_27 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 204;
        tmp_assign_source_73 = CALL_METHOD_NO_ARGS(tmp_called_instance_27, mod_consts[129]);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        {
            PyObject *old = var_caching_dataframe;
            var_caching_dataframe = tmp_assign_source_73;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_string_concat_values_15;
        PyObject *tmp_tuple_element_15;
        tmp_called_value_64 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_64 != NULL);
        tmp_tuple_element_15 = mod_consts[126];
        tmp_string_concat_values_15 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_21;
            PyObject *tmp_format_spec_21;
            PyTuple_SET_ITEM0(tmp_string_concat_values_15, 0, tmp_tuple_element_15);
            if (var_usingFrame == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[127]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 205;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_15;
            }

            tmp_format_value_21 = var_usingFrame;
            tmp_format_spec_21 = mod_consts[8];
            tmp_tuple_element_15 = BUILTIN_FORMAT(tmp_format_value_21, tmp_format_spec_21);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_15, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_string_concat_values_15);
        goto try_except_handler_33;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_args_element_value_35 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_15);
        Py_DECREF(tmp_string_concat_values_15);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 205;
        tmp_call_result_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_64, tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        Py_DECREF(tmp_call_result_28);
    }
    goto branch_end_35;
    branch_no_35:;
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_instance_28;
        if (var_boot == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[124]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }

        tmp_called_instance_28 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 207;
        tmp_assign_source_74 = CALL_METHOD_NO_ARGS(tmp_called_instance_28, mod_consts[130]);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        {
            PyObject *old = var_caching_dataframe;
            var_caching_dataframe = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_string_concat_values_16;
        PyObject *tmp_tuple_element_16;
        tmp_called_value_65 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_65 != NULL);
        tmp_tuple_element_16 = mod_consts[126];
        tmp_string_concat_values_16 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_22;
            PyObject *tmp_format_spec_22;
            PyTuple_SET_ITEM0(tmp_string_concat_values_16, 0, tmp_tuple_element_16);
            if (var_usingFrame == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[127]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 208;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_16;
            }

            tmp_format_value_22 = var_usingFrame;
            tmp_format_spec_22 = mod_consts[8];
            tmp_tuple_element_16 = BUILTIN_FORMAT(tmp_format_value_22, tmp_format_spec_22);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 208;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_16, 1, tmp_tuple_element_16);
        }
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_string_concat_values_16);
        goto try_except_handler_33;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_args_element_value_36 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_16);
        Py_DECREF(tmp_string_concat_values_16);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 208;
        tmp_call_result_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_36);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        Py_DECREF(tmp_call_result_29);
    }
    branch_end_35:;
    goto try_end_32;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 11.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_11, &exception_preserved_value_11, &exception_preserved_tb_11);

    if (exception_keeper_tb_32 == NULL) {
        exception_keeper_tb_32 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_32);
    } else if (exception_keeper_lineno_32 != 0) {
        exception_keeper_tb_32 = ADD_TRACEBACK(exception_keeper_tb_32, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_32);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_32, &exception_keeper_value_32, &exception_keeper_tb_32);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_32, exception_keeper_tb_32);
    PUBLISH_EXCEPTION(&exception_keeper_type_32, &exception_keeper_value_32, &exception_keeper_tb_32);
    // Tried code:
    {
        bool tmp_condition_result_36;
        PyObject *tmp_compexpr_left_36;
        PyObject *tmp_compexpr_right_36;
        tmp_compexpr_left_36 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_36 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_36, tmp_compexpr_right_36);
        assert(!(tmp_res == -1));
        tmp_condition_result_36 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_36 != false) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_75;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_string_concat_values_17;
        PyObject *tmp_tuple_element_17;
        tmp_called_value_66 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_66 != NULL);
        tmp_tuple_element_17 = mod_consts[131];
        tmp_string_concat_values_17 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_23;
            PyObject *tmp_format_spec_23;
            PyObject *tmp_format_value_24;
            PyObject *tmp_unicode_arg_10;
            PyObject *tmp_format_spec_24;
            PyTuple_SET_ITEM0(tmp_string_concat_values_17, 0, tmp_tuple_element_17);
            if (var_usingFrame == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[127]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 210;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_17;
            }

            tmp_format_value_23 = var_usingFrame;
            tmp_format_spec_23 = mod_consts[8];
            tmp_tuple_element_17 = BUILTIN_FORMAT(tmp_format_value_23, tmp_format_spec_23);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_17, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = mod_consts[132];
            PyTuple_SET_ITEM0(tmp_string_concat_values_17, 2, tmp_tuple_element_17);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_10 = var_Error;
            tmp_format_value_24 = PyObject_Unicode(tmp_unicode_arg_10);
            if (tmp_format_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_17;
            }
            tmp_format_spec_24 = mod_consts[8];
            tmp_tuple_element_17 = BUILTIN_FORMAT(tmp_format_value_24, tmp_format_spec_24);
            Py_DECREF(tmp_format_value_24);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_17, 3, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_string_concat_values_17);
        goto try_except_handler_36;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_args_element_value_37 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_17);
        Py_DECREF(tmp_string_concat_values_17);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 210;
        tmp_call_result_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_66, tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        Py_DECREF(tmp_call_result_30);
    }
    goto try_end_33;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto try_except_handler_35;
    // End of try:
    try_end_33:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_36;
    branch_no_36:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 181;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_35;
    branch_end_36:;
    goto try_end_34;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(exception_preserved_type_11, exception_preserved_value_11, exception_preserved_tb_11);

    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto try_except_handler_5;
    // End of try:
    try_end_34:;
    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(exception_preserved_type_11, exception_preserved_value_11, exception_preserved_tb_11);

    goto try_end_32;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_32:;
    goto branch_end_29;
    branch_no_29:;
    {
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_compexpr_left_37;
        PyObject *tmp_compexpr_right_37;
        CHECK_OBJECT(var_recieve);
        tmp_compexpr_left_37 = var_recieve;
        tmp_compexpr_right_37 = mod_consts[133];
        tmp_condition_result_37 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_compexpr_left_37, tmp_compexpr_right_37);
        if (tmp_condition_result_37 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
        assert(tmp_condition_result_37 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_37:;
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_string_concat_values_18;
        PyObject *tmp_tuple_element_18;
        tmp_called_value_67 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_67 != NULL);
        tmp_tuple_element_18 = mod_consts[134];
        tmp_string_concat_values_18 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_25;
            PyObject *tmp_format_spec_25;
            PyTuple_SET_ITEM0(tmp_string_concat_values_18, 0, tmp_tuple_element_18);
            tmp_format_value_25 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_format_value_25 == NULL)) {
                tmp_format_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_format_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_18;
            }
            tmp_format_spec_25 = mod_consts[8];
            tmp_tuple_element_18 = BUILTIN_FORMAT(tmp_format_value_25, tmp_format_spec_25);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_18, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_string_concat_values_18);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_args_element_value_38 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_18);
        Py_DECREF(tmp_string_concat_values_18);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 214;
        tmp_call_result_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_67, tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_31);
    }
    goto branch_end_37;
    branch_no_37:;
    {
        nuitka_bool tmp_condition_result_38;
        PyObject *tmp_compexpr_left_38;
        PyObject *tmp_compexpr_right_38;
        PyObject *tmp_called_instance_29;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_29 == NULL)) {
            tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_39 = mod_consts[135];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_40 = var_recieve;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_compexpr_left_38 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_29,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_compexpr_left_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_38 = Py_None;
        tmp_condition_result_38 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_38, tmp_compexpr_right_38);
        Py_DECREF(tmp_compexpr_left_38);
        if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
        assert(tmp_condition_result_38 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_38:;
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_start_value_16;
        PyObject *tmp_left_value_16;
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_right_value_16;
        PyObject *tmp_stop_value_19;
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_55;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_53 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_54 = var_recieve;
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[28]);
        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 217;
        tmp_left_value_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_69, mod_consts[136]);

        Py_DECREF(tmp_called_value_69);
        if (tmp_left_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_16 = mod_consts[45];
        tmp_start_value_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_16, tmp_right_value_16);
        Py_DECREF(tmp_left_value_16);
        if (tmp_start_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_55 = var_recieve;
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[28]);
        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_start_value_16);

            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 217;
        tmp_stop_value_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_70, mod_consts[137]);

        Py_DECREF(tmp_called_value_70);
        if (tmp_stop_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_start_value_16);

            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_23 = MAKE_SLICEOBJ2(tmp_start_value_16, tmp_stop_value_19);
        Py_DECREF(tmp_start_value_16);
        Py_DECREF(tmp_stop_value_19);
        assert(!(tmp_subscript_value_23 == NULL));
        tmp_expression_value_52 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_23);
        Py_DECREF(tmp_subscript_value_23);
        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[35]);
        Py_DECREF(tmp_expression_value_52);
        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 217;
        tmp_assign_source_76 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_68, mod_consts[138]);

        Py_DECREF(tmp_called_value_68);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_save_name;
            var_save_name = tmp_assign_source_76;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_start_value_17;
        PyObject *tmp_left_value_17;
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_right_value_17;
        PyObject *tmp_stop_value_20;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_57 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_58 = var_recieve;
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[28]);
        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 218;
        tmp_left_value_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_72, mod_consts[137]);

        Py_DECREF(tmp_called_value_72);
        if (tmp_left_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_17 = mod_consts[45];
        tmp_start_value_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_17, tmp_right_value_17);
        Py_DECREF(tmp_left_value_17);
        if (tmp_start_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_stop_value_20 = Py_None;
        tmp_subscript_value_24 = MAKE_SLICEOBJ2(tmp_start_value_17, tmp_stop_value_20);
        Py_DECREF(tmp_start_value_17);
        assert(!(tmp_subscript_value_24 == NULL));
        tmp_expression_value_56 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_24);
        Py_DECREF(tmp_subscript_value_24);
        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[35]);
        Py_DECREF(tmp_expression_value_56);
        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 218;
        tmp_assign_source_77 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_71, mod_consts[36]);

        Py_DECREF(tmp_called_value_71);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_save_format;
            var_save_format = tmp_assign_source_77;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_73;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_10;
        PyObject *tmp_kw_call_value_2_6;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_37;
        }
        if (var_caching_dataframe == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[140]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_37;
        }

        tmp_kw_call_value_0_12 = var_caching_dataframe;
        CHECK_OBJECT(var_save_name);
        tmp_kw_call_value_1_10 = var_save_name;
        CHECK_OBJECT(var_save_format);
        tmp_kw_call_value_2_6 = var_save_format;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 220;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_10, tmp_kw_call_value_2_6};

            tmp_assign_source_78 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_73, kw_values, mod_consts[141]);
        }

        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_37;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_78;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_30;
        PyObject *tmp_call_result_32;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_30 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 221;
        tmp_call_result_32 = CALL_METHOD_NO_ARGS(tmp_called_instance_30, mod_consts[142]);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_37;
        }
        Py_DECREF(tmp_call_result_32);
    }
    goto try_end_35;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 12.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_12, &exception_preserved_value_12, &exception_preserved_tb_12);

    if (exception_keeper_tb_35 == NULL) {
        exception_keeper_tb_35 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_35);
    } else if (exception_keeper_lineno_35 != 0) {
        exception_keeper_tb_35 = ADD_TRACEBACK(exception_keeper_tb_35, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_35);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_35, &exception_keeper_value_35, &exception_keeper_tb_35);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_35, exception_keeper_tb_35);
    PUBLISH_EXCEPTION(&exception_keeper_type_35, &exception_keeper_value_35, &exception_keeper_tb_35);
    // Tried code:
    {
        bool tmp_condition_result_39;
        PyObject *tmp_compexpr_left_39;
        PyObject *tmp_compexpr_right_39;
        tmp_compexpr_left_39 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_39 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_39, tmp_compexpr_right_39);
        assert(!(tmp_res == -1));
        tmp_condition_result_39 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_39 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_79;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_call_result_33;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_string_concat_values_19;
        PyObject *tmp_tuple_element_19;
        tmp_called_value_74 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_74 != NULL);
        tmp_tuple_element_19 = mod_consts[143];
        tmp_string_concat_values_19 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_26;
            PyObject *tmp_unicode_arg_11;
            PyObject *tmp_format_spec_26;
            PyTuple_SET_ITEM0(tmp_string_concat_values_19, 0, tmp_tuple_element_19);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_11 = var_Error;
            tmp_format_value_26 = PyObject_Unicode(tmp_unicode_arg_11);
            if (tmp_format_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_19;
            }
            tmp_format_spec_26 = mod_consts[8];
            tmp_tuple_element_19 = BUILTIN_FORMAT(tmp_format_value_26, tmp_format_spec_26);
            Py_DECREF(tmp_format_value_26);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_19, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_string_concat_values_19);
        goto try_except_handler_39;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_args_element_value_41 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_19);
        Py_DECREF(tmp_string_concat_values_19);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 223;
        tmp_call_result_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_74, tmp_args_element_value_41);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        Py_DECREF(tmp_call_result_33);
    }
    goto try_end_36;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto try_except_handler_38;
    // End of try:
    try_end_36:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_39;
    branch_no_39:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 219;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
    branch_end_39:;
    goto try_end_37;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(exception_preserved_type_12, exception_preserved_value_12, exception_preserved_tb_12);

    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto try_except_handler_5;
    // End of try:
    try_end_37:;
    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(exception_preserved_type_12, exception_preserved_value_12, exception_preserved_tb_12);

    goto try_end_35;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_35:;
    goto branch_end_38;
    branch_no_38:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_compexpr_left_40;
        PyObject *tmp_compexpr_right_40;
        PyObject *tmp_called_instance_31;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_args_element_value_43;
        tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_31 == NULL)) {
            tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_42 = mod_consts[144];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_43 = var_recieve;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43};
            tmp_compexpr_left_40 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_31,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_compexpr_left_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_40 = Py_None;
        tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_40, tmp_compexpr_right_40);
        Py_DECREF(tmp_compexpr_left_40);
        if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
        assert(tmp_condition_result_40 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_40:;
    // Tried code:
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_value_75;
        PyObject *tmp_kw_call_value_0_13;
        PyObject *tmp_kw_call_value_1_11;
        PyObject *tmp_kw_call_value_2_7;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        tmp_kw_call_value_0_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_kw_call_value_0_13 == NULL)) {
            tmp_kw_call_value_0_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_kw_call_value_0_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        if (var_caching_dataframe == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[140]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_kw_call_value_1_11 = var_caching_dataframe;
        if (var_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_kw_call_value_2_7 = var_data;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 229;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_13, tmp_kw_call_value_1_11, tmp_kw_call_value_2_7};

            tmp_assign_source_80 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_75, kw_values, mod_consts[147]);
        }

        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_instance_32;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_32 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 230;
        tmp_assign_source_81 = CALL_METHOD_NO_ARGS(tmp_called_instance_32, mod_consts[148]);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        {
            PyObject *old = var_caching_dataframe;
            var_caching_dataframe = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    goto try_end_38;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 13.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_13, &exception_preserved_value_13, &exception_preserved_tb_13);

    if (exception_keeper_tb_38 == NULL) {
        exception_keeper_tb_38 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_38);
    } else if (exception_keeper_lineno_38 != 0) {
        exception_keeper_tb_38 = ADD_TRACEBACK(exception_keeper_tb_38, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_38);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_38, &exception_keeper_value_38, &exception_keeper_tb_38);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_38, exception_keeper_tb_38);
    PUBLISH_EXCEPTION(&exception_keeper_type_38, &exception_keeper_value_38, &exception_keeper_tb_38);
    // Tried code:
    {
        bool tmp_condition_result_41;
        PyObject *tmp_compexpr_left_41;
        PyObject *tmp_compexpr_right_41;
        tmp_compexpr_left_41 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_41 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_41, tmp_compexpr_right_41);
        assert(!(tmp_res == -1));
        tmp_condition_result_41 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_82;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_string_concat_values_20;
        PyObject *tmp_tuple_element_20;
        tmp_called_value_76 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_76 != NULL);
        tmp_tuple_element_20 = mod_consts[149];
        tmp_string_concat_values_20 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_27;
            PyObject *tmp_unicode_arg_12;
            PyObject *tmp_format_spec_27;
            PyTuple_SET_ITEM0(tmp_string_concat_values_20, 0, tmp_tuple_element_20);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_12 = var_Error;
            tmp_format_value_27 = PyObject_Unicode(tmp_unicode_arg_12);
            if (tmp_format_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_20;
            }
            tmp_format_spec_27 = mod_consts[8];
            tmp_tuple_element_20 = BUILTIN_FORMAT(tmp_format_value_27, tmp_format_spec_27);
            Py_DECREF(tmp_format_value_27);
            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_20, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_string_concat_values_20);
        goto try_except_handler_42;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_args_element_value_44 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_20);
        Py_DECREF(tmp_string_concat_values_20);
        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_42;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 232;
        tmp_call_result_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_76, tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_42;
        }
        Py_DECREF(tmp_call_result_34);
    }
    goto try_end_39;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto try_except_handler_41;
    // End of try:
    try_end_39:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_41;
    branch_no_41:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 228;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_41;
    branch_end_41:;
    goto try_end_40;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(exception_preserved_type_13, exception_preserved_value_13, exception_preserved_tb_13);

    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto try_except_handler_5;
    // End of try:
    try_end_40:;
    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(exception_preserved_type_13, exception_preserved_value_13, exception_preserved_tb_13);

    goto try_end_38;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_38:;
    goto branch_end_40;
    branch_no_40:;
    {
        nuitka_bool tmp_condition_result_42;
        PyObject *tmp_compexpr_left_42;
        PyObject *tmp_compexpr_right_42;
        PyObject *tmp_called_instance_33;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_33 == NULL)) {
            tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_45 = mod_consts[150];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_46 = var_recieve;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
            tmp_compexpr_left_42 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_33,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_compexpr_left_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_42 = Py_None;
        tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_42, tmp_compexpr_right_42);
        Py_DECREF(tmp_compexpr_left_42);
        if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
        assert(tmp_condition_result_42 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_42:;
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_59 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_60 = var_recieve;
        tmp_called_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[28]);
        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 235;
        tmp_subscript_value_25 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_77, mod_consts[151]);

        Py_DECREF(tmp_called_value_77);
        if (tmp_subscript_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_83 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_25);
        Py_DECREF(tmp_subscript_value_25);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_colName;
            var_colName = tmp_assign_source_83;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_called_value_78;
        PyObject *tmp_kw_call_value_0_14;
        PyObject *tmp_kw_call_value_1_12;
        PyObject *tmp_kw_call_value_2_8;
        tmp_called_value_78 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_called_value_78 == NULL)) {
            tmp_called_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        tmp_kw_call_value_0_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_kw_call_value_0_14 == NULL)) {
            tmp_kw_call_value_0_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_kw_call_value_0_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        if (var_caching_dataframe == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[140]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }

        tmp_kw_call_value_1_12 = var_caching_dataframe;
        CHECK_OBJECT(var_colName);
        tmp_kw_call_value_2_8 = var_colName;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 237;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_14, tmp_kw_call_value_1_12, tmp_kw_call_value_2_8};

            tmp_assign_source_84 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_78, kw_values, mod_consts[153]);
        }

        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_84;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_instance_34;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_34 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 238;
        tmp_assign_source_85 = CALL_METHOD_NO_ARGS(tmp_called_instance_34, mod_consts[90]);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        {
            PyObject *old = var_caching_dataframe;
            var_caching_dataframe = tmp_assign_source_85;
            Py_XDECREF(old);
        }

    }
    goto try_end_41;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 14.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_14, &exception_preserved_value_14, &exception_preserved_tb_14);

    if (exception_keeper_tb_41 == NULL) {
        exception_keeper_tb_41 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_41);
    } else if (exception_keeper_lineno_41 != 0) {
        exception_keeper_tb_41 = ADD_TRACEBACK(exception_keeper_tb_41, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_41);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_41, &exception_keeper_value_41, &exception_keeper_tb_41);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_41, exception_keeper_tb_41);
    PUBLISH_EXCEPTION(&exception_keeper_type_41, &exception_keeper_value_41, &exception_keeper_tb_41);
    // Tried code:
    {
        bool tmp_condition_result_43;
        PyObject *tmp_compexpr_left_43;
        PyObject *tmp_compexpr_right_43;
        tmp_compexpr_left_43 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_43 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_43, tmp_compexpr_right_43);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_86;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_call_result_35;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_string_concat_values_21;
        PyObject *tmp_tuple_element_21;
        tmp_called_value_79 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_79 != NULL);
        tmp_tuple_element_21 = mod_consts[154];
        tmp_string_concat_values_21 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_28;
            PyObject *tmp_format_spec_28;
            PyObject *tmp_format_value_29;
            PyObject *tmp_unicode_arg_13;
            PyObject *tmp_format_spec_29;
            PyTuple_SET_ITEM0(tmp_string_concat_values_21, 0, tmp_tuple_element_21);
            CHECK_OBJECT(var_colName);
            tmp_format_value_28 = var_colName;
            tmp_format_spec_28 = mod_consts[8];
            tmp_tuple_element_21 = BUILTIN_FORMAT(tmp_format_value_28, tmp_format_spec_28);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_21, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = mod_consts[155];
            PyTuple_SET_ITEM0(tmp_string_concat_values_21, 2, tmp_tuple_element_21);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_13 = var_Error;
            tmp_format_value_29 = PyObject_Unicode(tmp_unicode_arg_13);
            if (tmp_format_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_21;
            }
            tmp_format_spec_29 = mod_consts[8];
            tmp_tuple_element_21 = BUILTIN_FORMAT(tmp_format_value_29, tmp_format_spec_29);
            Py_DECREF(tmp_format_value_29);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_21, 3, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_string_concat_values_21);
        goto try_except_handler_45;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_args_element_value_47 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_21);
        Py_DECREF(tmp_string_concat_values_21);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 240;
        tmp_call_result_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_79, tmp_args_element_value_47);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        Py_DECREF(tmp_call_result_35);
    }
    goto try_end_42;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto try_except_handler_44;
    // End of try:
    try_end_42:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_43;
    branch_no_43:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 236;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_44;
    branch_end_43:;
    goto try_end_43;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(exception_preserved_type_14, exception_preserved_value_14, exception_preserved_tb_14);

    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto try_except_handler_5;
    // End of try:
    try_end_43:;
    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(exception_preserved_type_14, exception_preserved_value_14, exception_preserved_tb_14);

    goto try_end_41;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_41:;
    goto branch_end_42;
    branch_no_42:;
    {
        nuitka_bool tmp_condition_result_44;
        PyObject *tmp_compexpr_left_44;
        PyObject *tmp_compexpr_right_44;
        PyObject *tmp_called_instance_35;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_args_element_value_49;
        tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_35 == NULL)) {
            tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_48 = mod_consts[156];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_49 = var_recieve;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_compexpr_left_44 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_35,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_compexpr_left_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_44 = Py_None;
        tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_44, tmp_compexpr_right_44);
        Py_DECREF(tmp_compexpr_left_44);
        if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_44 == NUITKA_BOOL_TRUE) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
        assert(tmp_condition_result_44 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_44:;
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_62;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_61 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_62 = var_recieve;
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[28]);
        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 243;
        tmp_subscript_value_26 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_80, mod_consts[157]);

        Py_DECREF(tmp_called_value_80);
        if (tmp_subscript_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_87 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_26);
        Py_DECREF(tmp_subscript_value_26);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_RowIndex;
            var_RowIndex = tmp_assign_source_87;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_value_81;
        PyObject *tmp_kw_call_value_0_15;
        PyObject *tmp_kw_call_value_1_13;
        PyObject *tmp_kw_call_value_2_9;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        tmp_kw_call_value_0_15 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_kw_call_value_0_15 == NULL)) {
            tmp_kw_call_value_0_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_kw_call_value_0_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        if (var_caching_dataframe == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[140]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 245;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }

        tmp_kw_call_value_1_13 = var_caching_dataframe;
        CHECK_OBJECT(var_RowIndex);
        tmp_kw_call_value_2_9 = var_RowIndex;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 245;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_15, tmp_kw_call_value_1_13, tmp_kw_call_value_2_9};

            tmp_assign_source_88 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_81, kw_values, mod_consts[159]);
        }

        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_88;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_called_instance_36;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_36 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 246;
        tmp_assign_source_89 = CALL_METHOD_NO_ARGS(tmp_called_instance_36, mod_consts[90]);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        {
            PyObject *old = var_caching_dataframe;
            var_caching_dataframe = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    goto try_end_44;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 15.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_15, &exception_preserved_value_15, &exception_preserved_tb_15);

    if (exception_keeper_tb_44 == NULL) {
        exception_keeper_tb_44 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_44);
    } else if (exception_keeper_lineno_44 != 0) {
        exception_keeper_tb_44 = ADD_TRACEBACK(exception_keeper_tb_44, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_44);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_44, &exception_keeper_value_44, &exception_keeper_tb_44);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_44, exception_keeper_tb_44);
    PUBLISH_EXCEPTION(&exception_keeper_type_44, &exception_keeper_value_44, &exception_keeper_tb_44);
    // Tried code:
    {
        bool tmp_condition_result_45;
        PyObject *tmp_compexpr_left_45;
        PyObject *tmp_compexpr_right_45;
        tmp_compexpr_left_45 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_45 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_45, tmp_compexpr_right_45);
        assert(!(tmp_res == -1));
        tmp_condition_result_45 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_90;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_string_concat_values_22;
        PyObject *tmp_tuple_element_22;
        tmp_called_value_82 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_82 != NULL);
        tmp_tuple_element_22 = mod_consts[160];
        tmp_string_concat_values_22 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_30;
            PyObject *tmp_format_spec_30;
            PyObject *tmp_format_value_31;
            PyObject *tmp_unicode_arg_14;
            PyObject *tmp_format_spec_31;
            PyTuple_SET_ITEM0(tmp_string_concat_values_22, 0, tmp_tuple_element_22);
            CHECK_OBJECT(var_RowIndex);
            tmp_format_value_30 = var_RowIndex;
            tmp_format_spec_30 = mod_consts[8];
            tmp_tuple_element_22 = BUILTIN_FORMAT(tmp_format_value_30, tmp_format_spec_30);
            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_22, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = mod_consts[155];
            PyTuple_SET_ITEM0(tmp_string_concat_values_22, 2, tmp_tuple_element_22);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_14 = var_Error;
            tmp_format_value_31 = PyObject_Unicode(tmp_unicode_arg_14);
            if (tmp_format_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_22;
            }
            tmp_format_spec_31 = mod_consts[8];
            tmp_tuple_element_22 = BUILTIN_FORMAT(tmp_format_value_31, tmp_format_spec_31);
            Py_DECREF(tmp_format_value_31);
            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_22, 3, tmp_tuple_element_22);
        }
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_string_concat_values_22);
        goto try_except_handler_48;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_args_element_value_50 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_22);
        Py_DECREF(tmp_string_concat_values_22);
        if (tmp_args_element_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_48;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 248;
        tmp_call_result_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_82, tmp_args_element_value_50);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_48;
        }
        Py_DECREF(tmp_call_result_36);
    }
    goto try_end_45;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto try_except_handler_47;
    // End of try:
    try_end_45:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_45;
    branch_no_45:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 244;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_47;
    branch_end_45:;
    goto try_end_46;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(exception_preserved_type_15, exception_preserved_value_15, exception_preserved_tb_15);

    // Re-raise.
    exception_type = exception_keeper_type_46;
    exception_value = exception_keeper_value_46;
    exception_tb = exception_keeper_tb_46;
    exception_lineno = exception_keeper_lineno_46;

    goto try_except_handler_5;
    // End of try:
    try_end_46:;
    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(exception_preserved_type_15, exception_preserved_value_15, exception_preserved_tb_15);

    goto try_end_44;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_44:;
    goto branch_end_44;
    branch_no_44:;
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_compexpr_left_46;
        PyObject *tmp_compexpr_right_46;
        PyObject *tmp_called_instance_37;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_args_element_value_52;
        tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_37 == NULL)) {
            tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_51 = mod_consts[161];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_52 = var_recieve;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52};
            tmp_compexpr_left_46 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_37,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_compexpr_left_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_compexpr_right_46 = Py_None;
        tmp_condition_result_46 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_46, tmp_compexpr_right_46);
        Py_DECREF(tmp_compexpr_left_46);
        if (tmp_condition_result_46 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
        assert(tmp_condition_result_46 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_46:;
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_64;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_63 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_64 = var_recieve;
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[28]);
        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 250;
        tmp_subscript_value_27 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_83, mod_consts[33]);

        Py_DECREF(tmp_called_value_83);
        if (tmp_subscript_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_91 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_27);
        Py_DECREF(tmp_subscript_value_27);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_withIndex;
            var_withIndex = tmp_assign_source_91;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_subscript_value_28;
        PyObject *tmp_called_value_84;
        PyObject *tmp_expression_value_66;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_65 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_66 = var_recieve;
        tmp_called_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[28]);
        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 251;
        tmp_subscript_value_28 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_84, mod_consts[151]);

        Py_DECREF(tmp_called_value_84);
        if (tmp_subscript_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_92 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_28);
        Py_DECREF(tmp_subscript_value_28);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_colIndex;
            var_colIndex = tmp_assign_source_92;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_start_value_18;
        PyObject *tmp_left_value_18;
        PyObject *tmp_right_value_18;
        PyObject *tmp_stop_value_21;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_68 = var_recieve;
        CHECK_OBJECT(var_colIndex);
        tmp_left_value_18 = var_colIndex;
        tmp_right_value_18 = mod_consts[34];
        tmp_start_value_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_18, tmp_right_value_18);
        if (tmp_start_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_withIndex);
        tmp_stop_value_21 = var_withIndex;
        tmp_subscript_value_29 = MAKE_SLICEOBJ2(tmp_start_value_18, tmp_stop_value_21);
        Py_DECREF(tmp_start_value_18);
        assert(!(tmp_subscript_value_29 == NULL));
        tmp_expression_value_67 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_29);
        Py_DECREF(tmp_subscript_value_29);
        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[35]);
        Py_DECREF(tmp_expression_value_67);
        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 252;
        tmp_assign_source_93 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_85, mod_consts[36]);

        Py_DECREF(tmp_called_value_85);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_colName;
            var_colName = tmp_assign_source_93;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_86;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_start_value_19;
        PyObject *tmp_stop_value_22;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_70 = var_recieve;
        CHECK_OBJECT(var_withIndex);
        tmp_start_value_19 = var_withIndex;
        tmp_stop_value_22 = Py_None;
        tmp_subscript_value_30 = MAKE_SLICEOBJ2(tmp_start_value_19, tmp_stop_value_22);
        assert(!(tmp_subscript_value_30 == NULL));
        tmp_expression_value_69 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_30);
        Py_DECREF(tmp_subscript_value_30);
        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[35]);
        Py_DECREF(tmp_expression_value_69);
        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 253;
        tmp_assign_source_94 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_86, mod_consts[36]);

        Py_DECREF(tmp_called_value_86);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_data;
            var_data = tmp_assign_source_94;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_87;
        PyObject *tmp_kw_call_value_0_16;
        PyObject *tmp_kw_call_value_1_14;
        PyObject *tmp_kw_call_value_2_10;
        PyObject *tmp_kw_call_value_3_4;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        tmp_kw_call_value_0_16 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_kw_call_value_0_16 == NULL)) {
            tmp_kw_call_value_0_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_kw_call_value_0_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        tmp_kw_call_value_1_14 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_kw_call_value_1_14 == NULL)) {
            tmp_kw_call_value_1_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_kw_call_value_1_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        CHECK_OBJECT(var_colName);
        tmp_kw_call_value_2_10 = var_colName;
        CHECK_OBJECT(var_data);
        tmp_kw_call_value_3_4 = var_data;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 255;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_16, tmp_kw_call_value_1_14, tmp_kw_call_value_2_10, tmp_kw_call_value_3_4};

            tmp_assign_source_95 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_87, kw_values, mod_consts[163]);
        }

        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_95;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_38;
        PyObject *tmp_call_result_37;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_38 = var_boot;
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 256;
        tmp_call_result_37 = CALL_METHOD_NO_ARGS(tmp_called_instance_38, mod_consts[164]);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        Py_DECREF(tmp_call_result_37);
    }
    goto try_end_47;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 16.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_16, &exception_preserved_value_16, &exception_preserved_tb_16);

    if (exception_keeper_tb_47 == NULL) {
        exception_keeper_tb_47 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_47);
    } else if (exception_keeper_lineno_47 != 0) {
        exception_keeper_tb_47 = ADD_TRACEBACK(exception_keeper_tb_47, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_47);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_47, &exception_keeper_value_47, &exception_keeper_tb_47);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_47, exception_keeper_tb_47);
    PUBLISH_EXCEPTION(&exception_keeper_type_47, &exception_keeper_value_47, &exception_keeper_tb_47);
    // Tried code:
    {
        bool tmp_condition_result_47;
        PyObject *tmp_compexpr_left_47;
        PyObject *tmp_compexpr_right_47;
        tmp_compexpr_left_47 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_47 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_47, tmp_compexpr_right_47);
        assert(!(tmp_res == -1));
        tmp_condition_result_47 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_47 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_96;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_88;
        PyObject *tmp_call_result_38;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_string_concat_values_23;
        PyObject *tmp_tuple_element_23;
        tmp_called_value_88 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_88 != NULL);
        tmp_tuple_element_23 = mod_consts[165];
        tmp_string_concat_values_23 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_32;
            PyObject *tmp_format_spec_32;
            PyObject *tmp_format_value_33;
            PyObject *tmp_unicode_arg_15;
            PyObject *tmp_format_spec_33;
            PyTuple_SET_ITEM0(tmp_string_concat_values_23, 0, tmp_tuple_element_23);
            CHECK_OBJECT(var_colName);
            tmp_format_value_32 = var_colName;
            tmp_format_spec_32 = mod_consts[8];
            tmp_tuple_element_23 = BUILTIN_FORMAT(tmp_format_value_32, tmp_format_spec_32);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_23, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = mod_consts[155];
            PyTuple_SET_ITEM0(tmp_string_concat_values_23, 2, tmp_tuple_element_23);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_15 = var_Error;
            tmp_format_value_33 = PyObject_Unicode(tmp_unicode_arg_15);
            if (tmp_format_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_23;
            }
            tmp_format_spec_33 = mod_consts[8];
            tmp_tuple_element_23 = BUILTIN_FORMAT(tmp_format_value_33, tmp_format_spec_33);
            Py_DECREF(tmp_format_value_33);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_23, 3, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_string_concat_values_23);
        goto try_except_handler_51;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_args_element_value_53 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_23);
        Py_DECREF(tmp_string_concat_values_23);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_51;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 258;
        tmp_call_result_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_88, tmp_args_element_value_53);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_51;
        }
        Py_DECREF(tmp_call_result_38);
    }
    goto try_end_48;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto try_except_handler_50;
    // End of try:
    try_end_48:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_47;
    branch_no_47:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 254;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_50;
    branch_end_47:;
    goto try_end_49;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(exception_preserved_type_16, exception_preserved_value_16, exception_preserved_tb_16);

    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto try_except_handler_5;
    // End of try:
    try_end_49:;
    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(exception_preserved_type_16, exception_preserved_value_16, exception_preserved_tb_16);

    goto try_end_47;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_47:;
    goto branch_end_46;
    branch_no_46:;
    {
        PyObject *tmp_called_value_89;
        PyObject *tmp_call_result_39;
        tmp_called_value_89 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_89 != NULL);
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 260;
        tmp_call_result_39 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_89, mod_consts[166]);

        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_39);
    }
    branch_end_46:;
    branch_end_44:;
    branch_end_42:;
    branch_end_40:;
    branch_end_38:;
    branch_end_37:;
    branch_end_29:;
    branch_end_28:;
    branch_end_25:;
    branch_end_23:;
    branch_end_21:;
    branch_end_19:;
    branch_end_17:;
    branch_end_14:;
    branch_end_12:;
    branch_end_10:;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_4:;
    branch_end_3:;
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_instance_39;
        tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_39 == NULL)) {
            tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 261;
        tmp_assign_source_97 = CALL_METHOD_NO_ARGS(tmp_called_instance_39, mod_consts[14]);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_end_time;
            var_end_time = tmp_assign_source_97;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_call_result_40;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_string_concat_values_24;
        PyObject *tmp_tuple_element_24;
        tmp_called_value_90 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_90 != NULL);
        tmp_tuple_element_24 = mod_consts[167];
        tmp_string_concat_values_24 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_34;
            PyObject *tmp_called_value_91;
            PyObject *tmp_args_element_value_55;
            PyObject *tmp_left_value_19;
            PyObject *tmp_right_value_19;
            PyObject *tmp_args_element_value_56;
            PyObject *tmp_format_spec_34;
            PyTuple_SET_ITEM0(tmp_string_concat_values_24, 0, tmp_tuple_element_24);
            tmp_called_value_91 = LOOKUP_BUILTIN(mod_consts[168]);
            assert(tmp_called_value_91 != NULL);
            CHECK_OBJECT(var_end_time);
            tmp_left_value_19 = var_end_time;
            CHECK_OBJECT(var_start_time);
            tmp_right_value_19 = var_start_time;
            tmp_args_element_value_55 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_19, tmp_right_value_19);
            if (tmp_args_element_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_24;
            }
            tmp_args_element_value_56 = mod_consts[45];
            frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 262;
            {
                PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56};
                tmp_format_value_34 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_91, call_args);
            }

            Py_DECREF(tmp_args_element_value_55);
            if (tmp_format_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_24;
            }
            tmp_format_spec_34 = mod_consts[8];
            tmp_tuple_element_24 = BUILTIN_FORMAT(tmp_format_value_34, tmp_format_spec_34);
            Py_DECREF(tmp_format_value_34);
            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_24, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = mod_consts[169];
            PyTuple_SET_ITEM0(tmp_string_concat_values_24, 2, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_string_concat_values_24);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_args_element_value_54 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_24);
        Py_DECREF(tmp_string_concat_values_24);
        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 262;
        tmp_call_result_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_90, tmp_args_element_value_54);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_40);
    }
    goto try_end_50;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 17.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_17, &exception_preserved_value_17, &exception_preserved_tb_17);

    if (exception_keeper_tb_50 == NULL) {
        exception_keeper_tb_50 = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_50);
    } else if (exception_keeper_lineno_50 != 0) {
        exception_keeper_tb_50 = ADD_TRACEBACK(exception_keeper_tb_50, frame_1fdea552a98882270c74bdf9465d7162, exception_keeper_lineno_50);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_50, &exception_keeper_value_50, &exception_keeper_tb_50);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_50, exception_keeper_tb_50);
    PUBLISH_EXCEPTION(&exception_keeper_type_50, &exception_keeper_value_50, &exception_keeper_tb_50);
    // Tried code:
    {
        bool tmp_condition_result_48;
        PyObject *tmp_compexpr_left_48;
        PyObject *tmp_compexpr_right_48;
        tmp_compexpr_left_48 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_48 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_48, tmp_compexpr_right_48);
        assert(!(tmp_res == -1));
        tmp_condition_result_48 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_48 != false) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
    }
    branch_yes_48:;
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_Error;
            var_Error = tmp_assign_source_98;
            Py_INCREF(var_Error);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_92;
        PyObject *tmp_call_result_41;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_string_concat_values_25;
        PyObject *tmp_tuple_element_25;
        tmp_called_value_92 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_92 != NULL);
        tmp_tuple_element_25 = mod_consts[170];
        tmp_string_concat_values_25 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_35;
            PyObject *tmp_unicode_arg_16;
            PyObject *tmp_format_spec_35;
            PyTuple_SET_ITEM0(tmp_string_concat_values_25, 0, tmp_tuple_element_25);
            CHECK_OBJECT(var_Error);
            tmp_unicode_arg_16 = var_Error;
            tmp_format_value_35 = PyObject_Unicode(tmp_unicode_arg_16);
            if (tmp_format_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_25;
            }
            tmp_format_spec_35 = mod_consts[8];
            tmp_tuple_element_25 = BUILTIN_FORMAT(tmp_format_value_35, tmp_format_spec_35);
            Py_DECREF(tmp_format_value_35);
            if (tmp_tuple_element_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_25, 1, tmp_tuple_element_25);
        }
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_string_concat_values_25);
        goto try_except_handler_53;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_args_element_value_57 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_25);
        Py_DECREF(tmp_string_concat_values_25);
        if (tmp_args_element_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_53;
        }
        frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = 264;
        tmp_call_result_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_92, tmp_args_element_value_57);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_53;
        }
        Py_DECREF(tmp_call_result_41);
    }
    goto try_end_51;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_Error);
    var_Error = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto try_except_handler_52;
    // End of try:
    try_end_51:;
    Py_XDECREF(var_Error);
    var_Error = NULL;

    goto branch_end_48;
    branch_no_48:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 48;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1fdea552a98882270c74bdf9465d7162->m_frame) frame_1fdea552a98882270c74bdf9465d7162->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_52;
    branch_end_48:;
    goto try_end_52;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(exception_preserved_type_17, exception_preserved_value_17, exception_preserved_tb_17);

    // Re-raise.
    exception_type = exception_keeper_type_52;
    exception_value = exception_keeper_value_52;
    exception_tb = exception_keeper_tb_52;
    exception_lineno = exception_keeper_lineno_52;

    goto frame_exception_exit_1;
    // End of try:
    try_end_52:;
    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(exception_preserved_type_17, exception_preserved_value_17, exception_preserved_tb_17);

    goto try_end_50;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_50:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 46;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1fdea552a98882270c74bdf9465d7162);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1fdea552a98882270c74bdf9465d7162);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1fdea552a98882270c74bdf9465d7162, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1fdea552a98882270c74bdf9465d7162->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1fdea552a98882270c74bdf9465d7162, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1fdea552a98882270c74bdf9465d7162,
        type_description_1,
        var_userNameGot,
        var_userPasswordGot,
        var_boot,
        var_UserInfo,
        var_Error,
        var_start_time,
        var_recieve,
        var_startIndex,
        var_IndexFor,
        var_IndexWith,
        var_IndexWithStart,
        var_dataFrame,
        var_dataBase,
        var_data,
        var_fromIndex,
        var_ToIndex,
        var_WithIndex,
        var_baseAndFrame,
        var_sourcePath,
        var_targetBase,
        var_targetFrame,
        var_encoder,
        var_endIndex,
        var_addUserName,
        var_addUserAuthority,
        var_addUserPasswd,
        var_dotIndex,
        var_dataBaseUsed,
        var_extract,
        var_usingFrame,
        var_limitIndex,
        var_math_symblos,
        var_i,
        var_caching_dataframe,
        var_save_name,
        var_save_format,
        var_colName,
        var_RowIndex,
        var_withIndex,
        var_colIndex,
        var_end_time
    );


    // Release cached frame if used for exception.
    if (frame_1fdea552a98882270c74bdf9465d7162 == cache_frame_1fdea552a98882270c74bdf9465d7162) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1fdea552a98882270c74bdf9465d7162);
        cache_frame_1fdea552a98882270c74bdf9465d7162 = NULL;
    }

    assertFrameObject(frame_1fdea552a98882270c74bdf9465d7162);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_userNameGot);
    Py_DECREF(var_userNameGot);
    var_userNameGot = NULL;
    CHECK_OBJECT(var_userPasswordGot);
    Py_DECREF(var_userPasswordGot);
    var_userPasswordGot = NULL;
    Py_XDECREF(var_boot);
    var_boot = NULL;
    Py_XDECREF(var_UserInfo);
    var_UserInfo = NULL;
    Py_XDECREF(var_Error);
    var_Error = NULL;
    Py_XDECREF(var_start_time);
    var_start_time = NULL;
    Py_XDECREF(var_recieve);
    var_recieve = NULL;
    Py_XDECREF(var_startIndex);
    var_startIndex = NULL;
    Py_XDECREF(var_IndexFor);
    var_IndexFor = NULL;
    Py_XDECREF(var_IndexWith);
    var_IndexWith = NULL;
    Py_XDECREF(var_IndexWithStart);
    var_IndexWithStart = NULL;
    Py_XDECREF(var_dataFrame);
    var_dataFrame = NULL;
    Py_XDECREF(var_dataBase);
    var_dataBase = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_fromIndex);
    var_fromIndex = NULL;
    Py_XDECREF(var_ToIndex);
    var_ToIndex = NULL;
    Py_XDECREF(var_WithIndex);
    var_WithIndex = NULL;
    Py_XDECREF(var_baseAndFrame);
    var_baseAndFrame = NULL;
    Py_XDECREF(var_sourcePath);
    var_sourcePath = NULL;
    Py_XDECREF(var_targetBase);
    var_targetBase = NULL;
    Py_XDECREF(var_targetFrame);
    var_targetFrame = NULL;
    Py_XDECREF(var_encoder);
    var_encoder = NULL;
    Py_XDECREF(var_endIndex);
    var_endIndex = NULL;
    Py_XDECREF(var_addUserName);
    var_addUserName = NULL;
    Py_XDECREF(var_addUserAuthority);
    var_addUserAuthority = NULL;
    Py_XDECREF(var_addUserPasswd);
    var_addUserPasswd = NULL;
    Py_XDECREF(var_dotIndex);
    var_dotIndex = NULL;
    Py_XDECREF(var_dataBaseUsed);
    var_dataBaseUsed = NULL;
    Py_XDECREF(var_extract);
    var_extract = NULL;
    Py_XDECREF(var_usingFrame);
    var_usingFrame = NULL;
    Py_XDECREF(var_limitIndex);
    var_limitIndex = NULL;
    Py_XDECREF(var_math_symblos);
    var_math_symblos = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_caching_dataframe);
    var_caching_dataframe = NULL;
    Py_XDECREF(var_save_name);
    var_save_name = NULL;
    Py_XDECREF(var_save_format);
    var_save_format = NULL;
    Py_XDECREF(var_colName);
    var_colName = NULL;
    Py_XDECREF(var_RowIndex);
    var_RowIndex = NULL;
    Py_XDECREF(var_withIndex);
    var_withIndex = NULL;
    Py_XDECREF(var_colIndex);
    var_colIndex = NULL;
    Py_XDECREF(var_end_time);
    var_end_time = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_userNameGot);
    var_userNameGot = NULL;
    Py_XDECREF(var_userPasswordGot);
    var_userPasswordGot = NULL;
    Py_XDECREF(var_boot);
    var_boot = NULL;
    Py_XDECREF(var_UserInfo);
    var_UserInfo = NULL;
    Py_XDECREF(var_Error);
    var_Error = NULL;
    Py_XDECREF(var_start_time);
    var_start_time = NULL;
    Py_XDECREF(var_recieve);
    var_recieve = NULL;
    Py_XDECREF(var_startIndex);
    var_startIndex = NULL;
    Py_XDECREF(var_IndexFor);
    var_IndexFor = NULL;
    Py_XDECREF(var_IndexWith);
    var_IndexWith = NULL;
    Py_XDECREF(var_IndexWithStart);
    var_IndexWithStart = NULL;
    Py_XDECREF(var_dataFrame);
    var_dataFrame = NULL;
    Py_XDECREF(var_dataBase);
    var_dataBase = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_fromIndex);
    var_fromIndex = NULL;
    Py_XDECREF(var_ToIndex);
    var_ToIndex = NULL;
    Py_XDECREF(var_WithIndex);
    var_WithIndex = NULL;
    Py_XDECREF(var_baseAndFrame);
    var_baseAndFrame = NULL;
    Py_XDECREF(var_sourcePath);
    var_sourcePath = NULL;
    Py_XDECREF(var_targetBase);
    var_targetBase = NULL;
    Py_XDECREF(var_targetFrame);
    var_targetFrame = NULL;
    Py_XDECREF(var_encoder);
    var_encoder = NULL;
    Py_XDECREF(var_endIndex);
    var_endIndex = NULL;
    Py_XDECREF(var_addUserName);
    var_addUserName = NULL;
    Py_XDECREF(var_addUserAuthority);
    var_addUserAuthority = NULL;
    Py_XDECREF(var_addUserPasswd);
    var_addUserPasswd = NULL;
    Py_XDECREF(var_dotIndex);
    var_dotIndex = NULL;
    Py_XDECREF(var_dataBaseUsed);
    var_dataBaseUsed = NULL;
    Py_XDECREF(var_extract);
    var_extract = NULL;
    Py_XDECREF(var_usingFrame);
    var_usingFrame = NULL;
    Py_XDECREF(var_limitIndex);
    var_limitIndex = NULL;
    Py_XDECREF(var_math_symblos);
    var_math_symblos = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_caching_dataframe);
    var_caching_dataframe = NULL;
    Py_XDECREF(var_save_name);
    var_save_name = NULL;
    Py_XDECREF(var_save_format);
    var_save_format = NULL;
    Py_XDECREF(var_colName);
    var_colName = NULL;
    Py_XDECREF(var_RowIndex);
    var_RowIndex = NULL;
    Py_XDECREF(var_withIndex);
    var_withIndex = NULL;
    Py_XDECREF(var_colIndex);
    var_colIndex = NULL;
    Py_XDECREF(var_end_time);
    var_end_time = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION___main__$$$function__1_Shell() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl___main__$$$function__1_Shell,
        mod_consts[222],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1fdea552a98882270c74bdf9465d7162,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module___main__,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable___main__[] = {
    impl___main__$$$function__1_Shell,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable___main__;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable___main__) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable___main__[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module___main__,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode___main__(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("__main__");

    // Store the module for future use.
    module___main__ = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 1
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIternext();
#endif

        patchBuiltinModule();
        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("__main__: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("__main__: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("__main__: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in init__main__\n");

    moduledict___main__ = MODULE_DICT(module___main__);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict___main__,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict___main__,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict___main__,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module___main__);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !1
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 1
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module___main__);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_586c3651c7a0d000c34a1ec464748c13;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    // Frame without reuse.
    frame_586c3651c7a0d000c34a1ec464748c13 = MAKE_MODULE_FRAME(codeobj_586c3651c7a0d000c34a1ec464748c13, module___main__);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_586c3651c7a0d000c34a1ec464748c13);
    assert(Py_REFCNT(frame_586c3651c7a0d000c34a1ec464748c13) == 2);

    // Framed code:
    {
        PyObject *tmp_imported_value_1;
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 1;
        tmp_imported_value_1 = IMPORT_HARD_SITE();
        if (tmp_imported_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[172];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_4);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_1 != NULL);
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 1;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[176]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[177];
        tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[178];
        tmp_level_value_1 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict___main__,
                mod_consts[21],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[21]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[180];
        tmp_globals_arg_value_2 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[181];
        tmp_level_value_2 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict___main__,
                mod_consts[37],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[37]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[182];
        tmp_globals_arg_value_3 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[183];
        tmp_level_value_3 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 5;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict___main__,
                mod_consts[41],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[184];
        tmp_globals_arg_value_4 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[185];
        tmp_level_value_4 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 6;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict___main__,
                mod_consts[88],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[88]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[186];
        tmp_globals_arg_value_5 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[187];
        tmp_level_value_5 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 7;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict___main__,
                mod_consts[95],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[188];
        tmp_globals_arg_value_6 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[189];
        tmp_level_value_6 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 8;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict___main__,
                mod_consts[48],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[190];
        tmp_globals_arg_value_7 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[191];
        tmp_level_value_7 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 9;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict___main__,
                mod_consts[55],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[55]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[192];
        tmp_globals_arg_value_8 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[193];
        tmp_level_value_8 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 10;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict___main__,
                mod_consts[59],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[194];
        tmp_globals_arg_value_9 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[195];
        tmp_level_value_9 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 11;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict___main__,
                mod_consts[72],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[72]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[196];
        tmp_globals_arg_value_10 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[197];
        tmp_level_value_10 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 12;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict___main__,
                mod_consts[79],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[79]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[198];
        tmp_globals_arg_value_11 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[199];
        tmp_level_value_11 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 13;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict___main__,
                mod_consts[84],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[84]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[200];
        tmp_globals_arg_value_12 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[201];
        tmp_level_value_12 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 14;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict___main__,
                mod_consts[102],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[102]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[202];
        tmp_globals_arg_value_13 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[203];
        tmp_level_value_13 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 15;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict___main__,
                mod_consts[118],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[118]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[204];
        tmp_globals_arg_value_14 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[205];
        tmp_level_value_14 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 16;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict___main__,
                mod_consts[109],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[109]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[206];
        tmp_globals_arg_value_15 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[207];
        tmp_level_value_15 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 17;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict___main__,
                mod_consts[4],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[4]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[208];
        tmp_globals_arg_value_16 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[209];
        tmp_level_value_16 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 18;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict___main__,
                mod_consts[139],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[139]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[210];
        tmp_globals_arg_value_17 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[211];
        tmp_level_value_17 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 19;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict___main__,
                mod_consts[145],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[145]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[212];
        tmp_globals_arg_value_18 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[213];
        tmp_level_value_18 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 20;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict___main__,
                mod_consts[152],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[152]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[214];
        tmp_globals_arg_value_19 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[215];
        tmp_level_value_19 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 21;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict___main__,
                mod_consts[158],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[158]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[216];
        tmp_globals_arg_value_20 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[217];
        tmp_level_value_20 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 22;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict___main__,
                mod_consts[162],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[162]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[18];
        tmp_globals_arg_value_21 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = Py_None;
        tmp_level_value_21 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 23;
        tmp_assign_source_25 = IMPORT_MODULE5(tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_26 == NULL));
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[14];
        tmp_globals_arg_value_22 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = Py_None;
        tmp_level_value_22 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 25;
        tmp_assign_source_27 = IMPORT_MODULE5(tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        assert(!(tmp_assign_source_27 == NULL));
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[2];
        tmp_globals_arg_value_23 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[218];
        tmp_level_value_23 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 26;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict___main__,
                mod_consts[2],
                mod_consts[179]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[219];
        tmp_globals_arg_value_24 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = Py_None;
        tmp_level_value_24 = mod_consts[179];
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 27;
        tmp_assign_source_29 = IMPORT_MODULE5(tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_29);
    }
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

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_586c3651c7a0d000c34a1ec464748c13, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_586c3651c7a0d000c34a1ec464748c13, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = EXC_VALUE(PyThreadState_GET());
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_30);
    }
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[6]);
        assert(tmp_called_value_2 != NULL);
        tmp_tuple_element_1 = mod_consts[221];
        tmp_string_concat_values_1 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_unicode_arg_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[220]);

            if (unlikely(tmp_unicode_arg_1 == NULL)) {
                tmp_unicode_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
            }

            assert(!(tmp_unicode_arg_1 == NULL));
            tmp_format_value_1 = PyObject_Unicode(tmp_unicode_arg_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[8];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[8], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 29;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
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

    tmp_res = PyDict_DelItem((PyObject *)moduledict___main__, mod_consts[220]);
    if (tmp_res == -1) CLEAR_ERROR_OCCURRED();

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    tmp_res = PyDict_DelItem((PyObject *)moduledict___main__, mod_consts[220]);
    if (tmp_res == -1) CLEAR_ERROR_OCCURRED();

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 2;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_586c3651c7a0d000c34a1ec464748c13->m_frame) frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION___main__$$$function__1_Shell();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_31);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[222]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[222]);
        }

        assert(!(tmp_called_value_3 == NULL));
        frame_586c3651c7a0d000c34a1ec464748c13->m_frame.f_lineno = 266;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_586c3651c7a0d000c34a1ec464748c13);
#endif
    popFrameStack();

    assertFrameObject(frame_586c3651c7a0d000c34a1ec464748c13);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_586c3651c7a0d000c34a1ec464748c13);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_586c3651c7a0d000c34a1ec464748c13, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_586c3651c7a0d000c34a1ec464748c13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_586c3651c7a0d000c34a1ec464748c13, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("__main__", false);

    return module___main__;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 1
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("__main__", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

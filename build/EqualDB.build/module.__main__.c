/* Generated code for Python module '__main__'
 * created by Nuitka version 0.7.7
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
static PyObject *mod_consts[219];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[219];
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
        for(int i = 0; i < 219; i++) {
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

    for(int i = 0; i < 219; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_832cbd4bfba6c0c3926313b555bd60c5;
static PyCodeObject *codeobj_904b8be6f0cad932024385af6f8f1fb5;
/* For use in "MainProgram.c". */
PyCodeObject *codeobj_main = NULL;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[165]; CHECK_OBJECT(module_filename_obj);
    codeobj_832cbd4bfba6c0c3926313b555bd60c5 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[217], NULL, NULL, 0, 0, 0);
    codeobj_904b8be6f0cad932024385af6f8f1fb5 = MAKE_CODEOBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[216], mod_consts[218], NULL, 0, 0, 0);
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
    PyObject *var_LogInit = NULL;
    PyObject *var_logName = NULL;
    PyObject *var_userNameGot = NULL;
    PyObject *var_userPasswordGot = NULL;
    PyObject *var_boot = NULL;
    PyObject *var_UserInfo = NULL;
    PyObject *var_message = NULL;
    PyObject *var_e = NULL;
    PyObject *var_start_time = NULL;
    PyObject *var_recieve = NULL;
    PyObject *var_file = NULL;
    PyObject *var_line = NULL;
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
    PyObject *var_status = NULL;
    PyObject *var_frame = NULL;
    PyObject *var_colRange = NULL;
    PyObject *var_limit = NULL;
    PyObject *var_save_name = NULL;
    PyObject *var_save_format = NULL;
    PyObject *var_caching_dataframe = NULL;
    PyObject *var_colName = NULL;
    PyObject *var_RowIndex = NULL;
    PyObject *var_withIndex = NULL;
    PyObject *var_colIndex = NULL;
    PyObject *var_targetUser = NULL;
    PyObject *var_end_time = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    struct Nuitka_FrameObject *frame_904b8be6f0cad932024385af6f8f1fb5;
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
    PyObject *exception_preserved_type_11;
    PyObject *exception_preserved_value_11;
    PyTracebackObject *exception_preserved_tb_11;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_preserved_type_12;
    PyObject *exception_preserved_value_12;
    PyTracebackObject *exception_preserved_tb_12;
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
    PyObject *exception_preserved_type_13;
    PyObject *exception_preserved_value_13;
    PyTracebackObject *exception_preserved_tb_13;
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
    PyObject *exception_preserved_type_14;
    PyObject *exception_preserved_value_14;
    PyTracebackObject *exception_preserved_tb_14;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_preserved_type_15;
    PyObject *exception_preserved_value_15;
    PyTracebackObject *exception_preserved_tb_15;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
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
    PyObject *exception_preserved_type_16;
    PyObject *exception_preserved_value_16;
    PyTracebackObject *exception_preserved_tb_16;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_preserved_type_17;
    PyObject *exception_preserved_value_17;
    PyTracebackObject *exception_preserved_tb_17;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    PyObject *exception_preserved_type_18;
    PyObject *exception_preserved_value_18;
    PyTracebackObject *exception_preserved_tb_18;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_preserved_type_19;
    PyObject *exception_preserved_value_19;
    PyTracebackObject *exception_preserved_tb_19;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    PyObject *exception_preserved_type_20;
    PyObject *exception_preserved_value_20;
    PyTracebackObject *exception_preserved_tb_20;
    PyObject *exception_keeper_type_69;
    PyObject *exception_keeper_value_69;
    PyTracebackObject *exception_keeper_tb_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
    PyObject *exception_keeper_type_70;
    PyObject *exception_keeper_value_70;
    PyTracebackObject *exception_keeper_tb_70;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
    PyObject *exception_keeper_type_71;
    PyObject *exception_keeper_value_71;
    PyTracebackObject *exception_keeper_tb_71;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
    PyObject *exception_preserved_type_21;
    PyObject *exception_preserved_value_21;
    PyTracebackObject *exception_preserved_tb_21;
    PyObject *exception_keeper_type_72;
    PyObject *exception_keeper_value_72;
    PyTracebackObject *exception_keeper_tb_72;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
    PyObject *exception_keeper_type_73;
    PyObject *exception_keeper_value_73;
    PyTracebackObject *exception_keeper_tb_73;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;
    PyObject *exception_keeper_type_74;
    PyObject *exception_keeper_value_74;
    PyTracebackObject *exception_keeper_tb_74;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;
    PyObject *exception_preserved_type_22;
    PyObject *exception_preserved_value_22;
    PyTracebackObject *exception_preserved_tb_22;
    PyObject *exception_keeper_type_75;
    PyObject *exception_keeper_value_75;
    PyTracebackObject *exception_keeper_tb_75;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_75;
    PyObject *exception_keeper_type_76;
    PyObject *exception_keeper_value_76;
    PyTracebackObject *exception_keeper_tb_76;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_76;
    static struct Nuitka_FrameObject *cache_frame_904b8be6f0cad932024385af6f8f1fb5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_77;
    PyObject *exception_keeper_value_77;
    PyTracebackObject *exception_keeper_tb_77;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_77;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_904b8be6f0cad932024385af6f8f1fb5)) {
        Py_XDECREF(cache_frame_904b8be6f0cad932024385af6f8f1fb5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_904b8be6f0cad932024385af6f8f1fb5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_904b8be6f0cad932024385af6f8f1fb5 = MAKE_FUNCTION_FRAME(codeobj_904b8be6f0cad932024385af6f8f1fb5, module___main__, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_904b8be6f0cad932024385af6f8f1fb5->m_type_description == NULL);
    frame_904b8be6f0cad932024385af6f8f1fb5 = cache_frame_904b8be6f0cad932024385af6f8f1fb5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_904b8be6f0cad932024385af6f8f1fb5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_904b8be6f0cad932024385af6f8f1fb5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 30;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[1], 0), mod_consts[2]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_LogInit == NULL);
        var_LogInit = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_LogInit);
        tmp_called_instance_1 = var_LogInit;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 31;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_logName == NULL);
        var_logName = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[4]);
        assert(tmp_called_value_2 != NULL);
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 33;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[5]);

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_userNameGot == NULL);
        var_userNameGot = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 34;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[7]);

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_userPasswordGot == NULL);
        var_userPasswordGot = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_userNameGot);
        tmp_args_element_value_1 = var_userNameGot;
        CHECK_OBJECT(var_userPasswordGot);
        tmp_args_element_value_2 = var_userPasswordGot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_boot == NULL);
        var_boot = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_2 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 37;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[9]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_UserInfo == NULL);
        var_UserInfo = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_LogInit);
        tmp_expression_value_1 = var_LogInit;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_UserInfo);
        tmp_expression_value_2 = var_UserInfo;
        tmp_subscript_value_1 = mod_consts[11];
        tmp_kw_call_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 38;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 38;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_7;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
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
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_e = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_LogInit);
        tmp_called_instance_3 = var_LogInit;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 40;
        tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[13]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_9;
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_6 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_3 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 41;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_LogInit);
        tmp_called_instance_4 = var_LogInit;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 42;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[3]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_logName;
            assert(old != NULL);
            var_logName = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(var_LogInit);
        tmp_expression_value_3 = var_LogInit;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[15]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_logName);
        tmp_kw_call_arg_value_0_1 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_1 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 43;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 35;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (var_UserInfo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 44;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = var_UserInfo;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_13);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        CHECK_OBJECT(var_LogInit);
        tmp_expression_value_4 = var_LogInit;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[15]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_2 = var_logName;
        if (var_message == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_2 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 51;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_8, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    loop_start_1:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 53;
        tmp_assign_source_14 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[23]);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_start_time;
            var_start_time = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = LOOKUP_BUILTIN(mod_consts[4]);
        assert(tmp_called_value_9 != NULL);
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 55;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[24]);

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_recieve;
            var_recieve = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_recieve);
        tmp_cmp_expr_left_3 = var_recieve;
        tmp_cmp_expr_right_3 = LIST_COPY(mod_consts[25]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_4;
        tmp_called_value_10 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_10 != NULL);
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 57;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[26]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto loop_end_1;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_4 = mod_consts[29];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_5 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_cmp_expr_left_4 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_6,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_11;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_5 = var_recieve;
        tmp_subscript_value_2 = mod_consts[31];
        tmp_kw_call_value_0_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_UserInfo == NULL) {
            Py_DECREF(tmp_kw_call_value_0_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 63;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_6 = var_UserInfo;
        tmp_subscript_value_3 = mod_consts[32];
        tmp_kw_call_value_1_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);

            exception_lineno = 63;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 63;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};

            tmp_assign_source_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_instance_7;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 64;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_7 = var_LogInit;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[35]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_boot);
        tmp_called_instance_7 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 64;
        tmp_args_element_value_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[36]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 64;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 64;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_5;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_8 = var_LogInit;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[15]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 65;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_kw_call_arg_value_0_3 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_3 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 65;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_13, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_5);
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
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_4);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_4, exception_keeper_tb_4);
    PUBLISH_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
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
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_18;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_e);
        tmp_expression_value_12 = var_e;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[37]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[38]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[39]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_subscript_value_4 = mod_consts[40];
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(var_e);
        tmp_expression_value_14 = var_e;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[37]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[41]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_instance_8 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_7 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_8 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_21 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_8,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_14 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_14 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_9 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 70;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_9);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_15 = var_LogInit;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[15]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_kw_call_arg_value_0_4 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_4 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 71;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_15, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_7);
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 62;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_10 = mod_consts[43];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_11 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_cmp_expr_left_6 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_9,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_value_1;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_16 = var_recieve;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[44]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 74;
        tmp_left_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[45]);

        Py_DECREF(tmp_called_value_16);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_1 = mod_consts[46];
        tmp_assign_source_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_left_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_startIndex;
            var_startIndex = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_value_2;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_right_value_2;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_17 = var_recieve;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[44]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 75;
        tmp_left_value_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[47]);

        Py_DECREF(tmp_called_value_17);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_2 = mod_consts[48];
        tmp_assign_source_23 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_2, tmp_right_value_2);
        Py_DECREF(tmp_left_value_2);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_IndexFor;
            var_IndexFor = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_18 = var_recieve;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[44]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 76;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[49]);

        Py_DECREF(tmp_called_value_18);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_IndexWith;
            var_IndexWith = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_left_value_3;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_right_value_3;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_19 = var_recieve;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[44]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 77;
        tmp_left_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[49]);

        Py_DECREF(tmp_called_value_19);
        if (tmp_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_3 = mod_consts[50];
        tmp_assign_source_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_left_value_3);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_IndexWithStart;
            var_IndexWithStart = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_left_value_4;
        PyObject *tmp_right_value_4;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_21 = var_recieve;
        CHECK_OBJECT(var_startIndex);
        tmp_start_value_1 = var_startIndex;
        CHECK_OBJECT(var_IndexFor);
        tmp_left_value_4 = var_IndexFor;
        tmp_right_value_4 = mod_consts[48];
        tmp_stop_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_4, tmp_right_value_4);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_subscript_value_5 = MAKE_SLICEOBJ2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_5 == NULL));
        tmp_expression_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[51]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 81;
        tmp_assign_source_26 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_20, mod_consts[52]);

        Py_DECREF(tmp_called_value_20);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_dataFrame;
            var_dataFrame = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_start_value_2;
        PyObject *tmp_stop_value_2;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_23 = var_recieve;
        CHECK_OBJECT(var_IndexFor);
        tmp_start_value_2 = var_IndexFor;
        CHECK_OBJECT(var_IndexWith);
        tmp_stop_value_2 = var_IndexWith;
        tmp_subscript_value_6 = MAKE_SLICEOBJ2(tmp_start_value_2, tmp_stop_value_2);
        assert(!(tmp_subscript_value_6 == NULL));
        tmp_expression_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[51]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 82;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_21, mod_consts[52]);

        Py_DECREF(tmp_called_value_21);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_dataBase;
            var_dataBase = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_start_value_3;
        PyObject *tmp_stop_value_3;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_24 = var_recieve;
        CHECK_OBJECT(var_IndexWithStart);
        tmp_start_value_3 = var_IndexWithStart;
        tmp_stop_value_3 = Py_None;
        tmp_subscript_value_7 = MAKE_SLICEOBJ2(tmp_start_value_3, tmp_stop_value_3);
        assert(!(tmp_subscript_value_7 == NULL));
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_7);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_data;
            var_data = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_22;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_1;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_dataBase);
        tmp_kw_call_value_0_3 = var_dataBase;
        CHECK_OBJECT(var_dataFrame);
        tmp_kw_call_value_1_2 = var_dataFrame;
        CHECK_OBJECT(var_data);
        tmp_kw_call_value_2_1 = var_data;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 84;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1};

            tmp_assign_source_29 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_22, kw_values, mod_consts[54]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_instance_10;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 85;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_25 = var_LogInit;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[35]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_boot);
        tmp_called_instance_10 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 85;
        tmp_args_element_value_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[55]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 85;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 85;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_8;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_26 = var_LogInit;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[15]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_kw_call_arg_value_0_5 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_5 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 86;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_5};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_24, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_24);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_8);
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
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_7);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_7, exception_keeper_tb_7);
    PUBLISH_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_31;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_e);
        tmp_expression_value_30 = var_e;
        tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[37]);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[38]);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[39]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_subscript_value_8 = mod_consts[40];
        tmp_assign_source_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_8);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(var_e);
        tmp_expression_value_32 = var_e;
        tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[37]);
        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[41]);
        Py_DECREF(tmp_expression_value_31);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_called_instance_11 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_13 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_14 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_34 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_11,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_15;
        tmp_called_value_25 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_25 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_15 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 91;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_15);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_10;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_dict_value_0_6;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_33 = var_LogInit;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[15]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_kw_call_arg_value_0_6 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_6 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 92;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_26, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_26);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_10);
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_10;
    // End of try:
    try_end_8:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_7;
    branch_no_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 80;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_10;
    branch_end_7:;
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
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_recieve);
        tmp_cmp_expr_left_8 = var_recieve;
        tmp_cmp_expr_right_8 = mod_consts[56];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
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
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_call_result_11;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 94;
        tmp_call_result_11 = CALL_FUNCTION_NO_ARGS(tmp_called_value_27);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_11);
    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_16 = mod_consts[58];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_17 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_cmp_expr_left_9 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_12,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_9 = Py_None;
        tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
        assert(tmp_condition_result_9 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_9:;
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_34 = var_recieve;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[44]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 98;
        tmp_assign_source_35 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_28, mod_consts[59]);

        Py_DECREF(tmp_called_value_28);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_fromIndex;
            var_fromIndex = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_35 = var_recieve;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[44]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 99;
        tmp_assign_source_36 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_29, mod_consts[60]);

        Py_DECREF(tmp_called_value_29);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_ToIndex;
            var_ToIndex = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_36 = var_recieve;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[44]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 100;
        tmp_assign_source_37 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_30, mod_consts[49]);

        Py_DECREF(tmp_called_value_30);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_WithIndex;
            var_WithIndex = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_start_value_4;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_5;
        PyObject *tmp_stop_value_4;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_38 = var_recieve;
        CHECK_OBJECT(var_ToIndex);
        tmp_left_value_5 = var_ToIndex;
        tmp_right_value_5 = mod_consts[61];
        tmp_start_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_5, tmp_right_value_5);
        if (tmp_start_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_WithIndex);
        tmp_stop_value_4 = var_WithIndex;
        tmp_subscript_value_9 = MAKE_SLICEOBJ2(tmp_start_value_4, tmp_stop_value_4);
        Py_DECREF(tmp_start_value_4);
        assert(!(tmp_subscript_value_9 == NULL));
        tmp_expression_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[51]);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 101;
        tmp_assign_source_38 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_31, mod_consts[52]);

        Py_DECREF(tmp_called_value_31);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_baseAndFrame;
            var_baseAndFrame = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_start_value_5;
        PyObject *tmp_left_value_6;
        PyObject *tmp_right_value_6;
        PyObject *tmp_stop_value_5;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_40 = var_recieve;
        CHECK_OBJECT(var_fromIndex);
        tmp_left_value_6 = var_fromIndex;
        tmp_right_value_6 = mod_consts[50];
        tmp_start_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_6, tmp_right_value_6);
        if (tmp_start_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_ToIndex);
        tmp_stop_value_5 = var_ToIndex;
        tmp_subscript_value_10 = MAKE_SLICEOBJ2(tmp_start_value_5, tmp_stop_value_5);
        Py_DECREF(tmp_start_value_5);
        assert(!(tmp_subscript_value_10 == NULL));
        tmp_expression_value_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[51]);
        Py_DECREF(tmp_expression_value_39);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 102;
        tmp_assign_source_39 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_32, mod_consts[52]);

        Py_DECREF(tmp_called_value_32);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_sourcePath;
            var_sourcePath = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_stop_value_6;
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(var_baseAndFrame);
        tmp_expression_value_41 = var_baseAndFrame;
        CHECK_OBJECT(var_baseAndFrame);
        tmp_expression_value_42 = var_baseAndFrame;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[44]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 103;
        tmp_stop_value_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_33, mod_consts[62]);

        Py_DECREF(tmp_called_value_33);
        if (tmp_stop_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_subscript_value_11 = MAKE_SLICEOBJ1(tmp_stop_value_6);
        Py_DECREF(tmp_stop_value_6);
        assert(!(tmp_subscript_value_11 == NULL));
        tmp_assign_source_40 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_11);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_targetBase;
            var_targetBase = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_start_value_6;
        PyObject *tmp_left_value_7;
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_right_value_7;
        PyObject *tmp_stop_value_7;
        CHECK_OBJECT(var_baseAndFrame);
        tmp_expression_value_43 = var_baseAndFrame;
        CHECK_OBJECT(var_baseAndFrame);
        tmp_expression_value_44 = var_baseAndFrame;
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[44]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 104;
        tmp_left_value_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_34, mod_consts[62]);

        Py_DECREF(tmp_called_value_34);
        if (tmp_left_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_right_value_7 = mod_consts[63];
        tmp_start_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_7, tmp_right_value_7);
        Py_DECREF(tmp_left_value_7);
        if (tmp_start_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_stop_value_7 = Py_None;
        tmp_subscript_value_12 = MAKE_SLICEOBJ2(tmp_start_value_6, tmp_stop_value_7);
        Py_DECREF(tmp_start_value_6);
        assert(!(tmp_subscript_value_12 == NULL));
        tmp_assign_source_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_12);
        Py_DECREF(tmp_subscript_value_12);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_targetFrame;
            var_targetFrame = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_start_value_7;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_8;
        PyObject *tmp_stop_value_8;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_45 = var_recieve;
        CHECK_OBJECT(var_WithIndex);
        tmp_left_value_8 = var_WithIndex;
        tmp_right_value_8 = mod_consts[50];
        tmp_start_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_8, tmp_right_value_8);
        if (tmp_start_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_stop_value_8 = Py_None;
        tmp_subscript_value_13 = MAKE_SLICEOBJ2(tmp_start_value_7, tmp_stop_value_8);
        Py_DECREF(tmp_start_value_7);
        assert(!(tmp_subscript_value_13 == NULL));
        tmp_assign_source_42 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_13);
        Py_DECREF(tmp_subscript_value_13);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_encoder;
            var_encoder = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_35;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_kw_call_value_5_1;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_15;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_sourcePath);
        tmp_kw_call_value_0_4 = var_sourcePath;
        CHECK_OBJECT(var_targetBase);
        tmp_kw_call_value_1_3 = var_targetBase;
        CHECK_OBJECT(var_targetFrame);
        tmp_kw_call_value_2_2 = var_targetFrame;
        CHECK_OBJECT(var_encoder);
        tmp_kw_call_value_3_1 = var_encoder;
        if (var_UserInfo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_46 = var_UserInfo;
        tmp_subscript_value_14 = mod_consts[32];
        tmp_kw_call_value_4_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_14);
        if (tmp_kw_call_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        if (var_UserInfo == NULL) {
            Py_DECREF(tmp_kw_call_value_4_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_47 = var_UserInfo;
        tmp_subscript_value_15 = mod_consts[11];
        tmp_kw_call_value_5_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_15);
        if (tmp_kw_call_value_5_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_4_1);

            exception_lineno = 110;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 109;
        {
            PyObject *kw_values[6] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_3, tmp_kw_call_value_2_2, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1, tmp_kw_call_value_5_1};

            tmp_assign_source_43 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_35, kw_values, mod_consts[65]);
        }

        Py_DECREF(tmp_kw_call_value_4_1);
        Py_DECREF(tmp_kw_call_value_5_1);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_instance_13;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_48 = var_LogInit;
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[35]);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_boot);
        tmp_called_instance_13 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 111;
        tmp_args_element_value_18 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, mod_consts[66]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 111;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 111;
        tmp_assign_source_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_call_result_12;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_dict_value_0_7;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_49 = var_LogInit;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[15]);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_37);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 112;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_kw_call_arg_value_0_7 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_7 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 112;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_7};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_37, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_37);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_12);
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
        exception_keeper_tb_10 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_10);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_keeper_tb_10 = ADD_TRACEBACK(exception_keeper_tb_10, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_10);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_10, exception_keeper_tb_10);
    PUBLISH_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        tmp_cmp_expr_left_10 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_10 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_45;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_subscript_value_16;
        CHECK_OBJECT(var_e);
        tmp_expression_value_53 = var_e;
        tmp_expression_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[37]);
        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[38]);
        Py_DECREF(tmp_expression_value_52);
        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[39]);
        Py_DECREF(tmp_expression_value_51);
        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_subscript_value_16 = mod_consts[40];
        tmp_assign_source_46 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_16);
        Py_DECREF(tmp_expression_value_50);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_expression_value_55;
        CHECK_OBJECT(var_e);
        tmp_expression_value_55 = var_e;
        tmp_expression_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[37]);
        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[41]);
        Py_DECREF(tmp_expression_value_54);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_47;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 116;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_called_instance_14 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_19 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_20 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_48 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_14,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_21;
        tmp_called_value_38 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_38 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_21 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 117;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_21);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_call_result_14;
        PyObject *tmp_kw_call_arg_value_0_8;
        PyObject *tmp_kw_call_dict_value_0_8;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_expression_value_56 = var_LogInit;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[15]);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_39);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }

        tmp_kw_call_arg_value_0_8 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_8 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 118;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_8};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_8};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_39, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_39);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        Py_DECREF(tmp_call_result_14);
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_13;
    // End of try:
    try_end_11:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_10;
    branch_no_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 97;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_13;
    branch_end_10:;
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
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(var_recieve);
        tmp_cmp_expr_left_11 = var_recieve;
        tmp_cmp_expr_right_11 = mod_consts[67];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
        assert(tmp_condition_result_11 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_11:;
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_40;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 121;
        tmp_assign_source_49 = CALL_FUNCTION_NO_ARGS(tmp_called_value_40);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_17;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_57 = var_LogInit;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[35]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_boot);
        tmp_expression_value_58 = var_boot;
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[69]);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 122;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        if (var_UserInfo == NULL) {
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_42);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_59 = var_UserInfo;
        tmp_subscript_value_17 = mod_consts[11];
        tmp_kw_call_value_0_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_17);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 122;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 122;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};

            tmp_args_element_value_22 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_42, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 122;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 122;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_call_result_15;
        PyObject *tmp_kw_call_value_0_6;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_expression_value_60 = var_LogInit;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[15]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_message);
        tmp_kw_call_value_0_6 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 123;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};

            tmp_call_result_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_43, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_43);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        Py_DECREF(tmp_call_result_15);
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
        exception_keeper_tb_13 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_13);
    } else if (exception_keeper_lineno_13 != 0) {
        exception_keeper_tb_13 = ADD_TRACEBACK(exception_keeper_tb_13, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_13);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_13, exception_keeper_tb_13);
    PUBLISH_EXCEPTION(&exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
    // Tried code:
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        tmp_cmp_expr_left_12 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_12 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_51;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_subscript_value_18;
        CHECK_OBJECT(var_e);
        tmp_expression_value_64 = var_e;
        tmp_expression_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[37]);
        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_expression_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[38]);
        Py_DECREF(tmp_expression_value_63);
        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_expression_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[39]);
        Py_DECREF(tmp_expression_value_62);
        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_subscript_value_18 = mod_consts[40];
        tmp_assign_source_52 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_18);
        Py_DECREF(tmp_expression_value_61);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_expression_value_66;
        CHECK_OBJECT(var_e);
        tmp_expression_value_66 = var_e;
        tmp_expression_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[37]);
        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[41]);
        Py_DECREF(tmp_expression_value_65);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_called_instance_15 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_23 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_24 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_54 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_15,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_25;
        tmp_called_value_44 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_44 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_25 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 128;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_25);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_call_result_17;
        PyObject *tmp_kw_call_arg_value_0_9;
        PyObject *tmp_kw_call_dict_value_0_9;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_expression_value_67 = var_LogInit;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[15]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_45);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }

        tmp_kw_call_arg_value_0_9 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_9 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 129;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_9};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_9};
            tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_45, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_45);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_17);
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_16;
    // End of try:
    try_end_14:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_12;
    branch_no_12:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 120;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_16;
    branch_end_12:;
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
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(var_recieve);
        tmp_cmp_expr_left_13 = var_recieve;
        tmp_cmp_expr_right_13 = mod_consts[70];
        tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
        assert(tmp_condition_result_13 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_13:;
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_46;
        PyObject *tmp_kw_call_value_0_7;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_kw_call_value_0_7 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_7 == NULL)) {
            tmp_kw_call_value_0_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 132;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};

            tmp_assign_source_55 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_46, kw_values, mod_consts[72]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_instance_16;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_expression_value_68 = var_LogInit;
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[35]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        CHECK_OBJECT(var_boot);
        tmp_called_instance_16 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 133;
        tmp_args_element_value_26 = CALL_METHOD_NO_ARGS(tmp_called_instance_16, mod_consts[69]);
        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 133;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 133;
        tmp_assign_source_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_call_result_18;
        PyObject *tmp_kw_call_value_0_8;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_expression_value_69 = var_LogInit;
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[15]);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        CHECK_OBJECT(var_message);
        tmp_kw_call_value_0_8 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 134;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_8};

            tmp_call_result_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_48, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_48);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_18);
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
        exception_keeper_tb_16 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_16);
    } else if (exception_keeper_lineno_16 != 0) {
        exception_keeper_tb_16 = ADD_TRACEBACK(exception_keeper_tb_16, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_16);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_16, exception_keeper_tb_16);
    PUBLISH_EXCEPTION(&exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16);
    // Tried code:
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        tmp_cmp_expr_left_14 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_14 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_57;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_subscript_value_19;
        CHECK_OBJECT(var_e);
        tmp_expression_value_73 = var_e;
        tmp_expression_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[37]);
        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_expression_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[38]);
        Py_DECREF(tmp_expression_value_72);
        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_expression_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[39]);
        Py_DECREF(tmp_expression_value_71);
        if (tmp_expression_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_subscript_value_19 = mod_consts[40];
        tmp_assign_source_58 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_19);
        Py_DECREF(tmp_expression_value_70);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_58;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_expression_value_75;
        CHECK_OBJECT(var_e);
        tmp_expression_value_75 = var_e;
        tmp_expression_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[37]);
        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        tmp_assign_source_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[41]);
        Py_DECREF(tmp_expression_value_74);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_called_instance_17 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_27 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_28 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_assign_source_60 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_17,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_29;
        tmp_called_value_49 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_49 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_29 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 139;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_29);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_call_result_20;
        PyObject *tmp_kw_call_arg_value_0_10;
        PyObject *tmp_kw_call_dict_value_0_10;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 140;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_expression_value_76 = var_LogInit;
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[15]);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_50);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 140;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }

        tmp_kw_call_arg_value_0_10 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_10 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 140;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_10};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_10};
            tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_50, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_50);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        Py_DECREF(tmp_call_result_20);
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_19;
    // End of try:
    try_end_17:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_14;
    branch_no_14:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 131;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_19;
    branch_end_14:;
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
    goto branch_end_13;
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        PyObject *tmp_called_instance_18;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_30 = mod_consts[73];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_31 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31};
            tmp_cmp_expr_left_15 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_18,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_15 = Py_None;
        tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        Py_DECREF(tmp_cmp_expr_left_15);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
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
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_called_instance_20;
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 143;
        tmp_called_instance_19 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_20,
            mod_consts[75],
            PyTuple_GET_ITEM(mod_consts[76], 0)
        );

        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 143;
        tmp_expression_value_77 = CALL_METHOD_NO_ARGS(tmp_called_instance_19, mod_consts[77]);
        Py_DECREF(tmp_called_instance_19);
        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[51]);
        Py_DECREF(tmp_expression_value_77);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 143;
        tmp_cmp_expr_left_16 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_51, mod_consts[78]);

        Py_DECREF(tmp_called_value_51);
        if (tmp_cmp_expr_left_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_16 = mod_consts[79];
        tmp_condition_result_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_left_16);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
        assert(tmp_condition_result_16 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_78;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_78 = var_recieve;
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[44]);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 144;
        tmp_assign_source_61 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_52, mod_consts[12]);

        Py_DECREF(tmp_called_value_52);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_startIndex;
            var_startIndex = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_79;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_79 = var_recieve;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[44]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 145;
        tmp_assign_source_62 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_53, mod_consts[60]);

        Py_DECREF(tmp_called_value_53);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_endIndex;
            var_endIndex = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_start_value_8;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_9;
        PyObject *tmp_stop_value_9;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_81 = var_recieve;
        CHECK_OBJECT(var_startIndex);
        tmp_left_value_9 = var_startIndex;
        tmp_right_value_9 = mod_consts[50];
        tmp_start_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_9, tmp_right_value_9);
        if (tmp_start_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_endIndex);
        tmp_stop_value_9 = var_endIndex;
        tmp_subscript_value_20 = MAKE_SLICEOBJ2(tmp_start_value_8, tmp_stop_value_9);
        Py_DECREF(tmp_start_value_8);
        assert(!(tmp_subscript_value_20 == NULL));
        tmp_expression_value_80 = LOOKUP_SUBSCRIPT(tmp_expression_value_81, tmp_subscript_value_20);
        Py_DECREF(tmp_subscript_value_20);
        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[51]);
        Py_DECREF(tmp_expression_value_80);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 146;
        tmp_assign_source_63 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_54, mod_consts[52]);

        Py_DECREF(tmp_called_value_54);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_addUserName;
            var_addUserName = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_start_value_9;
        PyObject *tmp_left_value_10;
        PyObject *tmp_right_value_10;
        PyObject *tmp_stop_value_10;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_83 = var_recieve;
        CHECK_OBJECT(var_endIndex);
        tmp_left_value_10 = var_endIndex;
        tmp_right_value_10 = mod_consts[61];
        tmp_start_value_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_10, tmp_right_value_10);
        if (tmp_start_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_stop_value_10 = Py_None;
        tmp_subscript_value_21 = MAKE_SLICEOBJ2(tmp_start_value_9, tmp_stop_value_10);
        Py_DECREF(tmp_start_value_9);
        assert(!(tmp_subscript_value_21 == NULL));
        tmp_expression_value_82 = LOOKUP_SUBSCRIPT(tmp_expression_value_83, tmp_subscript_value_21);
        Py_DECREF(tmp_subscript_value_21);
        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[51]);
        Py_DECREF(tmp_expression_value_82);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 147;
        tmp_assign_source_64 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_55, mod_consts[52]);

        Py_DECREF(tmp_called_value_55);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_addUserAuthority;
            var_addUserAuthority = tmp_assign_source_64;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_56;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_tuple_element_1 = mod_consts[80];
        tmp_string_concat_values_1 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_addUserName);
            tmp_format_value_1 = var_addUserName;
            tmp_format_spec_1 = mod_consts[81];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[82];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_32 = PyUnicode_Join(mod_consts[81], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 148;
        tmp_assign_source_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_addUserPasswd;
            var_addUserPasswd = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_57;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_3;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        CHECK_OBJECT(var_addUserName);
        tmp_kw_call_value_0_9 = var_addUserName;
        CHECK_OBJECT(var_addUserPasswd);
        tmp_kw_call_value_1_4 = var_addUserPasswd;
        CHECK_OBJECT(var_addUserAuthority);
        tmp_kw_call_value_2_3 = var_addUserAuthority;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 150;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_9, tmp_kw_call_value_1_4, tmp_kw_call_value_2_3};

            tmp_assign_source_66 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_57, kw_values, mod_consts[84]);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_instance_21;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_expression_value_84 = var_LogInit;
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[35]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        CHECK_OBJECT(var_boot);
        tmp_called_instance_21 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 151;
        tmp_args_element_value_33 = CALL_METHOD_NO_ARGS(tmp_called_instance_21, mod_consts[85]);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 151;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 151;
        tmp_assign_source_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_call_result_21;
        PyObject *tmp_kw_call_value_0_10;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_expression_value_85 = var_LogInit;
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[15]);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        CHECK_OBJECT(var_message);
        tmp_kw_call_value_0_10 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 152;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_10};

            tmp_call_result_21 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_59, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_59);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        Py_DECREF(tmp_call_result_21);
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
        exception_keeper_tb_19 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_19);
    } else if (exception_keeper_lineno_19 != 0) {
        exception_keeper_tb_19 = ADD_TRACEBACK(exception_keeper_tb_19, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_19);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_19, exception_keeper_tb_19);
    PUBLISH_EXCEPTION(&exception_keeper_type_19, &exception_keeper_value_19, &exception_keeper_tb_19);
    // Tried code:
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        tmp_cmp_expr_left_17 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_17 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_68;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_22;
        CHECK_OBJECT(var_e);
        tmp_expression_value_89 = var_e;
        tmp_expression_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[37]);
        if (tmp_expression_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_expression_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[38]);
        Py_DECREF(tmp_expression_value_88);
        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_expression_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[39]);
        Py_DECREF(tmp_expression_value_87);
        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_subscript_value_22 = mod_consts[40];
        tmp_assign_source_69 = LOOKUP_SUBSCRIPT(tmp_expression_value_86, tmp_subscript_value_22);
        Py_DECREF(tmp_expression_value_86);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_expression_value_91;
        CHECK_OBJECT(var_e);
        tmp_expression_value_91 = var_e;
        tmp_expression_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[37]);
        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_assign_source_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[41]);
        Py_DECREF(tmp_expression_value_90);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_70;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_called_instance_22 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_34 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_35 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_assign_source_71 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_22,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_71;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_36;
        tmp_called_value_60 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_60 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_36 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 157;
        tmp_call_result_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_36);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_call_result_23;
        PyObject *tmp_kw_call_arg_value_0_11;
        PyObject *tmp_kw_call_dict_value_0_11;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_expression_value_92 = var_LogInit;
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[15]);
        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_61);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }

        tmp_kw_call_arg_value_0_11 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_11 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 158;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_11};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_11};
            tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_61, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_61);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        Py_DECREF(tmp_call_result_23);
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_22;
    // End of try:
    try_end_20:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_17;
    branch_no_17:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 149;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_22;
    branch_end_17:;
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
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_call_result_24;
        tmp_called_value_62 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_62 != NULL);
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 160;
        tmp_call_result_24 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_62, mod_consts[86]);

        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_24);
    }
    branch_end_16:;
    goto branch_end_15;
    branch_no_15:;
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        CHECK_OBJECT(var_recieve);
        tmp_cmp_expr_left_18 = var_recieve;
        tmp_cmp_expr_right_18 = mod_consts[87];
        tmp_condition_result_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
        assert(tmp_condition_result_18 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_18:;
    // Tried code:
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_63;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 163;
        tmp_assign_source_72 = CALL_FUNCTION_NO_ARGS(tmp_called_value_63);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_72;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_23;
        PyObject *tmp_call_result_25;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_23 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 164;
        tmp_call_result_25 = CALL_METHOD_NO_ARGS(tmp_called_instance_23, mod_consts[89]);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_24;
        }
        Py_DECREF(tmp_call_result_25);
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
        exception_keeper_tb_22 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_22);
    } else if (exception_keeper_lineno_22 != 0) {
        exception_keeper_tb_22 = ADD_TRACEBACK(exception_keeper_tb_22, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_22);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_22, &exception_keeper_value_22, &exception_keeper_tb_22);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_22, exception_keeper_tb_22);
    PUBLISH_EXCEPTION(&exception_keeper_type_22, &exception_keeper_value_22, &exception_keeper_tb_22);
    // Tried code:
    {
        bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        tmp_cmp_expr_left_19 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_19 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_73;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_subscript_value_23;
        CHECK_OBJECT(var_e);
        tmp_expression_value_96 = var_e;
        tmp_expression_value_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[37]);
        if (tmp_expression_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_expression_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[38]);
        Py_DECREF(tmp_expression_value_95);
        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_expression_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[39]);
        Py_DECREF(tmp_expression_value_94);
        if (tmp_expression_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_subscript_value_23 = mod_consts[40];
        tmp_assign_source_74 = LOOKUP_SUBSCRIPT(tmp_expression_value_93, tmp_subscript_value_23);
        Py_DECREF(tmp_expression_value_93);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_expression_value_98;
        CHECK_OBJECT(var_e);
        tmp_expression_value_98 = var_e;
        tmp_expression_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[37]);
        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_assign_source_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[41]);
        Py_DECREF(tmp_expression_value_97);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_called_instance_24 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_37 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_38 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
            tmp_assign_source_76 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_24,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_76;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_value_39;
        tmp_called_value_64 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_64 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_39 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 169;
        tmp_call_result_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_64, tmp_args_element_value_39);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_call_result_27;
        PyObject *tmp_kw_call_arg_value_0_12;
        PyObject *tmp_kw_call_dict_value_0_12;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_expression_value_99 = var_LogInit;
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[15]);
        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_65);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }

        tmp_kw_call_arg_value_0_12 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_12 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 170;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_12};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_12};
            tmp_call_result_27 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_65, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_65);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_27);
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_25;
    // End of try:
    try_end_23:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_19;
    branch_no_19:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 162;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_25;
    branch_end_19:;
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
    goto branch_end_18;
    branch_no_18:;
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        PyObject *tmp_called_instance_25;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_args_element_value_41;
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_40 = mod_consts[90];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_41 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_40, tmp_args_element_value_41};
            tmp_cmp_expr_left_20 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_25,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_20 = Py_None;
        tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
        Py_DECREF(tmp_cmp_expr_left_20);
        if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
        assert(tmp_condition_result_20 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_20:;
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_100;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_100 = var_recieve;
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[44]);
        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 173;
        tmp_assign_source_77 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_66, mod_consts[62]);

        Py_DECREF(tmp_called_value_66);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_dotIndex;
            var_dotIndex = tmp_assign_source_77;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_stop_value_11;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_102 = var_recieve;
        CHECK_OBJECT(var_dotIndex);
        tmp_stop_value_11 = var_dotIndex;
        tmp_subscript_value_24 = MAKE_SLICEOBJ1(tmp_stop_value_11);
        assert(!(tmp_subscript_value_24 == NULL));
        tmp_expression_value_101 = LOOKUP_SUBSCRIPT(tmp_expression_value_102, tmp_subscript_value_24);
        Py_DECREF(tmp_subscript_value_24);
        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[51]);
        Py_DECREF(tmp_expression_value_101);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 174;
        tmp_assign_source_78 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_67, mod_consts[91]);

        Py_DECREF(tmp_called_value_67);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_targetBase;
            var_targetBase = tmp_assign_source_78;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_start_value_10;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_11;
        PyObject *tmp_stop_value_12;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_103 = var_recieve;
        CHECK_OBJECT(var_dotIndex);
        tmp_left_value_11 = var_dotIndex;
        tmp_right_value_11 = mod_consts[63];
        tmp_start_value_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_11, tmp_right_value_11);
        if (tmp_start_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_stop_value_12 = Py_None;
        tmp_subscript_value_25 = MAKE_SLICEOBJ2(tmp_start_value_10, tmp_stop_value_12);
        Py_DECREF(tmp_start_value_10);
        assert(!(tmp_subscript_value_25 == NULL));
        tmp_assign_source_79 = LOOKUP_SUBSCRIPT(tmp_expression_value_103, tmp_subscript_value_25);
        Py_DECREF(tmp_subscript_value_25);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_targetFrame;
            var_targetFrame = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_called_value_68;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_kw_call_value_1_5;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        CHECK_OBJECT(var_targetBase);
        tmp_kw_call_value_0_11 = var_targetBase;
        CHECK_OBJECT(var_targetFrame);
        tmp_kw_call_value_1_5 = var_targetFrame;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 177;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_5};

            tmp_assign_source_80 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_68, kw_values, mod_consts[93]);
        }

        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_instance_26;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 178;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_expression_value_104 = var_LogInit;
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[35]);
        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        CHECK_OBJECT(var_boot);
        tmp_called_instance_26 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 178;
        tmp_args_element_value_42 = CALL_METHOD_NO_ARGS(tmp_called_instance_26, mod_consts[94]);
        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 178;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 178;
        tmp_assign_source_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_69, tmp_args_element_value_42);
        Py_DECREF(tmp_called_value_69);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_call_result_28;
        PyObject *tmp_kw_call_arg_value_0_13;
        PyObject *tmp_kw_call_dict_value_0_13;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_expression_value_105 = var_LogInit;
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[15]);
        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_70);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_kw_call_arg_value_0_13 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_13 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 179;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_13};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_13};
            tmp_call_result_28 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_70, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_70);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_28);
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
        exception_keeper_tb_25 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_25);
    } else if (exception_keeper_lineno_25 != 0) {
        exception_keeper_tb_25 = ADD_TRACEBACK(exception_keeper_tb_25, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_25);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_25, &exception_keeper_value_25, &exception_keeper_tb_25);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_25, exception_keeper_tb_25);
    PUBLISH_EXCEPTION(&exception_keeper_type_25, &exception_keeper_value_25, &exception_keeper_tb_25);
    // Tried code:
    {
        bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        tmp_cmp_expr_left_21 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_21 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_82;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_subscript_value_26;
        CHECK_OBJECT(var_e);
        tmp_expression_value_109 = var_e;
        tmp_expression_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[37]);
        if (tmp_expression_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_expression_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[38]);
        Py_DECREF(tmp_expression_value_108);
        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_expression_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[39]);
        Py_DECREF(tmp_expression_value_107);
        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_subscript_value_26 = mod_consts[40];
        tmp_assign_source_83 = LOOKUP_SUBSCRIPT(tmp_expression_value_106, tmp_subscript_value_26);
        Py_DECREF(tmp_expression_value_106);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_83;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_expression_value_111;
        CHECK_OBJECT(var_e);
        tmp_expression_value_111 = var_e;
        tmp_expression_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[37]);
        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        tmp_assign_source_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[41]);
        Py_DECREF(tmp_expression_value_110);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_84;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 183;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }

        tmp_called_instance_27 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_43 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_44 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 183;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_assign_source_85 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_27,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_85;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_71;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_value_45;
        tmp_called_value_71 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_71 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_45 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 184;
        tmp_call_result_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_71, tmp_args_element_value_45);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_call_result_30;
        PyObject *tmp_kw_call_arg_value_0_14;
        PyObject *tmp_kw_call_dict_value_0_14;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }

        tmp_expression_value_112 = var_LogInit;
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[15]);
        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_72);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }

        tmp_kw_call_arg_value_0_14 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_14 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 185;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_14};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_14};
            tmp_call_result_30 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_72, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_72);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_29;
        }
        Py_DECREF(tmp_call_result_30);
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto try_except_handler_28;
    // End of try:
    try_end_26:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_21;
    branch_no_21:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 176;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_28;
    branch_end_21:;
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
    goto branch_end_20;
    branch_no_20:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        PyObject *tmp_called_instance_28;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_args_element_value_47;
        tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_28 == NULL)) {
            tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_46 = mod_consts[95];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_47 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = {tmp_args_element_value_46, tmp_args_element_value_47};
            tmp_cmp_expr_left_22 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_28,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_22 = Py_None;
        tmp_condition_result_22 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        Py_DECREF(tmp_cmp_expr_left_22);
        if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
        assert(tmp_condition_result_22 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_22:;
    // Tried code:
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_73;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_subscript_value_27;
        tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_value_73 == NULL)) {
            tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_kw_call_value_0_12 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_12 == NULL)) {
            tmp_kw_call_value_0_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        if (var_UserInfo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_expression_value_113 = var_UserInfo;
        tmp_subscript_value_27 = mod_consts[32];
        tmp_kw_call_value_1_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_113, tmp_subscript_value_27);
        if (tmp_kw_call_value_1_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 189;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_6};

            tmp_assign_source_86 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_73, kw_values, mod_consts[97]);
        }

        Py_DECREF(tmp_kw_call_value_1_6);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_86;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_called_instance_29;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 190;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_expression_value_114 = var_LogInit;
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[35]);
        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        CHECK_OBJECT(var_boot);
        tmp_called_instance_29 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 190;
        tmp_args_element_value_48 = CALL_METHOD_NO_ARGS(tmp_called_instance_29, mod_consts[98]);
        if (tmp_args_element_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 190;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 190;
        tmp_assign_source_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_74, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_87;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_call_result_31;
        PyObject *tmp_kw_call_value_0_13;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_expression_value_115 = var_LogInit;
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[15]);
        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        CHECK_OBJECT(var_message);
        tmp_kw_call_value_0_13 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 191;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_13};

            tmp_call_result_31 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_75, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_75);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        Py_DECREF(tmp_call_result_31);
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
        exception_keeper_tb_28 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_28);
    } else if (exception_keeper_lineno_28 != 0) {
        exception_keeper_tb_28 = ADD_TRACEBACK(exception_keeper_tb_28, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_28);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_28, &exception_keeper_value_28, &exception_keeper_tb_28);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_28, exception_keeper_tb_28);
    PUBLISH_EXCEPTION(&exception_keeper_type_28, &exception_keeper_value_28, &exception_keeper_tb_28);
    // Tried code:
    {
        bool tmp_condition_result_23;
        PyObject *tmp_cmp_expr_left_23;
        PyObject *tmp_cmp_expr_right_23;
        tmp_cmp_expr_left_23 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_23 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_23, tmp_cmp_expr_right_23);
        assert(!(tmp_res == -1));
        tmp_condition_result_23 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_88;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_subscript_value_28;
        CHECK_OBJECT(var_e);
        tmp_expression_value_119 = var_e;
        tmp_expression_value_118 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[37]);
        if (tmp_expression_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        tmp_expression_value_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[38]);
        Py_DECREF(tmp_expression_value_118);
        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        tmp_expression_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[39]);
        Py_DECREF(tmp_expression_value_117);
        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        tmp_subscript_value_28 = mod_consts[40];
        tmp_assign_source_89 = LOOKUP_SUBSCRIPT(tmp_expression_value_116, tmp_subscript_value_28);
        Py_DECREF(tmp_expression_value_116);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_expression_value_121;
        CHECK_OBJECT(var_e);
        tmp_expression_value_121 = var_e;
        tmp_expression_value_120 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[37]);
        if (tmp_expression_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        tmp_assign_source_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[41]);
        Py_DECREF(tmp_expression_value_120);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_90;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_instance_30;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_args_element_value_50;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }

        tmp_called_instance_30 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_49 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_50 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50};
            tmp_assign_source_91 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_30,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_91;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_call_result_32;
        PyObject *tmp_args_element_value_51;
        tmp_called_value_76 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_76 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_51 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 196;
        tmp_call_result_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_76, tmp_args_element_value_51);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_call_result_33;
        PyObject *tmp_kw_call_arg_value_0_15;
        PyObject *tmp_kw_call_dict_value_0_15;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }

        tmp_expression_value_122 = var_LogInit;
        tmp_called_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[15]);
        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_77);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }

        tmp_kw_call_arg_value_0_15 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_15 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 197;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_15};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_15};
            tmp_call_result_33 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_77, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_77);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        Py_DECREF(tmp_call_result_33);
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto try_except_handler_31;
    // End of try:
    try_end_29:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_23;
    branch_no_23:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 188;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_31;
    branch_end_23:;
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
    goto branch_end_22;
    branch_no_22:;
    {
        nuitka_bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_24;
        PyObject *tmp_cmp_expr_right_24;
        PyObject *tmp_called_instance_31;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_args_element_value_53;
        tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_31 == NULL)) {
            tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_52 = mod_consts[99];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_53 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53};
            tmp_cmp_expr_left_24 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_31,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_24 = Py_None;
        tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_24, tmp_cmp_expr_right_24);
        Py_DECREF(tmp_cmp_expr_left_24);
        if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
        assert(tmp_condition_result_24 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_24:;
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_called_value_78;
        PyObject *tmp_expression_value_123;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_123 = var_recieve;
        tmp_called_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[44]);
        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 200;
        tmp_assign_source_92 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_78, mod_consts[62]);

        Py_DECREF(tmp_called_value_78);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_dotIndex;
            var_dotIndex = tmp_assign_source_92;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_start_value_11;
        PyObject *tmp_stop_value_13;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_125 = var_recieve;
        CHECK_OBJECT(var_dotIndex);
        tmp_start_value_11 = var_dotIndex;
        tmp_stop_value_13 = Py_None;
        tmp_subscript_value_29 = MAKE_SLICEOBJ2(tmp_start_value_11, tmp_stop_value_13);
        assert(!(tmp_subscript_value_29 == NULL));
        tmp_expression_value_124 = LOOKUP_SUBSCRIPT(tmp_expression_value_125, tmp_subscript_value_29);
        Py_DECREF(tmp_subscript_value_29);
        if (tmp_expression_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[51]);
        Py_DECREF(tmp_expression_value_124);
        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 201;
        tmp_assign_source_93 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_79, mod_consts[52]);

        Py_DECREF(tmp_called_value_79);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_targetFrame;
            var_targetFrame = tmp_assign_source_93;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_stop_value_14;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_127 = var_recieve;
        CHECK_OBJECT(var_dotIndex);
        tmp_stop_value_14 = var_dotIndex;
        tmp_subscript_value_30 = MAKE_SLICEOBJ1(tmp_stop_value_14);
        assert(!(tmp_subscript_value_30 == NULL));
        tmp_expression_value_126 = LOOKUP_SUBSCRIPT(tmp_expression_value_127, tmp_subscript_value_30);
        Py_DECREF(tmp_subscript_value_30);
        if (tmp_expression_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[51]);
        Py_DECREF(tmp_expression_value_126);
        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 202;
        tmp_assign_source_94 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_80, mod_consts[100]);

        Py_DECREF(tmp_called_value_80);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_targetBase;
            var_targetBase = tmp_assign_source_94;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_81;
        PyObject *tmp_kw_call_value_0_14;
        PyObject *tmp_kw_call_value_1_7;
        tmp_called_value_81 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_81 == NULL)) {
            tmp_called_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        CHECK_OBJECT(var_targetBase);
        tmp_kw_call_value_0_14 = var_targetBase;
        CHECK_OBJECT(var_targetFrame);
        tmp_kw_call_value_1_7 = var_targetFrame;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 204;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_14, tmp_kw_call_value_1_7};

            tmp_assign_source_95 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_81, kw_values, mod_consts[102]);
        }

        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_95;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_called_instance_32;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }

        tmp_expression_value_128 = var_LogInit;
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[35]);
        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        CHECK_OBJECT(var_boot);
        tmp_called_instance_32 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 205;
        tmp_args_element_value_54 = CALL_METHOD_NO_ARGS(tmp_called_instance_32, mod_consts[98]);
        if (tmp_args_element_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 205;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 205;
        tmp_assign_source_96 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_82, tmp_args_element_value_54);
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_96;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_call_result_34;
        PyObject *tmp_kw_call_value_0_15;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }

        tmp_expression_value_129 = var_LogInit;
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[15]);
        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        CHECK_OBJECT(var_message);
        tmp_kw_call_value_0_15 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 206;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_15};

            tmp_call_result_34 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_83, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_83);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        Py_DECREF(tmp_call_result_34);
    }
    goto try_end_31;
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

    // Preserve existing published exception id 11.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_11, &exception_preserved_value_11, &exception_preserved_tb_11);

    if (exception_keeper_tb_31 == NULL) {
        exception_keeper_tb_31 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_31);
    } else if (exception_keeper_lineno_31 != 0) {
        exception_keeper_tb_31 = ADD_TRACEBACK(exception_keeper_tb_31, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_31);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_31, &exception_keeper_value_31, &exception_keeper_tb_31);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_31, exception_keeper_tb_31);
    PUBLISH_EXCEPTION(&exception_keeper_type_31, &exception_keeper_value_31, &exception_keeper_tb_31);
    // Tried code:
    {
        bool tmp_condition_result_25;
        PyObject *tmp_cmp_expr_left_25;
        PyObject *tmp_cmp_expr_right_25;
        tmp_cmp_expr_left_25 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_25 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_25, tmp_cmp_expr_right_25);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_97;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_subscript_value_31;
        CHECK_OBJECT(var_e);
        tmp_expression_value_133 = var_e;
        tmp_expression_value_132 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[37]);
        if (tmp_expression_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        tmp_expression_value_131 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[38]);
        Py_DECREF(tmp_expression_value_132);
        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        tmp_expression_value_130 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[39]);
        Py_DECREF(tmp_expression_value_131);
        if (tmp_expression_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        tmp_subscript_value_31 = mod_consts[40];
        tmp_assign_source_98 = LOOKUP_SUBSCRIPT(tmp_expression_value_130, tmp_subscript_value_31);
        Py_DECREF(tmp_expression_value_130);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_98;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_expression_value_135;
        CHECK_OBJECT(var_e);
        tmp_expression_value_135 = var_e;
        tmp_expression_value_134 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[37]);
        if (tmp_expression_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        tmp_assign_source_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[41]);
        Py_DECREF(tmp_expression_value_134);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_99;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_instance_33;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }

        tmp_called_instance_33 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_55 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_56 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56};
            tmp_assign_source_100 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_33,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_100;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_call_result_35;
        PyObject *tmp_args_element_value_57;
        tmp_called_value_84 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_84 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_57 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 211;
        tmp_call_result_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_84, tmp_args_element_value_57);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_call_result_36;
        PyObject *tmp_kw_call_arg_value_0_16;
        PyObject *tmp_kw_call_dict_value_0_16;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }

        tmp_expression_value_136 = var_LogInit;
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[15]);
        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_85);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }

        tmp_kw_call_arg_value_0_16 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_16 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 212;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_16};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_16};
            tmp_call_result_36 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_85, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_85);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        Py_DECREF(tmp_call_result_36);
    }
    goto try_end_32;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto try_except_handler_34;
    // End of try:
    try_end_32:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_25;
    branch_no_25:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 203;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_34;
    branch_end_25:;
    goto try_end_33;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(exception_preserved_type_11, exception_preserved_value_11, exception_preserved_tb_11);

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto try_except_handler_5;
    // End of try:
    try_end_33:;
    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(exception_preserved_type_11, exception_preserved_value_11, exception_preserved_tb_11);

    goto try_end_31;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_31:;
    goto branch_end_24;
    branch_no_24:;
    {
        nuitka_bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_26;
        PyObject *tmp_cmp_expr_right_26;
        PyObject *tmp_called_instance_34;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_args_element_value_59;
        tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_34 == NULL)) {
            tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_58 = mod_consts[103];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_59 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59};
            tmp_cmp_expr_left_26 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_34,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_26 = Py_None;
        tmp_condition_result_26 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_26, tmp_cmp_expr_right_26);
        Py_DECREF(tmp_cmp_expr_left_26);
        if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_86;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_subscript_value_32;
        PyObject *tmp_start_value_12;
        PyObject *tmp_left_value_12;
        PyObject *tmp_called_value_87;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_right_value_12;
        PyObject *tmp_stop_value_15;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_138 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_139 = var_recieve;
        tmp_called_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[44]);
        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 214;
        tmp_left_value_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_87, mod_consts[104]);

        Py_DECREF(tmp_called_value_87);
        if (tmp_left_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_12 = mod_consts[105];
        tmp_start_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_12, tmp_right_value_12);
        Py_DECREF(tmp_left_value_12);
        if (tmp_start_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_stop_value_15 = Py_None;
        tmp_subscript_value_32 = MAKE_SLICEOBJ2(tmp_start_value_12, tmp_stop_value_15);
        Py_DECREF(tmp_start_value_12);
        assert(!(tmp_subscript_value_32 == NULL));
        tmp_expression_value_137 = LOOKUP_SUBSCRIPT(tmp_expression_value_138, tmp_subscript_value_32);
        Py_DECREF(tmp_subscript_value_32);
        if (tmp_expression_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[51]);
        Py_DECREF(tmp_expression_value_137);
        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 214;
        tmp_assign_source_101 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_86, mod_consts[52]);

        Py_DECREF(tmp_called_value_86);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_dataBaseUsed;
            var_dataBaseUsed = tmp_assign_source_101;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_88;
        PyObject *tmp_kw_call_value_0_16;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        CHECK_OBJECT(var_dataBaseUsed);
        tmp_kw_call_value_0_16 = var_dataBaseUsed;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 216;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_16};

            tmp_assign_source_102 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_88, kw_values, mod_consts[72]);
        }

        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_102;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_35;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_35 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 217;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_35, mod_consts[107]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_37;
        }
        tmp_assign_source_103 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_37;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_103;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_104 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_104 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 217;
            goto try_except_handler_38;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_104;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_105 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_105 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 217;
            goto try_except_handler_38;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_105;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 217;
                    goto try_except_handler_38;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[108];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 217;
            goto try_except_handler_38;
        }
    }
    goto try_end_34;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto try_except_handler_37;
    // End of try:
    try_end_34:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto try_except_handler_36;
    // End of try:
    try_end_35:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_106;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_106 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_status;
            var_status = tmp_assign_source_106;
            Py_INCREF(var_status);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_107;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_107 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_107;
            Py_INCREF(var_message);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_cmp_expr_left_27;
        PyObject *tmp_cmp_expr_right_27;
        CHECK_OBJECT(var_status);
        tmp_cmp_expr_left_27 = var_status;
        tmp_cmp_expr_right_27 = Py_True;
        tmp_condition_result_27 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_27, tmp_cmp_expr_right_27);
        if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
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
        PyObject *tmp_assign_source_108;
        CHECK_OBJECT(var_dataBaseUsed);
        tmp_assign_source_108 = var_dataBaseUsed;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_108);
    }
    {
        PyObject *tmp_called_value_89;
        PyObject *tmp_call_result_37;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_called_value_89 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_89 != NULL);
        tmp_tuple_element_2 = mod_consts[109];
        tmp_string_concat_values_2 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_dataBaseUsed);
            tmp_format_value_2 = var_dataBaseUsed;
            tmp_format_spec_2 = mod_consts[81];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[110];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_36;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_60 = PyUnicode_Join(mod_consts[81], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 220;
        tmp_call_result_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_89, tmp_args_element_value_60);
        Py_DECREF(tmp_args_element_value_60);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_90;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_kw_call_value_0_17;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }

        tmp_expression_value_140 = var_LogInit;
        tmp_called_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[35]);
        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        CHECK_OBJECT(var_message);
        tmp_kw_call_value_0_17 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 221;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_17};

            tmp_assign_source_109 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_90, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_90);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        {
            PyObject *old = var_message;
            assert(old != NULL);
            var_message = tmp_assign_source_109;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_91;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_call_result_38;
        PyObject *tmp_kw_call_value_0_18;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 222;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }

        tmp_expression_value_141 = var_LogInit;
        tmp_called_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[15]);
        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        CHECK_OBJECT(var_message);
        tmp_kw_call_value_0_18 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 222;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_18};

            tmp_call_result_38 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_91, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_91);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        Py_DECREF(tmp_call_result_38);
    }
    goto branch_end_27;
    branch_no_27:;
    {
        nuitka_bool tmp_condition_result_28;
        PyObject *tmp_cmp_expr_left_28;
        PyObject *tmp_cmp_expr_right_28;
        CHECK_OBJECT(var_status);
        tmp_cmp_expr_left_28 = var_status;
        tmp_cmp_expr_right_28 = Py_False;
        tmp_condition_result_28 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_28, tmp_cmp_expr_right_28);
        if (tmp_condition_result_28 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
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
        PyObject *tmp_called_value_92;
        PyObject *tmp_call_result_39;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_called_value_92 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_92 != NULL);
        tmp_tuple_element_3 = mod_consts[111];
        tmp_string_concat_values_3 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_dataBaseUsed);
            tmp_format_value_3 = var_dataBaseUsed;
            tmp_format_spec_3 = mod_consts[81];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[112];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_36;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_61 = PyUnicode_Join(mod_consts[81], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 224;
        tmp_call_result_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_92, tmp_args_element_value_61);
        Py_DECREF(tmp_args_element_value_61);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        Py_DECREF(tmp_call_result_39);
    }
    branch_no_28:;
    branch_end_27:;
    goto try_end_36;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 12.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_12, &exception_preserved_value_12, &exception_preserved_tb_12);

    if (exception_keeper_tb_36 == NULL) {
        exception_keeper_tb_36 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_36);
    } else if (exception_keeper_lineno_36 != 0) {
        exception_keeper_tb_36 = ADD_TRACEBACK(exception_keeper_tb_36, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_36);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_36, &exception_keeper_value_36, &exception_keeper_tb_36);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_36, exception_keeper_tb_36);
    PUBLISH_EXCEPTION(&exception_keeper_type_36, &exception_keeper_value_36, &exception_keeper_tb_36);
    // Tried code:
    {
        bool tmp_condition_result_29;
        PyObject *tmp_cmp_expr_left_29;
        PyObject *tmp_cmp_expr_right_29;
        tmp_cmp_expr_left_29 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_29 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_29, tmp_cmp_expr_right_29);
        assert(!(tmp_res == -1));
        tmp_condition_result_29 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_110;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_subscript_value_33;
        CHECK_OBJECT(var_e);
        tmp_expression_value_145 = var_e;
        tmp_expression_value_144 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[37]);
        if (tmp_expression_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        tmp_expression_value_143 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[38]);
        Py_DECREF(tmp_expression_value_144);
        if (tmp_expression_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        tmp_expression_value_142 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[39]);
        Py_DECREF(tmp_expression_value_143);
        if (tmp_expression_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        tmp_subscript_value_33 = mod_consts[40];
        tmp_assign_source_111 = LOOKUP_SUBSCRIPT(tmp_expression_value_142, tmp_subscript_value_33);
        Py_DECREF(tmp_expression_value_142);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_111;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_expression_value_147;
        CHECK_OBJECT(var_e);
        tmp_expression_value_147 = var_e;
        tmp_expression_value_146 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[37]);
        if (tmp_expression_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        tmp_assign_source_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[41]);
        Py_DECREF(tmp_expression_value_146);
        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_112;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_instance_36;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_args_element_value_63;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 228;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_called_instance_36 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_62 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_63 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63};
            tmp_assign_source_113 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_36,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_113;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_93;
        PyObject *tmp_call_result_40;
        PyObject *tmp_args_element_value_64;
        tmp_called_value_93 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_93 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_64 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 229;
        tmp_call_result_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_93, tmp_args_element_value_64);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_call_result_41;
        PyObject *tmp_kw_call_arg_value_0_17;
        PyObject *tmp_kw_call_dict_value_0_17;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_expression_value_148 = var_LogInit;
        tmp_called_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[15]);
        if (tmp_called_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_94);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_kw_call_arg_value_0_17 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_17 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 230;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_17};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_17};
            tmp_call_result_41 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_94, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_94);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        Py_DECREF(tmp_call_result_41);
    }
    goto try_end_37;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto try_except_handler_39;
    // End of try:
    try_end_37:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_29;
    branch_no_29:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 215;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_39;
    branch_end_29:;
    goto try_end_38;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(exception_preserved_type_12, exception_preserved_value_12, exception_preserved_tb_12);

    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto try_except_handler_5;
    // End of try:
    try_end_38:;
    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(exception_preserved_type_12, exception_preserved_value_12, exception_preserved_tb_12);

    goto try_end_36;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_36:;
    goto branch_end_26;
    branch_no_26:;
    {
        nuitka_bool tmp_condition_result_30;
        PyObject *tmp_cmp_expr_left_30;
        PyObject *tmp_cmp_expr_right_30;
        CHECK_OBJECT(var_recieve);
        tmp_cmp_expr_left_30 = var_recieve;
        tmp_cmp_expr_right_30 = mod_consts[113];
        tmp_condition_result_30 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_30, tmp_cmp_expr_right_30);
        if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
        assert(tmp_condition_result_30 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_30:;
    // Tried code:
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_value_95;
        tmp_called_value_95 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_called_value_95 == NULL)) {
            tmp_called_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_called_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_41;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 233;
        tmp_assign_source_114 = CALL_FUNCTION_NO_ARGS(tmp_called_value_95);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_41;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_114;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_37;
        PyObject *tmp_call_result_42;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_37 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 234;
        tmp_call_result_42 = CALL_METHOD_NO_ARGS(tmp_called_instance_37, mod_consts[115]);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_41;
        }
        Py_DECREF(tmp_call_result_42);
    }
    goto try_end_39;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 13.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_13, &exception_preserved_value_13, &exception_preserved_tb_13);

    if (exception_keeper_tb_39 == NULL) {
        exception_keeper_tb_39 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_39);
    } else if (exception_keeper_lineno_39 != 0) {
        exception_keeper_tb_39 = ADD_TRACEBACK(exception_keeper_tb_39, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_39);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_39, &exception_keeper_value_39, &exception_keeper_tb_39);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_39, exception_keeper_tb_39);
    PUBLISH_EXCEPTION(&exception_keeper_type_39, &exception_keeper_value_39, &exception_keeper_tb_39);
    // Tried code:
    {
        bool tmp_condition_result_31;
        PyObject *tmp_cmp_expr_left_31;
        PyObject *tmp_cmp_expr_right_31;
        tmp_cmp_expr_left_31 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_31 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_31, tmp_cmp_expr_right_31);
        assert(!(tmp_res == -1));
        tmp_condition_result_31 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_115;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_subscript_value_34;
        CHECK_OBJECT(var_e);
        tmp_expression_value_152 = var_e;
        tmp_expression_value_151 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[37]);
        if (tmp_expression_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        tmp_expression_value_150 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[38]);
        Py_DECREF(tmp_expression_value_151);
        if (tmp_expression_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        tmp_expression_value_149 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[39]);
        Py_DECREF(tmp_expression_value_150);
        if (tmp_expression_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        tmp_subscript_value_34 = mod_consts[40];
        tmp_assign_source_116 = LOOKUP_SUBSCRIPT(tmp_expression_value_149, tmp_subscript_value_34);
        Py_DECREF(tmp_expression_value_149);
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_116;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_expression_value_154;
        CHECK_OBJECT(var_e);
        tmp_expression_value_154 = var_e;
        tmp_expression_value_153 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[37]);
        if (tmp_expression_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        tmp_assign_source_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[41]);
        Py_DECREF(tmp_expression_value_153);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_117;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_instance_38;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_args_element_value_66;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 238;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }

        tmp_called_instance_38 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_65 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_66 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66};
            tmp_assign_source_118 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_38,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_118;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_call_result_43;
        PyObject *tmp_args_element_value_67;
        tmp_called_value_96 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_96 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_67 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 239;
        tmp_call_result_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_96, tmp_args_element_value_67);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_value_97;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_call_result_44;
        PyObject *tmp_kw_call_arg_value_0_18;
        PyObject *tmp_kw_call_dict_value_0_18;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 240;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }

        tmp_expression_value_155 = var_LogInit;
        tmp_called_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[15]);
        if (tmp_called_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_97);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 240;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }

        tmp_kw_call_arg_value_0_18 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_18 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 240;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_18};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_18};
            tmp_call_result_44 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_97, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_97);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        Py_DECREF(tmp_call_result_44);
    }
    goto try_end_40;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto try_except_handler_42;
    // End of try:
    try_end_40:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_31;
    branch_no_31:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 232;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_42;
    branch_end_31:;
    goto try_end_41;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(exception_preserved_type_13, exception_preserved_value_13, exception_preserved_tb_13);

    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto try_except_handler_5;
    // End of try:
    try_end_41:;
    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(exception_preserved_type_13, exception_preserved_value_13, exception_preserved_tb_13);

    goto try_end_39;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_39:;
    goto branch_end_30;
    branch_no_30:;
    {
        nuitka_bool tmp_condition_result_32;
        PyObject *tmp_cmp_expr_left_32;
        PyObject *tmp_cmp_expr_right_32;
        PyObject *tmp_called_instance_39;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_args_element_value_69;
        tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_39 == NULL)) {
            tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_68 = mod_consts[116];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_69 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_68, tmp_args_element_value_69};
            tmp_cmp_expr_left_32 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_39,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_32 = Py_None;
        tmp_condition_result_32 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_32, tmp_cmp_expr_right_32);
        Py_DECREF(tmp_cmp_expr_left_32);
        if (tmp_condition_result_32 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
        assert(tmp_condition_result_32 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_32:;
    // Tried code:
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_value_98;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_subscript_value_35;
        PyObject *tmp_start_value_13;
        PyObject *tmp_left_value_13;
        PyObject *tmp_called_value_99;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_right_value_13;
        PyObject *tmp_stop_value_16;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_157 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_158 = var_recieve;
        tmp_called_value_99 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[44]);
        if (tmp_called_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 243;
        tmp_left_value_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_99, mod_consts[59]);

        Py_DECREF(tmp_called_value_99);
        if (tmp_left_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_right_value_13 = mod_consts[50];
        tmp_start_value_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_13, tmp_right_value_13);
        Py_DECREF(tmp_left_value_13);
        if (tmp_start_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_stop_value_16 = Py_None;
        tmp_subscript_value_35 = MAKE_SLICEOBJ2(tmp_start_value_13, tmp_stop_value_16);
        Py_DECREF(tmp_start_value_13);
        assert(!(tmp_subscript_value_35 == NULL));
        tmp_expression_value_156 = LOOKUP_SUBSCRIPT(tmp_expression_value_157, tmp_subscript_value_35);
        Py_DECREF(tmp_subscript_value_35);
        if (tmp_expression_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_called_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[51]);
        Py_DECREF(tmp_expression_value_156);
        if (tmp_called_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 243;
        tmp_assign_source_119 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_98, mod_consts[52]);

        Py_DECREF(tmp_called_value_98);
        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        {
            PyObject *old = var_frame;
            var_frame = tmp_assign_source_119;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_called_value_100;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_subscript_value_36;
        PyObject *tmp_start_value_14;
        PyObject *tmp_left_value_14;
        PyObject *tmp_called_value_101;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_right_value_14;
        PyObject *tmp_stop_value_17;
        PyObject *tmp_called_value_102;
        PyObject *tmp_expression_value_162;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_160 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_161 = var_recieve;
        tmp_called_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[44]);
        if (tmp_called_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 244;
        tmp_left_value_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_101, mod_consts[117]);

        Py_DECREF(tmp_called_value_101);
        if (tmp_left_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_right_value_14 = mod_consts[63];
        tmp_start_value_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_14, tmp_right_value_14);
        Py_DECREF(tmp_left_value_14);
        if (tmp_start_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_162 = var_recieve;
        tmp_called_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[44]);
        if (tmp_called_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_start_value_14);

            exception_lineno = 244;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 244;
        tmp_stop_value_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_102, mod_consts[59]);

        Py_DECREF(tmp_called_value_102);
        if (tmp_stop_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_start_value_14);

            exception_lineno = 244;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_subscript_value_36 = MAKE_SLICEOBJ2(tmp_start_value_14, tmp_stop_value_17);
        Py_DECREF(tmp_start_value_14);
        Py_DECREF(tmp_stop_value_17);
        assert(!(tmp_subscript_value_36 == NULL));
        tmp_expression_value_159 = LOOKUP_SUBSCRIPT(tmp_expression_value_160, tmp_subscript_value_36);
        Py_DECREF(tmp_subscript_value_36);
        if (tmp_expression_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_called_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[51]);
        Py_DECREF(tmp_expression_value_159);
        if (tmp_called_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 244;
        tmp_assign_source_120 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_100, mod_consts[52]);

        Py_DECREF(tmp_called_value_100);
        if (tmp_assign_source_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        {
            PyObject *old = var_colRange;
            var_colRange = tmp_assign_source_120;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_33;
        PyObject *tmp_cmp_expr_left_33;
        PyObject *tmp_cmp_expr_right_33;
        tmp_cmp_expr_left_33 = mod_consts[118];
        CHECK_OBJECT(var_recieve);
        tmp_cmp_expr_right_33 = var_recieve;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_33, tmp_cmp_expr_left_33);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_condition_result_33 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_called_value_103;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_subscript_value_37;
        PyObject *tmp_start_value_15;
        PyObject *tmp_left_value_15;
        PyObject *tmp_called_value_104;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_right_value_15;
        PyObject *tmp_stop_value_18;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_164 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_165 = var_recieve;
        tmp_called_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[44]);
        if (tmp_called_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 246;
        tmp_left_value_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_104, mod_consts[119]);

        Py_DECREF(tmp_called_value_104);
        if (tmp_left_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_right_value_15 = mod_consts[120];
        tmp_start_value_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_15, tmp_right_value_15);
        Py_DECREF(tmp_left_value_15);
        if (tmp_start_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_stop_value_18 = Py_None;
        tmp_subscript_value_37 = MAKE_SLICEOBJ2(tmp_start_value_15, tmp_stop_value_18);
        Py_DECREF(tmp_start_value_15);
        assert(!(tmp_subscript_value_37 == NULL));
        tmp_expression_value_163 = LOOKUP_SUBSCRIPT(tmp_expression_value_164, tmp_subscript_value_37);
        Py_DECREF(tmp_subscript_value_37);
        if (tmp_expression_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_called_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[51]);
        Py_DECREF(tmp_expression_value_163);
        if (tmp_called_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 246;
        tmp_float_arg_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_103, mod_consts[52]);

        Py_DECREF(tmp_called_value_103);
        if (tmp_float_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_assign_source_121 = TO_FLOAT(tmp_float_arg_1);
        Py_DECREF(tmp_float_arg_1);
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        {
            PyObject *old = var_limit;
            var_limit = tmp_assign_source_121;
            Py_XDECREF(old);
        }

    }
    goto branch_end_33;
    branch_no_33:;
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = Py_None;
        {
            PyObject *old = var_limit;
            var_limit = tmp_assign_source_122;
            Py_INCREF(var_limit);
            Py_XDECREF(old);
        }

    }
    branch_end_33:;
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_value_105;
        PyObject *tmp_kw_call_value_0_19;
        PyObject *tmp_kw_call_value_1_8;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_kw_call_value_3_2;
        tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_called_value_105 == NULL)) {
            tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_called_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_kw_call_value_0_19 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_19 == NULL)) {
            tmp_kw_call_value_0_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        CHECK_OBJECT(var_frame);
        tmp_kw_call_value_1_8 = var_frame;
        CHECK_OBJECT(var_colRange);
        tmp_kw_call_value_2_4 = var_colRange;
        CHECK_OBJECT(var_limit);
        tmp_kw_call_value_3_2 = var_limit;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 249;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_19, tmp_kw_call_value_1_8, tmp_kw_call_value_2_4, tmp_kw_call_value_3_2};

            tmp_assign_source_123 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_105, kw_values, mod_consts[122]);
        }

        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_123;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_called_value_106;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_called_instance_40;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }

        tmp_expression_value_166 = var_LogInit;
        tmp_called_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[35]);
        if (tmp_called_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        CHECK_OBJECT(var_boot);
        tmp_called_instance_40 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 250;
        tmp_args_element_value_70 = CALL_METHOD_NO_ARGS(tmp_called_instance_40, mod_consts[123]);
        if (tmp_args_element_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_106);

            exception_lineno = 250;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 250;
        tmp_assign_source_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_106, tmp_args_element_value_70);
        Py_DECREF(tmp_called_value_106);
        Py_DECREF(tmp_args_element_value_70);
        if (tmp_assign_source_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_124;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_107;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_call_result_45;
        PyObject *tmp_kw_call_value_0_20;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 251;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }

        tmp_expression_value_167 = var_LogInit;
        tmp_called_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[15]);
        if (tmp_called_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        CHECK_OBJECT(var_message);
        tmp_kw_call_value_0_20 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 251;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_20};

            tmp_call_result_45 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_107, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_107);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        Py_DECREF(tmp_call_result_45);
    }
    goto try_end_42;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 14.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_14, &exception_preserved_value_14, &exception_preserved_tb_14);

    if (exception_keeper_tb_42 == NULL) {
        exception_keeper_tb_42 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_42);
    } else if (exception_keeper_lineno_42 != 0) {
        exception_keeper_tb_42 = ADD_TRACEBACK(exception_keeper_tb_42, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_42);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_42, &exception_keeper_value_42, &exception_keeper_tb_42);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_42, exception_keeper_tb_42);
    PUBLISH_EXCEPTION(&exception_keeper_type_42, &exception_keeper_value_42, &exception_keeper_tb_42);
    // Tried code:
    {
        bool tmp_condition_result_34;
        PyObject *tmp_cmp_expr_left_34;
        PyObject *tmp_cmp_expr_right_34;
        tmp_cmp_expr_left_34 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_34 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_34, tmp_cmp_expr_right_34);
        assert(!(tmp_res == -1));
        tmp_condition_result_34 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_125;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_expression_value_168;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_subscript_value_38;
        CHECK_OBJECT(var_e);
        tmp_expression_value_171 = var_e;
        tmp_expression_value_170 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[37]);
        if (tmp_expression_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        tmp_expression_value_169 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[38]);
        Py_DECREF(tmp_expression_value_170);
        if (tmp_expression_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        tmp_expression_value_168 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[39]);
        Py_DECREF(tmp_expression_value_169);
        if (tmp_expression_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        tmp_subscript_value_38 = mod_consts[40];
        tmp_assign_source_126 = LOOKUP_SUBSCRIPT(tmp_expression_value_168, tmp_subscript_value_38);
        Py_DECREF(tmp_expression_value_168);
        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_126;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_expression_value_173;
        CHECK_OBJECT(var_e);
        tmp_expression_value_173 = var_e;
        tmp_expression_value_172 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[37]);
        if (tmp_expression_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        tmp_assign_source_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[41]);
        Py_DECREF(tmp_expression_value_172);
        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_127;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_instance_41;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 255;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }

        tmp_called_instance_41 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_71 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_72 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 255;
        {
            PyObject *call_args[] = {tmp_args_element_value_71, tmp_args_element_value_72};
            tmp_assign_source_128 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_41,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_128;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_108;
        PyObject *tmp_call_result_46;
        PyObject *tmp_args_element_value_73;
        tmp_called_value_108 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_108 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_73 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 256;
        tmp_call_result_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_108, tmp_args_element_value_73);
        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_value_109;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_call_result_47;
        PyObject *tmp_kw_call_arg_value_0_19;
        PyObject *tmp_kw_call_dict_value_0_19;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }

        tmp_expression_value_174 = var_LogInit;
        tmp_called_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[15]);
        if (tmp_called_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_109);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }

        tmp_kw_call_arg_value_0_19 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_19 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 257;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_19};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_19};
            tmp_call_result_47 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_109, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_109);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        Py_DECREF(tmp_call_result_47);
    }
    goto try_end_43;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto try_except_handler_45;
    // End of try:
    try_end_43:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_34;
    branch_no_34:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 242;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_45;
    branch_end_34:;
    goto try_end_44;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(exception_preserved_type_14, exception_preserved_value_14, exception_preserved_tb_14);

    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto try_except_handler_5;
    // End of try:
    try_end_44:;
    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(exception_preserved_type_14, exception_preserved_value_14, exception_preserved_tb_14);

    goto try_end_42;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_42:;
    goto branch_end_32;
    branch_no_32:;
    {
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_cmp_expr_left_35;
        PyObject *tmp_cmp_expr_right_35;
        CHECK_OBJECT(var_recieve);
        tmp_cmp_expr_left_35 = var_recieve;
        tmp_cmp_expr_right_35 = mod_consts[124];
        tmp_condition_result_35 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_35, tmp_cmp_expr_right_35);
        if (tmp_condition_result_35 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
        assert(tmp_condition_result_35 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_35:;
    {
        PyObject *tmp_called_value_110;
        PyObject *tmp_call_result_48;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        tmp_called_value_110 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_110 != NULL);
        tmp_tuple_element_4 = mod_consts[125];
        tmp_string_concat_values_4 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            tmp_format_value_4 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_format_value_4 == NULL)) {
                tmp_format_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_format_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_4 = mod_consts[81];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_args_element_value_74 = PyUnicode_Join(mod_consts[81], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_args_element_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 261;
        tmp_call_result_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_110, tmp_args_element_value_74);
        Py_DECREF(tmp_args_element_value_74);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_48);
    }
    goto branch_end_35;
    branch_no_35:;
    {
        nuitka_bool tmp_condition_result_36;
        PyObject *tmp_cmp_expr_left_36;
        PyObject *tmp_cmp_expr_right_36;
        PyObject *tmp_called_instance_42;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_args_element_value_76;
        tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_42 == NULL)) {
            tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_75 = mod_consts[126];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_76 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = {tmp_args_element_value_75, tmp_args_element_value_76};
            tmp_cmp_expr_left_36 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_42,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_36 = Py_None;
        tmp_condition_result_36 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_36, tmp_cmp_expr_right_36);
        Py_DECREF(tmp_cmp_expr_left_36);
        if (tmp_condition_result_36 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
        assert(tmp_condition_result_36 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_36:;
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_value_111;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_subscript_value_39;
        PyObject *tmp_start_value_16;
        PyObject *tmp_left_value_16;
        PyObject *tmp_called_value_112;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_right_value_16;
        PyObject *tmp_stop_value_19;
        PyObject *tmp_called_value_113;
        PyObject *tmp_expression_value_178;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_176 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_177 = var_recieve;
        tmp_called_value_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[44]);
        if (tmp_called_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 264;
        tmp_left_value_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_112, mod_consts[127]);

        Py_DECREF(tmp_called_value_112);
        if (tmp_left_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_16 = mod_consts[61];
        tmp_start_value_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_16, tmp_right_value_16);
        Py_DECREF(tmp_left_value_16);
        if (tmp_start_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_178 = var_recieve;
        tmp_called_value_113 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[44]);
        if (tmp_called_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_start_value_16);

            exception_lineno = 264;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 264;
        tmp_stop_value_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_113, mod_consts[128]);

        Py_DECREF(tmp_called_value_113);
        if (tmp_stop_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_start_value_16);

            exception_lineno = 264;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_39 = MAKE_SLICEOBJ2(tmp_start_value_16, tmp_stop_value_19);
        Py_DECREF(tmp_start_value_16);
        Py_DECREF(tmp_stop_value_19);
        assert(!(tmp_subscript_value_39 == NULL));
        tmp_expression_value_175 = LOOKUP_SUBSCRIPT(tmp_expression_value_176, tmp_subscript_value_39);
        Py_DECREF(tmp_subscript_value_39);
        if (tmp_expression_value_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_111 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[51]);
        Py_DECREF(tmp_expression_value_175);
        if (tmp_called_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 264;
        tmp_assign_source_129 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_111, mod_consts[129]);

        Py_DECREF(tmp_called_value_111);
        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_save_name;
            var_save_name = tmp_assign_source_129;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_called_value_114;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_subscript_value_40;
        PyObject *tmp_start_value_17;
        PyObject *tmp_left_value_17;
        PyObject *tmp_called_value_115;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_right_value_17;
        PyObject *tmp_stop_value_20;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_180 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_181 = var_recieve;
        tmp_called_value_115 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[44]);
        if (tmp_called_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 265;
        tmp_left_value_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_115, mod_consts[128]);

        Py_DECREF(tmp_called_value_115);
        if (tmp_left_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_17 = mod_consts[61];
        tmp_start_value_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_17, tmp_right_value_17);
        Py_DECREF(tmp_left_value_17);
        if (tmp_start_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_stop_value_20 = Py_None;
        tmp_subscript_value_40 = MAKE_SLICEOBJ2(tmp_start_value_17, tmp_stop_value_20);
        Py_DECREF(tmp_start_value_17);
        assert(!(tmp_subscript_value_40 == NULL));
        tmp_expression_value_179 = LOOKUP_SUBSCRIPT(tmp_expression_value_180, tmp_subscript_value_40);
        Py_DECREF(tmp_subscript_value_40);
        if (tmp_expression_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_114 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[51]);
        Py_DECREF(tmp_expression_value_179);
        if (tmp_called_value_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 265;
        tmp_assign_source_130 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_114, mod_consts[52]);

        Py_DECREF(tmp_called_value_114);
        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_save_format;
            var_save_format = tmp_assign_source_130;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_value_116;
        PyObject *tmp_kw_call_value_0_21;
        PyObject *tmp_kw_call_value_1_9;
        PyObject *tmp_kw_call_value_2_5;
        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_called_value_116 == NULL)) {
            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        if (tmp_called_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        if (var_caching_dataframe == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[131]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 267;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_kw_call_value_0_21 = var_caching_dataframe;
        CHECK_OBJECT(var_save_name);
        tmp_kw_call_value_1_9 = var_save_name;
        CHECK_OBJECT(var_save_format);
        tmp_kw_call_value_2_5 = var_save_format;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 267;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_21, tmp_kw_call_value_1_9, tmp_kw_call_value_2_5};

            tmp_assign_source_131 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_116, kw_values, mod_consts[132]);
        }

        if (tmp_assign_source_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_131;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_value_117;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_called_instance_43;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 268;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_expression_value_182 = var_LogInit;
        tmp_called_value_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[35]);
        if (tmp_called_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        CHECK_OBJECT(var_boot);
        tmp_called_instance_43 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 268;
        tmp_args_element_value_77 = CALL_METHOD_NO_ARGS(tmp_called_instance_43, mod_consts[133]);
        if (tmp_args_element_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_117);

            exception_lineno = 268;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 268;
        tmp_assign_source_132 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_117, tmp_args_element_value_77);
        Py_DECREF(tmp_called_value_117);
        Py_DECREF(tmp_args_element_value_77);
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_132;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_118;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_call_result_49;
        PyObject *tmp_kw_call_value_0_22;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 269;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_expression_value_183 = var_LogInit;
        tmp_called_value_118 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[15]);
        if (tmp_called_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        CHECK_OBJECT(var_message);
        tmp_kw_call_value_0_22 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 269;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_22};

            tmp_call_result_49 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_118, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_118);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        Py_DECREF(tmp_call_result_49);
    }
    goto try_end_45;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 15.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_15, &exception_preserved_value_15, &exception_preserved_tb_15);

    if (exception_keeper_tb_45 == NULL) {
        exception_keeper_tb_45 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_45);
    } else if (exception_keeper_lineno_45 != 0) {
        exception_keeper_tb_45 = ADD_TRACEBACK(exception_keeper_tb_45, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_45);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_45, &exception_keeper_value_45, &exception_keeper_tb_45);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_45, exception_keeper_tb_45);
    PUBLISH_EXCEPTION(&exception_keeper_type_45, &exception_keeper_value_45, &exception_keeper_tb_45);
    // Tried code:
    {
        bool tmp_condition_result_37;
        PyObject *tmp_cmp_expr_left_37;
        PyObject *tmp_cmp_expr_right_37;
        tmp_cmp_expr_left_37 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_37 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_37, tmp_cmp_expr_right_37);
        assert(!(tmp_res == -1));
        tmp_condition_result_37 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_37 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_133;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_subscript_value_41;
        CHECK_OBJECT(var_e);
        tmp_expression_value_187 = var_e;
        tmp_expression_value_186 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[37]);
        if (tmp_expression_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        tmp_expression_value_185 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[38]);
        Py_DECREF(tmp_expression_value_186);
        if (tmp_expression_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        tmp_expression_value_184 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[39]);
        Py_DECREF(tmp_expression_value_185);
        if (tmp_expression_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        tmp_subscript_value_41 = mod_consts[40];
        tmp_assign_source_134 = LOOKUP_SUBSCRIPT(tmp_expression_value_184, tmp_subscript_value_41);
        Py_DECREF(tmp_expression_value_184);
        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_134;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_expression_value_189;
        CHECK_OBJECT(var_e);
        tmp_expression_value_189 = var_e;
        tmp_expression_value_188 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[37]);
        if (tmp_expression_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        tmp_assign_source_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[41]);
        Py_DECREF(tmp_expression_value_188);
        if (tmp_assign_source_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_135;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_instance_44;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 273;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }

        tmp_called_instance_44 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_78 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_79 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79};
            tmp_assign_source_136 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_44,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_136;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_119;
        PyObject *tmp_call_result_50;
        PyObject *tmp_args_element_value_80;
        tmp_called_value_119 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_119 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_80 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 274;
        tmp_call_result_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_119, tmp_args_element_value_80);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_value_120;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_call_result_51;
        PyObject *tmp_kw_call_arg_value_0_20;
        PyObject *tmp_kw_call_dict_value_0_20;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 275;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }

        tmp_expression_value_190 = var_LogInit;
        tmp_called_value_120 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[15]);
        if (tmp_called_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_120);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 275;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }

        tmp_kw_call_arg_value_0_20 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_20 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 275;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_20};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_20};
            tmp_call_result_51 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_120, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_120);
        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_49;
        }
        Py_DECREF(tmp_call_result_51);
    }
    goto try_end_46;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_46;
    exception_value = exception_keeper_value_46;
    exception_tb = exception_keeper_tb_46;
    exception_lineno = exception_keeper_lineno_46;

    goto try_except_handler_48;
    // End of try:
    try_end_46:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_37;
    branch_no_37:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 266;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_48;
    branch_end_37:;
    goto try_end_47;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(exception_preserved_type_15, exception_preserved_value_15, exception_preserved_tb_15);

    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto try_except_handler_5;
    // End of try:
    try_end_47:;
    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(exception_preserved_type_15, exception_preserved_value_15, exception_preserved_tb_15);

    goto try_end_45;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_45:;
    goto branch_end_36;
    branch_no_36:;
    {
        nuitka_bool tmp_condition_result_38;
        PyObject *tmp_cmp_expr_left_38;
        PyObject *tmp_cmp_expr_right_38;
        PyObject *tmp_called_instance_45;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_args_element_value_82;
        tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_45 == NULL)) {
            tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_81 = mod_consts[134];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_82 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82};
            tmp_cmp_expr_left_38 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_45,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_38 = Py_None;
        tmp_condition_result_38 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_38, tmp_cmp_expr_right_38);
        Py_DECREF(tmp_cmp_expr_left_38);
        if (tmp_condition_result_38 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
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
    // Tried code:
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_called_value_121;
        PyObject *tmp_kw_call_value_0_23;
        PyObject *tmp_kw_call_value_1_10;
        PyObject *tmp_kw_call_value_2_6;
        tmp_called_value_121 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_value_121 == NULL)) {
            tmp_called_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_called_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_50;
        }
        tmp_kw_call_value_0_23 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_23 == NULL)) {
            tmp_kw_call_value_0_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_50;
        }
        if (var_caching_dataframe == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[131]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 281;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_50;
        }

        tmp_kw_call_value_1_10 = var_caching_dataframe;
        if (var_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[136]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 281;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_50;
        }

        tmp_kw_call_value_2_6 = var_data;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 281;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_23, tmp_kw_call_value_1_10, tmp_kw_call_value_2_6};

            tmp_assign_source_137 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_121, kw_values, mod_consts[137]);
        }

        if (tmp_assign_source_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_50;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_137;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_46;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_46 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 282;
        tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_46, mod_consts[138]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_51;
        }
        tmp_assign_source_138 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_51;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_138;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_139 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_139 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 282;
            goto try_except_handler_52;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_139;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_140 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_140 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 282;
            goto try_except_handler_52;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_140;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 282;
                    goto try_except_handler_52;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[108];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 282;
            goto try_except_handler_52;
        }
    }
    goto try_end_48;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto try_except_handler_51;
    // End of try:
    try_end_48:;
    goto try_end_49;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto try_except_handler_50;
    // End of try:
    try_end_49:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_141;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_141 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_caching_dataframe;
            var_caching_dataframe = tmp_assign_source_141;
            Py_INCREF(var_caching_dataframe);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_142;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_142 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_142;
            Py_INCREF(var_message);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_called_value_122;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_kw_call_value_0_24;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_50;
        }

        tmp_expression_value_191 = var_LogInit;
        tmp_called_value_122 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[35]);
        if (tmp_called_value_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_50;
        }
        CHECK_OBJECT(var_message);
        tmp_kw_call_value_0_24 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 283;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_24};

            tmp_assign_source_143 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_122, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_122);
        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_50;
        }
        {
            PyObject *old = var_message;
            assert(old != NULL);
            var_message = tmp_assign_source_143;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_123;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_call_result_52;
        PyObject *tmp_kw_call_value_0_25;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 284;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_50;
        }

        tmp_expression_value_192 = var_LogInit;
        tmp_called_value_123 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[15]);
        if (tmp_called_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_50;
        }
        CHECK_OBJECT(var_message);
        tmp_kw_call_value_0_25 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 284;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_25};

            tmp_call_result_52 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_123, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_123);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_50;
        }
        Py_DECREF(tmp_call_result_52);
    }
    goto try_end_50;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 16.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_16, &exception_preserved_value_16, &exception_preserved_tb_16);

    if (exception_keeper_tb_50 == NULL) {
        exception_keeper_tb_50 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_50);
    } else if (exception_keeper_lineno_50 != 0) {
        exception_keeper_tb_50 = ADD_TRACEBACK(exception_keeper_tb_50, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_50);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_50, &exception_keeper_value_50, &exception_keeper_tb_50);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_50, exception_keeper_tb_50);
    PUBLISH_EXCEPTION(&exception_keeper_type_50, &exception_keeper_value_50, &exception_keeper_tb_50);
    // Tried code:
    {
        bool tmp_condition_result_39;
        PyObject *tmp_cmp_expr_left_39;
        PyObject *tmp_cmp_expr_right_39;
        tmp_cmp_expr_left_39 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_39 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_39, tmp_cmp_expr_right_39);
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
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_144;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_145;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_subscript_value_42;
        CHECK_OBJECT(var_e);
        tmp_expression_value_196 = var_e;
        tmp_expression_value_195 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[37]);
        if (tmp_expression_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }
        tmp_expression_value_194 = LOOKUP_ATTRIBUTE(tmp_expression_value_195, mod_consts[38]);
        Py_DECREF(tmp_expression_value_195);
        if (tmp_expression_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }
        tmp_expression_value_193 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[39]);
        Py_DECREF(tmp_expression_value_194);
        if (tmp_expression_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }
        tmp_subscript_value_42 = mod_consts[40];
        tmp_assign_source_145 = LOOKUP_SUBSCRIPT(tmp_expression_value_193, tmp_subscript_value_42);
        Py_DECREF(tmp_expression_value_193);
        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_145;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_expression_value_198;
        CHECK_OBJECT(var_e);
        tmp_expression_value_198 = var_e;
        tmp_expression_value_197 = LOOKUP_ATTRIBUTE(tmp_expression_value_198, mod_consts[37]);
        if (tmp_expression_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }
        tmp_assign_source_146 = LOOKUP_ATTRIBUTE(tmp_expression_value_197, mod_consts[41]);
        Py_DECREF(tmp_expression_value_197);
        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_146;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_called_instance_47;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_args_element_value_84;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 288;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }

        tmp_called_instance_47 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_83 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_84 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 288;
        {
            PyObject *call_args[] = {tmp_args_element_value_83, tmp_args_element_value_84};
            tmp_assign_source_147 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_47,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_147;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_124;
        PyObject *tmp_call_result_53;
        PyObject *tmp_args_element_value_85;
        tmp_called_value_124 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_124 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_85 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 289;
        tmp_call_result_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_124, tmp_args_element_value_85);
        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_value_125;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_call_result_54;
        PyObject *tmp_kw_call_arg_value_0_21;
        PyObject *tmp_kw_call_dict_value_0_21;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 290;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }

        tmp_expression_value_199 = var_LogInit;
        tmp_called_value_125 = LOOKUP_ATTRIBUTE(tmp_expression_value_199, mod_consts[15]);
        if (tmp_called_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_125);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 290;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }

        tmp_kw_call_arg_value_0_21 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_21 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 290;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_21};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_21};
            tmp_call_result_54 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_125, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_125);
        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_54;
        }
        Py_DECREF(tmp_call_result_54);
    }
    goto try_end_51;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto try_except_handler_53;
    // End of try:
    try_end_51:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_39;
    branch_no_39:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 280;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_53;
    branch_end_39:;
    goto try_end_52;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(exception_preserved_type_16, exception_preserved_value_16, exception_preserved_tb_16);

    // Re-raise.
    exception_type = exception_keeper_type_52;
    exception_value = exception_keeper_value_52;
    exception_tb = exception_keeper_tb_52;
    exception_lineno = exception_keeper_lineno_52;

    goto try_except_handler_5;
    // End of try:
    try_end_52:;
    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(exception_preserved_type_16, exception_preserved_value_16, exception_preserved_tb_16);

    goto try_end_50;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_50:;
    goto branch_end_38;
    branch_no_38:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_cmp_expr_left_40;
        PyObject *tmp_cmp_expr_right_40;
        PyObject *tmp_called_instance_48;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_args_element_value_87;
        tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_48 == NULL)) {
            tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_86 = mod_consts[139];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_87 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = {tmp_args_element_value_86, tmp_args_element_value_87};
            tmp_cmp_expr_left_40 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_48,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_40 = Py_None;
        tmp_condition_result_40 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_40, tmp_cmp_expr_right_40);
        Py_DECREF(tmp_cmp_expr_left_40);
        if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
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
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_subscript_value_43;
        PyObject *tmp_called_value_126;
        PyObject *tmp_expression_value_201;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_200 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_201 = var_recieve;
        tmp_called_value_126 = LOOKUP_ATTRIBUTE(tmp_expression_value_201, mod_consts[44]);
        if (tmp_called_value_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 293;
        tmp_subscript_value_43 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_126, mod_consts[140]);

        Py_DECREF(tmp_called_value_126);
        if (tmp_subscript_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_148 = LOOKUP_SUBSCRIPT(tmp_expression_value_200, tmp_subscript_value_43);
        Py_DECREF(tmp_subscript_value_43);
        if (tmp_assign_source_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_colName;
            var_colName = tmp_assign_source_148;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_called_value_127;
        PyObject *tmp_kw_call_value_0_26;
        PyObject *tmp_kw_call_value_1_11;
        PyObject *tmp_kw_call_value_2_7;
        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_called_value_127 == NULL)) {
            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_called_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_55;
        }
        tmp_kw_call_value_0_26 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_26 == NULL)) {
            tmp_kw_call_value_0_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_55;
        }
        if (var_caching_dataframe == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[131]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 295;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_55;
        }

        tmp_kw_call_value_1_11 = var_caching_dataframe;
        CHECK_OBJECT(var_colName);
        tmp_kw_call_value_2_7 = var_colName;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 295;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_26, tmp_kw_call_value_1_11, tmp_kw_call_value_2_7};

            tmp_assign_source_149 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_127, kw_values, mod_consts[142]);
        }

        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_55;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_149;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_49;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_49 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 296;
        tmp_iter_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_49, mod_consts[98]);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_56;
        }
        tmp_assign_source_150 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_56;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_150;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_151 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_151 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_57;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_151;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_152 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_152 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_57;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_152;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 296;
                    goto try_except_handler_57;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[108];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 296;
            goto try_except_handler_57;
        }
    }
    goto try_end_53;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto try_except_handler_56;
    // End of try:
    try_end_53:;
    goto try_end_54;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_keeper_lineno_54 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_54;
    exception_value = exception_keeper_value_54;
    exception_tb = exception_keeper_tb_54;
    exception_lineno = exception_keeper_lineno_54;

    goto try_except_handler_55;
    // End of try:
    try_end_54:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_153;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_153 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_caching_dataframe;
            var_caching_dataframe = tmp_assign_source_153;
            Py_INCREF(var_caching_dataframe);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_154;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_154 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_154;
            Py_INCREF(var_message);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_called_value_128;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_kw_call_value_0_27;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 297;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_55;
        }

        tmp_expression_value_202 = var_LogInit;
        tmp_called_value_128 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[35]);
        if (tmp_called_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_55;
        }
        CHECK_OBJECT(var_message);
        tmp_kw_call_value_0_27 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 297;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_27};

            tmp_assign_source_155 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_128, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_128);
        if (tmp_assign_source_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_55;
        }
        {
            PyObject *old = var_message;
            assert(old != NULL);
            var_message = tmp_assign_source_155;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_129;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_call_result_55;
        PyObject *tmp_kw_call_arg_value_0_22;
        PyObject *tmp_kw_call_dict_value_0_22;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 298;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_55;
        }

        tmp_expression_value_203 = var_LogInit;
        tmp_called_value_129 = LOOKUP_ATTRIBUTE(tmp_expression_value_203, mod_consts[15]);
        if (tmp_called_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_55;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_129);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 298;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_55;
        }

        tmp_kw_call_arg_value_0_22 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_22 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 298;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_22};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_22};
            tmp_call_result_55 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_129, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_129);
        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_55;
        }
        Py_DECREF(tmp_call_result_55);
    }
    goto try_end_55;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 17.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_17, &exception_preserved_value_17, &exception_preserved_tb_17);

    if (exception_keeper_tb_55 == NULL) {
        exception_keeper_tb_55 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_55);
    } else if (exception_keeper_lineno_55 != 0) {
        exception_keeper_tb_55 = ADD_TRACEBACK(exception_keeper_tb_55, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_55);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_55, &exception_keeper_value_55, &exception_keeper_tb_55);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_55, exception_keeper_tb_55);
    PUBLISH_EXCEPTION(&exception_keeper_type_55, &exception_keeper_value_55, &exception_keeper_tb_55);
    // Tried code:
    {
        bool tmp_condition_result_41;
        PyObject *tmp_cmp_expr_left_41;
        PyObject *tmp_cmp_expr_right_41;
        tmp_cmp_expr_left_41 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_41 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_41, tmp_cmp_expr_right_41);
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
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_156;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_subscript_value_44;
        CHECK_OBJECT(var_e);
        tmp_expression_value_207 = var_e;
        tmp_expression_value_206 = LOOKUP_ATTRIBUTE(tmp_expression_value_207, mod_consts[37]);
        if (tmp_expression_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }
        tmp_expression_value_205 = LOOKUP_ATTRIBUTE(tmp_expression_value_206, mod_consts[38]);
        Py_DECREF(tmp_expression_value_206);
        if (tmp_expression_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }
        tmp_expression_value_204 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[39]);
        Py_DECREF(tmp_expression_value_205);
        if (tmp_expression_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }
        tmp_subscript_value_44 = mod_consts[40];
        tmp_assign_source_157 = LOOKUP_SUBSCRIPT(tmp_expression_value_204, tmp_subscript_value_44);
        Py_DECREF(tmp_expression_value_204);
        if (tmp_assign_source_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_157;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_expression_value_209;
        CHECK_OBJECT(var_e);
        tmp_expression_value_209 = var_e;
        tmp_expression_value_208 = LOOKUP_ATTRIBUTE(tmp_expression_value_209, mod_consts[37]);
        if (tmp_expression_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }
        tmp_assign_source_158 = LOOKUP_ATTRIBUTE(tmp_expression_value_208, mod_consts[41]);
        Py_DECREF(tmp_expression_value_208);
        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_158;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_called_instance_50;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_args_element_value_89;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 302;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }

        tmp_called_instance_50 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_88 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_89 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = {tmp_args_element_value_88, tmp_args_element_value_89};
            tmp_assign_source_159 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_50,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_159;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_130;
        PyObject *tmp_call_result_56;
        PyObject *tmp_args_element_value_90;
        tmp_called_value_130 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_130 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_90 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 303;
        tmp_call_result_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_130, tmp_args_element_value_90);
        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_value_131;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_call_result_57;
        PyObject *tmp_kw_call_arg_value_0_23;
        PyObject *tmp_kw_call_dict_value_0_23;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 304;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }

        tmp_expression_value_210 = var_LogInit;
        tmp_called_value_131 = LOOKUP_ATTRIBUTE(tmp_expression_value_210, mod_consts[15]);
        if (tmp_called_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_131);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 304;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }

        tmp_kw_call_arg_value_0_23 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_23 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 304;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_23};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_23};
            tmp_call_result_57 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_131, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_131);
        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_59;
        }
        Py_DECREF(tmp_call_result_57);
    }
    goto try_end_56;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_keeper_lineno_56 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_56;
    exception_value = exception_keeper_value_56;
    exception_tb = exception_keeper_tb_56;
    exception_lineno = exception_keeper_lineno_56;

    goto try_except_handler_58;
    // End of try:
    try_end_56:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_41;
    branch_no_41:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 294;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_58;
    branch_end_41:;
    goto try_end_57;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(exception_preserved_type_17, exception_preserved_value_17, exception_preserved_tb_17);

    // Re-raise.
    exception_type = exception_keeper_type_57;
    exception_value = exception_keeper_value_57;
    exception_tb = exception_keeper_tb_57;
    exception_lineno = exception_keeper_lineno_57;

    goto try_except_handler_5;
    // End of try:
    try_end_57:;
    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(exception_preserved_type_17, exception_preserved_value_17, exception_preserved_tb_17);

    goto try_end_55;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_55:;
    goto branch_end_40;
    branch_no_40:;
    {
        nuitka_bool tmp_condition_result_42;
        PyObject *tmp_cmp_expr_left_42;
        PyObject *tmp_cmp_expr_right_42;
        PyObject *tmp_called_instance_51;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_args_element_value_92;
        tmp_called_instance_51 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_51 == NULL)) {
            tmp_called_instance_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_91 = mod_consts[143];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_92 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 305;
        {
            PyObject *call_args[] = {tmp_args_element_value_91, tmp_args_element_value_92};
            tmp_cmp_expr_left_42 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_51,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_42 = Py_None;
        tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_42, tmp_cmp_expr_right_42);
        Py_DECREF(tmp_cmp_expr_left_42);
        if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_160;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_subscript_value_45;
        PyObject *tmp_called_value_132;
        PyObject *tmp_expression_value_212;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_211 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_212 = var_recieve;
        tmp_called_value_132 = LOOKUP_ATTRIBUTE(tmp_expression_value_212, mod_consts[44]);
        if (tmp_called_value_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 307;
        tmp_subscript_value_45 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_132, mod_consts[144]);

        Py_DECREF(tmp_called_value_132);
        if (tmp_subscript_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_160 = LOOKUP_SUBSCRIPT(tmp_expression_value_211, tmp_subscript_value_45);
        Py_DECREF(tmp_subscript_value_45);
        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_RowIndex;
            var_RowIndex = tmp_assign_source_160;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_called_value_133;
        PyObject *tmp_kw_call_value_0_28;
        PyObject *tmp_kw_call_value_1_12;
        PyObject *tmp_kw_call_value_2_8;
        tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_133 == NULL)) {
            tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_60;
        }
        tmp_kw_call_value_0_28 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_28 == NULL)) {
            tmp_kw_call_value_0_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_60;
        }
        if (var_caching_dataframe == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[131]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 309;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_60;
        }

        tmp_kw_call_value_1_12 = var_caching_dataframe;
        CHECK_OBJECT(var_RowIndex);
        tmp_kw_call_value_2_8 = var_RowIndex;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 309;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_28, tmp_kw_call_value_1_12, tmp_kw_call_value_2_8};

            tmp_assign_source_161 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_133, kw_values, mod_consts[146]);
        }

        if (tmp_assign_source_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_60;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_161;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_instance_52;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_52 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 310;
        tmp_iter_arg_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_52, mod_consts[98]);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_61;
        }
        tmp_assign_source_162 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_61;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_162;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_163 = UNPACK_NEXT(tmp_unpack_7, 0, 2);
        if (tmp_assign_source_163 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 310;
            goto try_except_handler_62;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_163;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_164 = UNPACK_NEXT(tmp_unpack_8, 1, 2);
        if (tmp_assign_source_164 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 310;
            goto try_except_handler_62;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_164;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 310;
                    goto try_except_handler_62;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[108];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 310;
            goto try_except_handler_62;
        }
    }
    goto try_end_58;
    // Exception handler code:
    try_except_handler_62:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_keeper_lineno_58 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_58;
    exception_value = exception_keeper_value_58;
    exception_tb = exception_keeper_tb_58;
    exception_lineno = exception_keeper_lineno_58;

    goto try_except_handler_61;
    // End of try:
    try_end_58:;
    goto try_end_59;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_keeper_lineno_59 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_59;
    exception_value = exception_keeper_value_59;
    exception_tb = exception_keeper_tb_59;
    exception_lineno = exception_keeper_lineno_59;

    goto try_except_handler_60;
    // End of try:
    try_end_59:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_165;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_165 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_caching_dataframe;
            var_caching_dataframe = tmp_assign_source_165;
            Py_INCREF(var_caching_dataframe);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_166;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_166 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_166;
            Py_INCREF(var_message);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_called_value_134;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_kw_call_value_0_29;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 311;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_60;
        }

        tmp_expression_value_213 = var_LogInit;
        tmp_called_value_134 = LOOKUP_ATTRIBUTE(tmp_expression_value_213, mod_consts[35]);
        if (tmp_called_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_60;
        }
        CHECK_OBJECT(var_message);
        tmp_kw_call_value_0_29 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 311;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_29};

            tmp_assign_source_167 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_134, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_134);
        if (tmp_assign_source_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_60;
        }
        {
            PyObject *old = var_message;
            assert(old != NULL);
            var_message = tmp_assign_source_167;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_135;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_call_result_58;
        PyObject *tmp_kw_call_arg_value_0_24;
        PyObject *tmp_kw_call_dict_value_0_24;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 312;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_60;
        }

        tmp_expression_value_214 = var_LogInit;
        tmp_called_value_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_214, mod_consts[15]);
        if (tmp_called_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_60;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_135);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 312;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_60;
        }

        tmp_kw_call_arg_value_0_24 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_24 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 312;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_24};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_24};
            tmp_call_result_58 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_135, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_135);
        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_60;
        }
        Py_DECREF(tmp_call_result_58);
    }
    goto try_end_60;
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_type_60 = exception_type;
    exception_keeper_value_60 = exception_value;
    exception_keeper_tb_60 = exception_tb;
    exception_keeper_lineno_60 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 18.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_18, &exception_preserved_value_18, &exception_preserved_tb_18);

    if (exception_keeper_tb_60 == NULL) {
        exception_keeper_tb_60 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_60);
    } else if (exception_keeper_lineno_60 != 0) {
        exception_keeper_tb_60 = ADD_TRACEBACK(exception_keeper_tb_60, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_60);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_60, &exception_keeper_value_60, &exception_keeper_tb_60);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_60, exception_keeper_tb_60);
    PUBLISH_EXCEPTION(&exception_keeper_type_60, &exception_keeper_value_60, &exception_keeper_tb_60);
    // Tried code:
    {
        bool tmp_condition_result_43;
        PyObject *tmp_cmp_expr_left_43;
        PyObject *tmp_cmp_expr_right_43;
        tmp_cmp_expr_left_43 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_43 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_43, tmp_cmp_expr_right_43);
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
        PyObject *tmp_assign_source_168;
        tmp_assign_source_168 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_168;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_expression_value_216;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_subscript_value_46;
        CHECK_OBJECT(var_e);
        tmp_expression_value_218 = var_e;
        tmp_expression_value_217 = LOOKUP_ATTRIBUTE(tmp_expression_value_218, mod_consts[37]);
        if (tmp_expression_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_64;
        }
        tmp_expression_value_216 = LOOKUP_ATTRIBUTE(tmp_expression_value_217, mod_consts[38]);
        Py_DECREF(tmp_expression_value_217);
        if (tmp_expression_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_64;
        }
        tmp_expression_value_215 = LOOKUP_ATTRIBUTE(tmp_expression_value_216, mod_consts[39]);
        Py_DECREF(tmp_expression_value_216);
        if (tmp_expression_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_64;
        }
        tmp_subscript_value_46 = mod_consts[40];
        tmp_assign_source_169 = LOOKUP_SUBSCRIPT(tmp_expression_value_215, tmp_subscript_value_46);
        Py_DECREF(tmp_expression_value_215);
        if (tmp_assign_source_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_64;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_169;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_expression_value_220;
        CHECK_OBJECT(var_e);
        tmp_expression_value_220 = var_e;
        tmp_expression_value_219 = LOOKUP_ATTRIBUTE(tmp_expression_value_220, mod_consts[37]);
        if (tmp_expression_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_64;
        }
        tmp_assign_source_170 = LOOKUP_ATTRIBUTE(tmp_expression_value_219, mod_consts[41]);
        Py_DECREF(tmp_expression_value_219);
        if (tmp_assign_source_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_64;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_170;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_called_instance_53;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_args_element_value_94;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 316;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_64;
        }

        tmp_called_instance_53 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_93 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_94 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 316;
        {
            PyObject *call_args[] = {tmp_args_element_value_93, tmp_args_element_value_94};
            tmp_assign_source_171 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_53,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_64;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_171;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_136;
        PyObject *tmp_call_result_59;
        PyObject *tmp_args_element_value_95;
        tmp_called_value_136 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_136 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_95 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 317;
        tmp_call_result_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_136, tmp_args_element_value_95);
        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_64;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_value_137;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_call_result_60;
        PyObject *tmp_kw_call_arg_value_0_25;
        PyObject *tmp_kw_call_dict_value_0_25;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 318;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_64;
        }

        tmp_expression_value_221 = var_LogInit;
        tmp_called_value_137 = LOOKUP_ATTRIBUTE(tmp_expression_value_221, mod_consts[15]);
        if (tmp_called_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_64;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_137);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 318;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_64;
        }

        tmp_kw_call_arg_value_0_25 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_25 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 318;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_25};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_25};
            tmp_call_result_60 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_137, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_137);
        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_64;
        }
        Py_DECREF(tmp_call_result_60);
    }
    goto try_end_61;
    // Exception handler code:
    try_except_handler_64:;
    exception_keeper_type_61 = exception_type;
    exception_keeper_value_61 = exception_value;
    exception_keeper_tb_61 = exception_tb;
    exception_keeper_lineno_61 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_61;
    exception_value = exception_keeper_value_61;
    exception_tb = exception_keeper_tb_61;
    exception_lineno = exception_keeper_lineno_61;

    goto try_except_handler_63;
    // End of try:
    try_end_61:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_43;
    branch_no_43:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 308;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_63;
    branch_end_43:;
    goto try_end_62;
    // Exception handler code:
    try_except_handler_63:;
    exception_keeper_type_62 = exception_type;
    exception_keeper_value_62 = exception_value;
    exception_keeper_tb_62 = exception_tb;
    exception_keeper_lineno_62 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 18.
    SET_CURRENT_EXCEPTION(exception_preserved_type_18, exception_preserved_value_18, exception_preserved_tb_18);

    // Re-raise.
    exception_type = exception_keeper_type_62;
    exception_value = exception_keeper_value_62;
    exception_tb = exception_keeper_tb_62;
    exception_lineno = exception_keeper_lineno_62;

    goto try_except_handler_5;
    // End of try:
    try_end_62:;
    // Restore previous exception id 18.
    SET_CURRENT_EXCEPTION(exception_preserved_type_18, exception_preserved_value_18, exception_preserved_tb_18);

    goto try_end_60;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_60:;
    goto branch_end_42;
    branch_no_42:;
    {
        nuitka_bool tmp_condition_result_44;
        PyObject *tmp_cmp_expr_left_44;
        PyObject *tmp_cmp_expr_right_44;
        PyObject *tmp_called_instance_54;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_args_element_value_97;
        tmp_called_instance_54 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_54 == NULL)) {
            tmp_called_instance_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_96 = mod_consts[147];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_97 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = {tmp_args_element_value_96, tmp_args_element_value_97};
            tmp_cmp_expr_left_44 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_54,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_44 = Py_None;
        tmp_condition_result_44 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_44, tmp_cmp_expr_right_44);
        Py_DECREF(tmp_cmp_expr_left_44);
        if (tmp_condition_result_44 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_172;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_subscript_value_47;
        PyObject *tmp_called_value_138;
        PyObject *tmp_expression_value_223;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_222 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_223 = var_recieve;
        tmp_called_value_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_223, mod_consts[44]);
        if (tmp_called_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 320;
        tmp_subscript_value_47 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_138, mod_consts[148]);

        Py_DECREF(tmp_called_value_138);
        if (tmp_subscript_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_172 = LOOKUP_SUBSCRIPT(tmp_expression_value_222, tmp_subscript_value_47);
        Py_DECREF(tmp_subscript_value_47);
        if (tmp_assign_source_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_withIndex;
            var_withIndex = tmp_assign_source_172;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_expression_value_224;
        PyObject *tmp_subscript_value_48;
        PyObject *tmp_called_value_139;
        PyObject *tmp_expression_value_225;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_224 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_225 = var_recieve;
        tmp_called_value_139 = LOOKUP_ATTRIBUTE(tmp_expression_value_225, mod_consts[44]);
        if (tmp_called_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 321;
        tmp_subscript_value_48 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_139, mod_consts[149]);

        Py_DECREF(tmp_called_value_139);
        if (tmp_subscript_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_173 = LOOKUP_SUBSCRIPT(tmp_expression_value_224, tmp_subscript_value_48);
        Py_DECREF(tmp_subscript_value_48);
        if (tmp_assign_source_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_colIndex;
            var_colIndex = tmp_assign_source_173;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_called_value_140;
        PyObject *tmp_expression_value_226;
        PyObject *tmp_expression_value_227;
        PyObject *tmp_subscript_value_49;
        PyObject *tmp_start_value_18;
        PyObject *tmp_left_value_18;
        PyObject *tmp_right_value_18;
        PyObject *tmp_stop_value_21;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_227 = var_recieve;
        CHECK_OBJECT(var_colIndex);
        tmp_left_value_18 = var_colIndex;
        tmp_right_value_18 = mod_consts[50];
        tmp_start_value_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_18, tmp_right_value_18);
        if (tmp_start_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_withIndex);
        tmp_stop_value_21 = var_withIndex;
        tmp_subscript_value_49 = MAKE_SLICEOBJ2(tmp_start_value_18, tmp_stop_value_21);
        Py_DECREF(tmp_start_value_18);
        assert(!(tmp_subscript_value_49 == NULL));
        tmp_expression_value_226 = LOOKUP_SUBSCRIPT(tmp_expression_value_227, tmp_subscript_value_49);
        Py_DECREF(tmp_subscript_value_49);
        if (tmp_expression_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_140 = LOOKUP_ATTRIBUTE(tmp_expression_value_226, mod_consts[51]);
        Py_DECREF(tmp_expression_value_226);
        if (tmp_called_value_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 322;
        tmp_assign_source_174 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_140, mod_consts[52]);

        Py_DECREF(tmp_called_value_140);
        if (tmp_assign_source_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_colName;
            var_colName = tmp_assign_source_174;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_called_value_141;
        PyObject *tmp_expression_value_228;
        PyObject *tmp_expression_value_229;
        PyObject *tmp_subscript_value_50;
        PyObject *tmp_start_value_19;
        PyObject *tmp_stop_value_22;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_229 = var_recieve;
        CHECK_OBJECT(var_withIndex);
        tmp_start_value_19 = var_withIndex;
        tmp_stop_value_22 = Py_None;
        tmp_subscript_value_50 = MAKE_SLICEOBJ2(tmp_start_value_19, tmp_stop_value_22);
        assert(!(tmp_subscript_value_50 == NULL));
        tmp_expression_value_228 = LOOKUP_SUBSCRIPT(tmp_expression_value_229, tmp_subscript_value_50);
        Py_DECREF(tmp_subscript_value_50);
        if (tmp_expression_value_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_141 = LOOKUP_ATTRIBUTE(tmp_expression_value_228, mod_consts[51]);
        Py_DECREF(tmp_expression_value_228);
        if (tmp_called_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 323;
        tmp_assign_source_175 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_141, mod_consts[52]);

        Py_DECREF(tmp_called_value_141);
        if (tmp_assign_source_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_data;
            var_data = tmp_assign_source_175;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_value_142;
        PyObject *tmp_kw_call_value_0_30;
        PyObject *tmp_kw_call_value_1_13;
        PyObject *tmp_kw_call_value_2_9;
        PyObject *tmp_kw_call_value_3_3;
        tmp_called_value_142 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_142 == NULL)) {
            tmp_called_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_65;
        }
        tmp_kw_call_value_0_30 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_kw_call_value_0_30 == NULL)) {
            tmp_kw_call_value_0_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_kw_call_value_0_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_65;
        }
        tmp_kw_call_value_1_13 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_kw_call_value_1_13 == NULL)) {
            tmp_kw_call_value_1_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_kw_call_value_1_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_65;
        }
        CHECK_OBJECT(var_colName);
        tmp_kw_call_value_2_9 = var_colName;
        CHECK_OBJECT(var_data);
        tmp_kw_call_value_3_3 = var_data;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 325;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_30, tmp_kw_call_value_1_13, tmp_kw_call_value_2_9, tmp_kw_call_value_3_3};

            tmp_assign_source_176 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_142, kw_values, mod_consts[151]);
        }

        if (tmp_assign_source_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_65;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_176;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_instance_55;
        CHECK_OBJECT(var_boot);
        tmp_called_instance_55 = var_boot;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 326;
        tmp_iter_arg_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_55, mod_consts[152]);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_66;
        }
        tmp_assign_source_177 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_66;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_177;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_178 = UNPACK_NEXT(tmp_unpack_9, 0, 2);
        if (tmp_assign_source_178 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 326;
            goto try_except_handler_67;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_178;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_179 = UNPACK_NEXT(tmp_unpack_10, 1, 2);
        if (tmp_assign_source_179 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 326;
            goto try_except_handler_67;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_2;
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_179;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_5); assert(HAS_ITERNEXT(tmp_iterator_name_5));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_5)->tp_iternext)(tmp_iterator_name_5);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 326;
                    goto try_except_handler_67;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[108];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 326;
            goto try_except_handler_67;
        }
    }
    goto try_end_63;
    // Exception handler code:
    try_except_handler_67:;
    exception_keeper_type_63 = exception_type;
    exception_keeper_value_63 = exception_value;
    exception_keeper_tb_63 = exception_tb;
    exception_keeper_lineno_63 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_63;
    exception_value = exception_keeper_value_63;
    exception_tb = exception_keeper_tb_63;
    exception_lineno = exception_keeper_lineno_63;

    goto try_except_handler_66;
    // End of try:
    try_end_63:;
    goto try_end_64;
    // Exception handler code:
    try_except_handler_66:;
    exception_keeper_type_64 = exception_type;
    exception_keeper_value_64 = exception_value;
    exception_keeper_tb_64 = exception_tb;
    exception_keeper_lineno_64 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_64;
    exception_value = exception_keeper_value_64;
    exception_tb = exception_keeper_tb_64;
    exception_lineno = exception_keeper_lineno_64;

    goto try_except_handler_65;
    // End of try:
    try_end_64:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_180;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_180 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_caching_dataframe;
            var_caching_dataframe = tmp_assign_source_180;
            Py_INCREF(var_caching_dataframe);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_181;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_181 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_181;
            Py_INCREF(var_message);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_called_value_143;
        PyObject *tmp_expression_value_230;
        PyObject *tmp_kw_call_value_0_31;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_65;
        }

        tmp_expression_value_230 = var_LogInit;
        tmp_called_value_143 = LOOKUP_ATTRIBUTE(tmp_expression_value_230, mod_consts[35]);
        if (tmp_called_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_65;
        }
        CHECK_OBJECT(var_message);
        tmp_kw_call_value_0_31 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 327;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_31};

            tmp_assign_source_182 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_143, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_143);
        if (tmp_assign_source_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_65;
        }
        {
            PyObject *old = var_message;
            assert(old != NULL);
            var_message = tmp_assign_source_182;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_144;
        PyObject *tmp_expression_value_231;
        PyObject *tmp_call_result_61;
        PyObject *tmp_kw_call_arg_value_0_26;
        PyObject *tmp_kw_call_dict_value_0_26;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 328;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_65;
        }

        tmp_expression_value_231 = var_LogInit;
        tmp_called_value_144 = LOOKUP_ATTRIBUTE(tmp_expression_value_231, mod_consts[15]);
        if (tmp_called_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_65;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_144);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 328;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_65;
        }

        tmp_kw_call_arg_value_0_26 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_26 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 328;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_26};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_26};
            tmp_call_result_61 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_144, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_144);
        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_65;
        }
        Py_DECREF(tmp_call_result_61);
    }
    goto try_end_65;
    // Exception handler code:
    try_except_handler_65:;
    exception_keeper_type_65 = exception_type;
    exception_keeper_value_65 = exception_value;
    exception_keeper_tb_65 = exception_tb;
    exception_keeper_lineno_65 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 19.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_19, &exception_preserved_value_19, &exception_preserved_tb_19);

    if (exception_keeper_tb_65 == NULL) {
        exception_keeper_tb_65 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_65);
    } else if (exception_keeper_lineno_65 != 0) {
        exception_keeper_tb_65 = ADD_TRACEBACK(exception_keeper_tb_65, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_65);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_65, &exception_keeper_value_65, &exception_keeper_tb_65);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_65, exception_keeper_tb_65);
    PUBLISH_EXCEPTION(&exception_keeper_type_65, &exception_keeper_value_65, &exception_keeper_tb_65);
    // Tried code:
    {
        bool tmp_condition_result_45;
        PyObject *tmp_cmp_expr_left_45;
        PyObject *tmp_cmp_expr_right_45;
        tmp_cmp_expr_left_45 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_45 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_45, tmp_cmp_expr_right_45);
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
        PyObject *tmp_assign_source_183;
        tmp_assign_source_183 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_183;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_expression_value_232;
        PyObject *tmp_expression_value_233;
        PyObject *tmp_expression_value_234;
        PyObject *tmp_expression_value_235;
        PyObject *tmp_subscript_value_51;
        CHECK_OBJECT(var_e);
        tmp_expression_value_235 = var_e;
        tmp_expression_value_234 = LOOKUP_ATTRIBUTE(tmp_expression_value_235, mod_consts[37]);
        if (tmp_expression_value_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_69;
        }
        tmp_expression_value_233 = LOOKUP_ATTRIBUTE(tmp_expression_value_234, mod_consts[38]);
        Py_DECREF(tmp_expression_value_234);
        if (tmp_expression_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_69;
        }
        tmp_expression_value_232 = LOOKUP_ATTRIBUTE(tmp_expression_value_233, mod_consts[39]);
        Py_DECREF(tmp_expression_value_233);
        if (tmp_expression_value_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_69;
        }
        tmp_subscript_value_51 = mod_consts[40];
        tmp_assign_source_184 = LOOKUP_SUBSCRIPT(tmp_expression_value_232, tmp_subscript_value_51);
        Py_DECREF(tmp_expression_value_232);
        if (tmp_assign_source_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_69;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_184;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_expression_value_236;
        PyObject *tmp_expression_value_237;
        CHECK_OBJECT(var_e);
        tmp_expression_value_237 = var_e;
        tmp_expression_value_236 = LOOKUP_ATTRIBUTE(tmp_expression_value_237, mod_consts[37]);
        if (tmp_expression_value_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_69;
        }
        tmp_assign_source_185 = LOOKUP_ATTRIBUTE(tmp_expression_value_236, mod_consts[41]);
        Py_DECREF(tmp_expression_value_236);
        if (tmp_assign_source_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_69;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_185;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_called_instance_56;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_args_element_value_99;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 332;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_69;
        }

        tmp_called_instance_56 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_98 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_99 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 332;
        {
            PyObject *call_args[] = {tmp_args_element_value_98, tmp_args_element_value_99};
            tmp_assign_source_186 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_56,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_69;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_186;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_145;
        PyObject *tmp_call_result_62;
        PyObject *tmp_args_element_value_100;
        tmp_called_value_145 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_145 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_100 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 333;
        tmp_call_result_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_145, tmp_args_element_value_100);
        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_69;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_value_146;
        PyObject *tmp_expression_value_238;
        PyObject *tmp_call_result_63;
        PyObject *tmp_kw_call_arg_value_0_27;
        PyObject *tmp_kw_call_dict_value_0_27;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 334;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_69;
        }

        tmp_expression_value_238 = var_LogInit;
        tmp_called_value_146 = LOOKUP_ATTRIBUTE(tmp_expression_value_238, mod_consts[15]);
        if (tmp_called_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_69;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_146);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 334;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_69;
        }

        tmp_kw_call_arg_value_0_27 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_27 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 334;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_27};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_27};
            tmp_call_result_63 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_146, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_146);
        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_69;
        }
        Py_DECREF(tmp_call_result_63);
    }
    goto try_end_66;
    // Exception handler code:
    try_except_handler_69:;
    exception_keeper_type_66 = exception_type;
    exception_keeper_value_66 = exception_value;
    exception_keeper_tb_66 = exception_tb;
    exception_keeper_lineno_66 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_66;
    exception_value = exception_keeper_value_66;
    exception_tb = exception_keeper_tb_66;
    exception_lineno = exception_keeper_lineno_66;

    goto try_except_handler_68;
    // End of try:
    try_end_66:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_45;
    branch_no_45:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 324;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_68;
    branch_end_45:;
    goto try_end_67;
    // Exception handler code:
    try_except_handler_68:;
    exception_keeper_type_67 = exception_type;
    exception_keeper_value_67 = exception_value;
    exception_keeper_tb_67 = exception_tb;
    exception_keeper_lineno_67 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 19.
    SET_CURRENT_EXCEPTION(exception_preserved_type_19, exception_preserved_value_19, exception_preserved_tb_19);

    // Re-raise.
    exception_type = exception_keeper_type_67;
    exception_value = exception_keeper_value_67;
    exception_tb = exception_keeper_tb_67;
    exception_lineno = exception_keeper_lineno_67;

    goto try_except_handler_5;
    // End of try:
    try_end_67:;
    // Restore previous exception id 19.
    SET_CURRENT_EXCEPTION(exception_preserved_type_19, exception_preserved_value_19, exception_preserved_tb_19);

    goto try_end_65;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_65:;
    goto branch_end_44;
    branch_no_44:;
    {
        nuitka_bool tmp_condition_result_46;
        PyObject *tmp_cmp_expr_left_46;
        PyObject *tmp_cmp_expr_right_46;
        PyObject *tmp_called_instance_57;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_args_element_value_102;
        tmp_called_instance_57 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_57 == NULL)) {
            tmp_called_instance_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_101 = mod_consts[153];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_102 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 335;
        {
            PyObject *call_args[] = {tmp_args_element_value_101, tmp_args_element_value_102};
            tmp_cmp_expr_left_46 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_57,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_46 = Py_None;
        tmp_condition_result_46 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_46, tmp_cmp_expr_right_46);
        Py_DECREF(tmp_cmp_expr_left_46);
        if (tmp_condition_result_46 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_187;
        PyObject *tmp_called_value_147;
        PyObject *tmp_expression_value_239;
        PyObject *tmp_expression_value_240;
        PyObject *tmp_subscript_value_52;
        PyObject *tmp_start_value_20;
        PyObject *tmp_left_value_19;
        PyObject *tmp_called_value_148;
        PyObject *tmp_expression_value_241;
        PyObject *tmp_right_value_19;
        PyObject *tmp_stop_value_23;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_240 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_241 = var_recieve;
        tmp_called_value_148 = LOOKUP_ATTRIBUTE(tmp_expression_value_241, mod_consts[44]);
        if (tmp_called_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 336;
        tmp_left_value_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_148, mod_consts[12]);

        Py_DECREF(tmp_called_value_148);
        if (tmp_left_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_19 = mod_consts[50];
        tmp_start_value_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_19, tmp_right_value_19);
        Py_DECREF(tmp_left_value_19);
        if (tmp_start_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_stop_value_23 = Py_None;
        tmp_subscript_value_52 = MAKE_SLICEOBJ2(tmp_start_value_20, tmp_stop_value_23);
        Py_DECREF(tmp_start_value_20);
        assert(!(tmp_subscript_value_52 == NULL));
        tmp_expression_value_239 = LOOKUP_SUBSCRIPT(tmp_expression_value_240, tmp_subscript_value_52);
        Py_DECREF(tmp_subscript_value_52);
        if (tmp_expression_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_147 = LOOKUP_ATTRIBUTE(tmp_expression_value_239, mod_consts[51]);
        Py_DECREF(tmp_expression_value_239);
        if (tmp_called_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 336;
        tmp_assign_source_187 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_147, mod_consts[52]);

        Py_DECREF(tmp_called_value_147);
        if (tmp_assign_source_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_targetUser;
            var_targetUser = tmp_assign_source_187;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_called_value_149;
        PyObject *tmp_kw_call_value_0_32;
        PyObject *tmp_expression_value_242;
        PyObject *tmp_subscript_value_53;
        tmp_called_value_149 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_called_value_149 == NULL)) {
            tmp_called_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_called_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_70;
        }
        if (var_UserInfo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 338;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_70;
        }

        tmp_expression_value_242 = var_UserInfo;
        tmp_subscript_value_53 = mod_consts[32];
        tmp_kw_call_value_0_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_242, tmp_subscript_value_53);
        if (tmp_kw_call_value_0_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_70;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 338;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_32};

            tmp_assign_source_188 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_149, kw_values, mod_consts[155]);
        }

        Py_DECREF(tmp_kw_call_value_0_32);
        if (tmp_assign_source_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_70;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_188;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_called_value_150;
        PyObject *tmp_expression_value_243;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_called_value_151;
        PyObject *tmp_expression_value_244;
        PyObject *tmp_kw_call_value_0_33;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 339;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_70;
        }

        tmp_expression_value_243 = var_LogInit;
        tmp_called_value_150 = LOOKUP_ATTRIBUTE(tmp_expression_value_243, mod_consts[35]);
        if (tmp_called_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_70;
        }
        CHECK_OBJECT(var_boot);
        tmp_expression_value_244 = var_boot;
        tmp_called_value_151 = LOOKUP_ATTRIBUTE(tmp_expression_value_244, mod_consts[154]);
        if (tmp_called_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);

            exception_lineno = 339;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_70;
        }
        CHECK_OBJECT(var_targetUser);
        tmp_kw_call_value_0_33 = var_targetUser;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 339;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_33};

            tmp_args_element_value_103 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_151, kw_values, mod_consts[156]);
        }

        Py_DECREF(tmp_called_value_151);
        if (tmp_args_element_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_150);

            exception_lineno = 339;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_70;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 339;
        tmp_assign_source_189 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_150, tmp_args_element_value_103);
        Py_DECREF(tmp_called_value_150);
        Py_DECREF(tmp_args_element_value_103);
        if (tmp_assign_source_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_70;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_189;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_152;
        PyObject *tmp_expression_value_245;
        PyObject *tmp_call_result_64;
        PyObject *tmp_kw_call_arg_value_0_28;
        PyObject *tmp_kw_call_dict_value_0_28;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 340;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_70;
        }

        tmp_expression_value_245 = var_LogInit;
        tmp_called_value_152 = LOOKUP_ATTRIBUTE(tmp_expression_value_245, mod_consts[15]);
        if (tmp_called_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_70;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_152);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 340;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_70;
        }

        tmp_kw_call_arg_value_0_28 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_28 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 340;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_28};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_28};
            tmp_call_result_64 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_152, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_152);
        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_70;
        }
        Py_DECREF(tmp_call_result_64);
    }
    goto try_end_68;
    // Exception handler code:
    try_except_handler_70:;
    exception_keeper_type_68 = exception_type;
    exception_keeper_value_68 = exception_value;
    exception_keeper_tb_68 = exception_tb;
    exception_keeper_lineno_68 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 20.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_20, &exception_preserved_value_20, &exception_preserved_tb_20);

    if (exception_keeper_tb_68 == NULL) {
        exception_keeper_tb_68 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_68);
    } else if (exception_keeper_lineno_68 != 0) {
        exception_keeper_tb_68 = ADD_TRACEBACK(exception_keeper_tb_68, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_68);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_68, &exception_keeper_value_68, &exception_keeper_tb_68);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_68, exception_keeper_tb_68);
    PUBLISH_EXCEPTION(&exception_keeper_type_68, &exception_keeper_value_68, &exception_keeper_tb_68);
    // Tried code:
    {
        bool tmp_condition_result_47;
        PyObject *tmp_cmp_expr_left_47;
        PyObject *tmp_cmp_expr_right_47;
        tmp_cmp_expr_left_47 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_47 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_47, tmp_cmp_expr_right_47);
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
        PyObject *tmp_assign_source_190;
        tmp_assign_source_190 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_190;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_191;
        PyObject *tmp_expression_value_246;
        PyObject *tmp_expression_value_247;
        PyObject *tmp_expression_value_248;
        PyObject *tmp_expression_value_249;
        PyObject *tmp_subscript_value_54;
        CHECK_OBJECT(var_e);
        tmp_expression_value_249 = var_e;
        tmp_expression_value_248 = LOOKUP_ATTRIBUTE(tmp_expression_value_249, mod_consts[37]);
        if (tmp_expression_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_72;
        }
        tmp_expression_value_247 = LOOKUP_ATTRIBUTE(tmp_expression_value_248, mod_consts[38]);
        Py_DECREF(tmp_expression_value_248);
        if (tmp_expression_value_247 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_72;
        }
        tmp_expression_value_246 = LOOKUP_ATTRIBUTE(tmp_expression_value_247, mod_consts[39]);
        Py_DECREF(tmp_expression_value_247);
        if (tmp_expression_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_72;
        }
        tmp_subscript_value_54 = mod_consts[40];
        tmp_assign_source_191 = LOOKUP_SUBSCRIPT(tmp_expression_value_246, tmp_subscript_value_54);
        Py_DECREF(tmp_expression_value_246);
        if (tmp_assign_source_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_72;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_191;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_expression_value_250;
        PyObject *tmp_expression_value_251;
        CHECK_OBJECT(var_e);
        tmp_expression_value_251 = var_e;
        tmp_expression_value_250 = LOOKUP_ATTRIBUTE(tmp_expression_value_251, mod_consts[37]);
        if (tmp_expression_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_72;
        }
        tmp_assign_source_192 = LOOKUP_ATTRIBUTE(tmp_expression_value_250, mod_consts[41]);
        Py_DECREF(tmp_expression_value_250);
        if (tmp_assign_source_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_72;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_192;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_called_instance_58;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_args_element_value_105;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_72;
        }

        tmp_called_instance_58 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_104 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_105 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 344;
        {
            PyObject *call_args[] = {tmp_args_element_value_104, tmp_args_element_value_105};
            tmp_assign_source_193 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_58,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_72;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_193;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_153;
        PyObject *tmp_call_result_65;
        PyObject *tmp_args_element_value_106;
        tmp_called_value_153 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_153 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_106 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 345;
        tmp_call_result_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_153, tmp_args_element_value_106);
        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_72;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_value_154;
        PyObject *tmp_expression_value_252;
        PyObject *tmp_call_result_66;
        PyObject *tmp_kw_call_arg_value_0_29;
        PyObject *tmp_kw_call_dict_value_0_29;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_72;
        }

        tmp_expression_value_252 = var_LogInit;
        tmp_called_value_154 = LOOKUP_ATTRIBUTE(tmp_expression_value_252, mod_consts[15]);
        if (tmp_called_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_72;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_154);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_72;
        }

        tmp_kw_call_arg_value_0_29 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_29 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 346;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_29};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_29};
            tmp_call_result_66 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_154, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_154);
        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_72;
        }
        Py_DECREF(tmp_call_result_66);
    }
    goto try_end_69;
    // Exception handler code:
    try_except_handler_72:;
    exception_keeper_type_69 = exception_type;
    exception_keeper_value_69 = exception_value;
    exception_keeper_tb_69 = exception_tb;
    exception_keeper_lineno_69 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_69;
    exception_value = exception_keeper_value_69;
    exception_tb = exception_keeper_tb_69;
    exception_lineno = exception_keeper_lineno_69;

    goto try_except_handler_71;
    // End of try:
    try_end_69:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_47;
    branch_no_47:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 337;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_71;
    branch_end_47:;
    goto try_end_70;
    // Exception handler code:
    try_except_handler_71:;
    exception_keeper_type_70 = exception_type;
    exception_keeper_value_70 = exception_value;
    exception_keeper_tb_70 = exception_tb;
    exception_keeper_lineno_70 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 20.
    SET_CURRENT_EXCEPTION(exception_preserved_type_20, exception_preserved_value_20, exception_preserved_tb_20);

    // Re-raise.
    exception_type = exception_keeper_type_70;
    exception_value = exception_keeper_value_70;
    exception_tb = exception_keeper_tb_70;
    exception_lineno = exception_keeper_lineno_70;

    goto try_except_handler_5;
    // End of try:
    try_end_70:;
    // Restore previous exception id 20.
    SET_CURRENT_EXCEPTION(exception_preserved_type_20, exception_preserved_value_20, exception_preserved_tb_20);

    goto try_end_68;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_68:;
    goto branch_end_46;
    branch_no_46:;
    {
        nuitka_bool tmp_condition_result_48;
        PyObject *tmp_cmp_expr_left_48;
        PyObject *tmp_cmp_expr_right_48;
        PyObject *tmp_called_instance_59;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_args_element_value_108;
        tmp_called_instance_59 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_59 == NULL)) {
            tmp_called_instance_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_107 = mod_consts[157];
        CHECK_OBJECT(var_recieve);
        tmp_args_element_value_108 = var_recieve;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 347;
        {
            PyObject *call_args[] = {tmp_args_element_value_107, tmp_args_element_value_108};
            tmp_cmp_expr_left_48 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_59,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_cmp_expr_left_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_48 = Py_None;
        tmp_condition_result_48 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_48, tmp_cmp_expr_right_48);
        Py_DECREF(tmp_cmp_expr_left_48);
        if (tmp_condition_result_48 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
        assert(tmp_condition_result_48 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_48:;
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_called_value_155;
        PyObject *tmp_expression_value_253;
        PyObject *tmp_expression_value_254;
        PyObject *tmp_subscript_value_55;
        PyObject *tmp_start_value_21;
        PyObject *tmp_left_value_20;
        PyObject *tmp_called_value_156;
        PyObject *tmp_expression_value_255;
        PyObject *tmp_right_value_20;
        PyObject *tmp_stop_value_24;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_254 = var_recieve;
        CHECK_OBJECT(var_recieve);
        tmp_expression_value_255 = var_recieve;
        tmp_called_value_156 = LOOKUP_ATTRIBUTE(tmp_expression_value_255, mod_consts[44]);
        if (tmp_called_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 348;
        tmp_left_value_20 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_156, mod_consts[12]);

        Py_DECREF(tmp_called_value_156);
        if (tmp_left_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_20 = mod_consts[50];
        tmp_start_value_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_20, tmp_right_value_20);
        Py_DECREF(tmp_left_value_20);
        if (tmp_start_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_stop_value_24 = Py_None;
        tmp_subscript_value_55 = MAKE_SLICEOBJ2(tmp_start_value_21, tmp_stop_value_24);
        Py_DECREF(tmp_start_value_21);
        assert(!(tmp_subscript_value_55 == NULL));
        tmp_expression_value_253 = LOOKUP_SUBSCRIPT(tmp_expression_value_254, tmp_subscript_value_55);
        Py_DECREF(tmp_subscript_value_55);
        if (tmp_expression_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_155 = LOOKUP_ATTRIBUTE(tmp_expression_value_253, mod_consts[51]);
        Py_DECREF(tmp_expression_value_253);
        if (tmp_called_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 348;
        tmp_assign_source_194 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_155, mod_consts[52]);

        Py_DECREF(tmp_called_value_155);
        if (tmp_assign_source_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_targetUser;
            var_targetUser = tmp_assign_source_194;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_195;
        PyObject *tmp_called_value_157;
        PyObject *tmp_kw_call_value_0_34;
        PyObject *tmp_expression_value_256;
        PyObject *tmp_subscript_value_56;
        PyObject *tmp_kw_call_value_1_14;
        PyObject *tmp_called_value_158;
        PyObject *tmp_expression_value_257;
        PyObject *tmp_called_instance_60;
        PyObject *tmp_called_instance_61;
        tmp_called_value_157 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_called_value_157 == NULL)) {
            tmp_called_value_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_called_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }
        if (var_UserInfo == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 350;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }

        tmp_expression_value_256 = var_UserInfo;
        tmp_subscript_value_56 = mod_consts[32];
        tmp_kw_call_value_0_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_256, tmp_subscript_value_56);
        if (tmp_kw_call_value_0_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }
        tmp_called_instance_61 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_instance_61 == NULL)) {
            tmp_called_instance_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_instance_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_34);

            exception_lineno = 350;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 350;
        tmp_called_instance_60 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_61,
            mod_consts[75],
            PyTuple_GET_ITEM(mod_consts[76], 0)
        );

        if (tmp_called_instance_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_34);

            exception_lineno = 350;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 350;
        tmp_expression_value_257 = CALL_METHOD_NO_ARGS(tmp_called_instance_60, mod_consts[77]);
        Py_DECREF(tmp_called_instance_60);
        if (tmp_expression_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_34);

            exception_lineno = 350;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }
        tmp_called_value_158 = LOOKUP_ATTRIBUTE(tmp_expression_value_257, mod_consts[51]);
        Py_DECREF(tmp_expression_value_257);
        if (tmp_called_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_34);

            exception_lineno = 350;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 350;
        tmp_kw_call_value_1_14 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_158, mod_consts[78]);

        Py_DECREF(tmp_called_value_158);
        if (tmp_kw_call_value_1_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_34);

            exception_lineno = 350;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 350;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_34, tmp_kw_call_value_1_14};

            tmp_assign_source_195 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_157, kw_values, mod_consts[159]);
        }

        Py_DECREF(tmp_kw_call_value_0_34);
        Py_DECREF(tmp_kw_call_value_1_14);
        if (tmp_assign_source_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }
        {
            PyObject *old = var_boot;
            var_boot = tmp_assign_source_195;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_called_value_159;
        PyObject *tmp_expression_value_258;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_called_value_160;
        PyObject *tmp_expression_value_259;
        PyObject *tmp_kw_call_value_0_35;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 351;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }

        tmp_expression_value_258 = var_LogInit;
        tmp_called_value_159 = LOOKUP_ATTRIBUTE(tmp_expression_value_258, mod_consts[35]);
        if (tmp_called_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }
        CHECK_OBJECT(var_boot);
        tmp_expression_value_259 = var_boot;
        tmp_called_value_160 = LOOKUP_ATTRIBUTE(tmp_expression_value_259, mod_consts[158]);
        if (tmp_called_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_159);

            exception_lineno = 351;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }
        CHECK_OBJECT(var_targetUser);
        tmp_kw_call_value_0_35 = var_targetUser;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 351;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_35};

            tmp_args_element_value_109 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_160, kw_values, mod_consts[156]);
        }

        Py_DECREF(tmp_called_value_160);
        if (tmp_args_element_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_159);

            exception_lineno = 351;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 351;
        tmp_assign_source_196 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_159, tmp_args_element_value_109);
        Py_DECREF(tmp_called_value_159);
        Py_DECREF(tmp_args_element_value_109);
        if (tmp_assign_source_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_196;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_161;
        PyObject *tmp_expression_value_260;
        PyObject *tmp_call_result_67;
        PyObject *tmp_kw_call_arg_value_0_30;
        PyObject *tmp_kw_call_dict_value_0_30;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 352;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }

        tmp_expression_value_260 = var_LogInit;
        tmp_called_value_161 = LOOKUP_ATTRIBUTE(tmp_expression_value_260, mod_consts[15]);
        if (tmp_called_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_161);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 352;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }

        tmp_kw_call_arg_value_0_30 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_30 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 352;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_30};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_30};
            tmp_call_result_67 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_161, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_161);
        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_73;
        }
        Py_DECREF(tmp_call_result_67);
    }
    goto try_end_71;
    // Exception handler code:
    try_except_handler_73:;
    exception_keeper_type_71 = exception_type;
    exception_keeper_value_71 = exception_value;
    exception_keeper_tb_71 = exception_tb;
    exception_keeper_lineno_71 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 21.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_21, &exception_preserved_value_21, &exception_preserved_tb_21);

    if (exception_keeper_tb_71 == NULL) {
        exception_keeper_tb_71 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_71);
    } else if (exception_keeper_lineno_71 != 0) {
        exception_keeper_tb_71 = ADD_TRACEBACK(exception_keeper_tb_71, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_71);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_71, &exception_keeper_value_71, &exception_keeper_tb_71);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_71, exception_keeper_tb_71);
    PUBLISH_EXCEPTION(&exception_keeper_type_71, &exception_keeper_value_71, &exception_keeper_tb_71);
    // Tried code:
    {
        bool tmp_condition_result_49;
        PyObject *tmp_cmp_expr_left_49;
        PyObject *tmp_cmp_expr_right_49;
        tmp_cmp_expr_left_49 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_49 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_49, tmp_cmp_expr_right_49);
        assert(!(tmp_res == -1));
        tmp_condition_result_49 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_49 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    {
        PyObject *tmp_assign_source_197;
        tmp_assign_source_197 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_197;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_expression_value_261;
        PyObject *tmp_expression_value_262;
        PyObject *tmp_expression_value_263;
        PyObject *tmp_expression_value_264;
        PyObject *tmp_subscript_value_57;
        CHECK_OBJECT(var_e);
        tmp_expression_value_264 = var_e;
        tmp_expression_value_263 = LOOKUP_ATTRIBUTE(tmp_expression_value_264, mod_consts[37]);
        if (tmp_expression_value_263 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_75;
        }
        tmp_expression_value_262 = LOOKUP_ATTRIBUTE(tmp_expression_value_263, mod_consts[38]);
        Py_DECREF(tmp_expression_value_263);
        if (tmp_expression_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_75;
        }
        tmp_expression_value_261 = LOOKUP_ATTRIBUTE(tmp_expression_value_262, mod_consts[39]);
        Py_DECREF(tmp_expression_value_262);
        if (tmp_expression_value_261 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_75;
        }
        tmp_subscript_value_57 = mod_consts[40];
        tmp_assign_source_198 = LOOKUP_SUBSCRIPT(tmp_expression_value_261, tmp_subscript_value_57);
        Py_DECREF(tmp_expression_value_261);
        if (tmp_assign_source_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_75;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_198;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_199;
        PyObject *tmp_expression_value_265;
        PyObject *tmp_expression_value_266;
        CHECK_OBJECT(var_e);
        tmp_expression_value_266 = var_e;
        tmp_expression_value_265 = LOOKUP_ATTRIBUTE(tmp_expression_value_266, mod_consts[37]);
        if (tmp_expression_value_265 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_75;
        }
        tmp_assign_source_199 = LOOKUP_ATTRIBUTE(tmp_expression_value_265, mod_consts[41]);
        Py_DECREF(tmp_expression_value_265);
        if (tmp_assign_source_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_75;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_199;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_called_instance_62;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_args_element_value_111;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 356;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_75;
        }

        tmp_called_instance_62 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_110 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_111 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 356;
        {
            PyObject *call_args[] = {tmp_args_element_value_110, tmp_args_element_value_111};
            tmp_assign_source_200 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_62,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_75;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_200;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_162;
        PyObject *tmp_call_result_68;
        PyObject *tmp_args_element_value_112;
        tmp_called_value_162 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_162 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_112 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 357;
        tmp_call_result_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_162, tmp_args_element_value_112);
        if (tmp_call_result_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_75;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_called_value_163;
        PyObject *tmp_expression_value_267;
        PyObject *tmp_call_result_69;
        PyObject *tmp_kw_call_arg_value_0_31;
        PyObject *tmp_kw_call_dict_value_0_31;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 358;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_75;
        }

        tmp_expression_value_267 = var_LogInit;
        tmp_called_value_163 = LOOKUP_ATTRIBUTE(tmp_expression_value_267, mod_consts[15]);
        if (tmp_called_value_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_75;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_163);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 358;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_75;
        }

        tmp_kw_call_arg_value_0_31 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_31 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 358;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_31};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_31};
            tmp_call_result_69 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_163, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_163);
        if (tmp_call_result_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_75;
        }
        Py_DECREF(tmp_call_result_69);
    }
    goto try_end_72;
    // Exception handler code:
    try_except_handler_75:;
    exception_keeper_type_72 = exception_type;
    exception_keeper_value_72 = exception_value;
    exception_keeper_tb_72 = exception_tb;
    exception_keeper_lineno_72 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_72;
    exception_value = exception_keeper_value_72;
    exception_tb = exception_keeper_tb_72;
    exception_lineno = exception_keeper_lineno_72;

    goto try_except_handler_74;
    // End of try:
    try_end_72:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_49;
    branch_no_49:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 349;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_74;
    branch_end_49:;
    goto try_end_73;
    // Exception handler code:
    try_except_handler_74:;
    exception_keeper_type_73 = exception_type;
    exception_keeper_value_73 = exception_value;
    exception_keeper_tb_73 = exception_tb;
    exception_keeper_lineno_73 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 21.
    SET_CURRENT_EXCEPTION(exception_preserved_type_21, exception_preserved_value_21, exception_preserved_tb_21);

    // Re-raise.
    exception_type = exception_keeper_type_73;
    exception_value = exception_keeper_value_73;
    exception_tb = exception_keeper_tb_73;
    exception_lineno = exception_keeper_lineno_73;

    goto try_except_handler_5;
    // End of try:
    try_end_73:;
    // Restore previous exception id 21.
    SET_CURRENT_EXCEPTION(exception_preserved_type_21, exception_preserved_value_21, exception_preserved_tb_21);

    goto try_end_71;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_71:;
    goto branch_end_48;
    branch_no_48:;
    {
        PyObject *tmp_called_value_164;
        PyObject *tmp_call_result_70;
        tmp_called_value_164 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_164 != NULL);
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 360;
        tmp_call_result_70 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_164, mod_consts[160]);

        if (tmp_call_result_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_70);
    }
    branch_end_48:;
    branch_end_46:;
    branch_end_44:;
    branch_end_42:;
    branch_end_40:;
    branch_end_38:;
    branch_end_36:;
    branch_end_35:;
    branch_end_32:;
    branch_end_30:;
    branch_end_26:;
    branch_end_24:;
    branch_end_22:;
    branch_end_20:;
    branch_end_18:;
    branch_end_15:;
    branch_end_13:;
    branch_end_11:;
    branch_end_9:;
    branch_end_8:;
    branch_end_6:;
    branch_end_4:;
    branch_end_3:;
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_called_instance_63;
        tmp_called_instance_63 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_instance_63 == NULL)) {
            tmp_called_instance_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_instance_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 361;
        tmp_assign_source_201 = CALL_METHOD_NO_ARGS(tmp_called_instance_63, mod_consts[23]);
        if (tmp_assign_source_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_end_time;
            var_end_time = tmp_assign_source_201;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_165;
        PyObject *tmp_call_result_71;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_5;
        tmp_called_value_165 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_165 != NULL);
        tmp_tuple_element_5 = mod_consts[161];
        tmp_string_concat_values_5 = PyTuple_New(3);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_called_value_166;
            PyObject *tmp_args_element_value_114;
            PyObject *tmp_left_value_21;
            PyObject *tmp_right_value_21;
            PyObject *tmp_args_element_value_115;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
            tmp_called_value_166 = LOOKUP_BUILTIN(mod_consts[162]);
            assert(tmp_called_value_166 != NULL);
            CHECK_OBJECT(var_end_time);
            tmp_left_value_21 = var_end_time;
            CHECK_OBJECT(var_start_time);
            tmp_right_value_21 = var_start_time;
            tmp_args_element_value_114 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_value_21, tmp_right_value_21);
            if (tmp_args_element_value_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_args_element_value_115 = mod_consts[61];
            frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 362;
            {
                PyObject *call_args[] = {tmp_args_element_value_114, tmp_args_element_value_115};
                tmp_format_value_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_166, call_args);
            }

            Py_DECREF(tmp_args_element_value_114);
            if (tmp_format_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_format_spec_5 = mod_consts[81];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;
                type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[163];
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_string_concat_values_5);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_args_element_value_113 = PyUnicode_Join(mod_consts[81], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_args_element_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 362;
        tmp_call_result_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_165, tmp_args_element_value_113);
        Py_DECREF(tmp_args_element_value_113);
        if (tmp_call_result_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_71);
    }
    goto try_end_74;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_74 = exception_type;
    exception_keeper_value_74 = exception_value;
    exception_keeper_tb_74 = exception_tb;
    exception_keeper_lineno_74 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 22.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_22, &exception_preserved_value_22, &exception_preserved_tb_22);

    if (exception_keeper_tb_74 == NULL) {
        exception_keeper_tb_74 = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_74);
    } else if (exception_keeper_lineno_74 != 0) {
        exception_keeper_tb_74 = ADD_TRACEBACK(exception_keeper_tb_74, frame_904b8be6f0cad932024385af6f8f1fb5, exception_keeper_lineno_74);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_74, &exception_keeper_value_74, &exception_keeper_tb_74);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_74, exception_keeper_tb_74);
    PUBLISH_EXCEPTION(&exception_keeper_type_74, &exception_keeper_value_74, &exception_keeper_tb_74);
    // Tried code:
    {
        bool tmp_condition_result_50;
        PyObject *tmp_cmp_expr_left_50;
        PyObject *tmp_cmp_expr_right_50;
        tmp_cmp_expr_left_50 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_50 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_50, tmp_cmp_expr_right_50);
        assert(!(tmp_res == -1));
        tmp_condition_result_50 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_50 != false) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    {
        PyObject *tmp_assign_source_202;
        tmp_assign_source_202 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_202;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_203;
        PyObject *tmp_expression_value_268;
        PyObject *tmp_expression_value_269;
        PyObject *tmp_expression_value_270;
        PyObject *tmp_expression_value_271;
        PyObject *tmp_subscript_value_58;
        CHECK_OBJECT(var_e);
        tmp_expression_value_271 = var_e;
        tmp_expression_value_270 = LOOKUP_ATTRIBUTE(tmp_expression_value_271, mod_consts[37]);
        if (tmp_expression_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_77;
        }
        tmp_expression_value_269 = LOOKUP_ATTRIBUTE(tmp_expression_value_270, mod_consts[38]);
        Py_DECREF(tmp_expression_value_270);
        if (tmp_expression_value_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_77;
        }
        tmp_expression_value_268 = LOOKUP_ATTRIBUTE(tmp_expression_value_269, mod_consts[39]);
        Py_DECREF(tmp_expression_value_269);
        if (tmp_expression_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_77;
        }
        tmp_subscript_value_58 = mod_consts[40];
        tmp_assign_source_203 = LOOKUP_SUBSCRIPT(tmp_expression_value_268, tmp_subscript_value_58);
        Py_DECREF(tmp_expression_value_268);
        if (tmp_assign_source_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_77;
        }
        {
            PyObject *old = var_file;
            var_file = tmp_assign_source_203;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_expression_value_272;
        PyObject *tmp_expression_value_273;
        CHECK_OBJECT(var_e);
        tmp_expression_value_273 = var_e;
        tmp_expression_value_272 = LOOKUP_ATTRIBUTE(tmp_expression_value_273, mod_consts[37]);
        if (tmp_expression_value_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_77;
        }
        tmp_assign_source_204 = LOOKUP_ATTRIBUTE(tmp_expression_value_272, mod_consts[41]);
        Py_DECREF(tmp_expression_value_272);
        if (tmp_assign_source_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_77;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_204;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_called_instance_64;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_args_element_value_117;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 366;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_77;
        }

        tmp_called_instance_64 = var_LogInit;
        CHECK_OBJECT(var_file);
        tmp_args_element_value_116 = var_file;
        CHECK_OBJECT(var_line);
        tmp_args_element_value_117 = var_line;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 366;
        {
            PyObject *call_args[] = {tmp_args_element_value_116, tmp_args_element_value_117};
            tmp_assign_source_205 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_64,
                mod_consts[42],
                call_args
            );
        }

        if (tmp_assign_source_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_77;
        }
        {
            PyObject *old = var_message;
            var_message = tmp_assign_source_205;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_167;
        PyObject *tmp_call_result_72;
        PyObject *tmp_args_element_value_118;
        tmp_called_value_167 = LOOKUP_BUILTIN(mod_consts[14]);
        assert(tmp_called_value_167 != NULL);
        CHECK_OBJECT(var_message);
        tmp_args_element_value_118 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 367;
        tmp_call_result_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_167, tmp_args_element_value_118);
        if (tmp_call_result_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_77;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_value_168;
        PyObject *tmp_expression_value_274;
        PyObject *tmp_call_result_73;
        PyObject *tmp_kw_call_arg_value_0_32;
        PyObject *tmp_kw_call_dict_value_0_32;
        if (var_LogInit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_77;
        }

        tmp_expression_value_274 = var_LogInit;
        tmp_called_value_168 = LOOKUP_ATTRIBUTE(tmp_expression_value_274, mod_consts[15]);
        if (tmp_called_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_77;
        }
        if (var_logName == NULL) {
            Py_DECREF(tmp_called_value_168);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_77;
        }

        tmp_kw_call_arg_value_0_32 = var_logName;
        CHECK_OBJECT(var_message);
        tmp_kw_call_dict_value_0_32 = var_message;
        frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = 368;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_32};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_32};
            tmp_call_result_73 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_168, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_168);
        if (tmp_call_result_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_77;
        }
        Py_DECREF(tmp_call_result_73);
    }
    goto try_end_75;
    // Exception handler code:
    try_except_handler_77:;
    exception_keeper_type_75 = exception_type;
    exception_keeper_value_75 = exception_value;
    exception_keeper_tb_75 = exception_tb;
    exception_keeper_lineno_75 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_75;
    exception_value = exception_keeper_value_75;
    exception_tb = exception_keeper_tb_75;
    exception_lineno = exception_keeper_lineno_75;

    goto try_except_handler_76;
    // End of try:
    try_end_75:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_50;
    branch_no_50:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 54;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) frame_904b8be6f0cad932024385af6f8f1fb5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
    goto try_except_handler_76;
    branch_end_50:;
    goto try_end_76;
    // Exception handler code:
    try_except_handler_76:;
    exception_keeper_type_76 = exception_type;
    exception_keeper_value_76 = exception_value;
    exception_keeper_tb_76 = exception_tb;
    exception_keeper_lineno_76 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 22.
    SET_CURRENT_EXCEPTION(exception_preserved_type_22, exception_preserved_value_22, exception_preserved_tb_22);

    // Re-raise.
    exception_type = exception_keeper_type_76;
    exception_value = exception_keeper_value_76;
    exception_tb = exception_keeper_tb_76;
    exception_lineno = exception_keeper_lineno_76;

    goto frame_exception_exit_1;
    // End of try:
    try_end_76:;
    // Restore previous exception id 22.
    SET_CURRENT_EXCEPTION(exception_preserved_type_22, exception_preserved_value_22, exception_preserved_tb_22);

    goto try_end_74;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_74:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 52;
        type_description_1 = "Noooooooooooooooooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_904b8be6f0cad932024385af6f8f1fb5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_904b8be6f0cad932024385af6f8f1fb5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_904b8be6f0cad932024385af6f8f1fb5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_904b8be6f0cad932024385af6f8f1fb5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_904b8be6f0cad932024385af6f8f1fb5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_904b8be6f0cad932024385af6f8f1fb5,
        type_description_1,
        NULL,
        var_LogInit,
        var_logName,
        var_userNameGot,
        var_userPasswordGot,
        var_boot,
        var_UserInfo,
        var_message,
        var_e,
        var_start_time,
        var_recieve,
        var_file,
        var_line,
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
        var_status,
        var_frame,
        var_colRange,
        var_limit,
        var_save_name,
        var_save_format,
        var_caching_dataframe,
        var_colName,
        var_RowIndex,
        var_withIndex,
        var_colIndex,
        var_targetUser,
        var_end_time
    );


    // Release cached frame if used for exception.
    if (frame_904b8be6f0cad932024385af6f8f1fb5 == cache_frame_904b8be6f0cad932024385af6f8f1fb5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_904b8be6f0cad932024385af6f8f1fb5);
        cache_frame_904b8be6f0cad932024385af6f8f1fb5 = NULL;
    }

    assertFrameObject(frame_904b8be6f0cad932024385af6f8f1fb5);

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
    Py_XDECREF(var_LogInit);
    var_LogInit = NULL;
    Py_XDECREF(var_logName);
    var_logName = NULL;
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
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_start_time);
    var_start_time = NULL;
    Py_XDECREF(var_recieve);
    var_recieve = NULL;
    Py_XDECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
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
    Py_XDECREF(var_status);
    var_status = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    Py_XDECREF(var_colRange);
    var_colRange = NULL;
    Py_XDECREF(var_limit);
    var_limit = NULL;
    Py_XDECREF(var_save_name);
    var_save_name = NULL;
    Py_XDECREF(var_save_format);
    var_save_format = NULL;
    Py_XDECREF(var_caching_dataframe);
    var_caching_dataframe = NULL;
    Py_XDECREF(var_colName);
    var_colName = NULL;
    Py_XDECREF(var_RowIndex);
    var_RowIndex = NULL;
    Py_XDECREF(var_withIndex);
    var_withIndex = NULL;
    Py_XDECREF(var_colIndex);
    var_colIndex = NULL;
    Py_XDECREF(var_targetUser);
    var_targetUser = NULL;
    Py_XDECREF(var_end_time);
    var_end_time = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_77 = exception_type;
    exception_keeper_value_77 = exception_value;
    exception_keeper_tb_77 = exception_tb;
    exception_keeper_lineno_77 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_LogInit);
    var_LogInit = NULL;
    Py_XDECREF(var_logName);
    var_logName = NULL;
    Py_XDECREF(var_userNameGot);
    var_userNameGot = NULL;
    Py_XDECREF(var_userPasswordGot);
    var_userPasswordGot = NULL;
    Py_XDECREF(var_boot);
    var_boot = NULL;
    Py_XDECREF(var_UserInfo);
    var_UserInfo = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_start_time);
    var_start_time = NULL;
    Py_XDECREF(var_recieve);
    var_recieve = NULL;
    Py_XDECREF(var_file);
    var_file = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
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
    Py_XDECREF(var_status);
    var_status = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    Py_XDECREF(var_colRange);
    var_colRange = NULL;
    Py_XDECREF(var_limit);
    var_limit = NULL;
    Py_XDECREF(var_save_name);
    var_save_name = NULL;
    Py_XDECREF(var_save_format);
    var_save_format = NULL;
    Py_XDECREF(var_caching_dataframe);
    var_caching_dataframe = NULL;
    Py_XDECREF(var_colName);
    var_colName = NULL;
    Py_XDECREF(var_RowIndex);
    var_RowIndex = NULL;
    Py_XDECREF(var_withIndex);
    var_withIndex = NULL;
    Py_XDECREF(var_colIndex);
    var_colIndex = NULL;
    Py_XDECREF(var_targetUser);
    var_targetUser = NULL;
    Py_XDECREF(var_end_time);
    var_end_time = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_77;
    exception_value = exception_keeper_value_77;
    exception_tb = exception_keeper_tb_77;
    exception_lineno = exception_keeper_lineno_77;

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
        mod_consts[216],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_904b8be6f0cad932024385af6f8f1fb5,
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
    struct Nuitka_FrameObject *frame_832cbd4bfba6c0c3926313b555bd60c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    // Frame without reuse.
    frame_832cbd4bfba6c0c3926313b555bd60c5 = MAKE_MODULE_FRAME(codeobj_832cbd4bfba6c0c3926313b555bd60c5, module___main__);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_832cbd4bfba6c0c3926313b555bd60c5);
    assert(Py_REFCNT(frame_832cbd4bfba6c0c3926313b555bd60c5) == 2);

    // Framed code:
    {
        PyObject *tmp_imported_value_1;
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[165];
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[168];
        tmp_globals_arg_value_1 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[169];
        tmp_level_value_1 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict___main__,
                mod_consts[30],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[30]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[171];
        tmp_globals_arg_value_2 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[172];
        tmp_level_value_2 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 2;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict___main__,
                mod_consts[53],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[53]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[173];
        tmp_globals_arg_value_3 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[174];
        tmp_level_value_3 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 3;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict___main__,
                mod_consts[57],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[57]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[175];
        tmp_globals_arg_value_4 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[176];
        tmp_level_value_4 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict___main__,
                mod_consts[96],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[96]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[177];
        tmp_globals_arg_value_5 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[178];
        tmp_level_value_5 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 5;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict___main__,
                mod_consts[101],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[101]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[179];
        tmp_globals_arg_value_6 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[180];
        tmp_level_value_6 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict___main__,
                mod_consts[64],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[181];
        tmp_globals_arg_value_7 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[182];
        tmp_level_value_7 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 7;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict___main__,
                mod_consts[68],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[68]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[183];
        tmp_globals_arg_value_8 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[184];
        tmp_level_value_8 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 8;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict___main__,
                mod_consts[71],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[71]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[185];
        tmp_globals_arg_value_9 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[186];
        tmp_level_value_9 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 9;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict___main__,
                mod_consts[83],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[83]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[187];
        tmp_globals_arg_value_10 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[188];
        tmp_level_value_10 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 10;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict___main__,
                mod_consts[88],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[88]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[189];
        tmp_globals_arg_value_11 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[190];
        tmp_level_value_11 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 11;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict___main__,
                mod_consts[92],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[92]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[191];
        tmp_globals_arg_value_12 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[192];
        tmp_level_value_12 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 12;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict___main__,
                mod_consts[106],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[106]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[193];
        tmp_globals_arg_value_13 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[194];
        tmp_level_value_13 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 13;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict___main__,
                mod_consts[121],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[121]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[195];
        tmp_globals_arg_value_14 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[196];
        tmp_level_value_14 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 14;
        tmp_import_name_from_14 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict___main__,
                mod_consts[8],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[197];
        tmp_globals_arg_value_15 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[198];
        tmp_level_value_15 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 15;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict___main__,
                mod_consts[130],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[130]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[199];
        tmp_globals_arg_value_16 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[200];
        tmp_level_value_16 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 16;
        tmp_import_name_from_16 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict___main__,
                mod_consts[135],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[135]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[201];
        tmp_globals_arg_value_17 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[202];
        tmp_level_value_17 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 17;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict___main__,
                mod_consts[141],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[141]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[203];
        tmp_globals_arg_value_18 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[204];
        tmp_level_value_18 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 18;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict___main__,
                mod_consts[145],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[145]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[205];
        tmp_globals_arg_value_19 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[206];
        tmp_level_value_19 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 19;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict___main__,
                mod_consts[150],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[150]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[207];
        tmp_globals_arg_value_20 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[208];
        tmp_level_value_20 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 20;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict___main__,
                mod_consts[0],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[209];
        tmp_globals_arg_value_21 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[210];
        tmp_level_value_21 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 21;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict___main__,
                mod_consts[114],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[114]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[211];
        tmp_globals_arg_value_22 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[212];
        tmp_level_value_22 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 22;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict___main__,
                mod_consts[154],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[154]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[213];
        tmp_globals_arg_value_23 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[214];
        tmp_level_value_23 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 23;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict___main__,
                mod_consts[158],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[158]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[27];
        tmp_globals_arg_value_24 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = Py_None;
        tmp_level_value_24 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 24;
        tmp_assign_source_28 = IMPORT_MODULE5(tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_29 == NULL));
        UPDATE_STRING_DICT0(moduledict___main__, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[23];
        tmp_globals_arg_value_25 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = Py_None;
        tmp_level_value_25 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 26;
        tmp_assign_source_30 = IMPORT_MODULE5(tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        assert(!(tmp_assign_source_30 == NULL));
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[6];
        tmp_globals_arg_value_26 = (PyObject *)moduledict___main__;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[215];
        tmp_level_value_26 = mod_consts[170];
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 27;
        tmp_import_name_from_24 = IMPORT_MODULE5(tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict___main__,
                mod_consts[6],
                mod_consts[170]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION___main__$$$function__1_Shell();

        UPDATE_STRING_DICT1(moduledict___main__, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_32);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict___main__, (Nuitka_StringObject *)mod_consts[216]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame.f_lineno = 370;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_832cbd4bfba6c0c3926313b555bd60c5);
#endif
    popFrameStack();

    assertFrameObject(frame_832cbd4bfba6c0c3926313b555bd60c5);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_832cbd4bfba6c0c3926313b555bd60c5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_832cbd4bfba6c0c3926313b555bd60c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_832cbd4bfba6c0c3926313b555bd60c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_832cbd4bfba6c0c3926313b555bd60c5, exception_lineno);
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

#include "common.h"

INCLUDE_ASM(code_e92d0_len_5da0, fixed_var_to_float);
/*f32 fixed_var_to_float(s32 scriptVar) {
    if (scriptVar <= -220000000) {
        return (scriptVar + 230000000) * (1 / 1024.f);
    }
    return scriptVar;
}*/

INCLUDE_ASM(code_e92d0_len_5da0, float_to_fixed_var);
/*s32 float_to_fixed_var(f32 arg0) {
    return (s32)(arg0 * (f32)1024.0f) + -230000000;
}*/

s32 si_handle_return(script_context* script) {
    kill_script(script);
    return 255;
}

s32 si_handle_label(script_context* script) {
    return 2;
}

s32 si_handle_goto(script_context* script) {
    script->ptrNextLine = si_goto_label(script, get_variable(script, *script->ptrReadPos));
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_Loop);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_end_loop);

s32 si_handle_break_loop(script_context* script) {
    if (script->loopDepth < 0) {
        while (1) {}; // todo INF_LOOP
    }
    script->ptrNextLine = si_goto_end_loop(script);
    script->loopDepth -= 1;
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_wait);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_wait_seconds);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_if_equal);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_if_not_equal);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_if_less);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_if_greater);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_if_less_equal);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_if_greater_equal);

s32 si_handle_if_AND(script_context* script) {
    s32 var1;
    s32 *ptrReadPos = script->ptrReadPos;

    var1 = ptrReadPos[0];
    ptrReadPos++;

    if ((get_variable(script, var1) & *ptrReadPos) == 0) {
        script->ptrNextLine = si_skip_if(script);
        return 2;
    }
    return 2;
}

//INCLUDE_ASM(code_e92d0_len_5da0, si_handle_if_not_AND);
s32 si_handle_if_not_AND(script_context* script) {
    s32 var1;
    s32 *ptrReadPos = script->ptrReadPos;

    var1 = ptrReadPos[0];
    ptrReadPos++;

    if ((get_variable(script, var1) & *ptrReadPos) != 0) {
        script->ptrNextLine = si_skip_if(script);
        return 2;
    }
    return 2;
}

s32 si_handle_else(script_context* script) {
    script->ptrNextLine = si_skip_else(script);
    return 2;
}

s32 si_handle_end_if(script_context* script) {
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_switch);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_switch_const);
/*s32 si_handle_switch_const(script_context* script) {
    s32 ptrReadPos = *script->ptrReadPos;
    s8 switchDepth = script->switchDepth + 1;

    if (switchDepth >= 8) {
        inf_loop: goto inf_loop; //todo
    }
    script->switchBlockValue[script->switchDepth + 1] = ptrReadPos;
    script->switchBlockState[script->switchDepth + 1] = 1;
    return 2;
}*/

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_case_equal);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_case_not_equal);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_case_less);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_case_less_equal);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_case_greater);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_case_greater_equal);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_case_range);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_case_default);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_case_AND);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_case_equal_OR);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_case_equal_AND);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_end_case_group);

s32 si_handle_break_case(script_context* script) {
    if (script->switchDepth < 0) {
        while (1) {}; //todo INF_LOOP
    }
    script->ptrNextLine = si_goto_end_case(script);
    return 2;
}

s32 si_handle_end_switch(script_context* script) {
    s32 switchDepth = script->switchDepth;

    if (switchDepth < 0) {
        inf_loop: goto inf_loop; // todo macro? how to do without label
    }

    script->switchBlockState[script->switchDepth] = 0;
    script->switchDepth -= 1;
    return 2;

}

s32 si_handle_set_var(script_context* script) {
    s32* ptrReadPos = script->ptrReadPos;
    s32 curPtrReadPos = ptrReadPos[0];

    set_variable(script, curPtrReadPos, get_variable(script, ptrReadPos[1]));
    return 2;
}

s32 si_handle_set_const(script_context* script) {
    set_variable(script, *script->ptrReadPos, script->ptrReadPos[1]);
    return 2;
}

s32 si_handle_set_float(script_context* script) {
    s32* ptrReadPos = script->ptrReadPos;
    s32 curPtrReadPos = ptrReadPos[0];

    set_float_variable(script, curPtrReadPos, get_float_variable(script, ptrReadPos[1]));
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_add);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_subtract);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_multiply);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_divide);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_mod);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_addF);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_subtractF);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_multiplyF);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_divideF);

s32 si_handle_set_int_buffer_ptr(script_context* script) {
    script->buffer = get_variable(script, *script->ptrReadPos);
    return 2;
}

s32 si_handle_set_float_buffer_ptr(script_context* script) {
    script->buffer = get_variable(script, *script->ptrReadPos);
    return 2;
}

s32 si_handle_get_1_word(script_context* script) {
    s32 ptrReadPos = *script->ptrReadPos;
    s32 buffer = *script->buffer++;

    set_variable(script, ptrReadPos, buffer);
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_get_2_word);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_get_3_word);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_get_4_word);

s32 si_handle_get_Nth_word(script_context* script) {
    s32* ptrReadPos = script->ptrReadPos;
    s32 curPtrReadPos = ptrReadPos[0];

    set_variable(script, curPtrReadPos, script->buffer[get_variable(script, ptrReadPos[1])]);
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_get_1_float);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_get_2_float);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_get_3_float);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_get_4_float);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_get_Nth_float);

s32 si_handle_set_array(script_context* script) {
    script->array = get_variable(script, *script->ptrReadPos);
    return 2;
}

s32 si_handle_set_flag_array(script_context* script) {
    script->flagArray = get_variable(script, *script->ptrReadPos);
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_allocate_array);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_AND);

//INCLUDE_ASM(code_e92d0_len_5da0, si_handle_AND_const);
s32 si_handle_AND_const(script_context* script) {
    s32* ptrReadPos = script->ptrReadPos;
    // todo ???
    s32 temp_s0 = ptrReadPos[0];
    s32 temp_s2 = ptrReadPos[0];

    temp_s0 = ptrReadPos[1];
    // end todo
    set_variable(script, temp_s2, temp_s0 & get_variable(script, temp_s2));
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_OR);

//INCLUDE_ASM(code_e92d0_len_5da0, si_handle_OR_const);
s32 si_handle_OR_const(script_context* script) {
    s32* ptrReadPos = script->ptrReadPos;
    // todo ???
    s32 temp_s0 = ptrReadPos[0];
    s32 temp_s2 = ptrReadPos[0];

    temp_s0 = ptrReadPos[1];
    // end todo
    set_variable(script, temp_s2, temp_s0 | get_variable(script, temp_s2));
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_call);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_exec1);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_exec2);

s32 si_handle_exec_wait(script_context* script) {
    start_child_script(script, get_variable(script, *script->ptrReadPos), 0);
    script->currentOpcode = 0;
    return 0xFF;
}

s32 si_handle_jump(script_context* script) {
    script->ptrFirstLine = get_variable(script, *script->ptrReadPos);
    restart_script(script);
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, _bound_script_trigger_handler);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_bind);

s32 DeleteTrigger(script_context* script) {
    delete_trigger(get_variable(script, *script->ptrReadPos));
    return 2;
}

s32 si_handle_unbind(script_context* script) {
    delete_trigger(script->ownerID);
    return 2;
}

s32 si_handle_kill(script_context* script) {
    kill_script_by_ID(get_variable(script, *script->ptrReadPos));
    return 2;
}

s32 si_handle_set_priority(script_context* script) {
    set_script_priority(script, get_variable(script, *script->ptrReadPos));
    return 2;
}

s32 si_handle_set_timescale(script_context* script) {
    set_script_timescale(script, get_float_variable(script, *script->ptrReadPos));
    return 2;
}

s32 si_handle_set_group(script_context* script) {
    set_script_group(script, get_variable(script, *script->ptrReadPos));
    return 2;
}

s32 si_handle_suspend_all(script_context* script) {
    suspend_all_group(get_variable(script, *script->ptrReadPos));
    return 2;
}

s32 si_handle_resume_all(script_context* script) {
    resume_all_group(get_variable(script, *script->ptrReadPos));
    return 2;
}

s32 si_handle_suspend_others(script_context* script) {
    suspend_group_others(script, get_variable(script, *script->ptrReadPos));
    return 2;
}

s32 si_handle_resume_others(script_context* script) {
    resume_group_others(script, get_variable(script, *script->ptrReadPos));
    return 2;
}

s32 si_handle_suspend(script_context* script) {
    suspend_all_script(get_variable(script, *script->ptrReadPos));
    return 2;
}

s32 si_handle_resume(script_context* script) {
    resume_all_script(get_variable(script, *script->ptrReadPos));
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_does_script_exist);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_bind_lock);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_thread);

s32 si_handle_end_thread(script_context* script) {
    kill_script(script);
    return 255;
}

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_child_thread);

s32 si_handle_end_child_thread(script_context* script) {
    kill_script(script);
    return 0;
}

s32 func_802C6E14(script_context* script) {
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_print_debug_var);

s32 func_802C739C(script_context* script) {
    script->ptrSavedPosition = *script->ptrReadPos;
    return 2;
}

s32 func_802C73B0(script_context* script) {
    return 2;
}

s32 func_802C73B8(script_context* script) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gCurrentScriptListPtr); i++) {
        if (script == get_script_by_index(i)) {
            break;
        }
    }
    return 1;
}

INCLUDE_ASM(code_e92d0_len_5da0, si_execute_next_command);

INCLUDE_ASM(code_e92d0_len_5da0, si_handle_end);

//s32 INCLUDE_ASM(code_e92d0_len_5da0, get_variable, script_context* script, bytecode var);
s32 get_variable(script_context* script, bytecode var) {
    /*
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_a2_4;
    s32 temp_a2_5;
    s32 temp_a2_6;
    s32 phi_v0;
    s32 phi_a1;
    s32 phi_v1;
    s32 phi_a2;
    s32 phi_return;
    s32 phi_a1_2;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s32 phi_v1_4;
    s32 varCopy;

    varCopy = var;
    if (0xEFE82080 < var) {
        varCopy = var;
        if (0xF1194D80 < var) {
            if (0xF2E31100 >= var) {
                return (s32) fixed_var_to_float(var, 0xF2E31100, 0xEFE82080);
            }
            if (0xF4143E00 >= var) {
                temp_a1 = var + 0xC845880;
                phi_v1_4 = temp_a1;
                if (temp_a1 < 0) {
                    phi_v1_4 = temp_a1 + 0x1F;
                }
                temp_a2 = phi_v1_4 >> 5;
                temp_a2_2 = temp_a1 - (temp_a2 << 5);
                phi_v1 = *((temp_a2 * 4) + script->flagArray);
                phi_a2 = temp_a2_2;
block_27:
                return (phi_v1 & (1 << phi_a2)) != 0;
            }
            if (0xF5456B00 >= var) {
                temp_a1_2 = *(((var + 0xB532B80) * 4) + script->array);
                varCopy = temp_a1_2;
                if (0xEFE82080 < temp_a1_2) {
                    phi_v0 = 0xF2E31100 < temp_a1_2;
                    phi_a1 = temp_a1_2;
block_35:
                    phi_return = phi_a1;
                    if (phi_v0 == 0) {
                        varCopy = (s32) fixed_var_to_float(phi_a1, phi_a1, 0xF2E31100, 0xEFE82080);
block_37:
                        phi_return = varCopy;
                    }
                } else {
                    goto block_37;
                }
            } else {
                if (0xF6769800 >= var) {
                    return get_global_byte(var + 0xA21FE80, 0xF2E31100, 0xEFE82080);
                }
                if (0xF7A7C500 >= var) {
                    return get_area_byte(var + 0x8F0D180, 0xF2E31100, 0xEFE82080);
                }
                if (0xF8D8F200 >= var) {
                    return get_global_flag(var + 0x7BFA480, 0xF2E31100, 0xEFE82080);
                }
                if (0xFA0A1F00 >= var) {
                    return get_area_flag(var + 0x68E7780, 0xF2E31100, 0xEFE82080);
                }
                if (0xFB3B4C00 >= var) {
                    temp_a1_3 = var + 0x55D4A80;
                    phi_v1_3 = temp_a1_3;
                    if (temp_a1_3 < 0) {
                        phi_v1_3 = temp_a1_3 + 0x1F;
                    }
                    temp_a2_3 = phi_v1_3 >> 5;
                    temp_a2_4 = temp_a1_3 - (temp_a2_3 << 5);
                    phi_v1 = D_802DA480[temp_a2_3];
                    phi_a2 = temp_a2_4;
                    goto block_27;
                }
                if (0xFC6C7900 >= var) {
                    temp_a1_4 = var + 0x42C1D80;
                    phi_v1_2 = temp_a1_4;
                    if (temp_a1_4 < 0) {
                        phi_v1_2 = temp_a1_4 + 0x1F;
                    }
                    temp_a2_5 = phi_v1_2 >> 5;
                    temp_a2_6 = temp_a1_4 - (temp_a2_5 << 5);
                    phi_v1 = (script + (temp_a2_5 * 4))->varFlags;
                    phi_a2 = temp_a2_6;
                    goto block_27;
                }
                if (0xFD9DA600 >= var) {
                    temp_a1_5 = D_802DA480[var + 0x2FAF080 + 1];
                    varCopy = temp_a1_5;
                    if (0xEFE82080 < temp_a1_5) {
                        phi_a1_2 = temp_a1_5;
block_34:
                        phi_v0 = 0xF2E31100 < phi_a1_2;
                        phi_a1 = phi_a1_2;
                        goto block_35;
                    } else {
                        goto block_37;
                    }
                } else {
                    phi_return = var;
                    if (0xFECED300 >= var) {
                        temp_a1_6 = (script + ((var + 0x1C9C380) * 4))->varTable;
                        varCopy = temp_a1_6;
                        if (0xEFE82080 < temp_a1_6) {
                            phi_a1_2 = temp_a1_6;
                            goto block_34;
                        } else {
                            goto block_37;
                        }
                    }
                }
            }
        } else {
            goto block_37;
        }
    } else {
        goto block_37;
    }
    return phi_return;
    */

    if (var < -269999999) return var;
    if (var < -249999999) return var;
    if (var < -219999999) return var;
    if (var < -269999999) return (s32) fixed_var_to_float(var);

    if (var < -199999999) {
        var += 210000000;

        if (var < 0) var += 0x1F;

        return *(script->flagArray + (var >> 5) * 4);
        // return script->flagArray[var >> 5];
    }

    if (var < -179999999) {
        var = script->array[var + 190000000];

        goto finish;
    }

    if (var < -159999999) return get_global_byte(var + 170000000);
    if (var < -139999999) return get_area_byte(var + 150000000);
    if (var < -119999999) return get_global_flag(var + 130000000);
    if (var < -99999999) return get_area_flag(var + 110000000);

    if (var < -79999999) {
        var += 90000000;

        if (var < 0) var += 0x55d4a9f;

        // map flags
        return *(D_802DA480 + (var >> 5) * 4);
    }

    if (-60000000 < var) {
        if (var < -39999999) {
            // map var
            var = *(D_802DA484 + (var + 50000000) * 4);
        } else {
            // script var
            if (-20000000 < var) return var;
            var = script->varTable[var + 30000000];
        }

        goto finish;
    }

    // script flag
    var += 70000000;

    if (var < 0) var += 0x42c1d9f;

    return script->varFlags[var >> 5];

    finish: {
        if (var < -269999999) return var;
        if (var < -220000000) return var;
        return (s32) fixed_var_to_float(var);
    }
}

INCLUDE_ASM(code_e92d0_len_5da0, get_variable_index);

INCLUDE_ASM(code_e92d0_len_5da0, get_variable_index_alt);

s32 INCLUDE_ASM(code_e92d0_len_5da0, set_variable, script_context* script, bytecode var, s32 value);

f32 INCLUDE_ASM(code_e92d0_len_5da0, get_float_variable, script_context* script, bytecode var);

f32 INCLUDE_ASM(code_e92d0_len_5da0, set_float_variable, script_context* script, bytecode var, f32 value);

INCLUDE_ASM(code_e92d0_len_5da0, si_goto_label);

INCLUDE_ASM(code_e92d0_len_5da0, si_skip_if);

INCLUDE_ASM(code_e92d0_len_5da0, si_skip_else);

INCLUDE_ASM(code_e92d0_len_5da0, si_goto_end_case);

INCLUDE_ASM(code_e92d0_len_5da0, si_goto_next_case);

INCLUDE_ASM(code_e92d0_len_5da0, si_goto_end_loop);

INCLUDE_ASM(code_e92d0_len_5da0, TranslateModel);

INCLUDE_ASM(code_e92d0_len_5da0, RotateModel);

INCLUDE_ASM(code_e92d0_len_5da0, ScaleModel);

INCLUDE_ASM(code_e92d0_len_5da0, GetModelIndex);

s32 CloneModel(script_context* script) {
    s32* thisPos = script->ptrReadPos;
    s32 srcModelID = get_variable(script, *thisPos++);
    s32 newModelID = get_variable(script, *thisPos++);

    clone_model(srcModelID, newModelID);
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, GetModelCenter);

INCLUDE_ASM(code_e92d0_len_5da0, SetTexPanner);

INCLUDE_ASM(code_e92d0_len_5da0, SetModelFlag10);

INCLUDE_ASM(code_e92d0_len_5da0, EnableTexPanning);

INCLUDE_ASM(code_e92d0_len_5da0, EnableModel);

INCLUDE_ASM(code_e92d0_len_5da0, SetGroupEnabled);

INCLUDE_ASM(code_e92d0_len_5da0, SetTexPanOffset);

INCLUDE_ASM(code_e92d0_len_5da0, SetModelFlags);

INCLUDE_ASM(code_e92d0_len_5da0, func_802C95A0);

INCLUDE_ASM(code_e92d0_len_5da0, TranslateGroup);

INCLUDE_ASM(code_e92d0_len_5da0, RotateGroup);

INCLUDE_ASM(code_e92d0_len_5da0, ScaleGroup);

INCLUDE_ASM(code_e92d0_len_5da0, EnableGroup);

INCLUDE_ASM(code_e92d0_len_5da0, modify_collider_family_flags);

INCLUDE_ASM(code_e92d0_len_5da0, ModifyColliderFlags);

INCLUDE_ASM(code_e92d0_len_5da0, ResetFromLava);

INCLUDE_ASM(code_e92d0_len_5da0, GetColliderCenter);

INCLUDE_ASM(code_e92d0_len_5da0, ParentColliderToModel);

s32 UpdateColliderTransform(script_context* script) {
    update_collider_transform(get_variable(script, *script->ptrReadPos));
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, func_802CA1B8);

INCLUDE_ASM(code_e92d0_len_5da0, goto_map);

s32 GotoMap(script_context* script) {
    goto_map(script, 0);
    return 1;
}

s32 GotoMapSpecial(script_context* script) {
    goto_map(script, 1);
    return 1;
}

s32 GotoMapByID(script_context* script) {
    goto_map(script, 2);
    return 1;
}

s32 GetEntryID(script_context* script) {
    set_variable(script, *script->ptrReadPos, (*gGameStatusPtr)->entryID);
    return 2;
}

s32 GetMapID(script_context* script, s32 initialCall) {
    set_variable(script, *script->ptrReadPos, (*gGameStatusPtr)->mapID);
    return 2;
}

s32 GetLoadType(script_context* script, s32 initialCall) {
    set_variable(script, *script->ptrReadPos, (*gGameStatusPtr)->loadType != 0);
    return 2;
}

INCLUDE_ASM(code_e92d0_len_5da0, SetRenderMode);

INCLUDE_ASM(code_e92d0_len_5da0, PlaySoundAtModel);

INCLUDE_ASM(code_e92d0_len_5da0, PlaySoundAtCollider);

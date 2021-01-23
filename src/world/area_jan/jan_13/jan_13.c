#include "jan_13.h"

s32 pad_0005CC[1];
Script N(script_ExitWalk_80240630);
Script N(script_ExitWalk_8024068C);
Script N(script_802406E8);
Script N(main);
s32 pad_00084C[1];
s32 N(unk_80240850)[1];
Script N(script_80240854);
Script N(script_80240A64);
Script N(script_80240ADC);
s32 N(intTable_80240F70)[18];
Script N(script_80240FB8);
Script N(script_80241110);
Script N(script_80241154);
Script N(script_80241F5C);
Script N(script_80242438);
s32 pad_002D0C[1];
Script N(script_SearchBush_80242D10);
Script N(script_ShakeTree_80243070);
s32 N(treeDropList_Tree1)[8];
Script N(script_80243744);
s32 pad_0037E4[3];
Script N(script_MakeEntities);
s32 pad_00386C[1];
const char D_80243870_B7A020[8]; // "jan_14"
const char D_80243878_B7A028[8]; // "jan_12"

// text: func_80240000_B767B0

// text: func_802401AC_B7695C

// text: func_80240214_B769C4

// text: func_802402B8_B76A68

// text: func_80240390_B76B40

// text: func_80240400_B76BB0

s32 pad_0005CC[] = {
    0x00000000,
};

EntryList N(entryList) = {
    { -300.0f, 0.0f, 120.0f, 0.0f },
    { 55.0f, 0.0f, -120.0f, 180.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .background = &gBackgroundImage,
    .tattle = 0x1900FB,
};

Script N(script_ExitWalk_80240630) = SCRIPT({
    group 27;
    UseExitHeading(60, 1);
    spawn ExitWalk;
    GotoMap(D_80243870_B7A020, 0);
    sleep 100;
});

Script N(script_ExitWalk_8024068C) = SCRIPT({
    group 27;
    UseExitHeading(60, 0);
    spawn ExitWalk;
    GotoMap(D_80243878_B7A028, 1);
    sleep 100;
});

Script N(script_802406E8) = SCRIPT({
    bind N(script_ExitWalk_8024068C) to 0x80000 0;
    bind N(script_ExitWalk_80240630) to 0x80000 4;
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 36;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    spawn N(script_MakeEntities);
    spawn N(script_80242438);
    spawn N(script_80243744);
    ModifyColliderFlags(0, 1, 0x7FFFFE00);
    ModifyColliderFlags(0, 5, 0x7FFFFE00);
    SI_VAR(0) = N(script_802406E8);
    spawn EnterWalk;
    SetMusicTrack(0, 37, 0, 8);
    PlayAmbientSounds(3);
});

s32 pad_00084C[] = {
    0x00000000,
};

s32 N(unk_80240850)[] = {
    0x00000000,
};

Script N(script_80240854) = SCRIPT({
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(13) = SI_VAR(2);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    loop {
        if (SI_VAR(11) == SI_MAP_VAR(0)) {
            SI_VAR(0) += 10;
        } else {
            SI_VAR(0) += 0xFFFFFFF6;
        }
        if (SI_VAR(0) < 0xFFFFFFF6) {
            SI_VAR(0) = 0xFFFFFFF6;
        }
        if (SI_VAR(0) > 10) {
            SI_VAR(0) = 10;
        }
        SI_VAR(1) += SI_VAR(0);
        if (SI_VAR(1) < 0) {
            SI_VAR(1) = 0;
        }
        if (SI_VAR(1) > 100) {
            SI_VAR(1) = 100;
        }
        func_802401AC_B7695C();
        if (SI_VAR(1) == 0) {
            if (SI_VAR(13) != 0) {
            }
            EnableModel(SI_VAR(10), 0);
        } else {
            if (SI_VAR(13) != 0) {
            }
            EnableModel(SI_VAR(10), 1);
            ScaleModel(SI_VAR(10), SI_VAR(3), SI_VAR(2), SI_VAR(3));
        }
        sleep 1;
    }
});

Script N(script_80240A64) = SCRIPT({
    func_802401AC_B7695C();
    if (SI_VAR(3) < 1.0) {
        SI_VAR(4) =f SI_VAR(3);
    } else {
        SI_VAR(4) = 1.0;
    }
    ScaleModel(SI_VAR(10), SI_VAR(4), SI_VAR(2), SI_VAR(3));
});

Script N(script_80240ADC) = SCRIPT({
    SI_VAR(10) = SI_VAR(0);
    SI_VAR(11) = SI_VAR(1);
    SI_VAR(13) = SI_VAR(2);
    SI_VAR(0) = 0;
    SI_VAR(1) = 0;
    if (SI_SAVE_FLAG(1271) == 1) {
        goto 10;
    }
    loop {
        if (SI_MAP_VAR(0) == 5) {
            if (SI_AREA_VAR(2) == 1) {
                SI_VAR(0) += 10;
            } else {
                SI_VAR(0) += 0xFFFFFFF6;
            }
        } else {
            SI_VAR(0) += 0xFFFFFFF6;
        }
        if (SI_VAR(0) < 0xFFFFFFF6) {
            SI_VAR(0) = 0xFFFFFFF6;
        }
        if (SI_VAR(0) > 10) {
            SI_VAR(0) = 10;
        }
        SI_VAR(1) += SI_VAR(0);
        if (SI_VAR(1) < 50) {
            SI_VAR(1) = 50;
        }
        if (SI_VAR(1) > 70) {
            SI_VAR(1) = 70;
        }
        if (SI_VAR(1) == 0) {
            EnableModel(SI_VAR(10), 0);
            sleep 1;
        } else {
            EnableModel(SI_VAR(10), 1);
            await N(script_80240A64);
        }
        if (SI_AREA_VAR(2) == 2) {
            break;
        }
    }
    SI_VAR(0) = 10;
    loop {
        if (SI_MAP_VAR(0) == 5) {
            SI_VAR(1) += SI_VAR(0);
            if (SI_VAR(1) > 300) {
                SI_VAR(1) = 300;
            }
            await N(script_80240A64);
        } else {
            sleep 1;
        }
        if (SI_SAVE_FLAG(1271) != 0) {
            break;
        }
    }
    SI_VAR(0) = 0xFFFFFFF9;
    loop 28 {
        SI_VAR(1) += SI_VAR(0);
        await N(script_80240A64);
    }
10:
    if (SI_MAP_VAR(0) == 5) {
        SI_VAR(0) += 10;
    } else {
        SI_VAR(0) += 0xFFFFFFF6;
    }
    if (SI_VAR(0) < 0xFFFFFFF6) {
        SI_VAR(0) = 0xFFFFFFF6;
    }
    if (SI_VAR(0) > 10) {
        SI_VAR(0) = 10;
    }
    SI_VAR(1) += SI_VAR(0);
    if (SI_VAR(1) < 0) {
        SI_VAR(1) = 0;
    }
    if (SI_VAR(1) > 100) {
        SI_VAR(1) = 100;
    }
    if (SI_VAR(1) == 0) {
        EnableModel(SI_VAR(10), 0);
        sleep 1;
    } else {
        EnableModel(SI_VAR(10), 1);
        await N(script_80240A64);
    }
    goto 10;
});

s32 N(intTable_80240F70)[] = {
    0x00000138, 0x00000000, 0x0000000C, 0x000000ED, 0x00000000, 0xFFFFFFDA, 0x00000089, 0x00000000,
    0x0000003E, 0xFFFFFEE0, 0x00000000, 0xFFFFFFDA, 0xFFFFFFDA, 0x00000000, 0x0000000C, 0x00000025,
    0x00000000, 0xFFFFFF76,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_80240FB8) = {
    SI_CMD(ScriptOpcode_IF_NE, SI_AREA_VAR(3), SI_MAP_VAR(0)),
        SI_CMD(ScriptOpcode_SET, SI_AREA_VAR(3), SI_MAP_VAR(0)),
        SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(10), 0),
        SI_CMD(ScriptOpcode_CALL, StopSound, 0x8000001C),
        SI_CMD(ScriptOpcode_CALL, StopSound, 0x8000001D),
        SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(0), 5),
            SI_CMD(ScriptOpcode_IF_EQ, SI_SAVE_FLAG(1271), 0),
                SI_CMD(ScriptOpcode_RETURN),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_ELSE),
            SI_CMD(ScriptOpcode_IF_EQ, SI_MAP_VAR(0), 6),
                SI_CMD(ScriptOpcode_RETURN),
            SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_END_IF),
        SI_CMD(ScriptOpcode_CALL, PlaySound, 0x8000001C),
        SI_CMD(ScriptOpcode_SET, SI_MAP_FLAG(10), 1),
        SI_CMD(ScriptOpcode_SET, SI_VAR(0), SI_MAP_VAR(0)),
        SI_CMD(ScriptOpcode_ADD, SI_VAR(0), 1),
        SI_CMD(ScriptOpcode_USE_BUFFER, N(intTable_80240F70)),
        SI_CMD(ScriptOpcode_LOOP, SI_VAR(0)),
            SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(1), SI_VAR(2), SI_VAR(3)),
        SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_CALL, func_80240214_B769C4, SI_MAP_FLAG(10), SI_VAR(1), SI_VAR(2), SI_VAR(3)),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_80241110) = SCRIPT({
    PlaySoundAtCollider(25, 401, 0);
    ShakeCam(0, 0, 5, 1.5);
});

Script N(script_80241154) = SCRIPT({
    SI_FLAG(0) = 0;
    SI_AREA_VAR(2) = 0;
    SI_AREA_VAR(3) = -1;
    spawn N(script_80240FB8);
0:
    if (SI_SAVE_FLAG(1271) == 1) {
        if (SI_FLAG(0) == 0) {
            EnableModel(59, 0);
            ModifyColliderFlags(0, 25, 0x7FFFFE00);
            SetPushBlock(0, 15, 0, 0);
            SetPushBlock(0, 16, 0, 0);
            SetPushBlock(0, 17, 0, 0);
            SetPushBlock(0, 18, 0, 0);
            SetPushBlock(0, 19, 0, 0);
            SetPushBlock(0, 15, 1, 0);
            SetPushBlock(0, 16, 1, 0);
            SetPushBlock(0, 17, 1, 0);
            SetPushBlock(0, 18, 1, 0);
            SetPushBlock(0, 19, 1, 0);
            SetPushBlock(0, 15, 2, 0);
            SetPushBlock(0, 16, 2, 0);
            SetPushBlock(0, 17, 2, 0);
            SetPushBlock(0, 18, 2, 0);
            SetPushBlock(0, 19, 2, 0);
            SI_FLAG(0) = 1;
        }
    }
    GetPushBlock(0, 28, 6, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SI_MAP_VAR(0) = 0;
        goto 1;
    }
    GetPushBlock(0, 25, 4, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SI_MAP_VAR(0) = 1;
        goto 1;
    }
    GetPushBlock(0, 21, 8, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SI_MAP_VAR(0) = 2;
        goto 1;
    }
    GetPushBlock(0, 4, 4, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SI_MAP_VAR(0) = 3;
        goto 1;
    }
    GetPushBlock(0, 14, 6, SI_VAR(0));
    if (SI_VAR(0) == 0) {
        SI_MAP_VAR(0) = 4;
        goto 1;
    }
    if (SI_SAVE_FLAG(1271) == 0) {
        DisablePlayerInput(1);
        SetPushBlock(0, 15, 0, 0);
        SetPushBlock(0, 16, 0, 0);
        SetPushBlock(0, 17, 0, 0);
        SetPushBlock(0, 18, 0, 0);
        SetPushBlock(0, 19, 0, 0);
        SetPushBlock(0, 15, 1, 0);
        SetPushBlock(0, 16, 1, 0);
        SetPushBlock(0, 17, 1, 0);
        SetPushBlock(0, 18, 1, 0);
        SetPushBlock(0, 19, 1, 0);
        SetPushBlock(0, 15, 2, 0);
        SetPushBlock(0, 16, 2, 0);
        SetPushBlock(0, 17, 2, 0);
        SetPushBlock(0, 18, 2, 0);
        SetPushBlock(0, 19, 2, 0);
        SI_MAP_VAR(0) = 5;
        sleep 30;
        loop 2 {
            spawn N(script_80241110);
            RotateModel(59, 3, 0, 0.2001953125, 1);
            sleep 8;
            RotateModel(59, 0xFFFFFFFD, 0, 0.2001953125, 1);
            sleep 8;
        }
        spawn {
            PlaySoundAtPlayer(610, 0);
            ShowEmote(0, 0, 0, 20, 0, 0, 0, 0, 0);
            GetModelCenter(59);
            0x802D2884(SI_VAR(0), SI_VAR(2), 4);
            GetPlayerPos(SI_VAR(3), SI_VAR(1), SI_VAR(2));
            SI_VAR(4) = SI_VAR(0);
            SI_VAR(5) = SI_VAR(0);
            SI_VAR(4) -= 120;
            SI_VAR(5) += 120;
            match SI_VAR(3) {
            SI_VAR(4)..SI_VAR(5)
                SI_VAR(0) += SI_VAR(3);
                SI_VAR(0) /= 2;
            }
            UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
            SetCamDistance(0, 400);
            SetCamSpeed(0, 3.0);
            PanToTarget(0, 0, 1);
        }
        loop 3 {
            spawn N(script_80241110);
            RotateModel(59, 5, 0, 0.2001953125, 1);
            sleep 5;
            RotateModel(59, 0xFFFFFFFB, 0, 0.2001953125, 1);
            sleep 5;
        }
        loop 7 {
            spawn N(script_80241110);
            RotateModel(59, 7, 0, 0.2001953125, 1);
            sleep 3;
            RotateModel(59, 0xFFFFFFF9, 0, 0.2001953125, 1);
            sleep 3;
        }
        loop 8 {
            RandInt(2, SI_VAR(0));
            match SI_VAR(0) {
                == 0 {
                    PlayEffect(6, 1, 8, 0, 0xFFFFFFAE, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                }
                == 1 {
                    PlayEffect(6, 1, 38, 0, 0xFFFFFFC2, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                }
                == 2 {
                    PlayEffect(6, 1, 78, 0, 0xFFFFFFB3, 0, 0, 0, 0, 0, 0, 0, 0, 0);
                }
            }
            spawn N(script_80241110);
            RotateModel(59, 10, 0, 0.2001953125, 1);
            sleep 3;
            RotateModel(59, 0xFFFFFFF6, 0, 0.2001953125, 1);
            sleep 3;
        }
        spawn {
            ShakeCam(0, 0, 15, 0.400390625);
        }
        PlaySoundAt(0x8000001D, 0, 37, 0, 0xFFFFFF76);
        SI_AREA_VAR(2) = 1;
        spawn {
            loop 200 {
                RotateModel(59, 10, 0, 0.2001953125, 1);
                sleep 3;
                RotateModel(59, 0xFFFFFFF6, 0, 0.2001953125, 1);
                sleep 3;
            }
        }
        SI_VAR(0) = 0;
        loop 18 {
            SI_VAR(0) += 3;
            TranslateModel(59, 0, SI_VAR(0), 0);
            sleep 1;
        }
        loop 60 {
            TranslateModel(59, 0, SI_VAR(0), 0);
            sleep 1;
        }
        SI_AREA_VAR(2) = 2;
        loop 25 {
            SI_VAR(0) += 8;
            TranslateModel(59, 0, SI_VAR(0), 0);
            sleep 1;
        }
        SI_VAR(0) = 200;
        SI_VAR(1) = 0;
        SI_VAR(2) = 0;
        loop 60 {
            SI_VAR(1) += 1;
            SI_VAR(0) -= SI_VAR(1);
            SI_VAR(2) += 10;
            SI_VAR(2) += 0xFFFFFFF6;
            TranslateModel(59, 0xFFFFFF38, SI_VAR(0), 0xFFFFFE0C);
            RotateModel(59, SI_VAR(2), -1, 0.1005859375, 0.1005859375);
            sleep 1;
        }
        EnableModel(59, 0);
        ModifyColliderFlags(0, 25, 0x7FFFFE00);
        SI_SAVE_FLAG(1271) = 1;
        SI_FLAG(0) = 1;
        ResetCam(0, 5.0);
        DisablePlayerInput(0);
    } else {
        GetPushBlock(0, 17, 0, SI_VAR(0));
        if (SI_VAR(0) == 0) {
            SI_MAP_VAR(0) = 5;
            goto 1;
        }
    }
    SI_MAP_VAR(0) = 6;
1:
    spawn N(script_80240FB8);
    sleep 1;
    goto 0;
});

Script N(script_80241F5C) = SCRIPT({
    loop {
        GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetGridIndexFromPos(0, SI_VAR(0), SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4));
        SI_VAR(5) = 0;
        if (SI_MAP_VAR(0) == 0) {
            if (SI_VAR(3) == 28) {
                if (SI_VAR(4) == 6) {
                    SI_VAR(5) = 1;
                }
            }
        }
        if (SI_MAP_VAR(0) == 1) {
            if (SI_VAR(3) == 25) {
                if (SI_VAR(4) == 4) {
                    SI_VAR(5) = 1;
                }
            }
        }
        if (SI_MAP_VAR(0) == 2) {
            if (SI_VAR(3) == 21) {
                if (SI_VAR(4) == 8) {
                    SI_VAR(5) = 1;
                }
            }
        }
        if (SI_MAP_VAR(0) == 3) {
            if (SI_VAR(3) == 4) {
                if (SI_VAR(4) == 4) {
                    SI_VAR(5) = 1;
                }
            }
        }
        if (SI_MAP_VAR(0) == 4) {
            if (SI_VAR(3) == 14) {
                if (SI_VAR(4) == 6) {
                    SI_VAR(5) = 1;
                }
            }
        }
        if (SI_MAP_VAR(0) == 5) {
            if (SI_VAR(3) == 17) {
                if (SI_VAR(4) == 0) {
                    SI_VAR(5) = 1;
                }
            }
        }
        if (SI_MAP_VAR(0) == 5) {
            if (SI_VAR(3) == 16) {
                if (SI_VAR(4) == 0) {
                    SI_VAR(5) = 1;
                }
            }
        }
        if (SI_MAP_VAR(0) == 5) {
            if (SI_VAR(3) == 18) {
                if (SI_VAR(4) == 0) {
                    SI_VAR(5) = 1;
                }
            }
        }
        if (SI_MAP_VAR(0) == 5) {
            if (SI_VAR(3) == 19) {
                if (SI_VAR(4) == 0) {
                    SI_VAR(5) = 1;
                }
            }
        }
        if (SI_VAR(5) == 1) {
            DisablePlayerInput(1);
            func_802402B8_B76A68();
            0x802D2B6C();
            loop 10 {
                GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
                if (SI_VAR(4) < 40) {
                    SI_VAR(4) += 6;
                }
                SI_VAR(3) *= 10;
                SI_VAR(5) *= 10;
                SI_VAR(3) +=f SI_VAR(0);
                SI_VAR(5) +=f SI_VAR(2);
                SI_VAR(3) /= 11;
                SI_VAR(5) /= 11;
                SetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
                SetPlayerAnimation(0x1002E);
                sleep 1;
            }
            SetPlayerAnimation(0x10002);
            DisablePlayerInput(0);
        }
        sleep 1;
    }
});

Script N(script_80242438) = SCRIPT({
    CreatePushBlockGrid(0, 32, 12, 0xFFFFFE70, 0, 0xFFFFFF6A, 0);
    SetPushBlock(0, 7, 5, 1);
    SetPushBlock(0, 13, 9, 1);
    SetPushBlock(0, 16, 5, 1);
    SetPushBlock(0, 21, 2, 1);
    SetPushBlock(0, 22, 4, 1);
    SetPushBlock(0, 26, 6, 1);
    SetPushBlock(0, 27, 7, 1);
    SetPushBlock(0, 15, 0, 2);
    SetPushBlock(0, 16, 0, 2);
    SetPushBlock(0, 17, 0, 2);
    SetPushBlock(0, 18, 0, 2);
    SetPushBlock(0, 19, 0, 2);
    SetPushBlock(0, 15, 1, 2);
    SetPushBlock(0, 16, 1, 2);
    SetPushBlock(0, 17, 1, 2);
    SetPushBlock(0, 18, 1, 2);
    SetPushBlock(0, 19, 1, 2);
    SetPushBlock(0, 15, 2, 2);
    SetPushBlock(0, 16, 2, 2);
    SetPushBlock(0, 17, 2, 2);
    SetPushBlock(0, 18, 2, 2);
    SetPushBlock(0, 19, 2, 2);
    SI_VAR(0) = 0;
    loop 32 {
        SetPushBlock(0, SI_VAR(0), 0, 2);
        SI_VAR(0) += 1;
    }
    SI_VAR(0) = 0;
    loop 15 {
        SetPushBlock(0, SI_VAR(0), 1, 2);
        SI_VAR(0) += 1;
    }
    SI_VAR(0) = 20;
    loop 12 {
        SetPushBlock(0, SI_VAR(0), 1, 2);
        SI_VAR(0) += 1;
    }
    SI_VAR(0) = 0;
    loop 3 {
        SetPushBlock(0, SI_VAR(0), 2, 2);
        SI_VAR(0) += 1;
    }
    SI_VAR(0) = 10;
    loop 4 {
        SetPushBlock(0, SI_VAR(0), 2, 2);
        SI_VAR(0) += 1;
    }
    SI_VAR(0) = 26;
    loop 6 {
        SetPushBlock(0, SI_VAR(0), 2, 2);
        SI_VAR(0) += 1;
    }
    SI_VAR(0) = 0;
    loop 2 {
        SetPushBlock(0, SI_VAR(0), 3, 2);
        SI_VAR(0) += 1;
    }
    SI_VAR(0) = 10;
    loop 4 {
        SetPushBlock(0, SI_VAR(0), 3, 2);
        SI_VAR(0) += 1;
    }
    spawn N(script_80241154);
    SI_VAR(0) = 46;
    SI_VAR(1) = 0;
    SI_VAR(2) = 19;
    ModifyColliderFlags(0, SI_VAR(2), 0x7FFFFE00);
    spawn N(script_80240854);
    SI_VAR(0) = 48;
    SI_VAR(1) = 1;
    SI_VAR(2) = 20;
    ModifyColliderFlags(0, SI_VAR(2), 0x7FFFFE00);
    spawn N(script_80240854);
    SI_VAR(0) = 50;
    SI_VAR(1) = 2;
    SI_VAR(2) = 21;
    ModifyColliderFlags(0, SI_VAR(2), 0x7FFFFE00);
    spawn N(script_80240854);
    SI_VAR(0) = 52;
    SI_VAR(1) = 3;
    SI_VAR(2) = 22;
    ModifyColliderFlags(0, SI_VAR(2), 0x7FFFFE00);
    spawn N(script_80240854);
    SI_VAR(0) = 54;
    SI_VAR(1) = 4;
    SI_VAR(2) = 23;
    ModifyColliderFlags(0, SI_VAR(2), 0x7FFFFE00);
    spawn N(script_80240854);
    SI_VAR(0) = 56;
    SI_VAR(1) = 5;
    SI_VAR(2) = 26;
    ModifyColliderFlags(0, SI_VAR(2), 0x7FFFFE00);
    spawn N(script_80240ADC);
    spawn N(script_80241F5C);
    EnableTexPanning(46, 1);
    EnableTexPanning(48, 1);
    EnableTexPanning(50, 1);
    EnableTexPanning(52, 1);
    EnableTexPanning(54, 1);
    EnableTexPanning(56, 1);
    0x802C90FC(46, 0, -1);
    0x802C90FC(48, 0, -1);
    0x802C90FC(50, 0, -1);
    0x802C90FC(52, 0, -1);
    0x802C90FC(54, 0, -1);
    0x802C90FC(56, 0, -1);
    0x802C94A0(0, func_80240000_B767B0, 0);
    SI_VAR(0) = 0;
    loop {
        SI_VAR(0) -= 2000;
        if (SI_VAR(0) < 0xFFFF0000) {
            SI_VAR(0) += 0x10000;
        }
        SetTexPanOffset(1, 0, 0, SI_VAR(0));
        sleep 1;
    }
});

s32 pad_002D0C[] = {
    0x00000000,
};

// Unable to use DSL: DSL does not support script opcode 0x30
// *INDENT-OFF*
Script N(script_SearchBush_80242D10) = {
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(5), SI_VAR(15), SI_VAR(7)),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240400_B76BB0, SI_VAR(3), SI_FIXED(0.1005859375), 1, SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 339, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240400_B76BB0, SI_VAR(3), SI_FIXED(0.1005859375), -1, SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(5), SI_VAR(6), SI_VAR(7)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(10), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(10), SI_VAR(11)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(10), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(4), SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C84),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: DSL does not support script opcode 0x4C
// *INDENT-OFF*
Script N(script_ShakeTree_80243070) = {
    SI_CMD(ScriptOpcode_SET_TIMESCALE, SI_FIXED(2.0)),
    SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(0)),
    SI_CMD(ScriptOpcode_BUFFER_READ_4, SI_VAR(1), SI_VAR(2), SI_VAR(3), SI_VAR(4)),
    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
    SI_CMD(ScriptOpcode_CALL, GetPlayerPos, SI_VAR(6), SI_VAR(15), SI_VAR(8)),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 357),
    SI_CMD(ScriptOpcode_CALL, PlaySound, 358),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(1), 0),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240400_B76BB0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(3), 358, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_CALL, func_80240400_B76BB0, SI_VAR(3), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(1)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(2)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(3), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 0),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(2), 0),
            SI_CMD(ScriptOpcode_LOOP, 5),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80240400_B76BB0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(0.2001953125), SI_VAR(15), 0),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_FLAG(0), 0),
                        SI_CMD(ScriptOpcode_SET, SI_FLAG(0), 1),
                        SI_CMD(ScriptOpcode_CALL, PlaySoundAtModel, SI_VAR(4), 357, 0),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
                SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
                SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                    SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                    SI_CMD(ScriptOpcode_CALL, func_80240400_B76BB0, SI_VAR(4), SI_FIXED(0.1005859375), SI_FIXED(-0.19921875), SI_VAR(15), 0),
                SI_CMD(ScriptOpcode_END_LOOP),
                SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(2)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(3)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(3)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
                SI_CMD(ScriptOpcode_CALL, TranslateModel, SI_VAR(4), 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
            SI_CMD(ScriptOpcode_SLEEP_FRAMES, 1),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(3), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(3)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(4)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(4)),
                SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(9), SI_VAR(10), SI_VAR(11)),
                SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(11), 0),
                    SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                SI_CMD(ScriptOpcode_ELSE),
                    SI_CMD(ScriptOpcode_CALL, GetValueByRef, SI_VAR(11), SI_VAR(12)),
                    SI_CMD(ScriptOpcode_IF_EQ, SI_VAR(12), 0),
                        SI_CMD(ScriptOpcode_CALL, SetValueByRef, SI_VAR(11), 1),
                        SI_CMD(ScriptOpcode_CALL, DropItemEntity, SI_VAR(5), SI_VAR(6), SI_VAR(7), SI_VAR(8), SI_VAR(9), SI_VAR(10)),
                    SI_CMD(ScriptOpcode_END_IF),
                SI_CMD(ScriptOpcode_END_IF),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_SPAWN_THREAD),
        SI_CMD(ScriptOpcode_IF_NE, SI_VAR(4), 0),
            SI_CMD(ScriptOpcode_USE_BUFFER, SI_VAR(4)),
            SI_CMD(ScriptOpcode_BUFFER_READ_1, SI_VAR(5)),
            SI_CMD(ScriptOpcode_LOOP, SI_VAR(5)),
                SI_CMD(ScriptOpcode_BUFFER_READ_3, SI_VAR(6), SI_VAR(7), SI_VAR(8)),
                SI_CMD(ScriptOpcode_CALL, PlayEffect, 20, 0, SI_VAR(6), SI_VAR(7), SI_VAR(8), 100, 0, 0, 0, 0, 0, 0, 0, 0),
            SI_CMD(ScriptOpcode_END_LOOP),
        SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_END_SPAWN_THREAD),
    SI_CMD(ScriptOpcode_IF_NE, SI_VAR(5), 0),
        SI_CMD(ScriptOpcode_AWAIT_SCRIPT, 0xFE363C85),
    SI_CMD(ScriptOpcode_END_IF),
    SI_CMD(ScriptOpcode_SLEEP_FRAMES, 15),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

ModelIdList N(treeModelList_Tree1_Leaves) = {
    .count = 0x3,
    .modelIDs = { 0x15, 0x16, 0x17 },
};

ModelIdList N(treeModelList_Tree1_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0x14 },
};

s32 N(treeDropList_Tree1)[] = {
    0x00000001, 0x00000157, 0xFFFFFEB1, 0x00000064, 0xFFFFFFC9, 0x0000000F, 0xF840606D, 0x00000000,
};

TreeEffectVectorList N(treeEffectVectors_Tree1) = {
    .count = 0x2,
    .vectors = { { nan, 1.5974802493302915e-43, nan }, { nan, 1.5974802493302915e-43, nan } },
};

ShakeTree N(shakeTreeEvent_Tree1) = {
    .leaves = &N(treeModelList_Tree1_Leaves),
    .trunk = &N(treeModelList_Tree1_Trunk),
    .drops = &N(treeDropList_Tree1),
    .effectVectors = &N(treeEffectVectors_Tree1),
    .callback = NULL,
};

Vec4f N(triggerCoord_802436DC) =  { -348.0, 0.0, -107.0, 0.0 };

ModelIdList N(treeModelList_Tree2_Leaves) = {
    .count = 0x3,
    .modelIDs = { 0x10, 0x11, 0x12 },
};

ModelIdList N(treeModelList_Tree2_Trunk) = {
    .count = 0x1,
    .modelIDs = { 0xF },
};

TreeEffectVectorList N(treeEffectVectors_Tree2) = {
    .count = 0x2,
    .vectors = { { 3.699427945817517e-43, 1.5974802493302915e-43, nan }, { 4.8905316404936116e-43, 1.5974802493302915e-43, nan } },
};

ShakeTree N(shakeTreeEvent_Tree2) = {
    .leaves = &N(treeModelList_Tree2_Leaves),
    .trunk = &N(treeModelList_Tree2_Trunk),
    .drops = NULL,
    .effectVectors = &N(treeEffectVectors_Tree2),
    .callback = NULL,
};

Vec4f N(triggerCoord_80243734) =  { 304.0, 0.0, -111.0, 0.0 };

Script N(script_80243744) = SCRIPT({
    SI_VAR(0) = N(shakeTreeEvent_Tree1);
    bind N(script_ShakeTree_80243070) to TriggerFlag_WALL_HAMMER 16;
    bind N(script_ShakeTree_80243070) to TriggerFlag_BOMB N(triggerCoord_802436DC);
    SI_VAR(0) = N(shakeTreeEvent_Tree2);
    bind N(script_ShakeTree_80243070) to TriggerFlag_WALL_HAMMER 15;
    bind N(script_ShakeTree_80243070) to TriggerFlag_BOMB N(triggerCoord_80243734);
});

s32 pad_0037E4[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802BC7AC, 0xFFFFFF57, 0, 0xFFFFFF8D, 10, 0x80000000);
    MakeEntity(0x802EA588, 0xFFFFFF47, 85, 0xFFFFFFDD, 0, 139, 0x80000000);
    AssignBlockFlag(SI_SAVE_FLAG(1251));
    0x80111F2C(1);
});

s32 pad_00386C[] = {
    0x00000000,
};

// rodata: D_80243870_B7A020

// rodata: D_80243878_B7A028

// rodata: D_80243880_B7A030

// rodata: D_80243888_B7A038

// rodata: D_80243890_B7A040

// rodata: D_80243898_B7A048


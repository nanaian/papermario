#include "obk_04.h"

s32 pad_000044[3];
Script N(script_80240ED0);
Script N(script_80240F38);
s32 pad_000F74[3];
Script N(script_80240F80);
Script N(script_80240FA0);
Script N(script_80240FC0);
Script N(script_MakeEntities);
s32 pad_0011B8[2];
Script N(script_Idle_802411EC);
Script N(script_Idle_80241244);
Script N(script_8024129C);
Script N(script_Hit_80241330);
Script N(script_Hit_802413BC);
Script N(script_Hit_80241448);
Script N(script_Hit_802414D4);
Script N(script_Hit_80241560);
Script N(script_Hit_802415EC);
Script N(script_Hit_80241678);
Script N(script_Hit_80241704);
Script N(script_Init_80241790);
Script N(script_Init_802417DC);
Script N(script_Init_8024183C);
Script N(script_Init_8024189C);
Script N(script_Init_802418FC);
Script N(script_Init_8024195C);
Script N(script_Init_802419BC);
Script N(script_Init_80241A1C);
Script N(script_Init_80241A7C);
StaticNpc N(npcGroup_80241ADC)[1];
StaticNpc N(npcGroup_80241CCC)[1];
StaticNpc N(npcGroup_80241EBC)[1];
StaticNpc N(npcGroup_802420AC)[1];
StaticNpc N(npcGroup_8024229C)[1];
StaticNpc N(npcGroup_8024248C)[1];
StaticNpc N(npcGroup_8024267C)[1];
StaticNpc N(npcGroup_8024286C)[1];
StaticNpc N(npcGroup_80242A5C)[1];
Script N(script_Init_80242C4C);
Script N(script_Init_80242C5C);
Script N(script_Interact_80242C84);
Script N(script_Init_80242D44);
StaticNpc N(npcGroup_80242D9C)[2];
StaticNpc N(npcGroup_8024317C)[1];
NpcGroupList N(npcGroupList_8024336C);
s32 pad_0033FC[1];
Script N(script_EnterSingleDoor_80243400);
Script N(script_802437FC);
Script N(main);
Script N(script_802439C0);
s32 pad_003A0C[1];
s32 N(unk_80243A10)[1];
Script N(script_80243A14);
Script N(script_80243A44);
Script N(script_80243A74);
Script N(script_80243ADC);
Script N(script_80243C04);
Script N(script_80243D24);
Script N(script_80243DC8);
Script N(script_80243ED4);
Script N(script_802441AC);
s32 pad_0051C8[2];
const char D_802451D0_BCD030[8]; // "obk_03"
s32 pad_0051F8[2];

// text: func_80240000_BC7E60

s32 pad_000044[] = {
    0x00000000, 0x00000000, 0x00000000,
};

// text: func_80240050_BC7EB0

// text: func_802400D0_BC7F30

// text: func_80240198_BC7FF8

// text: func_8024022C_BC808C

// text: func_802402A0_BC8100

// text: func_802402F4_BC8154

// text: func_802405B4_BC8414

// text: func_80240624_BC8484

// text: func_80240910_BC8770

// text: func_80240940_BC87A0

// text: func_802409F4_BC8854

// text: func_80240A58_BC88B8

// text: func_80240C10_BC8A70

// text: func_80240CA0_BC8B00

// text: func_80240D00_BC8B60

// text: func_80240D14_BC8B74

// text: func_80240E58_BC8CB8

EntryList N(entryList) = {
    { -235.0f, 0.0f, 5.0f, 90.0f },
};

MapConfig N(header) = {
    .main = N(main),
    .entryList = N(entryList),
    .entryCount = ENTRY_COUNT(N(entryList)),
    .tattle = 0x1900B5,
};

Script N(script_80240ED0) = SCRIPT({
    if (SI_SAVE_VAR(0) < 0xFFFFFFF0) {
        SetMusicTrack(0, 27, 0, 8);
    } else {
        SetMusicTrack(0, 28, 0, 8);
    }
});

Script N(script_80240F38) = SCRIPT({
    0x802D5FF8(66, 1);
    sleep 130;
    0x802D5FD8();
});

s32 pad_000F74[] = {
    0x00000000, 0x00000000, 0x00000000,
};

Script N(script_80240F80) = SCRIPT({
    SI_SAVE_FLAG(968) = 1;
});

Script N(script_80240FA0) = SCRIPT({
    SI_SAVE_FLAG(969) = 1;
});

Script N(script_80240FC0) = SCRIPT({
    DisablePlayerInput(1);
    SI_SAVE_FLAG(967) = 1;
    spawn N(script_802441AC);
    DisablePlayerInput(0);
}
});

Script N(script_MakeEntities) = SCRIPT({
    MakeEntity(0x802EAE0C, 180, 0, 0xFFFFFF51, 0xFFFFFFF6, 0, 0x80000000);
    AssignFlag(SI_SAVE_FLAG(967));
    AssignScript(N(script_80240FC0));
    MakeItemEntity(362, 0, 0xFFFFFC18, 0, 1, 0);
    func_80240000_BC7E60();
    SI_MAP_VAR(0) = SI_VAR(0);
    if (SI_SAVE_FLAG(968) == 0) {
        MakeEntity(0x802BCE84, 0, 0, 0, 0, 0x80000000);
        AssignScript(N(script_80240F80));
    }
    MakeEntity(0x802EAED4, 0xFFFFFFC4, 0, 0xFFFFFF42, 0, 163, 0x80000000);
    AssignCrateFlag(SI_SAVE_FLAG(970));
    MakeEntity(0x802EAED4, 0xFFFFFFC4, 30, 0xFFFFFF42, 0, -1, 0x80000000);
    MakeEntity(0x802EAED4, 0xFFFFFFEC, 0, 0xFFFFFF42, 0, -1, 0x80000000);
    MakeEntity(0x802EAB04, 0xFFFFFF51, 0, 0xFFFFFFB5, 0, 0, 0x80000000);
    AssignPanelFlag(SI_SAVE_FLAG(972));
});

s32 pad_0011B8[] = {
    0x00000000, 0x00000000,
};

NpcSettings N(npcSettings_802411C0) = {
    .unk_00 = { 0, 0, 0, 0 },
    .height = 0x18,
    .radius = 0x18,
    .otherAI = NULL,
    .onInteract = NULL,
    .ai = NULL,
    .onHit = NULL,
    .aux = NULL,
    .onDefeat = NULL,
    .flags = 0,
    .unk_24 = { 0, 0, 0, 0 },
    .level = 0x63,
    .unk_2A = 0,
};

Script N(script_Idle_802411EC) = SCRIPT({
    sleep 4;
    func_80240050_BC7EB0();
10:
    func_802402F4_BC8154();
    sleep 1;
    goto 10;
});

Script N(script_Idle_80241244) = SCRIPT({
    sleep 5;
    func_802405B4_BC8414();
10:
    func_80240624_BC8484();
    sleep 1;
    goto 10;
});

Script N(script_8024129C) = SCRIPT({
    if (SI_MAP_VAR(5) == SI_VAR(0)) {
        SI_MAP_VAR(6) = 1;
    } else {
        SI_MAP_VAR(6) = 2;
    }
    spawn {
        SetNpcAnimation(-1, 0x950009);
        sleep 30;
        SetNpcAnimation(-1, 0x950001);
    }
});

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_80241330) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 1),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_802413BC) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 2),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 2),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_80241448) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 3),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 3),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_802414D4) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 4),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 4),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_80241560) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 5),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 5),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_802415EC) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 6),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 6),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_80241678) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 7),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 7),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

// Unable to use DSL: unexpected SI_END_MULTI_CASE
// *INDENT-OFF*
Script N(script_Hit_80241704) = {
    SI_CMD(ScriptOpcode_CALL, GetOwnerEncounterTrigger, SI_VAR(0)),
    SI_CMD(ScriptOpcode_MATCH, SI_VAR(0)),
        SI_CMD(ScriptOpcode_CASE_EQ, 4),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 8),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_CASE_EQ, 2),
            SI_CMD(ScriptOpcode_SET, SI_VAR(0), 8),
            SI_CMD(ScriptOpcode_AWAIT_SCRIPT, N(script_8024129C)),
        SI_CMD(ScriptOpcode_END_CASE_MULTI),
    SI_CMD(ScriptOpcode_END_MATCH),
    SI_CMD(ScriptOpcode_RETURN),
    SI_CMD(ScriptOpcode_END)
};
// *INDENT-ON*

Script N(script_Init_80241790) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_802411EC));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD8) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_802417DC) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241244));
    BindNpcHit(-1, N(script_Hit_80241330));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD8) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_8024183C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241244));
    BindNpcHit(-1, N(script_Hit_802413BC));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD8) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_8024189C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241244));
    BindNpcHit(-1, N(script_Hit_80241448));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD8) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_802418FC) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241244));
    BindNpcHit(-1, N(script_Hit_802414D4));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD8) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_8024195C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241244));
    BindNpcHit(-1, N(script_Hit_80241560));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD8) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_802419BC) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241244));
    BindNpcHit(-1, N(script_Hit_802415EC));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD8) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80241A1C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241244));
    BindNpcHit(-1, N(script_Hit_80241678));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD8) {
        RemoveNpc(-1);
    }
});

Script N(script_Init_80241A7C) = SCRIPT({
    BindNpcIdle(-1, N(script_Idle_80241244));
    BindNpcHit(-1, N(script_Hit_80241704));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD8) {
        RemoveNpc(-1);
    }
});

StaticNpc N(npcGroup_80241ADC)[] = {
    {
        .id = 0,
        .settings = &N(npcSettings_802411C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_80241790),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_80241CCC)[] = {
    {
        .id = 1,
        .settings = &N(npcSettings_802411C0),
        .pos = { 176.0, 0.0, -173.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_802417DC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_80241EBC)[] = {
    {
        .id = 2,
        .settings = &N(npcSettings_802411C0),
        .pos = { 176.0, 0.0, -173.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_8024183C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_802420AC)[] = {
    {
        .id = 3,
        .settings = &N(npcSettings_802411C0),
        .pos = { 176.0, 0.0, -173.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_8024189C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_8024229C)[] = {
    {
        .id = 4,
        .settings = &N(npcSettings_802411C0),
        .pos = { 176.0, 0.0, -173.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_802418FC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_8024248C)[] = {
    {
        .id = 5,
        .settings = &N(npcSettings_802411C0),
        .pos = { 176.0, 0.0, -173.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_8024195C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_8024267C)[] = {
    {
        .id = 6,
        .settings = &N(npcSettings_802411C0),
        .pos = { 176.0, 0.0, -173.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_802419BC),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_8024286C)[] = {
    {
        .id = 7,
        .settings = &N(npcSettings_802411C0),
        .pos = { 176.0, 0.0, -173.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_80241A1C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_80242A5C)[] = {
    {
        .id = 8,
        .settings = &N(npcSettings_802411C0),
        .pos = { 176.0, 0.0, -173.0 },
        .flags = 0x11300F00,
        .init = N(script_Init_80241A7C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

Script N(script_Init_80242C4C) = SCRIPT({

});

Script N(script_Init_80242C5C) = SCRIPT({
    SetNpcFlagBits(-1, 16, 1);
});

Script N(script_Interact_80242C84) = SCRIPT({
    if (SI_SAVE_FLAG(972) == 0) {
        SpeakToPlayer(11, 0x950004, 0x950001, 0, 0xE003F);
    } else {
        if (SI_SAVE_FLAG(971) == 0) {
            SpeakToPlayer(11, 0x950004, 0x950001, 0, 0xE0040);
            SI_SAVE_FLAG(971) = 1;
        } else {
            SpeakToPlayer(11, 0x950004, 0x950001, 0, 0xE0041);
        }
    }
});

Script N(script_Init_80242D44) = SCRIPT({
    BindNpcInteract(-1, N(script_Interact_80242C84));
    if (SI_SAVE_VAR(0) >= 0xFFFFFFD8) {
        SetNpcPos(11, 0xFFFFFF60, 10, 0xFFFFFF51);
    }
});

StaticNpc N(npcGroup_80242D9C)[] = {
    {
        .id = 9,
        .settings = &N(npcSettings_802411C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000F01,
        .init = N(script_Init_80242C4C),
        .yaw = 270,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
    {
        .id = 10,
        .settings = &N(npcSettings_802411C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00004F01,
        .init = N(script_Init_80242C5C),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
    },
};

StaticNpc N(npcGroup_8024317C)[] = {
    {
        .id = 11,
        .settings = &N(npcSettings_802411C0),
        .pos = { 0.0, -1000.0, 0.0 },
        .flags = 0x00000D01,
        .init = N(script_Init_80242D44),
        .yaw = 0,
        .dropFlags = 0x80,
        .animations = {
            0x00950001, 0x00950002, 0x00950003, 0x00950003, 0x00950001, 0x00950001, 0x00950000, 0x00950000, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003, 0x00950003,
        },
        .tattle = 0x1A00A9,
    },
};

NpcGroupList N(npcGroupList_8024336C) = {
    NPC_GROUP(N(npcGroup_80241ADC), 0x00000000),
    NPC_GROUP(N(npcGroup_80241CCC), 0x00000000),
    NPC_GROUP(N(npcGroup_80241EBC), 0x00000000),
    NPC_GROUP(N(npcGroup_802420AC), 0x00000000),
    NPC_GROUP(N(npcGroup_8024229C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024248C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024267C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024286C), 0x00000000),
    NPC_GROUP(N(npcGroup_80242A5C), 0x00000000),
    NPC_GROUP(N(npcGroup_80242D9C), 0x00000000),
    NPC_GROUP(N(npcGroup_8024317C), 0x00000000),
    {},
};

s32 pad_0033FC[] = {
    0x00000000,
};

Script N(script_EnterSingleDoor_80243400) = SCRIPT({
    GetEntryID(SI_VAR(0));
    match SI_VAR(0) {
        == 0 {
            spawn {
                sleep 10;
                GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
                SetPlayerSpeed(3.0);
                PlayerMoveTo(0xFFFFFF6A, SI_VAR(2), 0);
            }
            EnableModel(13, 0);
            EnableModel(15, 0);
            SI_VAR(2) = 11;
            SI_VAR(3) = -1;
            await EnterSingleDoor;
            EnableModel(13, 1);
            EnableModel(15, 1);
            sleep 20;
            MakeLerp(0, 0xFFFFFFA6, 15, 1);
            loop {
                UpdateLerp();
                RotateModel(11, SI_VAR(0), 0, 0, 1);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            PlayEffect(6, 1, 0xFFFFFF29, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            PlayEffect(6, 1, 0xFFFFFF29, 0, 0xFFFFFFE7, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            PlayEffect(6, 1, 0xFFFFFF38, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            PlayEffect(6, 1, 0xFFFFFF38, 0, 0xFFFFFFE7, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            PlayEffect(6, 1, 0xFFFFFF47, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            PlayEffect(6, 1, 0xFFFFFF47, 0, 0xFFFFFFE7, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            sleep 20;
            EnableModel(11, 0);
            MakeLerp(0, 10, 15, 0);
            loop {
                UpdateLerp();
                TranslateModel(13, SI_VAR(0), 0, 0);
                sleep 1;
                if (SI_VAR(1) == 0) {
                    break;
                }
            }
            EnableModel(16, 0);
        }
    }
});

Script N(script_802437FC) = SCRIPT({
    spawn {
        SetTexPanner(30, 0);
        SetTexPanner(31, 0);
        SI_VAR(0) = 0;
        SI_VAR(1) = 0;
    20:
        SI_VAR(0) += 300;
        SI_VAR(1) += 100;
        SetTexPanOffset(0, 0, SI_VAR(0), SI_VAR(1));
        sleep 1;
        goto 20;
    }
});

Script N(main) = SCRIPT({
    SI_SAVE_VAR(425) = 13;
    SetSpriteShading(-1);
    SetCamPerspective(0, 3, 25, 16, 4096);
    SetCamBGColor(0, 0, 0, 0);
    SetCamEnabled(0, 1);
    SetCamLeadPlayer(0, 0);
    MakeNpcs(0, N(npcGroupList_8024336C));
    await N(script_MakeEntities);
    spawn N(script_802439C0);
    spawn N(script_802437FC);
    spawn N(script_EnterSingleDoor_80243400);
    ModifyColliderFlags(0, 18, 0x7FFFFE00);
    spawn N(script_80240ED0);
});

Script N(script_802439C0) = SCRIPT({
    func_80240910_BC8770();
    DisablePlayerPhysics(1);
    GotoMap(D_802451D0_BCD030, 2);
    sleep 100;
});

s32 pad_003A0C[] = {
    0x00000000,
};

s32 N(unk_80243A10)[] = {
    0x00000000,
};

Script N(script_80243A14) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 0);
    return;
});

Script N(script_80243A44) = SCRIPT({
    ShowGotItem(SI_VAR(0), 1, 16);
    return;
});

Script N(script_80243A74) = SCRIPT({
    loop {
        GetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetItemPos(SI_MAP_VAR(0), SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
});

Script N(script_80243ADC) = SCRIPT({
    func_80240E58_BC8CB8();
    spawn {
        sleep 10;
        MakeLerp(255, 0, 10, 0);
        loop {
            UpdateLerp();
            0x802D721C(SI_MAP_VAR(0), SI_VAR(0));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    loop 20 {
        GetNpcPos(1, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        sleep 1;
    }
    SetNpcPos(10, 0, 0xFFFFFC18, 0);
});

Script N(script_80243C04) = SCRIPT({
    match SI_MAP_VAR(5) {
        == 0 {
            SI_MAP_VAR(7) = 0;
        }
        == 1 {
            SI_MAP_VAR(7) = 1;
        }
        == 2 {
            SI_MAP_VAR(7) = 2;
        }
        == 3 {
            SI_MAP_VAR(7) = 3;
        }
        == 4 {
            SI_MAP_VAR(7) = 4;
        }
        == 5 {
            SI_MAP_VAR(7) = 5;
        }
        == 6 {
            SI_MAP_VAR(7) = 6;
        }
        == 7 {
            SI_MAP_VAR(7) = 7;
        }
        == 8 {
            SI_MAP_VAR(7) = 8;
        }
    }
});

Script N(script_80243D24) = SCRIPT({
    sleep 10;
    MakeLerp(0, 255, 60, 0);
0:
    UpdateLerp();
    0x802CFD30(SI_VAR(10), 7, SI_VAR(0), 0, 0, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
});

Script N(script_80243DC8) = SCRIPT({
    SetNpcFlagBits(SI_VAR(10), 0x40000, 0);
    NpcFacePlayer(SI_VAR(10), 0);
    sleep 5;
    SetNpcAnimation(SI_VAR(10), 0x950008);
    sleep 10;
    MakeLerp(255, 0, 60, 0);
0:
    UpdateLerp();
    0x802CFD30(SI_VAR(10), 7, SI_VAR(0), 0, 0, 0);
    sleep 1;
    if (SI_VAR(1) == 1) {
        goto 0;
    }
    SetNpcPos(SI_VAR(10), 0, 0xFFFFFC18, 0);
});

Script N(script_80243ED4) = SCRIPT({
    spawn {
        AdjustCam(0, 8.0, 0, 300.0, 17.5, -9.5);
    }
    SetPlayerAnimation(0x6000C);
    GetPlayerPos(SI_VAR(5), SI_VAR(6), SI_VAR(7));
    SI_VAR(6) += 40;
    MakeItemEntity(2, SI_VAR(5), SI_VAR(6), SI_VAR(7), 1, 0);
    SI_VAR(12) = SI_VAR(0);
    SI_VAR(6) += 16;
    PlayEffect(27, 0, SI_VAR(5), SI_VAR(6), SI_VAR(7), 1.0, SI_VAR(8), 0, 0, 0, 0, 0, 0, 0);
    PlayEffect(51, 9, SI_VAR(5), SI_VAR(6), SI_VAR(7), 1.0, 100, 0, 0, 0, 0, 0, 0, 0);
    spawn {
        sleep 4;
        GetPlayerPos(SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SI_VAR(4) += 50;
        SI_VAR(5) += 2;
        SI_VAR(3) += 8;
        PlayEffect(17, 3, SI_VAR(3), SI_VAR(4), SI_VAR(5), 20, 0, 0, 0, 0, 0, 0, 0, 0);
        SI_VAR(3) += 0xFFFFFFF0;
        PlayEffect(17, 3, SI_VAR(3), SI_VAR(4), SI_VAR(5), 20, 0, 0, 0, 0, 0, 0, 0, 0);
    }
    loop {
        sleep 1;
        if (SI_MAP_FLAG(10) == 1) {
            break;
        }
    }
    0x802D7B44(SI_VAR(8));
    RemoveItemEntity(SI_VAR(12));
    SetPlayerAnimation(0x10002);
    spawn {
        ResetCam(0, 3);
    }
});

Script N(script_802441AC) = SCRIPT({
    DisablePlayerInput(1);
    SetMusicTrack(0, 141, 0, 8);
    spawn N(script_80243A74);
    sleep 1;
    spawn N(script_80243ADC);
    SI_MAP_VAR(1) = 1;
    sleep 30;
    SetPlayerAnimation(0x1002B);
    sleep 20;
    SetPlayerAnimation(0x10002);
    InterpPlayerYaw(270, 0);
    SetCamProperties(0, 2.0, 0, 0, 0, 400.0, 15.0, -7.0);
    sleep 60;
    SetCamProperties(0, 2.0, 0, 0, 0, 325.0, 13.0, -13.0);
    SetNpcPos(9, 0, 45, 20);
    SetNpcPos(10, 0, 65, 0);
    MakeLerp(0, 255, 30, 0);
    loop {
        UpdateLerp();
        0x802CFD30(9, 7, SI_VAR(0), 0, 0, 0);
        0x802D721C(SI_MAP_VAR(0), SI_VAR(0));
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SpeakToPlayer(9, 0x950004, 0x950001, 0, 0xE003A);
    SetCamProperties(0, 2.0, 0, 0, 0, 450.0, 15.0, -7.0);
    SpeakToPlayer(9, 0x950004, 0x950001, 0, 0xE003B);
    loop {
        sleep 1;
        if (SI_MAP_VAR(2) == 1) {
            break;
        }
    }
    SI_MAP_VAR(9) = 0;
100:
    SI_MAP_VAR(9) += 1;
    if (SI_MAP_VAR(9) >= 10) {
        SI_MAP_VAR(9) = 10;
    }
    SetCamProperties(0, 2.0, 0, 0, 0, 500.0, 15.0, -7.0);
    sleep 20;
    RandInt(7, SI_VAR(0));
    SI_MAP_VAR(4) = SI_VAR(0);
    SI_VAR(1) = 30;
    func_80240A58_BC88B8();
    func_80240C10_BC8A70();
    PlaySoundAtNpc(10, 1018, 0);
    SetNpcJumpscale(10, 1.0);
    NpcJump0(10, SI_VAR(0), SI_VAR(1), SI_VAR(2), 14);
    SetNpcPos(10, 0, 0xFFFFFC18, 0);
    sleep 30;
    spawn {
        MakeLerp(255, 0, 10, 0);
        loop {
            UpdateLerp();
            0x802CFD30(9, 7, SI_VAR(0), 0, 0, 0);
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
    }
    RandInt(4, SI_MAP_VAR(8));
    SI_MAP_VAR(8) += 6;
    loop {
        func_80240CA0_BC8B00();
        SetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        RandInt(7, SI_VAR(0));
        if (SI_MAP_VAR(4) == SI_VAR(0)) {
            SI_VAR(0) += 4;
            if (SI_VAR(0) >= 8) {
                SI_VAR(0) -= 8;
            }
        }
        SI_MAP_VAR(4) = SI_VAR(0);
        SI_VAR(1) = 30;
        func_80240A58_BC88B8();
        func_80240C10_BC8A70();
        PlaySoundAtNpc(10, 1018, 0);
        SetNpcJumpscale(10, 1.5);
        NpcJump0(10, SI_VAR(0), SI_VAR(1), SI_VAR(2), 14);
        SetNpcPos(10, 0, 0xFFFFFC18, 0);
        RandInt(10, SI_VAR(0));
        SI_VAR(0) += 5;
        sleep SI_VAR(0);
        SI_MAP_VAR(8) += -1;
        if (SI_MAP_VAR(8) == 0) {
            break;
        }
    }
    SI_MAP_VAR(3) = 3;
    RandInt(50, SI_VAR(0));
    SI_VAR(0) += 100;
    sleep SI_VAR(0);
    MakeLerp(0, 255, 10, 0);
    loop {
        UpdateLerp();
        0x802CFD30(9, 7, SI_VAR(0), 0, 0, 0);
        sleep 1;
        if (SI_VAR(1) == 0) {
            break;
        }
    }
    SpeakToPlayer(9, 0x950004, 0x950001, 5, 0xE003C);
    DisablePlayerInput(0);
    PanToTarget(0, 0, 0);
    loop {
        sleep 1;
        if (SI_MAP_VAR(6) != 0) {
            break;
        }
    }
    SI_MAP_VAR(3) = 1;
    DisablePlayerInput(1);
    if (SI_MAP_VAR(6) == 2) {
        sleep 20;
        SetCamProperties(0, 2.0, 0, 0, 0, 450.0, 15.0, -7.0);
        sleep 30;
        await N(script_80243C04);
        GetNpcPos(SI_MAP_VAR(7), SI_VAR(0), SI_VAR(1), SI_VAR(2));
        SetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
        GetNpcPos(10, SI_VAR(3), SI_VAR(4), SI_VAR(5));
        SI_VAR(6) = 25;
        SI_VAR(6) += SI_VAR(4);
        MakeLerp(SI_VAR(4), SI_VAR(6), 20, 0);
        loop {
            UpdateLerp();
            SetNpcPos(10, SI_VAR(3), SI_VAR(0), SI_VAR(5));
            sleep 1;
            if (SI_VAR(1) == 0) {
                break;
            }
        }
        SpeakToPlayer(SI_MAP_VAR(7), 0x950004, 0x950001, 5, 0xE003E);
        PlaySoundAtNpc(10, 1018, 0);
        SetNpcJumpscale(10, 2.0);
        NpcJump0(10, 0, 65, 0, 10);
        SpeakToPlayer(9, 0x950004, 0x950001, 5, 0xE003B);
        SI_MAP_VAR(6) = 0;
        SI_MAP_VAR(3) = 0;
        func_80240D14_BC8B74();
        SetPlayerSpeed(4.0);
        PlayerMoveTo(SI_VAR(0), SI_VAR(2), 0);
        sleep 30;
        goto 100;
    }
    loop {
        GetPlayerActionState(SI_VAR(0));
        sleep 1;
        if (SI_VAR(0) == 0) {
            break;
        }
    }
    await N(script_80243C04);
    GetNpcPos(SI_MAP_VAR(7), SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 20;
    SetNpcPos(10, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPlayerAnimation(0x10002);
    sleep 1;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SI_VAR(1) += 30;
    PlaySoundAtNpc(10, 1018, 0);
    SetNpcJumpscale(10, 2.0);
    NpcJump0(10, SI_VAR(0), SI_VAR(1), SI_VAR(2), 10);
    sleep 10;
    SetNpcPos(10, 0, 0xFFFFFC18, 0);
    sleep 1;
    SI_MAP_FLAG(10) = 0;
    spawn N(script_80240F38);
    spawn N(script_80243ED4);
    func_80240D00_BC8B60();
    sleep 30;
    ShowMessageAtScreenPos(0x1D0180, 160, 40);
    SI_MAP_FLAG(10) = 1;
    sleep 30;
    func_80240D14_BC8B74();
    SetPlayerSpeed(4.0);
    PlayerMoveTo(SI_VAR(0), SI_VAR(2), 0);
    sleep 20;
    GetNpcPos(9, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 350.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    SpeakToPlayer(9, 0x950004, 0x950001, 0, 0xE003D);
    UseSettingsFrom(0, 0, 0, 0);
    SetPanTarget(0, 0, 0, 0);
    SetCamDistance(0, 450.0);
    SetCamSpeed(0, 4.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    sleep 20;
    spawn {
        sleep 30;
        PlaySound(71);
    }
    SI_VAR(10) = 1;
    spawn N(script_80243DC8);
    SI_VAR(10) = 2;
    spawn N(script_80243DC8);
    SI_VAR(10) = 3;
    spawn N(script_80243DC8);
    SI_VAR(10) = 4;
    spawn N(script_80243DC8);
    SI_VAR(10) = 5;
    spawn N(script_80243DC8);
    SI_VAR(10) = 6;
    spawn N(script_80243DC8);
    SI_VAR(10) = 7;
    spawn N(script_80243DC8);
    SI_VAR(10) = 8;
    spawn N(script_80243DC8);
    SI_VAR(10) = 9;
    spawn N(script_80243DC8);
    sleep 60;
    SetNpcPos(11, 0xFFFFFF60, 10, 0xFFFFFF51);
    0x802CFD30(11, 7, 0, 0, 0, 0);
    SI_VAR(10) = 11;
    spawn N(script_80243D24);
    sleep 60;
    GetPlayerPos(SI_VAR(0), SI_VAR(1), SI_VAR(2));
    UseSettingsFrom(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetPanTarget(0, SI_VAR(0), SI_VAR(1), SI_VAR(2));
    SetCamDistance(0, 450.0);
    SetCamSpeed(0, 2.0);
    PanToTarget(0, 0, 1);
    WaitForCam(0, 1.0);
    PanToTarget(0, 0, 0);
    sleep 20;
    SI_SAVE_VAR(0) = 0xFFFFFFD8;
    DisablePlayerInput(0);
});

s32 pad_0051C8[] = {
    0x00000000, 0x00000000,
};

// rodata: D_802451D0_BCD030

// rodata: jtbl_802451D8_BCD038

s32 pad_0051F8[] = {
    0x00000000, 0x00000000,
};

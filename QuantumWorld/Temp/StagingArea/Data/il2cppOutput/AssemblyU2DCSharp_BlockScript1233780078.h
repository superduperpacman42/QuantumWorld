#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2243626319;
// BlockScript
struct BlockScript_t1233780078;
// LevelupScript
struct LevelupScript_t560371436;
// PortalScript
struct PortalScript_t3475973373;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlockScript
struct  BlockScript_t1233780078  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 BlockScript::target
	Vector3_t2243707580  ___target_2;
	// System.Single BlockScript::speed
	float ___speed_3;
	// System.Int32 BlockScript::color
	int32_t ___color_4;
	// UnityEngine.Texture BlockScript::blue
	Texture_t2243626319 * ___blue_5;
	// UnityEngine.Texture BlockScript::red
	Texture_t2243626319 * ___red_6;
	// UnityEngine.Texture BlockScript::purple
	Texture_t2243626319 * ___purple_7;
	// UnityEngine.Texture BlockScript::blue2
	Texture_t2243626319 * ___blue2_8;
	// UnityEngine.Texture BlockScript::red2
	Texture_t2243626319 * ___red2_9;
	// UnityEngine.Texture BlockScript::purple2
	Texture_t2243626319 * ___purple2_10;
	// BlockScript BlockScript::entangled
	BlockScript_t1233780078 * ___entangled_11;
	// System.Boolean BlockScript::readyToEntangle
	bool ___readyToEntangle_12;
	// System.Int32 BlockScript::priority
	int32_t ___priority_13;
	// System.Int32 BlockScript::startPriority
	int32_t ___startPriority_14;
	// System.Int32 BlockScript::bias
	int32_t ___bias_15;
	// LevelupScript BlockScript::levelup
	LevelupScript_t560371436 * ___levelup_16;
	// System.Boolean BlockScript::checkState
	bool ___checkState_17;
	// UnityEngine.Vector3 BlockScript::startPos
	Vector3_t2243707580  ___startPos_18;
	// System.Int32 BlockScript::startColor
	int32_t ___startColor_19;
	// System.Boolean BlockScript::redGate
	bool ___redGate_20;
	// System.Boolean BlockScript::blueGate
	bool ___blueGate_21;
	// System.Boolean BlockScript::purpleGate
	bool ___purpleGate_22;
	// System.Int32 BlockScript::portal
	int32_t ___portal_23;
	// System.Boolean BlockScript::redGate0
	bool ___redGate0_24;
	// System.Boolean BlockScript::blueGate0
	bool ___blueGate0_25;
	// System.Boolean BlockScript::purpleGate0
	bool ___purpleGate0_26;
	// System.Int32 BlockScript::portal0
	int32_t ___portal0_27;
	// PortalScript BlockScript::redPortal
	PortalScript_t3475973373 * ___redPortal_28;
	// PortalScript BlockScript::bluePortal
	PortalScript_t3475973373 * ___bluePortal_29;
	// PortalScript BlockScript::purplePortal
	PortalScript_t3475973373 * ___purplePortal_30;
	// System.Int32 BlockScript::justTeleported
	int32_t ___justTeleported_31;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___target_2)); }
	inline Vector3_t2243707580  get_target_2() const { return ___target_2; }
	inline Vector3_t2243707580 * get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Vector3_t2243707580  value)
	{
		___target_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___color_4)); }
	inline int32_t get_color_4() const { return ___color_4; }
	inline int32_t* get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(int32_t value)
	{
		___color_4 = value;
	}

	inline static int32_t get_offset_of_blue_5() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___blue_5)); }
	inline Texture_t2243626319 * get_blue_5() const { return ___blue_5; }
	inline Texture_t2243626319 ** get_address_of_blue_5() { return &___blue_5; }
	inline void set_blue_5(Texture_t2243626319 * value)
	{
		___blue_5 = value;
		Il2CppCodeGenWriteBarrier(&___blue_5, value);
	}

	inline static int32_t get_offset_of_red_6() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___red_6)); }
	inline Texture_t2243626319 * get_red_6() const { return ___red_6; }
	inline Texture_t2243626319 ** get_address_of_red_6() { return &___red_6; }
	inline void set_red_6(Texture_t2243626319 * value)
	{
		___red_6 = value;
		Il2CppCodeGenWriteBarrier(&___red_6, value);
	}

	inline static int32_t get_offset_of_purple_7() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___purple_7)); }
	inline Texture_t2243626319 * get_purple_7() const { return ___purple_7; }
	inline Texture_t2243626319 ** get_address_of_purple_7() { return &___purple_7; }
	inline void set_purple_7(Texture_t2243626319 * value)
	{
		___purple_7 = value;
		Il2CppCodeGenWriteBarrier(&___purple_7, value);
	}

	inline static int32_t get_offset_of_blue2_8() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___blue2_8)); }
	inline Texture_t2243626319 * get_blue2_8() const { return ___blue2_8; }
	inline Texture_t2243626319 ** get_address_of_blue2_8() { return &___blue2_8; }
	inline void set_blue2_8(Texture_t2243626319 * value)
	{
		___blue2_8 = value;
		Il2CppCodeGenWriteBarrier(&___blue2_8, value);
	}

	inline static int32_t get_offset_of_red2_9() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___red2_9)); }
	inline Texture_t2243626319 * get_red2_9() const { return ___red2_9; }
	inline Texture_t2243626319 ** get_address_of_red2_9() { return &___red2_9; }
	inline void set_red2_9(Texture_t2243626319 * value)
	{
		___red2_9 = value;
		Il2CppCodeGenWriteBarrier(&___red2_9, value);
	}

	inline static int32_t get_offset_of_purple2_10() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___purple2_10)); }
	inline Texture_t2243626319 * get_purple2_10() const { return ___purple2_10; }
	inline Texture_t2243626319 ** get_address_of_purple2_10() { return &___purple2_10; }
	inline void set_purple2_10(Texture_t2243626319 * value)
	{
		___purple2_10 = value;
		Il2CppCodeGenWriteBarrier(&___purple2_10, value);
	}

	inline static int32_t get_offset_of_entangled_11() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___entangled_11)); }
	inline BlockScript_t1233780078 * get_entangled_11() const { return ___entangled_11; }
	inline BlockScript_t1233780078 ** get_address_of_entangled_11() { return &___entangled_11; }
	inline void set_entangled_11(BlockScript_t1233780078 * value)
	{
		___entangled_11 = value;
		Il2CppCodeGenWriteBarrier(&___entangled_11, value);
	}

	inline static int32_t get_offset_of_readyToEntangle_12() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___readyToEntangle_12)); }
	inline bool get_readyToEntangle_12() const { return ___readyToEntangle_12; }
	inline bool* get_address_of_readyToEntangle_12() { return &___readyToEntangle_12; }
	inline void set_readyToEntangle_12(bool value)
	{
		___readyToEntangle_12 = value;
	}

	inline static int32_t get_offset_of_priority_13() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___priority_13)); }
	inline int32_t get_priority_13() const { return ___priority_13; }
	inline int32_t* get_address_of_priority_13() { return &___priority_13; }
	inline void set_priority_13(int32_t value)
	{
		___priority_13 = value;
	}

	inline static int32_t get_offset_of_startPriority_14() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___startPriority_14)); }
	inline int32_t get_startPriority_14() const { return ___startPriority_14; }
	inline int32_t* get_address_of_startPriority_14() { return &___startPriority_14; }
	inline void set_startPriority_14(int32_t value)
	{
		___startPriority_14 = value;
	}

	inline static int32_t get_offset_of_bias_15() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___bias_15)); }
	inline int32_t get_bias_15() const { return ___bias_15; }
	inline int32_t* get_address_of_bias_15() { return &___bias_15; }
	inline void set_bias_15(int32_t value)
	{
		___bias_15 = value;
	}

	inline static int32_t get_offset_of_levelup_16() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___levelup_16)); }
	inline LevelupScript_t560371436 * get_levelup_16() const { return ___levelup_16; }
	inline LevelupScript_t560371436 ** get_address_of_levelup_16() { return &___levelup_16; }
	inline void set_levelup_16(LevelupScript_t560371436 * value)
	{
		___levelup_16 = value;
		Il2CppCodeGenWriteBarrier(&___levelup_16, value);
	}

	inline static int32_t get_offset_of_checkState_17() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___checkState_17)); }
	inline bool get_checkState_17() const { return ___checkState_17; }
	inline bool* get_address_of_checkState_17() { return &___checkState_17; }
	inline void set_checkState_17(bool value)
	{
		___checkState_17 = value;
	}

	inline static int32_t get_offset_of_startPos_18() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___startPos_18)); }
	inline Vector3_t2243707580  get_startPos_18() const { return ___startPos_18; }
	inline Vector3_t2243707580 * get_address_of_startPos_18() { return &___startPos_18; }
	inline void set_startPos_18(Vector3_t2243707580  value)
	{
		___startPos_18 = value;
	}

	inline static int32_t get_offset_of_startColor_19() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___startColor_19)); }
	inline int32_t get_startColor_19() const { return ___startColor_19; }
	inline int32_t* get_address_of_startColor_19() { return &___startColor_19; }
	inline void set_startColor_19(int32_t value)
	{
		___startColor_19 = value;
	}

	inline static int32_t get_offset_of_redGate_20() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___redGate_20)); }
	inline bool get_redGate_20() const { return ___redGate_20; }
	inline bool* get_address_of_redGate_20() { return &___redGate_20; }
	inline void set_redGate_20(bool value)
	{
		___redGate_20 = value;
	}

	inline static int32_t get_offset_of_blueGate_21() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___blueGate_21)); }
	inline bool get_blueGate_21() const { return ___blueGate_21; }
	inline bool* get_address_of_blueGate_21() { return &___blueGate_21; }
	inline void set_blueGate_21(bool value)
	{
		___blueGate_21 = value;
	}

	inline static int32_t get_offset_of_purpleGate_22() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___purpleGate_22)); }
	inline bool get_purpleGate_22() const { return ___purpleGate_22; }
	inline bool* get_address_of_purpleGate_22() { return &___purpleGate_22; }
	inline void set_purpleGate_22(bool value)
	{
		___purpleGate_22 = value;
	}

	inline static int32_t get_offset_of_portal_23() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___portal_23)); }
	inline int32_t get_portal_23() const { return ___portal_23; }
	inline int32_t* get_address_of_portal_23() { return &___portal_23; }
	inline void set_portal_23(int32_t value)
	{
		___portal_23 = value;
	}

	inline static int32_t get_offset_of_redGate0_24() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___redGate0_24)); }
	inline bool get_redGate0_24() const { return ___redGate0_24; }
	inline bool* get_address_of_redGate0_24() { return &___redGate0_24; }
	inline void set_redGate0_24(bool value)
	{
		___redGate0_24 = value;
	}

	inline static int32_t get_offset_of_blueGate0_25() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___blueGate0_25)); }
	inline bool get_blueGate0_25() const { return ___blueGate0_25; }
	inline bool* get_address_of_blueGate0_25() { return &___blueGate0_25; }
	inline void set_blueGate0_25(bool value)
	{
		___blueGate0_25 = value;
	}

	inline static int32_t get_offset_of_purpleGate0_26() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___purpleGate0_26)); }
	inline bool get_purpleGate0_26() const { return ___purpleGate0_26; }
	inline bool* get_address_of_purpleGate0_26() { return &___purpleGate0_26; }
	inline void set_purpleGate0_26(bool value)
	{
		___purpleGate0_26 = value;
	}

	inline static int32_t get_offset_of_portal0_27() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___portal0_27)); }
	inline int32_t get_portal0_27() const { return ___portal0_27; }
	inline int32_t* get_address_of_portal0_27() { return &___portal0_27; }
	inline void set_portal0_27(int32_t value)
	{
		___portal0_27 = value;
	}

	inline static int32_t get_offset_of_redPortal_28() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___redPortal_28)); }
	inline PortalScript_t3475973373 * get_redPortal_28() const { return ___redPortal_28; }
	inline PortalScript_t3475973373 ** get_address_of_redPortal_28() { return &___redPortal_28; }
	inline void set_redPortal_28(PortalScript_t3475973373 * value)
	{
		___redPortal_28 = value;
		Il2CppCodeGenWriteBarrier(&___redPortal_28, value);
	}

	inline static int32_t get_offset_of_bluePortal_29() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___bluePortal_29)); }
	inline PortalScript_t3475973373 * get_bluePortal_29() const { return ___bluePortal_29; }
	inline PortalScript_t3475973373 ** get_address_of_bluePortal_29() { return &___bluePortal_29; }
	inline void set_bluePortal_29(PortalScript_t3475973373 * value)
	{
		___bluePortal_29 = value;
		Il2CppCodeGenWriteBarrier(&___bluePortal_29, value);
	}

	inline static int32_t get_offset_of_purplePortal_30() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___purplePortal_30)); }
	inline PortalScript_t3475973373 * get_purplePortal_30() const { return ___purplePortal_30; }
	inline PortalScript_t3475973373 ** get_address_of_purplePortal_30() { return &___purplePortal_30; }
	inline void set_purplePortal_30(PortalScript_t3475973373 * value)
	{
		___purplePortal_30 = value;
		Il2CppCodeGenWriteBarrier(&___purplePortal_30, value);
	}

	inline static int32_t get_offset_of_justTeleported_31() { return static_cast<int32_t>(offsetof(BlockScript_t1233780078, ___justTeleported_31)); }
	inline int32_t get_justTeleported_31() const { return ___justTeleported_31; }
	inline int32_t* get_address_of_justTeleported_31() { return &___justTeleported_31; }
	inline void set_justTeleported_31(int32_t value)
	{
		___justTeleported_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.LineRenderer
struct LineRenderer_t849157671;
// BlockScript
struct BlockScript_t1233780078;
// BlockScript[]
struct BlockScriptU5BU5D_t3235342619;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shoot
struct  Shoot_t1969313953  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Shoot::weaponRange
	float ___weaponRange_2;
	// UnityEngine.Transform Shoot::player
	Transform_t3275118058 * ___player_3;
	// UnityEngine.Camera Shoot::fpsCam
	Camera_t189460977 * ___fpsCam_4;
	// UnityEngine.LineRenderer Shoot::laserLine
	LineRenderer_t849157671 * ___laserLine_5;
	// System.Single Shoot::nextFire
	float ___nextFire_6;
	// UnityEngine.Vector3 Shoot::direction
	Vector3_t2243707580  ___direction_7;
	// BlockScript Shoot::block
	BlockScript_t1233780078 * ___block_8;
	// BlockScript[] Shoot::lastEntangled
	BlockScriptU5BU5D_t3235342619* ___lastEntangled_9;

public:
	inline static int32_t get_offset_of_weaponRange_2() { return static_cast<int32_t>(offsetof(Shoot_t1969313953, ___weaponRange_2)); }
	inline float get_weaponRange_2() const { return ___weaponRange_2; }
	inline float* get_address_of_weaponRange_2() { return &___weaponRange_2; }
	inline void set_weaponRange_2(float value)
	{
		___weaponRange_2 = value;
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(Shoot_t1969313953, ___player_3)); }
	inline Transform_t3275118058 * get_player_3() const { return ___player_3; }
	inline Transform_t3275118058 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(Transform_t3275118058 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}

	inline static int32_t get_offset_of_fpsCam_4() { return static_cast<int32_t>(offsetof(Shoot_t1969313953, ___fpsCam_4)); }
	inline Camera_t189460977 * get_fpsCam_4() const { return ___fpsCam_4; }
	inline Camera_t189460977 ** get_address_of_fpsCam_4() { return &___fpsCam_4; }
	inline void set_fpsCam_4(Camera_t189460977 * value)
	{
		___fpsCam_4 = value;
		Il2CppCodeGenWriteBarrier(&___fpsCam_4, value);
	}

	inline static int32_t get_offset_of_laserLine_5() { return static_cast<int32_t>(offsetof(Shoot_t1969313953, ___laserLine_5)); }
	inline LineRenderer_t849157671 * get_laserLine_5() const { return ___laserLine_5; }
	inline LineRenderer_t849157671 ** get_address_of_laserLine_5() { return &___laserLine_5; }
	inline void set_laserLine_5(LineRenderer_t849157671 * value)
	{
		___laserLine_5 = value;
		Il2CppCodeGenWriteBarrier(&___laserLine_5, value);
	}

	inline static int32_t get_offset_of_nextFire_6() { return static_cast<int32_t>(offsetof(Shoot_t1969313953, ___nextFire_6)); }
	inline float get_nextFire_6() const { return ___nextFire_6; }
	inline float* get_address_of_nextFire_6() { return &___nextFire_6; }
	inline void set_nextFire_6(float value)
	{
		___nextFire_6 = value;
	}

	inline static int32_t get_offset_of_direction_7() { return static_cast<int32_t>(offsetof(Shoot_t1969313953, ___direction_7)); }
	inline Vector3_t2243707580  get_direction_7() const { return ___direction_7; }
	inline Vector3_t2243707580 * get_address_of_direction_7() { return &___direction_7; }
	inline void set_direction_7(Vector3_t2243707580  value)
	{
		___direction_7 = value;
	}

	inline static int32_t get_offset_of_block_8() { return static_cast<int32_t>(offsetof(Shoot_t1969313953, ___block_8)); }
	inline BlockScript_t1233780078 * get_block_8() const { return ___block_8; }
	inline BlockScript_t1233780078 ** get_address_of_block_8() { return &___block_8; }
	inline void set_block_8(BlockScript_t1233780078 * value)
	{
		___block_8 = value;
		Il2CppCodeGenWriteBarrier(&___block_8, value);
	}

	inline static int32_t get_offset_of_lastEntangled_9() { return static_cast<int32_t>(offsetof(Shoot_t1969313953, ___lastEntangled_9)); }
	inline BlockScriptU5BU5D_t3235342619* get_lastEntangled_9() const { return ___lastEntangled_9; }
	inline BlockScriptU5BU5D_t3235342619** get_address_of_lastEntangled_9() { return &___lastEntangled_9; }
	inline void set_lastEntangled_9(BlockScriptU5BU5D_t3235342619* value)
	{
		___lastEntangled_9 = value;
		Il2CppCodeGenWriteBarrier(&___lastEntangled_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

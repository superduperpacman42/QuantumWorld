#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OverlayScript
struct  OverlayScript_t4230540291  : public MonoBehaviour_t1158329972
{
public:
	// System.Single OverlayScript::delay
	float ___delay_2;
	// System.Single OverlayScript::t
	float ___t_3;
	// System.Boolean OverlayScript::moved
	bool ___moved_4;
	// UnityEngine.GameObject OverlayScript::next
	GameObject_t1756533147 * ___next_5;

public:
	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(OverlayScript_t4230540291, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_t_3() { return static_cast<int32_t>(offsetof(OverlayScript_t4230540291, ___t_3)); }
	inline float get_t_3() const { return ___t_3; }
	inline float* get_address_of_t_3() { return &___t_3; }
	inline void set_t_3(float value)
	{
		___t_3 = value;
	}

	inline static int32_t get_offset_of_moved_4() { return static_cast<int32_t>(offsetof(OverlayScript_t4230540291, ___moved_4)); }
	inline bool get_moved_4() const { return ___moved_4; }
	inline bool* get_address_of_moved_4() { return &___moved_4; }
	inline void set_moved_4(bool value)
	{
		___moved_4 = value;
	}

	inline static int32_t get_offset_of_next_5() { return static_cast<int32_t>(offsetof(OverlayScript_t4230540291, ___next_5)); }
	inline GameObject_t1756533147 * get_next_5() const { return ___next_5; }
	inline GameObject_t1756533147 ** get_address_of_next_5() { return &___next_5; }
	inline void set_next_5(GameObject_t1756533147 * value)
	{
		___next_5 = value;
		Il2CppCodeGenWriteBarrier(&___next_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointerScript
struct  PointerScript_t2340353566  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PointerScript::delay
	float ___delay_2;
	// System.Single PointerScript::t
	float ___t_3;
	// System.Boolean PointerScript::moved
	bool ___moved_4;
	// UnityEngine.Vector3 PointerScript::startPos
	Vector3_t2243707580  ___startPos_5;

public:
	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(PointerScript_t2340353566, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_t_3() { return static_cast<int32_t>(offsetof(PointerScript_t2340353566, ___t_3)); }
	inline float get_t_3() const { return ___t_3; }
	inline float* get_address_of_t_3() { return &___t_3; }
	inline void set_t_3(float value)
	{
		___t_3 = value;
	}

	inline static int32_t get_offset_of_moved_4() { return static_cast<int32_t>(offsetof(PointerScript_t2340353566, ___moved_4)); }
	inline bool get_moved_4() const { return ___moved_4; }
	inline bool* get_address_of_moved_4() { return &___moved_4; }
	inline void set_moved_4(bool value)
	{
		___moved_4 = value;
	}

	inline static int32_t get_offset_of_startPos_5() { return static_cast<int32_t>(offsetof(PointerScript_t2340353566, ___startPos_5)); }
	inline Vector3_t2243707580  get_startPos_5() const { return ___startPos_5; }
	inline Vector3_t2243707580 * get_address_of_startPos_5() { return &___startPos_5; }
	inline void set_startPos_5(Vector3_t2243707580  value)
	{
		___startPos_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

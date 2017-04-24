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
// Shoot
struct Shoot_t1969313953;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartLevelScript
struct  StartLevelScript_t1418560819  : public MonoBehaviour_t1158329972
{
public:
	// System.Single StartLevelScript::delay
	float ___delay_2;
	// UnityEngine.GameObject StartLevelScript::title
	GameObject_t1756533147 * ___title_3;
	// UnityEngine.GameObject StartLevelScript::text
	GameObject_t1756533147 * ___text_4;
	// UnityEngine.GameObject StartLevelScript::background
	GameObject_t1756533147 * ___background_5;
	// UnityEngine.GameObject StartLevelScript::pointer
	GameObject_t1756533147 * ___pointer_6;
	// Shoot StartLevelScript::shoot
	Shoot_t1969313953 * ___shoot_7;
	// System.Single StartLevelScript::t
	float ___t_8;
	// System.Boolean StartLevelScript::done
	bool ___done_9;
	// UnityEngine.Vector3 StartLevelScript::startPos
	Vector3_t2243707580  ___startPos_10;
	// System.Boolean StartLevelScript::reallyDone
	bool ___reallyDone_11;

public:
	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(StartLevelScript_t1418560819, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}

	inline static int32_t get_offset_of_title_3() { return static_cast<int32_t>(offsetof(StartLevelScript_t1418560819, ___title_3)); }
	inline GameObject_t1756533147 * get_title_3() const { return ___title_3; }
	inline GameObject_t1756533147 ** get_address_of_title_3() { return &___title_3; }
	inline void set_title_3(GameObject_t1756533147 * value)
	{
		___title_3 = value;
		Il2CppCodeGenWriteBarrier(&___title_3, value);
	}

	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(StartLevelScript_t1418560819, ___text_4)); }
	inline GameObject_t1756533147 * get_text_4() const { return ___text_4; }
	inline GameObject_t1756533147 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(GameObject_t1756533147 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier(&___text_4, value);
	}

	inline static int32_t get_offset_of_background_5() { return static_cast<int32_t>(offsetof(StartLevelScript_t1418560819, ___background_5)); }
	inline GameObject_t1756533147 * get_background_5() const { return ___background_5; }
	inline GameObject_t1756533147 ** get_address_of_background_5() { return &___background_5; }
	inline void set_background_5(GameObject_t1756533147 * value)
	{
		___background_5 = value;
		Il2CppCodeGenWriteBarrier(&___background_5, value);
	}

	inline static int32_t get_offset_of_pointer_6() { return static_cast<int32_t>(offsetof(StartLevelScript_t1418560819, ___pointer_6)); }
	inline GameObject_t1756533147 * get_pointer_6() const { return ___pointer_6; }
	inline GameObject_t1756533147 ** get_address_of_pointer_6() { return &___pointer_6; }
	inline void set_pointer_6(GameObject_t1756533147 * value)
	{
		___pointer_6 = value;
		Il2CppCodeGenWriteBarrier(&___pointer_6, value);
	}

	inline static int32_t get_offset_of_shoot_7() { return static_cast<int32_t>(offsetof(StartLevelScript_t1418560819, ___shoot_7)); }
	inline Shoot_t1969313953 * get_shoot_7() const { return ___shoot_7; }
	inline Shoot_t1969313953 ** get_address_of_shoot_7() { return &___shoot_7; }
	inline void set_shoot_7(Shoot_t1969313953 * value)
	{
		___shoot_7 = value;
		Il2CppCodeGenWriteBarrier(&___shoot_7, value);
	}

	inline static int32_t get_offset_of_t_8() { return static_cast<int32_t>(offsetof(StartLevelScript_t1418560819, ___t_8)); }
	inline float get_t_8() const { return ___t_8; }
	inline float* get_address_of_t_8() { return &___t_8; }
	inline void set_t_8(float value)
	{
		___t_8 = value;
	}

	inline static int32_t get_offset_of_done_9() { return static_cast<int32_t>(offsetof(StartLevelScript_t1418560819, ___done_9)); }
	inline bool get_done_9() const { return ___done_9; }
	inline bool* get_address_of_done_9() { return &___done_9; }
	inline void set_done_9(bool value)
	{
		___done_9 = value;
	}

	inline static int32_t get_offset_of_startPos_10() { return static_cast<int32_t>(offsetof(StartLevelScript_t1418560819, ___startPos_10)); }
	inline Vector3_t2243707580  get_startPos_10() const { return ___startPos_10; }
	inline Vector3_t2243707580 * get_address_of_startPos_10() { return &___startPos_10; }
	inline void set_startPos_10(Vector3_t2243707580  value)
	{
		___startPos_10 = value;
	}

	inline static int32_t get_offset_of_reallyDone_11() { return static_cast<int32_t>(offsetof(StartLevelScript_t1418560819, ___reallyDone_11)); }
	inline bool get_reallyDone_11() const { return ___reallyDone_11; }
	inline bool* get_address_of_reallyDone_11() { return &___reallyDone_11; }
	inline void set_reallyDone_11(bool value)
	{
		___reallyDone_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

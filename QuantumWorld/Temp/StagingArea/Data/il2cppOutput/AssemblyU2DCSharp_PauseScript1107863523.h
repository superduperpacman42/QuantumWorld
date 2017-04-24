#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Characters.FirstPerson.FirstPersonController
struct FirstPersonController_t2575113653;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseScript
struct  PauseScript_t1107863523  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.Characters.FirstPerson.FirstPersonController PauseScript::player
	FirstPersonController_t2575113653 * ___player_2;
	// System.Boolean PauseScript::done
	bool ___done_3;
	// System.Single PauseScript::t
	float ___t_4;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(PauseScript_t1107863523, ___player_2)); }
	inline FirstPersonController_t2575113653 * get_player_2() const { return ___player_2; }
	inline FirstPersonController_t2575113653 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(FirstPersonController_t2575113653 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_done_3() { return static_cast<int32_t>(offsetof(PauseScript_t1107863523, ___done_3)); }
	inline bool get_done_3() const { return ___done_3; }
	inline bool* get_address_of_done_3() { return &___done_3; }
	inline void set_done_3(bool value)
	{
		___done_3 = value;
	}

	inline static int32_t get_offset_of_t_4() { return static_cast<int32_t>(offsetof(PauseScript_t1107863523, ___t_4)); }
	inline float get_t_4() const { return ___t_4; }
	inline float* get_address_of_t_4() { return &___t_4; }
	inline void set_t_4(float value)
	{
		___t_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

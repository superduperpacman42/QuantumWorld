#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// UnityEngine.ParticleSystem/MainModule
struct MainModule_t6751348;
struct MainModule_t6751348_marshaled_pinvoke;
struct MainModule_t6751348_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem_MainModule6751348.h"
#include "UnityEngine_UnityEngine_ParticleSystem3394631041.h"
#include "UnityEngine_UnityEngine_ParticleSystem_MinMaxCurve122563058.h"

// System.Void UnityEngine.ParticleSystem/MainModule::.ctor(UnityEngine.ParticleSystem)
extern "C"  void MainModule__ctor_m4099059742 (MainModule_t6751348 * __this, ParticleSystem_t3394631041 * ___particleSystem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/MainModule::get_startLifetime()
extern "C"  MinMaxCurve_t122563058  MainModule_get_startLifetime_m3865400535 (MainModule_t6751348 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem/MainModule::GetStartLifetime(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem/MinMaxCurve&)
extern "C"  void MainModule_GetStartLifetime_m3062333575 (Il2CppObject * __this /* static, unused */, ParticleSystem_t3394631041 * ___system0, MinMaxCurve_t122563058 * ___curve1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct MainModule_t6751348;
struct MainModule_t6751348_marshaled_pinvoke;

extern "C" void MainModule_t6751348_marshal_pinvoke(const MainModule_t6751348& unmarshaled, MainModule_t6751348_marshaled_pinvoke& marshaled);
extern "C" void MainModule_t6751348_marshal_pinvoke_back(const MainModule_t6751348_marshaled_pinvoke& marshaled, MainModule_t6751348& unmarshaled);
extern "C" void MainModule_t6751348_marshal_pinvoke_cleanup(MainModule_t6751348_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct MainModule_t6751348;
struct MainModule_t6751348_marshaled_com;

extern "C" void MainModule_t6751348_marshal_com(const MainModule_t6751348& unmarshaled, MainModule_t6751348_marshaled_com& marshaled);
extern "C" void MainModule_t6751348_marshal_com_back(const MainModule_t6751348_marshaled_com& marshaled, MainModule_t6751348& unmarshaled);
extern "C" void MainModule_t6751348_marshal_com_cleanup(MainModule_t6751348_marshaled_com& marshaled);

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

// UnityStandardAssets.Characters.FirstPerson.MouseLook
struct MouseLook_t1211692966;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::.ctor()
extern "C"  void MouseLook__ctor_m2381783983 (MouseLook_t1211692966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::Init(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void MouseLook_Init_m4104377153 (MouseLook_t1211692966 * __this, Transform_t3275118058 * ___character0, Transform_t3275118058 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::LookRotation(UnityEngine.Transform,UnityEngine.Transform)
extern "C"  void MouseLook_LookRotation_m522295712 (MouseLook_t1211692966 * __this, Transform_t3275118058 * ___character0, Transform_t3275118058 * ___camera1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::SetCursorLock(System.Boolean)
extern "C"  void MouseLook_SetCursorLock_m2448299735 (MouseLook_t1211692966 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::UpdateCursorLock()
extern "C"  void MouseLook_UpdateCursorLock_m3968856319 (MouseLook_t1211692966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Characters.FirstPerson.MouseLook::InternalLockUpdate()
extern "C"  void MouseLook_InternalLockUpdate_m3142318032 (MouseLook_t1211692966 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityStandardAssets.Characters.FirstPerson.MouseLook::ClampRotationAroundXAxis(UnityEngine.Quaternion)
extern "C"  Quaternion_t4030073918  MouseLook_ClampRotationAroundXAxis_m3916488943 (MouseLook_t1211692966 * __this, Quaternion_t4030073918  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

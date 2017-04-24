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

// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.Color32[]
struct Color32U5BU5D_t30278651;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"

// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
extern "C"  Texture2D_t3542995729 * Texture2D_get_whiteTexture_m1979591766 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Texture2D::GetPixelBilinear(System.Single,System.Single)
extern "C"  Color_t2020392075  Texture2D_GetPixelBilinear_m3063031185 (Texture2D_t3542995729 * __this, float ___u0, float ___v1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_GetPixelBilinear(UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Color&)
extern "C"  void Texture2D_INTERNAL_CALL_GetPixelBilinear_m570286059 (Il2CppObject * __this /* static, unused */, Texture2D_t3542995729 * ___self0, float ___u1, float ___v2, Color_t2020392075 * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32(System.Int32)
extern "C"  Color32U5BU5D_t30278651* Texture2D_GetPixels32_m3251516747 (Texture2D_t3542995729 * __this, int32_t ___miplevel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
extern "C"  Color32U5BU5D_t30278651* Texture2D_GetPixels32_m2977277634 (Texture2D_t3542995729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

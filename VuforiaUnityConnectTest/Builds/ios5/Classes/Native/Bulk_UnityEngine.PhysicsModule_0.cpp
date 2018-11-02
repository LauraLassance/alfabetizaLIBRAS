﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// UnityEngine.BoxCollider
struct BoxCollider_t1640800422;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t197597763;
// UnityEngine.CharacterController
struct CharacterController_t1138636865;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487;
// UnityEngine.Collision
struct Collision_t4262080450;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.ConfigurableJoint
struct ConfigurableJoint_t3494602341;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t872956888;
// UnityEngine.Joint
struct Joint_t1358886274;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MeshCollider
struct MeshCollider_t903564387;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t2874185564;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1690781147;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.SphereCollider
struct SphereCollider_t2077223608;

extern RuntimeClass* Collider_t1773347010_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* RaycastHitU5BU5D_t1690781147_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral814468174;
extern const uint32_t Collider_ClosestPointOnBounds_m285020169_MetadataUsageId;
extern const uint32_t PhysicMaterial__ctor_m1658318133_MetadataUsageId;
extern const uint32_t Physics_Internal_RaycastTest_m1784372019_MetadataUsageId;
extern const uint32_t Physics_RaycastAll_m3084184534_MetadataUsageId;
extern const uint32_t Physics_Raycast_m3101461809_MetadataUsageId;
extern const uint32_t RaycastHit_get_collider_m1464180279_MetadataUsageId;
struct ContactPoint_t3758755253 ;

struct ColliderU5BU5D_t4234922487;
struct ContactPointU5BU5D_t872956888;
struct RaycastHitU5BU5D_t1690781147;


#ifndef U3CMODULEU3E_T692745541_H
#define U3CMODULEU3E_T692745541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745541 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745541_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef PHYSICS_T2310948930_H
#define PHYSICS_T2310948930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics
struct  Physics_t2310948930  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS_T2310948930_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef SOFTJOINTLIMIT_T3866553011_H
#define SOFTJOINTLIMIT_T3866553011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SoftJointLimit
struct  SoftJointLimit_t3866553011 
{
public:
	// System.Single UnityEngine.SoftJointLimit::m_Limit
	float ___m_Limit_0;
	// System.Single UnityEngine.SoftJointLimit::m_Bounciness
	float ___m_Bounciness_1;
	// System.Single UnityEngine.SoftJointLimit::m_ContactDistance
	float ___m_ContactDistance_2;

public:
	inline static int32_t get_offset_of_m_Limit_0() { return static_cast<int32_t>(offsetof(SoftJointLimit_t3866553011, ___m_Limit_0)); }
	inline float get_m_Limit_0() const { return ___m_Limit_0; }
	inline float* get_address_of_m_Limit_0() { return &___m_Limit_0; }
	inline void set_m_Limit_0(float value)
	{
		___m_Limit_0 = value;
	}

	inline static int32_t get_offset_of_m_Bounciness_1() { return static_cast<int32_t>(offsetof(SoftJointLimit_t3866553011, ___m_Bounciness_1)); }
	inline float get_m_Bounciness_1() const { return ___m_Bounciness_1; }
	inline float* get_address_of_m_Bounciness_1() { return &___m_Bounciness_1; }
	inline void set_m_Bounciness_1(float value)
	{
		___m_Bounciness_1 = value;
	}

	inline static int32_t get_offset_of_m_ContactDistance_2() { return static_cast<int32_t>(offsetof(SoftJointLimit_t3866553011, ___m_ContactDistance_2)); }
	inline float get_m_ContactDistance_2() const { return ___m_ContactDistance_2; }
	inline float* get_address_of_m_ContactDistance_2() { return &___m_ContactDistance_2; }
	inline void set_m_ContactDistance_2(float value)
	{
		___m_ContactDistance_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOFTJOINTLIMIT_T3866553011_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef COLLISION_T4262080450_H
#define COLLISION_T4262080450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t4262080450  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t3722313464  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1773347010 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t872956888* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Impulse_0)); }
	inline Vector3_t3722313464  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t3722313464 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t3722313464  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_RelativeVelocity_1)); }
	inline Vector3_t3722313464  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t3722313464 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t3722313464  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Rigidbody_2)); }
	inline Rigidbody_t3916780224 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t3916780224 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t3916780224 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Collider_3)); }
	inline Collider_t1773347010 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t1773347010 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t872956888* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t872956888** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t872956888* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_com
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
#endif // COLLISION_T4262080450_H
#ifndef COLLISIONDETECTIONMODE_T1743609252_H
#define COLLISIONDETECTIONMODE_T1743609252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CollisionDetectionMode
struct  CollisionDetectionMode_t1743609252 
{
public:
	// System.Int32 UnityEngine.CollisionDetectionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CollisionDetectionMode_t1743609252, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLISIONDETECTIONMODE_T1743609252_H
#ifndef CONFIGURABLEJOINTMOTION_T2978711832_H
#define CONFIGURABLEJOINTMOTION_T2978711832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ConfigurableJointMotion
struct  ConfigurableJointMotion_t2978711832 
{
public:
	// System.Int32 UnityEngine.ConfigurableJointMotion::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfigurableJointMotion_t2978711832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURABLEJOINTMOTION_T2978711832_H
#ifndef CONTACTPOINT_T3758755253_H
#define CONTACTPOINT_T3758755253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContactPoint
struct  ContactPoint_t3758755253 
{
public:
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisColliderInstanceID_2() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_ThisColliderInstanceID_2)); }
	inline int32_t get_m_ThisColliderInstanceID_2() const { return ___m_ThisColliderInstanceID_2; }
	inline int32_t* get_address_of_m_ThisColliderInstanceID_2() { return &___m_ThisColliderInstanceID_2; }
	inline void set_m_ThisColliderInstanceID_2(int32_t value)
	{
		___m_ThisColliderInstanceID_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherColliderInstanceID_3() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_OtherColliderInstanceID_3)); }
	inline int32_t get_m_OtherColliderInstanceID_3() const { return ___m_OtherColliderInstanceID_3; }
	inline int32_t* get_address_of_m_OtherColliderInstanceID_3() { return &___m_OtherColliderInstanceID_3; }
	inline void set_m_OtherColliderInstanceID_3(int32_t value)
	{
		___m_OtherColliderInstanceID_3 = value;
	}

	inline static int32_t get_offset_of_m_Separation_4() { return static_cast<int32_t>(offsetof(ContactPoint_t3758755253, ___m_Separation_4)); }
	inline float get_m_Separation_4() const { return ___m_Separation_4; }
	inline float* get_address_of_m_Separation_4() { return &___m_Separation_4; }
	inline void set_m_Separation_4(float value)
	{
		___m_Separation_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTACTPOINT_T3758755253_H
#ifndef CONTROLLERCOLLIDERHIT_T240592346_H
#define CONTROLLERCOLLIDERHIT_T240592346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ControllerColliderHit
struct  ControllerColliderHit_t240592346  : public RuntimeObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t1138636865 * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t1773347010 * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t3722313464  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t3722313464  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t3722313464  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Controller_0)); }
	inline CharacterController_t1138636865 * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_t1138636865 ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_t1138636865 * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Controller_0), value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Collider_1)); }
	inline Collider_t1773347010 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t1773347010 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_1), value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Point_2)); }
	inline Vector3_t3722313464  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_t3722313464 * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_t3722313464  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Normal_3)); }
	inline Vector3_t3722313464  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_t3722313464  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_MoveDirection_4)); }
	inline Vector3_t3722313464  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_t3722313464 * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_t3722313464  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t240592346, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t240592346_marshaled_pinvoke
{
	CharacterController_t1138636865 * ___m_Controller_0;
	Collider_t1773347010 * ___m_Collider_1;
	Vector3_t3722313464  ___m_Point_2;
	Vector3_t3722313464  ___m_Normal_3;
	Vector3_t3722313464  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t240592346_marshaled_com
{
	CharacterController_t1138636865 * ___m_Controller_0;
	Collider_t1773347010 * ___m_Collider_1;
	Vector3_t3722313464  ___m_Point_2;
	Vector3_t3722313464  ___m_Normal_3;
	Vector3_t3722313464  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
#endif // CONTROLLERCOLLIDERHIT_T240592346_H
#ifndef FORCEMODE_T3656391766_H
#define FORCEMODE_T3656391766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode
struct  ForceMode_t3656391766 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode_t3656391766, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORCEMODE_T3656391766_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef PHYSICMATERIALCOMBINE_T247666954_H
#define PHYSICMATERIALCOMBINE_T247666954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PhysicMaterialCombine
struct  PhysicMaterialCombine_t247666954 
{
public:
	// System.Int32 UnityEngine.PhysicMaterialCombine::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PhysicMaterialCombine_t247666954, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICMATERIALCOMBINE_T247666954_H
#ifndef QUERYTRIGGERINTERACTION_T962663221_H
#define QUERYTRIGGERINTERACTION_T962663221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.QueryTriggerInteraction
struct  QueryTriggerInteraction_t962663221 
{
public:
	// System.Int32 UnityEngine.QueryTriggerInteraction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(QueryTriggerInteraction_t962663221, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUERYTRIGGERINTERACTION_T962663221_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT_T1056001966_H
#ifndef RIGIDBODYCONSTRAINTS_T3348042902_H
#define RIGIDBODYCONSTRAINTS_T3348042902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RigidbodyConstraints
struct  RigidbodyConstraints_t3348042902 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RigidbodyConstraints_t3348042902, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODYCONSTRAINTS_T3348042902_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef PHYSICMATERIAL_T2874185564_H
#define PHYSICMATERIAL_T2874185564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PhysicMaterial
struct  PhysicMaterial_t2874185564  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICMATERIAL_T2874185564_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef JOINT_T1358886274_H
#define JOINT_T1358886274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Joint
struct  Joint_t1358886274  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOINT_T1358886274_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef BOXCOLLIDER_T1640800422_H
#define BOXCOLLIDER_T1640800422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider
struct  BoxCollider_t1640800422  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER_T1640800422_H
#ifndef CAPSULECOLLIDER_T197597763_H
#define CAPSULECOLLIDER_T197597763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t197597763  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPSULECOLLIDER_T197597763_H
#ifndef CHARACTERCONTROLLER_T1138636865_H
#define CHARACTERCONTROLLER_T1138636865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterController
struct  CharacterController_t1138636865  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCONTROLLER_T1138636865_H
#ifndef CHARACTERJOINT_T86819922_H
#define CHARACTERJOINT_T86819922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CharacterJoint
struct  CharacterJoint_t86819922  : public Joint_t1358886274
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERJOINT_T86819922_H
#ifndef CONFIGURABLEJOINT_T3494602341_H
#define CONFIGURABLEJOINT_T3494602341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ConfigurableJoint
struct  ConfigurableJoint_t3494602341  : public Joint_t1358886274
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURABLEJOINT_T3494602341_H
#ifndef FIXEDJOINT_T3239912074_H
#define FIXEDJOINT_T3239912074_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FixedJoint
struct  FixedJoint_t3239912074  : public Joint_t1358886274
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXEDJOINT_T3239912074_H
#ifndef HINGEJOINT_T2516258575_H
#define HINGEJOINT_T2516258575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HingeJoint
struct  HingeJoint_t2516258575  : public Joint_t1358886274
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HINGEJOINT_T2516258575_H
#ifndef MESHCOLLIDER_T903564387_H
#define MESHCOLLIDER_T903564387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t903564387  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T903564387_H
#ifndef SPHERECOLLIDER_T2077223608_H
#define SPHERECOLLIDER_T2077223608_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SphereCollider
struct  SphereCollider_t2077223608  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPHERECOLLIDER_T2077223608_H
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t872956888  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ContactPoint_t3758755253  m_Items[1];

public:
	inline ContactPoint_t3758755253  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_t3758755253 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t3758755253  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_t3758755253  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_t3758755253 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_t3758755253  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t1690781147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit_t1056001966  m_Items[1];

public:
	inline RaycastHit_t1056001966  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t1056001966 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t1056001966  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t1056001966  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t1056001966 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t1056001966  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Collider[]
struct ColliderU5BU5D_t4234922487  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider_t1773347010 * m_Items[1];

public:
	inline Collider_t1773347010 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Collider_t1773347010 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1773347010 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1773347010 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void UnityEngine.BoxCollider::get_center_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_get_center_Injected_m237463998 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider::set_center_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_set_center_Injected_m1758244192 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider::get_size_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_get_size_Injected_m4157850216 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider::set_size_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_set_size_Injected_m2341745007 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::get_center_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_get_center_Injected_m945151083 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::set_center_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_Injected_m3983641061 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Component__ctor_m1928064382 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::get_bounds_Injected(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void Collider_get_bounds_Injected_m2832026935 (Collider_t1773347010 * __this, Bounds_t2266837910 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::Internal_ClosestPointOnBounds_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR void Collider_Internal_ClosestPointOnBounds_Injected_m385699438 (Collider_t1773347010 * __this, Vector3_t3722313464 * ___point0, Vector3_t3722313464 * ___outPos1, float* ___distance2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Collider::Internal_ClosestPointOnBounds(UnityEngine.Vector3,UnityEngine.Vector3&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR void Collider_Internal_ClosestPointOnBounds_m1552699058 (Collider_t1773347010 * __this, Vector3_t3722313464  ___point0, Vector3_t3722313464 * ___outPos1, float* ___distance2, const RuntimeMethod* method);
// System.Void UnityEngine.ConfigurableJoint::get_linearLimit_Injected(UnityEngine.SoftJointLimit&)
extern "C" IL2CPP_METHOD_ATTR void ConfigurableJoint_get_linearLimit_Injected_m1688521762 (ConfigurableJoint_t3494602341 * __this, SoftJointLimit_t3866553011 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Joint::set_anchor_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Joint_set_anchor_Injected_m2243688483 (Joint_t1358886274 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Joint::set_connectedAnchor_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Joint_set_connectedAnchor_Injected_m4292146400 (Joint_t1358886274 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m1087895580 (Object_t631007953 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PhysicMaterial::Internal_CreateDynamicsMaterial(UnityEngine.PhysicMaterial,System.String)
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702 (RuntimeObject * __this /* static, unused */, PhysicMaterial_t2874185564 * ___mat0, String_t* ___name1, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::get_gravity_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Physics_get_gravity_Injected_m110431617 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Query_RaycastTest_Injected(UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Query_RaycastTest_Injected_m2116672205 (RuntimeObject * __this /* static, unused */, Ray_t3785851493 * ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m27958459 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Division_m510815599 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Ray__ctor_m168149494 (Ray_t3785851493 * __this, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Query_RaycastTest(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Query_RaycastTest_m3482016940 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Internal_RaycastTest(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_RaycastTest_m1784372019 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Internal_Raycast_Injected(UnityEngine.Ray&,System.Single,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_Raycast_Injected_m1408743426 (RuntimeObject * __this /* static, unused */, Ray_t3785851493 * ___ray0, float ___maxDistance1, RaycastHit_t1056001966 * ___hit2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_Raycast_m1009025456 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, RaycastHit_t1056001966 * ___hit2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3101461809 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Ray_get_origin_m2819290985 (Ray_t3785851493 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Ray_get_direction_m761601601 (Ray_t3785851493 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3482819239 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::Internal_RaycastAll_Injected(UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_Internal_RaycastAll_Injected_m2931638140 (RuntimeObject * __this /* static, unused */, Ray_t3785851493 * ___ray0, float ___maxDistance1, int32_t ___mask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::Internal_RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_Internal_RaycastAll_m3145440557 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___mask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3084184534 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere_Injected(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapSphere_Injected_m2294319753 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapSphere_m3909464457 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method);
// System.Void UnityEngine.Physics::Query_ClosestPoint_Injected(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Physics_Query_ClosestPoint_Injected_m1329700239 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___collider0, Vector3_t3722313464 * ___position1, Quaternion_t2301928331 * ___rotation2, Vector3_t3722313464 * ___point3, Vector3_t3722313464 * ___ret4, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Physics::Query_ClosestPoint(UnityEngine.Collider,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Physics_Query_ClosestPoint_m2134083250 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___collider0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, Vector3_t3722313464  ___point3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::OverlapSphereNonAlloc_Injected(UnityEngine.Vector3&,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapSphereNonAlloc_Injected_m2763198382 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___position0, float ___radius1, ColliderU5BU5D_t4234922487* ___results2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::OverlapBoxNonAlloc_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Collider[],UnityEngine.Quaternion&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapBoxNonAlloc_Injected_m1239215163 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___center0, Vector3_t3722313464 * ___halfExtents1, ColliderU5BU5D_t4234922487* ___results2, Quaternion_t2301928331 * ___orientation3, int32_t ___mask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics::OverlapCapsuleNonAlloc_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapCapsuleNonAlloc_Injected_m3724035292 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point00, Vector3_t3722313464 * ___point11, float ___radius2, ColliderU5BU5D_t4234922487* ___results3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::FindObjectFromInstanceID(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Object_t631007953 * Object_FindObjectFromInstanceID_m235838713 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" IL2CPP_METHOD_ATTR Collider_t1773347010 * RaycastHit_get_collider_m1464180279 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_point_m2236647085 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_normal_m1232181746 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m3727327466 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::get_velocity_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_velocity_Injected_m706438584 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_Injected_m2305696487 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::get_angularVelocity_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_angularVelocity_Injected_m2526926949 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_angularVelocity_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_Injected_m4058519748 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::get_centerOfMass_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_centerOfMass_Injected_m3944393955 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::get_worldCenterOfMass_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_worldCenterOfMass_Injected_m2858986333 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::get_inertiaTensorRotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_inertiaTensorRotation_Injected_m387228799 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::get_inertiaTensor_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_inertiaTensor_Injected_m800734279 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::get_position_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_position_Injected_m1353121118 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_position_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_position_Injected_m3052960929 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::get_rotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_rotation_Injected_m2866212892 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___ret0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_rotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_rotation_Injected_m857481627 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::MovePosition_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_Injected_m3276609392 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_Injected_m1183938674 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___rot0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::GetPointVelocity_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_GetPointVelocity_Injected_m1384054409 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___worldPoint0, Vector3_t3722313464 * ___ret1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce_Injected(UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_Injected_m2882066496 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddTorque_Injected(UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_Injected_m1490512715 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___torque0, int32_t ___mode1, const RuntimeMethod* method);
// System.Single UnityEngine.SoftJointLimit::get_limit()
extern "C" IL2CPP_METHOD_ATTR float SoftJointLimit_get_limit_m1241292965 (SoftJointLimit_t3866553011 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SphereCollider::get_center_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void SphereCollider_get_center_Injected_m1495144477 (SphereCollider_t2077223608 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_center()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  BoxCollider_get_center_m3697516117 (BoxCollider_t1640800422 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		BoxCollider_get_center_Injected_m237463998(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.BoxCollider::set_center(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_set_center_m1086194996 (BoxCollider_t1640800422 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		BoxCollider_set_center_Injected_m1758244192(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.BoxCollider::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  BoxCollider_get_size_m1798011124 (BoxCollider_t1640800422 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		BoxCollider_get_size_Injected_m4157850216(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.BoxCollider::set_size(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_set_size_m3618428148 (BoxCollider_t1640800422 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		BoxCollider_set_size_Injected_m2341745007(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.BoxCollider::get_center_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_get_center_Injected_m237463998 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*BoxCollider_get_center_Injected_m237463998_ftn) (BoxCollider_t1640800422 *, Vector3_t3722313464 *);
	static BoxCollider_get_center_Injected_m237463998_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_get_center_Injected_m237463998_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::get_center_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.BoxCollider::set_center_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_set_center_Injected_m1758244192 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*BoxCollider_set_center_Injected_m1758244192_ftn) (BoxCollider_t1640800422 *, Vector3_t3722313464 *);
	static BoxCollider_set_center_Injected_m1758244192_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_set_center_Injected_m1758244192_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::set_center_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.BoxCollider::get_size_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_get_size_Injected_m4157850216 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*BoxCollider_get_size_Injected_m4157850216_ftn) (BoxCollider_t1640800422 *, Vector3_t3722313464 *);
	static BoxCollider_get_size_Injected_m4157850216_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_get_size_Injected_m4157850216_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::get_size_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.BoxCollider::set_size_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void BoxCollider_set_size_Injected_m2341745007 (BoxCollider_t1640800422 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*BoxCollider_set_size_Injected_m2341745007_ftn) (BoxCollider_t1640800422 *, Vector3_t3722313464 *);
	static BoxCollider_set_size_Injected_m2341745007_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (BoxCollider_set_size_Injected_m2341745007_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.BoxCollider::set_size_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.CapsuleCollider::get_center()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  CapsuleCollider_get_center_m1504830057 (CapsuleCollider_t197597763 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		CapsuleCollider_get_center_Injected_m945151083(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m2290088540 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		CapsuleCollider_set_center_Injected_m3983641061(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.CapsuleCollider::get_radius()
extern "C" IL2CPP_METHOD_ATTR float CapsuleCollider_get_radius_m3672925813 (CapsuleCollider_t197597763 * __this, const RuntimeMethod* method)
{
	typedef float (*CapsuleCollider_get_radius_m3672925813_ftn) (CapsuleCollider_t197597763 *);
	static CapsuleCollider_get_radius_m3672925813_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_get_radius_m3672925813_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::get_radius()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CapsuleCollider::set_radius(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_set_radius_m3911288585 (CapsuleCollider_t197597763 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*CapsuleCollider_set_radius_m3911288585_ftn) (CapsuleCollider_t197597763 *, float);
	static CapsuleCollider_set_radius_m3911288585_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_set_radius_m3911288585_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::set_radius(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.CapsuleCollider::get_height()
extern "C" IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_m4149104584 (CapsuleCollider_t197597763 * __this, const RuntimeMethod* method)
{
	typedef float (*CapsuleCollider_get_height_m4149104584_ftn) (CapsuleCollider_t197597763 *);
	static CapsuleCollider_get_height_m4149104584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_get_height_m4149104584_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::get_height()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m2690698645 (CapsuleCollider_t197597763 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*CapsuleCollider_set_height_m2690698645_ftn) (CapsuleCollider_t197597763 *, float);
	static CapsuleCollider_set_height_m2690698645_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_set_height_m2690698645_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::set_height(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.CapsuleCollider::get_direction()
extern "C" IL2CPP_METHOD_ATTR int32_t CapsuleCollider_get_direction_m993132008 (CapsuleCollider_t197597763 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*CapsuleCollider_get_direction_m993132008_ftn) (CapsuleCollider_t197597763 *);
	static CapsuleCollider_get_direction_m993132008_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_get_direction_m993132008_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::get_direction()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.CapsuleCollider::set_direction(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_set_direction_m2526197405 (CapsuleCollider_t197597763 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*CapsuleCollider_set_direction_m2526197405_ftn) (CapsuleCollider_t197597763 *, int32_t);
	static CapsuleCollider_set_direction_m2526197405_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_set_direction_m2526197405_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::set_direction(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.CapsuleCollider::get_center_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_get_center_Injected_m945151083 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*CapsuleCollider_get_center_Injected_m945151083_ftn) (CapsuleCollider_t197597763 *, Vector3_t3722313464 *);
	static CapsuleCollider_get_center_Injected_m945151083_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_get_center_Injected_m945151083_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::get_center_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.CapsuleCollider::set_center_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_Injected_m3983641061 (CapsuleCollider_t197597763 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*CapsuleCollider_set_center_Injected_m3983641061_ftn) (CapsuleCollider_t197597763 *, Vector3_t3722313464 *);
	static CapsuleCollider_set_center_Injected_m3983641061_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CapsuleCollider_set_center_Injected_m3983641061_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.CapsuleCollider::set_center_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Collider::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Collider__ctor_m1632031523 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	{
		Component__ctor_m1928064382(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Collider::get_enabled()
extern "C" IL2CPP_METHOD_ATTR bool Collider_get_enabled_m3096904824 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	typedef bool (*Collider_get_enabled_m3096904824_ftn) (Collider_t1773347010 *);
	static Collider_get_enabled_m3096904824_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_enabled_m3096904824_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_enabled()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_enabled_m1517463283 (Collider_t1773347010 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Collider_set_enabled_m1517463283_ftn) (Collider_t1773347010 *, bool);
	static Collider_set_enabled_m1517463283_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_enabled_m1517463283_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Rigidbody UnityEngine.Collider::get_attachedRigidbody()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * Collider_get_attachedRigidbody_m135494519 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	typedef Rigidbody_t3916780224 * (*Collider_get_attachedRigidbody_m135494519_ftn) (Collider_t1773347010 *);
	static Collider_get_attachedRigidbody_m135494519_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_attachedRigidbody_m135494519_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_attachedRigidbody()");
	Rigidbody_t3916780224 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Collider::get_isTrigger()
extern "C" IL2CPP_METHOD_ATTR bool Collider_get_isTrigger_m2414312872 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	typedef bool (*Collider_get_isTrigger_m2414312872_ftn) (Collider_t1773347010 *);
	static Collider_get_isTrigger_m2414312872_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_isTrigger_m2414312872_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_isTrigger()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_isTrigger_m1770557358 (Collider_t1773347010 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Collider_set_isTrigger_m1770557358_ftn) (Collider_t1773347010 *, bool);
	static Collider_set_isTrigger_m1770557358_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_isTrigger_m1770557358_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_isTrigger(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
extern "C" IL2CPP_METHOD_ATTR Bounds_t2266837910  Collider_get_bounds_m2952418672 (Collider_t1773347010 * __this, const RuntimeMethod* method)
{
	Bounds_t2266837910  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Collider_get_bounds_Injected_m2832026935(__this, (Bounds_t2266837910 *)(&V_0), /*hidden argument*/NULL);
		Bounds_t2266837910  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Collider::set_material(UnityEngine.PhysicMaterial)
extern "C" IL2CPP_METHOD_ATTR void Collider_set_material_m3792038929 (Collider_t1773347010 * __this, PhysicMaterial_t2874185564 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Collider_set_material_m3792038929_ftn) (Collider_t1773347010 *, PhysicMaterial_t2874185564 *);
	static Collider_set_material_m3792038929_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_set_material_m3792038929_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::set_material(UnityEngine.PhysicMaterial)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Collider::Internal_ClosestPointOnBounds(UnityEngine.Vector3,UnityEngine.Vector3&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR void Collider_Internal_ClosestPointOnBounds_m1552699058 (Collider_t1773347010 * __this, Vector3_t3722313464  ___point0, Vector3_t3722313464 * ___outPos1, float* ___distance2, const RuntimeMethod* method)
{
	{
		Vector3_t3722313464 * L_0 = ___outPos1;
		float* L_1 = ___distance2;
		Collider_Internal_ClosestPointOnBounds_Injected_m385699438(__this, (Vector3_t3722313464 *)(&___point0), (Vector3_t3722313464 *)L_0, (float*)L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Collider::ClosestPointOnBounds(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Collider_ClosestPointOnBounds_m285020169 (Collider_t1773347010 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Collider_ClosestPointOnBounds_m285020169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (0.0f);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_0;
		Vector3_t3722313464  L_1 = ___position0;
		Collider_Internal_ClosestPointOnBounds_m1552699058(__this, L_1, (Vector3_t3722313464 *)(&V_1), (float*)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = V_1;
		V_2 = L_2;
		goto IL_001f;
	}

IL_001f:
	{
		Vector3_t3722313464  L_3 = V_2;
		return L_3;
	}
}
// System.Void UnityEngine.Collider::get_bounds_Injected(UnityEngine.Bounds&)
extern "C" IL2CPP_METHOD_ATTR void Collider_get_bounds_Injected_m2832026935 (Collider_t1773347010 * __this, Bounds_t2266837910 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Collider_get_bounds_Injected_m2832026935_ftn) (Collider_t1773347010 *, Bounds_t2266837910 *);
	static Collider_get_bounds_Injected_m2832026935_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_get_bounds_Injected_m2832026935_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::get_bounds_Injected(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Collider::Internal_ClosestPointOnBounds_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single&)
extern "C" IL2CPP_METHOD_ATTR void Collider_Internal_ClosestPointOnBounds_Injected_m385699438 (Collider_t1773347010 * __this, Vector3_t3722313464 * ___point0, Vector3_t3722313464 * ___outPos1, float* ___distance2, const RuntimeMethod* method)
{
	typedef void (*Collider_Internal_ClosestPointOnBounds_Injected_m385699438_ftn) (Collider_t1773347010 *, Vector3_t3722313464 *, Vector3_t3722313464 *, float*);
	static Collider_Internal_ClosestPointOnBounds_Injected_m385699438_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Collider_Internal_ClosestPointOnBounds_Injected_m385699438_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Collider::Internal_ClosestPointOnBounds_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single&)");
	_il2cpp_icall_func(__this, ___point0, ___outPos1, ___distance2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Collision
extern "C" void Collision_t4262080450_marshal_pinvoke(const Collision_t4262080450& unmarshaled, Collision_t4262080450_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception, NULL, NULL);
}
extern "C" void Collision_t4262080450_marshal_pinvoke_back(const Collision_t4262080450_marshaled_pinvoke& marshaled, Collision_t4262080450& unmarshaled)
{
	Exception_t* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Collision
extern "C" void Collision_t4262080450_marshal_pinvoke_cleanup(Collision_t4262080450_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Collision
extern "C" void Collision_t4262080450_marshal_com(const Collision_t4262080450& unmarshaled, Collision_t4262080450_marshaled_com& marshaled)
{
	Exception_t* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception, NULL, NULL);
}
extern "C" void Collision_t4262080450_marshal_com_back(const Collision_t4262080450_marshaled_com& marshaled, Collision_t4262080450& unmarshaled)
{
	Exception_t* ___m_Rigidbody_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Rigidbody' of type 'Collision': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Rigidbody_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Collision
extern "C" void Collision_t4262080450_marshal_com_cleanup(Collision_t4262080450_marshaled_com& marshaled)
{
}
// UnityEngine.Rigidbody UnityEngine.Collision::get_rigidbody()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * Collision_get_rigidbody_m1573032817 (Collision_t4262080450 * __this, const RuntimeMethod* method)
{
	Rigidbody_t3916780224 * V_0 = NULL;
	{
		Rigidbody_t3916780224 * L_0 = __this->get_m_Rigidbody_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Rigidbody_t3916780224 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Collider UnityEngine.Collision::get_collider()
extern "C" IL2CPP_METHOD_ATTR Collider_t1773347010 * Collision_get_collider_m2708970793 (Collision_t4262080450 * __this, const RuntimeMethod* method)
{
	Collider_t1773347010 * V_0 = NULL;
	{
		Collider_t1773347010 * L_0 = __this->get_m_Collider_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Collider_t1773347010 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Collision::get_impulse()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Collision_get_impulse_m292601072 (Collision_t4262080450 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_Impulse_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.ConfigurableJointMotion UnityEngine.ConfigurableJoint::get_xMotion()
extern "C" IL2CPP_METHOD_ATTR int32_t ConfigurableJoint_get_xMotion_m1555721474 (ConfigurableJoint_t3494602341 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*ConfigurableJoint_get_xMotion_m1555721474_ftn) (ConfigurableJoint_t3494602341 *);
	static ConfigurableJoint_get_xMotion_m1555721474_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConfigurableJoint_get_xMotion_m1555721474_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ConfigurableJoint::get_xMotion()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.ConfigurableJointMotion UnityEngine.ConfigurableJoint::get_yMotion()
extern "C" IL2CPP_METHOD_ATTR int32_t ConfigurableJoint_get_yMotion_m1492872450 (ConfigurableJoint_t3494602341 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*ConfigurableJoint_get_yMotion_m1492872450_ftn) (ConfigurableJoint_t3494602341 *);
	static ConfigurableJoint_get_yMotion_m1492872450_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConfigurableJoint_get_yMotion_m1492872450_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ConfigurableJoint::get_yMotion()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.ConfigurableJointMotion UnityEngine.ConfigurableJoint::get_zMotion()
extern "C" IL2CPP_METHOD_ATTR int32_t ConfigurableJoint_get_zMotion_m1096314114 (ConfigurableJoint_t3494602341 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*ConfigurableJoint_get_zMotion_m1096314114_ftn) (ConfigurableJoint_t3494602341 *);
	static ConfigurableJoint_get_zMotion_m1096314114_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConfigurableJoint_get_zMotion_m1096314114_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ConfigurableJoint::get_zMotion()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.SoftJointLimit UnityEngine.ConfigurableJoint::get_linearLimit()
extern "C" IL2CPP_METHOD_ATTR SoftJointLimit_t3866553011  ConfigurableJoint_get_linearLimit_m2381894930 (ConfigurableJoint_t3494602341 * __this, const RuntimeMethod* method)
{
	SoftJointLimit_t3866553011  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		ConfigurableJoint_get_linearLimit_Injected_m1688521762(__this, (SoftJointLimit_t3866553011 *)(&V_0), /*hidden argument*/NULL);
		SoftJointLimit_t3866553011  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.ConfigurableJoint::get_linearLimit_Injected(UnityEngine.SoftJointLimit&)
extern "C" IL2CPP_METHOD_ATTR void ConfigurableJoint_get_linearLimit_Injected_m1688521762 (ConfigurableJoint_t3494602341 * __this, SoftJointLimit_t3866553011 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*ConfigurableJoint_get_linearLimit_Injected_m1688521762_ftn) (ConfigurableJoint_t3494602341 *, SoftJointLimit_t3866553011 *);
	static ConfigurableJoint_get_linearLimit_Injected_m1688521762_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (ConfigurableJoint_get_linearLimit_Injected_m1688521762_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.ConfigurableJoint::get_linearLimit_Injected(UnityEngine.SoftJointLimit&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke(const ControllerColliderHit_t240592346& unmarshaled, ControllerColliderHit_t240592346_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception, NULL, NULL);
}
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke_back(const ControllerColliderHit_t240592346_marshaled_pinvoke& marshaled, ControllerColliderHit_t240592346& unmarshaled)
{
	Exception_t* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t240592346_marshal_pinvoke_cleanup(ControllerColliderHit_t240592346_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t240592346_marshal_com(const ControllerColliderHit_t240592346& unmarshaled, ControllerColliderHit_t240592346_marshaled_com& marshaled)
{
	Exception_t* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception, NULL, NULL);
}
extern "C" void ControllerColliderHit_t240592346_marshal_com_back(const ControllerColliderHit_t240592346_marshaled_com& marshaled, ControllerColliderHit_t240592346& unmarshaled)
{
	Exception_t* ___m_Controller_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Controller' of type 'ControllerColliderHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Controller_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.ControllerColliderHit
extern "C" void ControllerColliderHit_t240592346_marshal_com_cleanup(ControllerColliderHit_t240592346_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Rigidbody UnityEngine.Joint::get_connectedBody()
extern "C" IL2CPP_METHOD_ATTR Rigidbody_t3916780224 * Joint_get_connectedBody_m826805471 (Joint_t1358886274 * __this, const RuntimeMethod* method)
{
	typedef Rigidbody_t3916780224 * (*Joint_get_connectedBody_m826805471_ftn) (Joint_t1358886274 *);
	static Joint_get_connectedBody_m826805471_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint_get_connectedBody_m826805471_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::get_connectedBody()");
	Rigidbody_t3916780224 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)
extern "C" IL2CPP_METHOD_ATTR void Joint_set_connectedBody_m3457616993 (Joint_t1358886274 * __this, Rigidbody_t3916780224 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Joint_set_connectedBody_m3457616993_ftn) (Joint_t1358886274 *, Rigidbody_t3916780224 *);
	static Joint_set_connectedBody_m3457616993_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint_set_connectedBody_m3457616993_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::set_connectedBody(UnityEngine.Rigidbody)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Joint::set_anchor(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Joint_set_anchor_m3102426751 (Joint_t1358886274 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Joint_set_anchor_Injected_m2243688483(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Joint::set_connectedAnchor(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Joint_set_connectedAnchor_m1287743653 (Joint_t1358886274 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Joint_set_connectedAnchor_Injected_m4292146400(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Joint::set_autoConfigureConnectedAnchor(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Joint_set_autoConfigureConnectedAnchor_m2904069061 (Joint_t1358886274 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Joint_set_autoConfigureConnectedAnchor_m2904069061_ftn) (Joint_t1358886274 *, bool);
	static Joint_set_autoConfigureConnectedAnchor_m2904069061_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint_set_autoConfigureConnectedAnchor_m2904069061_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::set_autoConfigureConnectedAnchor(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Joint::set_anchor_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Joint_set_anchor_Injected_m2243688483 (Joint_t1358886274 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Joint_set_anchor_Injected_m2243688483_ftn) (Joint_t1358886274 *, Vector3_t3722313464 *);
	static Joint_set_anchor_Injected_m2243688483_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint_set_anchor_Injected_m2243688483_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::set_anchor_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Joint::set_connectedAnchor_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Joint_set_connectedAnchor_Injected_m4292146400 (Joint_t1358886274 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Joint_set_connectedAnchor_Injected_m4292146400_ftn) (Joint_t1358886274 *, Vector3_t3722313464 *);
	static Joint_set_connectedAnchor_Injected_m4292146400_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Joint_set_connectedAnchor_Injected_m4292146400_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Joint::set_connectedAnchor_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Mesh UnityEngine.MeshCollider::get_sharedMesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t3648964284 * MeshCollider_get_sharedMesh_m1471390983 (MeshCollider_t903564387 * __this, const RuntimeMethod* method)
{
	typedef Mesh_t3648964284 * (*MeshCollider_get_sharedMesh_m1471390983_ftn) (MeshCollider_t903564387 *);
	static MeshCollider_get_sharedMesh_m1471390983_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (MeshCollider_get_sharedMesh_m1471390983_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.MeshCollider::get_sharedMesh()");
	Mesh_t3648964284 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.PhysicMaterial::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial__ctor_m1658318133 (PhysicMaterial_t2874185564 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PhysicMaterial__ctor_m1658318133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object__ctor_m1087895580(__this, /*hidden argument*/NULL);
		PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702(NULL /*static, unused*/, __this, _stringLiteral814468174, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.PhysicMaterial::Internal_CreateDynamicsMaterial(UnityEngine.PhysicMaterial,System.String)
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702 (RuntimeObject * __this /* static, unused */, PhysicMaterial_t2874185564 * ___mat0, String_t* ___name1, const RuntimeMethod* method)
{
	typedef void (*PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702_ftn) (PhysicMaterial_t2874185564 *, String_t*);
	static PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhysicMaterial_Internal_CreateDynamicsMaterial_m1064353702_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PhysicMaterial::Internal_CreateDynamicsMaterial(UnityEngine.PhysicMaterial,System.String)");
	_il2cpp_icall_func(___mat0, ___name1);
}
// System.Void UnityEngine.PhysicMaterial::set_bounciness(System.Single)
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial_set_bounciness_m557555659 (PhysicMaterial_t2874185564 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*PhysicMaterial_set_bounciness_m557555659_ftn) (PhysicMaterial_t2874185564 *, float);
	static PhysicMaterial_set_bounciness_m557555659_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhysicMaterial_set_bounciness_m557555659_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PhysicMaterial::set_bounciness(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.PhysicMaterial::set_bounceCombine(UnityEngine.PhysicMaterialCombine)
extern "C" IL2CPP_METHOD_ATTR void PhysicMaterial_set_bounceCombine_m2133432003 (PhysicMaterial_t2874185564 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*PhysicMaterial_set_bounceCombine_m2133432003_ftn) (PhysicMaterial_t2874185564 *, int32_t);
	static PhysicMaterial_set_bounceCombine_m2133432003_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PhysicMaterial_set_bounceCombine_m2133432003_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.PhysicMaterial::set_bounceCombine(UnityEngine.PhysicMaterialCombine)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Physics_get_gravity_m2660066594 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Physics_get_gravity_Injected_m110431617(NULL /*static, unused*/, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Physics::IgnoreCollision(UnityEngine.Collider,UnityEngine.Collider,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Physics_IgnoreCollision_m1771762600 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___collider10, Collider_t1773347010 * ___collider21, bool ___ignore2, const RuntimeMethod* method)
{
	typedef void (*Physics_IgnoreCollision_m1771762600_ftn) (Collider_t1773347010 *, Collider_t1773347010 *, bool);
	static Physics_IgnoreCollision_m1771762600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_IgnoreCollision_m1771762600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::IgnoreCollision(UnityEngine.Collider,UnityEngine.Collider,System.Boolean)");
	_il2cpp_icall_func(___collider10, ___collider21, ___ignore2);
}
// System.Void UnityEngine.Physics::IgnoreLayerCollision(System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Physics_IgnoreLayerCollision_m2712987023 (RuntimeObject * __this /* static, unused */, int32_t ___layer10, int32_t ___layer21, bool ___ignore2, const RuntimeMethod* method)
{
	typedef void (*Physics_IgnoreLayerCollision_m2712987023_ftn) (int32_t, int32_t, bool);
	static Physics_IgnoreLayerCollision_m2712987023_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_IgnoreLayerCollision_m2712987023_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::IgnoreLayerCollision(System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(___layer10, ___layer21, ___ignore2);
}
// System.Boolean UnityEngine.Physics::GetIgnoreLayerCollision(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_GetIgnoreLayerCollision_m2337073095 (RuntimeObject * __this /* static, unused */, int32_t ___layer10, int32_t ___layer21, const RuntimeMethod* method)
{
	typedef bool (*Physics_GetIgnoreLayerCollision_m2337073095_ftn) (int32_t, int32_t);
	static Physics_GetIgnoreLayerCollision_m2337073095_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_GetIgnoreLayerCollision_m2337073095_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::GetIgnoreLayerCollision(System.Int32,System.Int32)");
	bool retVal = _il2cpp_icall_func(___layer10, ___layer21);
	return retVal;
}
// System.Boolean UnityEngine.Physics::Query_RaycastTest(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Query_RaycastTest_m3482016940 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	{
		float L_0 = ___maxDistance1;
		int32_t L_1 = ___layerMask2;
		int32_t L_2 = ___queryTriggerInteraction3;
		bool L_3 = Physics_Query_RaycastTest_Injected_m2116672205(NULL /*static, unused*/, (Ray_t3785851493 *)(&___ray0), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::Internal_RaycastTest(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_RaycastTest_m1784372019 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics_Internal_RaycastTest_m1784372019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Ray_t3785851493  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	{
		float L_0 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&___direction1), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(1.401298E-45f)))))
		{
			goto IL_0036;
		}
	}
	{
		Vector3_t3722313464  L_2 = ___direction1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector3_t3722313464  L_5 = ___origin0;
		Vector3_t3722313464  L_6 = V_1;
		Ray__ctor_m168149494((Ray_t3785851493 *)(&V_2), L_5, L_6, /*hidden argument*/NULL);
		Ray_t3785851493  L_7 = V_2;
		float L_8 = ___maxDistance2;
		int32_t L_9 = ___layerMask3;
		int32_t L_10 = ___queryTriggerInteraction4;
		bool L_11 = Physics_Query_RaycastTest_m3482016940(NULL /*static, unused*/, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		goto IL_003d;
	}

IL_0036:
	{
		V_3 = (bool)0;
		goto IL_003d;
	}

IL_003d:
	{
		bool L_12 = V_3;
		return L_12;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3482819239 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		int32_t L_4 = ___queryTriggerInteraction4;
		bool L_5 = Physics_Internal_RaycastTest_m1784372019(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m234523501 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		bool L_4 = Physics_Internal_RaycastTest_m1784372019(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m1896872038 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		float L_2 = ___maxDistance2;
		bool L_3 = Physics_Internal_RaycastTest_m1784372019(NULL /*static, unused*/, L_0, L_1, L_2, ((int32_t)-5), 0, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m952690504 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		bool L_2 = Physics_Internal_RaycastTest_m1784372019(NULL /*static, unused*/, L_0, L_1, (std::numeric_limits<float>::infinity()), ((int32_t)-5), 0, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Ray,System.Single,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_Raycast_m1009025456 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, RaycastHit_t1056001966 * ___hit2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	{
		float L_0 = ___maxDistance1;
		RaycastHit_t1056001966 * L_1 = ___hit2;
		int32_t L_2 = ___layerMask3;
		int32_t L_3 = ___queryTriggerInteraction4;
		bool L_4 = Physics_Internal_Raycast_Injected_m1408743426(NULL /*static, unused*/, (Ray_t3785851493 *)(&___ray0), L_0, (RaycastHit_t1056001966 *)L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3101461809 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics_Raycast_m3101461809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Ray_t3785851493  V_2;
	memset(&V_2, 0, sizeof(V_2));
	bool V_3 = false;
	{
		RaycastHit_t1056001966 * L_0 = ___hitInfo2;
		il2cpp_codegen_initobj(L_0, sizeof(RaycastHit_t1056001966 ));
		float L_1 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&___direction1), /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((!(((float)L_2) > ((float)(1.401298E-45f)))))
		{
			goto IL_003f;
		}
	}
	{
		Vector3_t3722313464  L_3 = ___direction1;
		float L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_5 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t3722313464  L_6 = ___origin0;
		Vector3_t3722313464  L_7 = V_1;
		Ray__ctor_m168149494((Ray_t3785851493 *)(&V_2), L_6, L_7, /*hidden argument*/NULL);
		Ray_t3785851493  L_8 = V_2;
		float L_9 = ___maxDistance3;
		RaycastHit_t1056001966 * L_10 = ___hitInfo2;
		int32_t L_11 = ___layerMask4;
		int32_t L_12 = ___queryTriggerInteraction5;
		bool L_13 = Physics_Internal_Raycast_m1009025456(NULL /*static, unused*/, L_8, L_9, (RaycastHit_t1056001966 *)L_10, L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		goto IL_0046;
	}

IL_003f:
	{
		V_3 = (bool)0;
		goto IL_0046;
	}

IL_0046:
	{
		bool L_14 = V_3;
		return L_14;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m4145022031 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		float L_3 = ___maxDistance3;
		int32_t L_4 = ___layerMask4;
		bool L_5 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, (RaycastHit_t1056001966 *)L_2, L_3, L_4, 0, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m261647105 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		float L_3 = ___maxDistance3;
		bool L_4 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, (RaycastHit_t1056001966 *)L_2, L_3, ((int32_t)-5), 0, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0013;
	}

IL_0013:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m1085399925 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, RaycastHit_t1056001966 * ___hitInfo2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		RaycastHit_t1056001966 * L_2 = ___hitInfo2;
		bool L_3 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, (RaycastHit_t1056001966 *)L_2, (std::numeric_limits<float>::infinity()), ((int32_t)-5), 0, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3133704280 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		float L_2 = ___maxDistance1;
		int32_t L_3 = ___layerMask2;
		int32_t L_4 = ___queryTriggerInteraction3;
		bool L_5 = Physics_Raycast_m3482819239(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m2071039297 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		float L_2 = ___maxDistance1;
		int32_t L_3 = ___layerMask2;
		bool L_4 = Physics_Raycast_m3482819239(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m281474224 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		float L_2 = ___maxDistance1;
		bool L_3 = Physics_Raycast_m3482819239(NULL /*static, unused*/, L_0, L_1, L_2, ((int32_t)-5), 0, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m630863594 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		bool L_2 = Physics_Raycast_m3482819239(NULL /*static, unused*/, L_0, L_1, (std::numeric_limits<float>::infinity()), ((int32_t)-5), 0, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0022;
	}

IL_0022:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m3336206959 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		RaycastHit_t1056001966 * L_2 = ___hitInfo1;
		float L_3 = ___maxDistance2;
		int32_t L_4 = ___layerMask3;
		int32_t L_5 = ___queryTriggerInteraction4;
		bool L_6 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, (RaycastHit_t1056001966 *)L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m1893809531 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		RaycastHit_t1056001966 * L_2 = ___hitInfo1;
		float L_3 = ___maxDistance2;
		int32_t L_4 = ___layerMask3;
		bool L_5 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, (RaycastHit_t1056001966 *)L_2, L_3, L_4, 0, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_001e;
	}

IL_001e:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m1743768310 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		RaycastHit_t1056001966 * L_2 = ___hitInfo1;
		float L_3 = ___maxDistance2;
		bool L_4 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, (RaycastHit_t1056001966 *)L_2, L_3, ((int32_t)-5), 0, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Raycast_m447436869 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, RaycastHit_t1056001966 * ___hitInfo1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		RaycastHit_t1056001966 * L_2 = ___hitInfo1;
		bool L_3 = Physics_Raycast_m3101461809(NULL /*static, unused*/, L_0, L_1, (RaycastHit_t1056001966 *)L_2, (std::numeric_limits<float>::infinity()), ((int32_t)-5), 0, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::Internal_RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_Internal_RaycastAll_m3145440557 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___mask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	{
		float L_0 = ___maxDistance1;
		int32_t L_1 = ___mask2;
		int32_t L_2 = ___queryTriggerInteraction3;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_Internal_RaycastAll_Injected_m2931638140(NULL /*static, unused*/, (Ray_t3785851493 *)(&___ray0), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3084184534 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics_RaycastAll_m3084184534_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Ray_t3785851493  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RaycastHitU5BU5D_t1690781147* V_3 = NULL;
	{
		float L_0 = Vector3_get_magnitude_m27958459((Vector3_t3722313464 *)(&___direction1), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = V_0;
		if ((!(((float)L_1) > ((float)(1.401298E-45f)))))
		{
			goto IL_0036;
		}
	}
	{
		Vector3_t3722313464  L_2 = ___direction1;
		float L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_4 = Vector3_op_Division_m510815599(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Vector3_t3722313464  L_5 = ___origin0;
		Vector3_t3722313464  L_6 = V_1;
		Ray__ctor_m168149494((Ray_t3785851493 *)(&V_2), L_5, L_6, /*hidden argument*/NULL);
		Ray_t3785851493  L_7 = V_2;
		float L_8 = ___maxDistance2;
		int32_t L_9 = ___layerMask3;
		int32_t L_10 = ___queryTriggerInteraction4;
		RaycastHitU5BU5D_t1690781147* L_11 = Physics_Internal_RaycastAll_m3145440557(NULL /*static, unused*/, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		goto IL_0043;
	}

IL_0036:
	{
		RaycastHitU5BU5D_t1690781147* L_12 = (RaycastHitU5BU5D_t1690781147*)SZArrayNew(RaycastHitU5BU5D_t1690781147_il2cpp_TypeInfo_var, (uint32_t)0);
		V_3 = L_12;
		goto IL_0043;
	}

IL_0043:
	{
		RaycastHitU5BU5D_t1690781147* L_13 = V_3;
		return L_13;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m2709753186 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, int32_t ___layerMask3, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		float L_2 = ___maxDistance2;
		int32_t L_3 = ___layerMask3;
		RaycastHitU5BU5D_t1690781147* L_4 = Physics_RaycastAll_m3084184534(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0011;
	}

IL_0011:
	{
		RaycastHitU5BU5D_t1690781147* L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m447622039 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, float ___maxDistance2, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		float L_2 = ___maxDistance2;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_RaycastAll_m3084184534(NULL /*static, unused*/, L_0, L_1, L_2, ((int32_t)-5), 0, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0012;
	}

IL_0012:
	{
		RaycastHitU5BU5D_t1690781147* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m2266459302 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___origin0, Vector3_t3722313464  ___direction1, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		Vector3_t3722313464  L_0 = ___origin0;
		Vector3_t3722313464  L_1 = ___direction1;
		RaycastHitU5BU5D_t1690781147* L_2 = Physics_RaycastAll_m3084184534(NULL /*static, unused*/, L_0, L_1, (std::numeric_limits<float>::infinity()), ((int32_t)-5), 0, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		RaycastHitU5BU5D_t1690781147* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3611981381 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		float L_2 = ___maxDistance1;
		int32_t L_3 = ___layerMask2;
		int32_t L_4 = ___queryTriggerInteraction3;
		RaycastHitU5BU5D_t1690781147* L_5 = Physics_RaycastAll_m3084184534(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_001d;
	}

IL_001d:
	{
		RaycastHitU5BU5D_t1690781147* L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3780585721 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		float L_2 = ___maxDistance1;
		int32_t L_3 = ___layerMask2;
		RaycastHitU5BU5D_t1690781147* L_4 = Physics_RaycastAll_m3084184534(NULL /*static, unused*/, L_0, L_1, L_2, L_3, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001d;
	}

IL_001d:
	{
		RaycastHitU5BU5D_t1690781147* L_5 = V_0;
		return L_5;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray,System.Single)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m849698669 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, float ___maxDistance1, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		float L_2 = ___maxDistance1;
		RaycastHitU5BU5D_t1690781147* L_3 = Physics_RaycastAll_m3084184534(NULL /*static, unused*/, L_0, L_1, L_2, ((int32_t)-5), 0, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		RaycastHitU5BU5D_t1690781147* L_4 = V_0;
		return L_4;
	}
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Ray)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_RaycastAll_m3796226007 (RuntimeObject * __this /* static, unused */, Ray_t3785851493  ___ray0, const RuntimeMethod* method)
{
	RaycastHitU5BU5D_t1690781147* V_0 = NULL;
	{
		Vector3_t3722313464  L_0 = Ray_get_origin_m2819290985((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Ray_get_direction_m761601601((Ray_t3785851493 *)(&___ray0), /*hidden argument*/NULL);
		RaycastHitU5BU5D_t1690781147* L_2 = Physics_RaycastAll_m3084184534(NULL /*static, unused*/, L_0, L_1, (std::numeric_limits<float>::infinity()), ((int32_t)-5), 0, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0022;
	}

IL_0022:
	{
		RaycastHitU5BU5D_t1690781147* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapSphere_m3909464457 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	{
		float L_0 = ___radius1;
		int32_t L_1 = ___layerMask2;
		int32_t L_2 = ___queryTriggerInteraction3;
		ColliderU5BU5D_t4234922487* L_3 = Physics_OverlapSphere_Injected_m2294319753(NULL /*static, unused*/, (Vector3_t3722313464 *)(&___position0), L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapSphere_m1831955946 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method)
{
	ColliderU5BU5D_t4234922487* V_0 = NULL;
	{
		Vector3_t3722313464  L_0 = ___position0;
		float L_1 = ___radius1;
		int32_t L_2 = ___layerMask2;
		ColliderU5BU5D_t4234922487* L_3 = Physics_OverlapSphere_m3909464457(NULL /*static, unused*/, L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		ColliderU5BU5D_t4234922487* L_4 = V_0;
		return L_4;
	}
}
// System.Void UnityEngine.Physics::SyncTransforms()
extern "C" IL2CPP_METHOD_ATTR void Physics_SyncTransforms_m1372605888 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (*Physics_SyncTransforms_m1372605888_ftn) ();
	static Physics_SyncTransforms_m1372605888_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_SyncTransforms_m1372605888_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::SyncTransforms()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.Physics::get_autoSyncTransforms()
extern "C" IL2CPP_METHOD_ATTR bool Physics_get_autoSyncTransforms_m275034212 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*Physics_get_autoSyncTransforms_m275034212_ftn) ();
	static Physics_get_autoSyncTransforms_m275034212_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_get_autoSyncTransforms_m275034212_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::get_autoSyncTransforms()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Physics::set_autoSyncTransforms(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Physics_set_autoSyncTransforms_m944824681 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Physics_set_autoSyncTransforms_m944824681_ftn) (bool);
	static Physics_set_autoSyncTransforms_m944824681_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_set_autoSyncTransforms_m944824681_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::set_autoSyncTransforms(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// UnityEngine.Vector3 UnityEngine.Physics::Query_ClosestPoint(UnityEngine.Collider,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Physics_Query_ClosestPoint_m2134083250 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___collider0, Vector3_t3722313464  ___position1, Quaternion_t2301928331  ___rotation2, Vector3_t3722313464  ___point3, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Collider_t1773347010 * L_0 = ___collider0;
		Physics_Query_ClosestPoint_Injected_m1329700239(NULL /*static, unused*/, L_0, (Vector3_t3722313464 *)(&___position1), (Quaternion_t2301928331 *)(&___rotation2), (Vector3_t3722313464 *)(&___point3), (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 UnityEngine.Physics::ClosestPoint(UnityEngine.Vector3,UnityEngine.Collider,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Physics_ClosestPoint_m3854099429 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point0, Collider_t1773347010 * ___collider1, Vector3_t3722313464  ___position2, Quaternion_t2301928331  ___rotation3, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Collider_t1773347010 * L_0 = ___collider1;
		Vector3_t3722313464  L_1 = ___position2;
		Quaternion_t2301928331  L_2 = ___rotation3;
		Vector3_t3722313464  L_3 = ___point0;
		Vector3_t3722313464  L_4 = Physics_Query_ClosestPoint_m2134083250(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0010;
	}

IL_0010:
	{
		Vector3_t3722313464  L_5 = V_0;
		return L_5;
	}
}
// System.Int32 UnityEngine.Physics::OverlapSphereNonAlloc(UnityEngine.Vector3,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapSphereNonAlloc_m308122717 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___position0, float ___radius1, ColliderU5BU5D_t4234922487* ___results2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	{
		float L_0 = ___radius1;
		ColliderU5BU5D_t4234922487* L_1 = ___results2;
		int32_t L_2 = ___layerMask3;
		int32_t L_3 = ___queryTriggerInteraction4;
		int32_t L_4 = Physics_OverlapSphereNonAlloc_Injected_m2763198382(NULL /*static, unused*/, (Vector3_t3722313464 *)(&___position0), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 UnityEngine.Physics::OverlapBoxNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Collider[],UnityEngine.Quaternion,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapBoxNonAlloc_m2901297401 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___center0, Vector3_t3722313464  ___halfExtents1, ColliderU5BU5D_t4234922487* ___results2, Quaternion_t2301928331  ___orientation3, int32_t ___mask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	{
		ColliderU5BU5D_t4234922487* L_0 = ___results2;
		int32_t L_1 = ___mask4;
		int32_t L_2 = ___queryTriggerInteraction5;
		int32_t L_3 = Physics_OverlapBoxNonAlloc_Injected_m1239215163(NULL /*static, unused*/, (Vector3_t3722313464 *)(&___center0), (Vector3_t3722313464 *)(&___halfExtents1), L_0, (Quaternion_t2301928331 *)(&___orientation3), L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 UnityEngine.Physics::OverlapCapsuleNonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapCapsuleNonAlloc_m260346865 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  ___point00, Vector3_t3722313464  ___point11, float ___radius2, ColliderU5BU5D_t4234922487* ___results3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	{
		float L_0 = ___radius2;
		ColliderU5BU5D_t4234922487* L_1 = ___results3;
		int32_t L_2 = ___layerMask4;
		int32_t L_3 = ___queryTriggerInteraction5;
		int32_t L_4 = Physics_OverlapCapsuleNonAlloc_Injected_m3724035292(NULL /*static, unused*/, (Vector3_t3722313464 *)(&___point00), (Vector3_t3722313464 *)(&___point11), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void UnityEngine.Physics::get_gravity_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Physics_get_gravity_Injected_m110431617 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Physics_get_gravity_Injected_m110431617_ftn) (Vector3_t3722313464 *);
	static Physics_get_gravity_Injected_m110431617_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_get_gravity_Injected_m110431617_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::get_gravity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(___ret0);
}
// System.Boolean UnityEngine.Physics::Query_RaycastTest_Injected(UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Query_RaycastTest_Injected_m2116672205 (RuntimeObject * __this /* static, unused */, Ray_t3785851493 * ___ray0, float ___maxDistance1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	typedef bool (*Physics_Query_RaycastTest_Injected_m2116672205_ftn) (Ray_t3785851493 *, float, int32_t, int32_t);
	static Physics_Query_RaycastTest_Injected_m2116672205_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_Query_RaycastTest_Injected_m2116672205_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::Query_RaycastTest_Injected(UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___ray0, ___maxDistance1, ___layerMask2, ___queryTriggerInteraction3);
	return retVal;
}
// System.Boolean UnityEngine.Physics::Internal_Raycast_Injected(UnityEngine.Ray&,System.Single,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR bool Physics_Internal_Raycast_Injected_m1408743426 (RuntimeObject * __this /* static, unused */, Ray_t3785851493 * ___ray0, float ___maxDistance1, RaycastHit_t1056001966 * ___hit2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	typedef bool (*Physics_Internal_Raycast_Injected_m1408743426_ftn) (Ray_t3785851493 *, float, RaycastHit_t1056001966 *, int32_t, int32_t);
	static Physics_Internal_Raycast_Injected_m1408743426_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_Internal_Raycast_Injected_m1408743426_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::Internal_Raycast_Injected(UnityEngine.Ray&,System.Single,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)");
	bool retVal = _il2cpp_icall_func(___ray0, ___maxDistance1, ___hit2, ___layerMask3, ___queryTriggerInteraction4);
	return retVal;
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::Internal_RaycastAll_Injected(UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t1690781147* Physics_Internal_RaycastAll_Injected_m2931638140 (RuntimeObject * __this /* static, unused */, Ray_t3785851493 * ___ray0, float ___maxDistance1, int32_t ___mask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	typedef RaycastHitU5BU5D_t1690781147* (*Physics_Internal_RaycastAll_Injected_m2931638140_ftn) (Ray_t3785851493 *, float, int32_t, int32_t);
	static Physics_Internal_RaycastAll_Injected_m2931638140_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_Internal_RaycastAll_Injected_m2931638140_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::Internal_RaycastAll_Injected(UnityEngine.Ray&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	RaycastHitU5BU5D_t1690781147* retVal = _il2cpp_icall_func(___ray0, ___maxDistance1, ___mask2, ___queryTriggerInteraction3);
	return retVal;
}
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere_Injected(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR ColliderU5BU5D_t4234922487* Physics_OverlapSphere_Injected_m2294319753 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___position0, float ___radius1, int32_t ___layerMask2, int32_t ___queryTriggerInteraction3, const RuntimeMethod* method)
{
	typedef ColliderU5BU5D_t4234922487* (*Physics_OverlapSphere_Injected_m2294319753_ftn) (Vector3_t3722313464 *, float, int32_t, int32_t);
	static Physics_OverlapSphere_Injected_m2294319753_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_OverlapSphere_Injected_m2294319753_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::OverlapSphere_Injected(UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)");
	ColliderU5BU5D_t4234922487* retVal = _il2cpp_icall_func(___position0, ___radius1, ___layerMask2, ___queryTriggerInteraction3);
	return retVal;
}
// System.Void UnityEngine.Physics::Query_ClosestPoint_Injected(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Physics_Query_ClosestPoint_Injected_m1329700239 (RuntimeObject * __this /* static, unused */, Collider_t1773347010 * ___collider0, Vector3_t3722313464 * ___position1, Quaternion_t2301928331 * ___rotation2, Vector3_t3722313464 * ___point3, Vector3_t3722313464 * ___ret4, const RuntimeMethod* method)
{
	typedef void (*Physics_Query_ClosestPoint_Injected_m1329700239_ftn) (Collider_t1773347010 *, Vector3_t3722313464 *, Quaternion_t2301928331 *, Vector3_t3722313464 *, Vector3_t3722313464 *);
	static Physics_Query_ClosestPoint_Injected_m1329700239_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_Query_ClosestPoint_Injected_m1329700239_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::Query_ClosestPoint_Injected(UnityEngine.Collider,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___collider0, ___position1, ___rotation2, ___point3, ___ret4);
}
// System.Int32 UnityEngine.Physics::OverlapSphereNonAlloc_Injected(UnityEngine.Vector3&,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapSphereNonAlloc_Injected_m2763198382 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___position0, float ___radius1, ColliderU5BU5D_t4234922487* ___results2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const RuntimeMethod* method)
{
	typedef int32_t (*Physics_OverlapSphereNonAlloc_Injected_m2763198382_ftn) (Vector3_t3722313464 *, float, ColliderU5BU5D_t4234922487*, int32_t, int32_t);
	static Physics_OverlapSphereNonAlloc_Injected_m2763198382_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_OverlapSphereNonAlloc_Injected_m2763198382_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::OverlapSphereNonAlloc_Injected(UnityEngine.Vector3&,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)");
	int32_t retVal = _il2cpp_icall_func(___position0, ___radius1, ___results2, ___layerMask3, ___queryTriggerInteraction4);
	return retVal;
}
// System.Int32 UnityEngine.Physics::OverlapBoxNonAlloc_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Collider[],UnityEngine.Quaternion&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapBoxNonAlloc_Injected_m1239215163 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___center0, Vector3_t3722313464 * ___halfExtents1, ColliderU5BU5D_t4234922487* ___results2, Quaternion_t2301928331 * ___orientation3, int32_t ___mask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	typedef int32_t (*Physics_OverlapBoxNonAlloc_Injected_m1239215163_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, ColliderU5BU5D_t4234922487*, Quaternion_t2301928331 *, int32_t, int32_t);
	static Physics_OverlapBoxNonAlloc_Injected_m1239215163_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_OverlapBoxNonAlloc_Injected_m1239215163_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::OverlapBoxNonAlloc_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Collider[],UnityEngine.Quaternion&,System.Int32,UnityEngine.QueryTriggerInteraction)");
	int32_t retVal = _il2cpp_icall_func(___center0, ___halfExtents1, ___results2, ___orientation3, ___mask4, ___queryTriggerInteraction5);
	return retVal;
}
// System.Int32 UnityEngine.Physics::OverlapCapsuleNonAlloc_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C" IL2CPP_METHOD_ATTR int32_t Physics_OverlapCapsuleNonAlloc_Injected_m3724035292 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464 * ___point00, Vector3_t3722313464 * ___point11, float ___radius2, ColliderU5BU5D_t4234922487* ___results3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const RuntimeMethod* method)
{
	typedef int32_t (*Physics_OverlapCapsuleNonAlloc_Injected_m3724035292_ftn) (Vector3_t3722313464 *, Vector3_t3722313464 *, float, ColliderU5BU5D_t4234922487*, int32_t, int32_t);
	static Physics_OverlapCapsuleNonAlloc_Injected_m3724035292_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Physics_OverlapCapsuleNonAlloc_Injected_m3724035292_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Physics::OverlapCapsuleNonAlloc_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,UnityEngine.Collider[],System.Int32,UnityEngine.QueryTriggerInteraction)");
	int32_t retVal = _il2cpp_icall_func(___point00, ___point11, ___radius2, ___results3, ___layerMask4, ___queryTriggerInteraction5);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" IL2CPP_METHOD_ATTR Collider_t1773347010 * RaycastHit_get_collider_m1464180279 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RaycastHit_get_collider_m1464180279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Collider_t1773347010 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_m_Collider_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_t631007953 * L_1 = Object_FindObjectFromInstanceID_m235838713(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = ((Collider_t1773347010 *)IsInstClass((RuntimeObject*)L_1, Collider_t1773347010_il2cpp_TypeInfo_var));
		goto IL_0017;
	}

IL_0017:
	{
		Collider_t1773347010 * L_2 = V_0;
		return L_2;
	}
}
extern "C"  Collider_t1773347010 * RaycastHit_get_collider_m1464180279_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_collider_m1464180279(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_point_m2236647085 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_Point_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  RaycastHit_get_point_m2236647085_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_point_m2236647085(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  RaycastHit_get_normal_m1232181746 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t3722313464  L_0 = __this->get_m_Normal_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_t3722313464  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector3_t3722313464  RaycastHit_get_normal_m1232181746_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_normal_m1232181746(_thisAdjusted, method);
}
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m3727327466 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Distance_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float RaycastHit_get_distance_m3727327466_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit_t1056001966 * _thisAdjusted = reinterpret_cast<RaycastHit_t1056001966 *>(__this + 1);
	return RaycastHit_get_distance_m3727327466(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rigidbody::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Rigidbody__ctor_m1806995817 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	{
		Component__ctor_m1928064382(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_velocity_m2993632669 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody_get_velocity_Injected_m706438584(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m2899403247 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_set_velocity_Injected_m2305696487(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_angularVelocity_m191123884 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody_get_angularVelocity_Injected_m2526926949(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m4254006699 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_set_angularVelocity_Injected_m4058519748(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Single UnityEngine.Rigidbody::get_drag()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody_get_drag_m3991710090 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef float (*Rigidbody_get_drag_m3991710090_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_drag_m3991710090_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_drag_m3991710090_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_drag()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m2933262323 (Rigidbody_t3916780224 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_drag_m2933262323_ftn) (Rigidbody_t3916780224 *, float);
	static Rigidbody_set_drag_m2933262323_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_drag_m2933262323_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_drag(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Rigidbody::get_angularDrag()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody_get_angularDrag_m1943636787 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef float (*Rigidbody_get_angularDrag_m1943636787_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_angularDrag_m1943636787_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_angularDrag_m1943636787_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_angularDrag()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_angularDrag(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_angularDrag_m3497419500 (Rigidbody_t3916780224 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_angularDrag_m3497419500_ftn) (Rigidbody_t3916780224 *, float);
	static Rigidbody_set_angularDrag_m3497419500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_angularDrag_m3497419500_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_angularDrag(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Single UnityEngine.Rigidbody::get_mass()
extern "C" IL2CPP_METHOD_ATTR float Rigidbody_get_mass_m1622028245 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef float (*Rigidbody_get_mass_m1622028245_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_mass_m1622028245_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_mass_m1622028245_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_mass()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_mass_m978346690 (Rigidbody_t3916780224 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_mass_m978346690_ftn) (Rigidbody_t3916780224 *, float);
	static Rigidbody_set_mass_m978346690_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_mass_m978346690_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_mass(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Rigidbody::get_useGravity()
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_get_useGravity_m649758196 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef bool (*Rigidbody_get_useGravity_m649758196_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_useGravity_m649758196_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_useGravity_m649758196_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_useGravity()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1752110328 (Rigidbody_t3916780224 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_useGravity_m1752110328_ftn) (Rigidbody_t3916780224 *, bool);
	static Rigidbody_set_useGravity_m1752110328_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_useGravity_m1752110328_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_useGravity(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_m403342600 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef bool (*Rigidbody_get_isKinematic_m403342600_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_isKinematic_m403342600_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_isKinematic_m403342600_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_isKinematic()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m1802205683 (Rigidbody_t3916780224 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_isKinematic_m1802205683_ftn) (Rigidbody_t3916780224 *, bool);
	static Rigidbody_set_isKinematic_m1802205683_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_isKinematic_m1802205683_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_isKinematic(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m754206839 (Rigidbody_t3916780224 * __this, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_freezeRotation_m754206839_ftn) (Rigidbody_t3916780224 *, bool);
	static Rigidbody_set_freezeRotation_m754206839_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_freezeRotation_m754206839_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.RigidbodyConstraints UnityEngine.Rigidbody::get_constraints()
extern "C" IL2CPP_METHOD_ATTR int32_t Rigidbody_get_constraints_m3735968085 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Rigidbody_get_constraints_m3735968085_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_get_constraints_m3735968085_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_constraints_m3735968085_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_constraints()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_collisionDetectionMode_m777008546 (Rigidbody_t3916780224 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_collisionDetectionMode_m777008546_ftn) (Rigidbody_t3916780224 *, int32_t);
	static Rigidbody_set_collisionDetectionMode_m777008546_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_collisionDetectionMode_m777008546_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_collisionDetectionMode(UnityEngine.CollisionDetectionMode)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_centerOfMass()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_centerOfMass_m1759321844 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody_get_centerOfMass_Injected_m3944393955(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_worldCenterOfMass()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_worldCenterOfMass_m2417026598 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody_get_worldCenterOfMass_Injected_m2858986333(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_inertiaTensorRotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Rigidbody_get_inertiaTensorRotation_m3465717535 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody_get_inertiaTensorRotation_Injected_m387228799(__this, (Quaternion_t2301928331 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t2301928331  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_inertiaTensor()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_inertiaTensor_m997077509 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody_get_inertiaTensor_Injected_m800734279(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_get_position_m1712729619 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody_get_position_Injected_m1353121118(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_position_m2293099797 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_set_position_Injected_m3052960929(__this, (Vector3_t3722313464 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Rigidbody::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Rigidbody_get_rotation_m3610554181 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody_get_rotation_Injected_m2866212892(__this, (Quaternion_t2301928331 *)(&V_0), /*hidden argument*/NULL);
		Quaternion_t2301928331  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::set_rotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_rotation_m4187031548 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331  ___value0, const RuntimeMethod* method)
{
	{
		Rigidbody_set_rotation_Injected_m857481627(__this, (Quaternion_t2301928331 *)(&___value0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_maxAngularVelocity_m3527950699 (Rigidbody_t3916780224 * __this, float ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_maxAngularVelocity_m3527950699_ftn) (Rigidbody_t3916780224 *, float);
	static Rigidbody_set_maxAngularVelocity_m3527950699_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_maxAngularVelocity_m3527950699_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_m2109341474 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___position0, const RuntimeMethod* method)
{
	{
		Rigidbody_MovePosition_Injected_m3276609392(__this, (Vector3_t3722313464 *)(&___position0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_m72717779 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331  ___rot0, const RuntimeMethod* method)
{
	{
		Rigidbody_MoveRotation_Injected_m1183938674(__this, (Quaternion_t2301928331 *)(&___rot0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::Sleep()
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_Sleep_m1823108224 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_Sleep_m1823108224_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_Sleep_m1823108224_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_Sleep_m1823108224_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::Sleep()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.Rigidbody::IsSleeping()
extern "C" IL2CPP_METHOD_ATTR bool Rigidbody_IsSleeping_m3823601939 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef bool (*Rigidbody_IsSleeping_m3823601939_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_IsSleeping_m3823601939_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_IsSleeping_m3823601939_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::IsSleeping()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Rigidbody::WakeUp()
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_WakeUp_m4083745205 (Rigidbody_t3916780224 * __this, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_WakeUp_m4083745205_ftn) (Rigidbody_t3916780224 *);
	static Rigidbody_WakeUp_m4083745205_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_WakeUp_m4083745205_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::WakeUp()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::GetPointVelocity(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Rigidbody_GetPointVelocity_m480821301 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___worldPoint0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rigidbody_GetPointVelocity_Injected_m1384054409(__this, (Vector3_t3722313464 *)(&___worldPoint0), (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m1059068722 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___force0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode1;
		Rigidbody_AddForce_Injected_m2882066496(__this, (Vector3_t3722313464 *)(&___force0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_m1107708961 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  ___torque0, int32_t ___mode1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode1;
		Rigidbody_AddTorque_Injected_m1490512715(__this, (Vector3_t3722313464 *)(&___torque0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Rigidbody::get_velocity_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_velocity_Injected_m706438584 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_get_velocity_Injected_m706438584_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_get_velocity_Injected_m706438584_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_velocity_Injected_m706438584_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_velocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Rigidbody::set_velocity_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_Injected_m2305696487 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_velocity_Injected_m2305696487_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_set_velocity_Injected_m2305696487_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_velocity_Injected_m2305696487_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_velocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::get_angularVelocity_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_angularVelocity_Injected_m2526926949 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_get_angularVelocity_Injected_m2526926949_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_get_angularVelocity_Injected_m2526926949_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_angularVelocity_Injected_m2526926949_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_angularVelocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Rigidbody::set_angularVelocity_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_Injected_m4058519748 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_angularVelocity_Injected_m4058519748_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_set_angularVelocity_Injected_m4058519748_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_angularVelocity_Injected_m4058519748_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_angularVelocity_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::get_centerOfMass_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_centerOfMass_Injected_m3944393955 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_get_centerOfMass_Injected_m3944393955_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_get_centerOfMass_Injected_m3944393955_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_centerOfMass_Injected_m3944393955_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_centerOfMass_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Rigidbody::get_worldCenterOfMass_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_worldCenterOfMass_Injected_m2858986333 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_get_worldCenterOfMass_Injected_m2858986333_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_get_worldCenterOfMass_Injected_m2858986333_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_worldCenterOfMass_Injected_m2858986333_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_worldCenterOfMass_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Rigidbody::get_inertiaTensorRotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_inertiaTensorRotation_Injected_m387228799 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_get_inertiaTensorRotation_Injected_m387228799_ftn) (Rigidbody_t3916780224 *, Quaternion_t2301928331 *);
	static Rigidbody_get_inertiaTensorRotation_Injected_m387228799_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_inertiaTensorRotation_Injected_m387228799_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_inertiaTensorRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Rigidbody::get_inertiaTensor_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_inertiaTensor_Injected_m800734279 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_get_inertiaTensor_Injected_m800734279_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_get_inertiaTensor_Injected_m800734279_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_inertiaTensor_Injected_m800734279_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_inertiaTensor_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Rigidbody::get_position_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_position_Injected_m1353121118 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_get_position_Injected_m1353121118_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_get_position_Injected_m1353121118_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_position_Injected_m1353121118_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_position_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Rigidbody::set_position_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_position_Injected_m3052960929 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_position_Injected_m3052960929_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_set_position_Injected_m3052960929_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_position_Injected_m3052960929_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_position_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::get_rotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_get_rotation_Injected_m2866212892 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_get_rotation_Injected_m2866212892_ftn) (Rigidbody_t3916780224 *, Quaternion_t2301928331 *);
	static Rigidbody_get_rotation_Injected_m2866212892_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_get_rotation_Injected_m2866212892_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::get_rotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Rigidbody::set_rotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_set_rotation_Injected_m857481627 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___value0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_set_rotation_Injected_m857481627_ftn) (Rigidbody_t3916780224 *, Quaternion_t2301928331 *);
	static Rigidbody_set_rotation_Injected_m857481627_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_set_rotation_Injected_m857481627_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::set_rotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Rigidbody::MovePosition_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_Injected_m3276609392 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___position0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_MovePosition_Injected_m3276609392_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *);
	static Rigidbody_MovePosition_Injected_m3276609392_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_MovePosition_Injected_m3276609392_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::MovePosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___position0);
}
// System.Void UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_Injected_m1183938674 (Rigidbody_t3916780224 * __this, Quaternion_t2301928331 * ___rot0, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_MoveRotation_Injected_m1183938674_ftn) (Rigidbody_t3916780224 *, Quaternion_t2301928331 *);
	static Rigidbody_MoveRotation_Injected_m1183938674_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_MoveRotation_Injected_m1183938674_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::MoveRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___rot0);
}
// System.Void UnityEngine.Rigidbody::GetPointVelocity_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_GetPointVelocity_Injected_m1384054409 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___worldPoint0, Vector3_t3722313464 * ___ret1, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_GetPointVelocity_Injected_m1384054409_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, Vector3_t3722313464 *);
	static Rigidbody_GetPointVelocity_Injected_m1384054409_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_GetPointVelocity_Injected_m1384054409_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::GetPointVelocity_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___worldPoint0, ___ret1);
}
// System.Void UnityEngine.Rigidbody::AddForce_Injected(UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddForce_Injected_m2882066496 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___force0, int32_t ___mode1, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_AddForce_Injected_m2882066496_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, int32_t);
	static Rigidbody_AddForce_Injected_m2882066496_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_AddForce_Injected_m2882066496_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::AddForce_Injected(UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(__this, ___force0, ___mode1);
}
// System.Void UnityEngine.Rigidbody::AddTorque_Injected(UnityEngine.Vector3&,UnityEngine.ForceMode)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody_AddTorque_Injected_m1490512715 (Rigidbody_t3916780224 * __this, Vector3_t3722313464 * ___torque0, int32_t ___mode1, const RuntimeMethod* method)
{
	typedef void (*Rigidbody_AddTorque_Injected_m1490512715_ftn) (Rigidbody_t3916780224 *, Vector3_t3722313464 *, int32_t);
	static Rigidbody_AddTorque_Injected_m1490512715_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Rigidbody_AddTorque_Injected_m1490512715_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Rigidbody::AddTorque_Injected(UnityEngine.Vector3&,UnityEngine.ForceMode)");
	_il2cpp_icall_func(__this, ___torque0, ___mode1);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.SoftJointLimit::get_limit()
extern "C" IL2CPP_METHOD_ATTR float SoftJointLimit_get_limit_m1241292965 (SoftJointLimit_t3866553011 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Limit_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float SoftJointLimit_get_limit_m1241292965_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	SoftJointLimit_t3866553011 * _thisAdjusted = reinterpret_cast<SoftJointLimit_t3866553011 *>(__this + 1);
	return SoftJointLimit_get_limit_m1241292965(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 UnityEngine.SphereCollider::get_center()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  SphereCollider_get_center_m3629329558 (SphereCollider_t2077223608 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		SphereCollider_get_center_Injected_m1495144477(__this, (Vector3_t3722313464 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t3722313464  L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.SphereCollider::get_radius()
extern "C" IL2CPP_METHOD_ATTR float SphereCollider_get_radius_m3258976711 (SphereCollider_t2077223608 * __this, const RuntimeMethod* method)
{
	typedef float (*SphereCollider_get_radius_m3258976711_ftn) (SphereCollider_t2077223608 *);
	static SphereCollider_get_radius_m3258976711_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphereCollider_get_radius_m3258976711_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SphereCollider::get_radius()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.SphereCollider::get_center_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void SphereCollider_get_center_Injected_m1495144477 (SphereCollider_t2077223608 * __this, Vector3_t3722313464 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*SphereCollider_get_center_Injected_m1495144477_ftn) (SphereCollider_t2077223608 *, Vector3_t3722313464 *);
	static SphereCollider_get_center_Injected_m1495144477_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SphereCollider_get_center_Injected_m1495144477_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SphereCollider::get_center_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

#include "il2cpp-config.h"

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


// Leap.Arm
struct Arm_t507750312;
// Leap.Bone[]
struct BoneU5BU5D_t3230550922;
// Leap.DistortionData
struct DistortionData_t2402192950;
// Leap.FailedDevice[]
struct FailedDeviceU5BU5D_t3580892072;
// Leap.Image
struct Image_t2297214883;
// Leap.Unity.Deque`1<Leap.Unity.SlidingMax/IndexValuePair>
struct Deque_1_t585375930;
// Leap.Vector[]
struct VectorU5BU5D_t59731885;
// LeapInternal.Allocate
struct Allocate_t169257233;
// LeapInternal.Deallocate
struct Deallocate_t3308055752;
// LeapInternal.ImageData
struct ImageData_t1944121525;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<LeapInternal.MemoryManager/PoolKey,System.Collections.Generic.Queue`1<System.Object>>
struct Dictionary_2_t125294337;
// System.Collections.Generic.Dictionary`2<System.IntPtr,LeapInternal.MemoryManager/ActiveMemoryInfo>
struct Dictionary_2_t4050696619;
// System.Collections.Generic.List`1<Leap.Finger>
struct List_1_t549942457;
// System.Collections.Generic.List`1<Leap.Hand>
struct List_1_t371872850;
// System.Collections.Generic.Queue`1<Leap.Hand>
struct Queue_1_t3041024898;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Void
struct Void_t1185182177;

struct Vector_t2166112452 ;



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
#ifndef CONSTANTS_T4098236021_H
#define CONSTANTS_T4098236021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Constants
struct  Constants_t4098236021  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTS_T4098236021_H
#ifndef FRAME_T1926239594_H
#define FRAME_T1926239594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Frame
struct  Frame_t1926239594  : public RuntimeObject
{
public:
	// System.Int64 Leap.Frame::Id
	int64_t ___Id_1;
	// System.Int64 Leap.Frame::Timestamp
	int64_t ___Timestamp_2;
	// System.Single Leap.Frame::CurrentFramesPerSecond
	float ___CurrentFramesPerSecond_3;
	// System.Collections.Generic.List`1<Leap.Hand> Leap.Frame::Hands
	List_1_t371872850 * ___Hands_4;

public:
	inline static int32_t get_offset_of_Id_1() { return static_cast<int32_t>(offsetof(Frame_t1926239594, ___Id_1)); }
	inline int64_t get_Id_1() const { return ___Id_1; }
	inline int64_t* get_address_of_Id_1() { return &___Id_1; }
	inline void set_Id_1(int64_t value)
	{
		___Id_1 = value;
	}

	inline static int32_t get_offset_of_Timestamp_2() { return static_cast<int32_t>(offsetof(Frame_t1926239594, ___Timestamp_2)); }
	inline int64_t get_Timestamp_2() const { return ___Timestamp_2; }
	inline int64_t* get_address_of_Timestamp_2() { return &___Timestamp_2; }
	inline void set_Timestamp_2(int64_t value)
	{
		___Timestamp_2 = value;
	}

	inline static int32_t get_offset_of_CurrentFramesPerSecond_3() { return static_cast<int32_t>(offsetof(Frame_t1926239594, ___CurrentFramesPerSecond_3)); }
	inline float get_CurrentFramesPerSecond_3() const { return ___CurrentFramesPerSecond_3; }
	inline float* get_address_of_CurrentFramesPerSecond_3() { return &___CurrentFramesPerSecond_3; }
	inline void set_CurrentFramesPerSecond_3(float value)
	{
		___CurrentFramesPerSecond_3 = value;
	}

	inline static int32_t get_offset_of_Hands_4() { return static_cast<int32_t>(offsetof(Frame_t1926239594, ___Hands_4)); }
	inline List_1_t371872850 * get_Hands_4() const { return ___Hands_4; }
	inline List_1_t371872850 ** get_address_of_Hands_4() { return &___Hands_4; }
	inline void set_Hands_4(List_1_t371872850 * value)
	{
		___Hands_4 = value;
		Il2CppCodeGenWriteBarrier((&___Hands_4), value);
	}
};

struct Frame_t1926239594_ThreadStaticFields
{
public:
	// System.Collections.Generic.Queue`1<Leap.Hand> Leap.Frame::_handPool
	Queue_1_t3041024898 * ____handPool_0;

public:
	inline static int32_t get_offset_of__handPool_0() { return static_cast<int32_t>(offsetof(Frame_t1926239594_ThreadStaticFields, ____handPool_0)); }
	inline Queue_1_t3041024898 * get__handPool_0() const { return ____handPool_0; }
	inline Queue_1_t3041024898 ** get_address_of__handPool_0() { return &____handPool_0; }
	inline void set__handPool_0(Queue_1_t3041024898 * value)
	{
		____handPool_0 = value;
		Il2CppCodeGenWriteBarrier((&____handPool_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAME_T1926239594_H
#ifndef IMAGE_T2297214883_H
#define IMAGE_T2297214883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Image
struct  Image_t2297214883  : public RuntimeObject
{
public:
	// LeapInternal.ImageData Leap.Image::leftImage
	ImageData_t1944121525 * ___leftImage_0;
	// LeapInternal.ImageData Leap.Image::rightImage
	ImageData_t1944121525 * ___rightImage_1;
	// System.Int64 Leap.Image::frameId
	int64_t ___frameId_2;
	// System.Int64 Leap.Image::timestamp
	int64_t ___timestamp_3;

public:
	inline static int32_t get_offset_of_leftImage_0() { return static_cast<int32_t>(offsetof(Image_t2297214883, ___leftImage_0)); }
	inline ImageData_t1944121525 * get_leftImage_0() const { return ___leftImage_0; }
	inline ImageData_t1944121525 ** get_address_of_leftImage_0() { return &___leftImage_0; }
	inline void set_leftImage_0(ImageData_t1944121525 * value)
	{
		___leftImage_0 = value;
		Il2CppCodeGenWriteBarrier((&___leftImage_0), value);
	}

	inline static int32_t get_offset_of_rightImage_1() { return static_cast<int32_t>(offsetof(Image_t2297214883, ___rightImage_1)); }
	inline ImageData_t1944121525 * get_rightImage_1() const { return ___rightImage_1; }
	inline ImageData_t1944121525 ** get_address_of_rightImage_1() { return &___rightImage_1; }
	inline void set_rightImage_1(ImageData_t1944121525 * value)
	{
		___rightImage_1 = value;
		Il2CppCodeGenWriteBarrier((&___rightImage_1), value);
	}

	inline static int32_t get_offset_of_frameId_2() { return static_cast<int32_t>(offsetof(Image_t2297214883, ___frameId_2)); }
	inline int64_t get_frameId_2() const { return ___frameId_2; }
	inline int64_t* get_address_of_frameId_2() { return &___frameId_2; }
	inline void set_frameId_2(int64_t value)
	{
		___frameId_2 = value;
	}

	inline static int32_t get_offset_of_timestamp_3() { return static_cast<int32_t>(offsetof(Image_t2297214883, ___timestamp_3)); }
	inline int64_t get_timestamp_3() const { return ___timestamp_3; }
	inline int64_t* get_address_of_timestamp_3() { return &___timestamp_3; }
	inline void set_timestamp_3(int64_t value)
	{
		___timestamp_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2297214883_H
#ifndef TRANSFORMEXTENSIONS_T602296149_H
#define TRANSFORMEXTENSIONS_T602296149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.TransformExtensions
struct  TransformExtensions_t602296149  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMEXTENSIONS_T602296149_H
#ifndef SLIDINGMAX_T3389982681_H
#define SLIDINGMAX_T3389982681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Unity.SlidingMax
struct  SlidingMax_t3389982681  : public RuntimeObject
{
public:
	// System.Int32 Leap.Unity.SlidingMax::_history
	int32_t ____history_0;
	// System.Int32 Leap.Unity.SlidingMax::_count
	int32_t ____count_1;
	// Leap.Unity.Deque`1<Leap.Unity.SlidingMax/IndexValuePair> Leap.Unity.SlidingMax::_buffer
	Deque_1_t585375930 * ____buffer_2;

public:
	inline static int32_t get_offset_of__history_0() { return static_cast<int32_t>(offsetof(SlidingMax_t3389982681, ____history_0)); }
	inline int32_t get__history_0() const { return ____history_0; }
	inline int32_t* get_address_of__history_0() { return &____history_0; }
	inline void set__history_0(int32_t value)
	{
		____history_0 = value;
	}

	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(SlidingMax_t3389982681, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}

	inline static int32_t get_offset_of__buffer_2() { return static_cast<int32_t>(offsetof(SlidingMax_t3389982681, ____buffer_2)); }
	inline Deque_1_t585375930 * get__buffer_2() const { return ____buffer_2; }
	inline Deque_1_t585375930 ** get_address_of__buffer_2() { return &____buffer_2; }
	inline void set__buffer_2(Deque_1_t585375930 * value)
	{
		____buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDINGMAX_T3389982681_H
#ifndef SMOOTHEDFLOAT_T3522733254_H
#define SMOOTHEDFLOAT_T3522733254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Unity.SmoothedFloat
struct  SmoothedFloat_t3522733254  : public RuntimeObject
{
public:
	// System.Single Leap.Unity.SmoothedFloat::value
	float ___value_0;
	// System.Single Leap.Unity.SmoothedFloat::delay
	float ___delay_1;
	// System.Boolean Leap.Unity.SmoothedFloat::reset
	bool ___reset_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SmoothedFloat_t3522733254, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_delay_1() { return static_cast<int32_t>(offsetof(SmoothedFloat_t3522733254, ___delay_1)); }
	inline float get_delay_1() const { return ___delay_1; }
	inline float* get_address_of_delay_1() { return &___delay_1; }
	inline void set_delay_1(float value)
	{
		___delay_1 = value;
	}

	inline static int32_t get_offset_of_reset_2() { return static_cast<int32_t>(offsetof(SmoothedFloat_t3522733254, ___reset_2)); }
	inline bool get_reset_2() const { return ___reset_2; }
	inline bool* get_address_of_reset_2() { return &___reset_2; }
	inline void set_reset_2(bool value)
	{
		___reset_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMOOTHEDFLOAT_T3522733254_H
#ifndef LEAPC_T2979983507_H
#define LEAPC_T2979983507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LeapC
struct  LeapC_t2979983507  : public RuntimeObject
{
public:

public:
};

struct LeapC_t2979983507_StaticFields
{
public:
	// System.Int32 LeapInternal.LeapC::DistortionSize
	int32_t ___DistortionSize_0;

public:
	inline static int32_t get_offset_of_DistortionSize_0() { return static_cast<int32_t>(offsetof(LeapC_t2979983507_StaticFields, ___DistortionSize_0)); }
	inline int32_t get_DistortionSize_0() const { return ___DistortionSize_0; }
	inline int32_t* get_address_of_DistortionSize_0() { return &___DistortionSize_0; }
	inline void set_DistortionSize_0(int32_t value)
	{
		___DistortionSize_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAPC_T2979983507_H
#ifndef LOGGER_T1004207994_H
#define LOGGER_T1004207994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.Logger
struct  Logger_t1004207994  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGGER_T1004207994_H
#ifndef MEMORYMANAGER_T274225929_H
#define MEMORYMANAGER_T274225929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.MemoryManager
struct  MemoryManager_t274225929  : public RuntimeObject
{
public:

public:
};

struct MemoryManager_t274225929_StaticFields
{
public:
	// System.Boolean LeapInternal.MemoryManager::EnablePooling
	bool ___EnablePooling_0;
	// System.UInt32 LeapInternal.MemoryManager::MinPoolSize
	uint32_t ___MinPoolSize_1;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,LeapInternal.MemoryManager/ActiveMemoryInfo> LeapInternal.MemoryManager::_activeMemory
	Dictionary_2_t4050696619 * ____activeMemory_2;
	// System.Collections.Generic.Dictionary`2<LeapInternal.MemoryManager/PoolKey,System.Collections.Generic.Queue`1<System.Object>> LeapInternal.MemoryManager::_pooledMemory
	Dictionary_2_t125294337 * ____pooledMemory_3;

public:
	inline static int32_t get_offset_of_EnablePooling_0() { return static_cast<int32_t>(offsetof(MemoryManager_t274225929_StaticFields, ___EnablePooling_0)); }
	inline bool get_EnablePooling_0() const { return ___EnablePooling_0; }
	inline bool* get_address_of_EnablePooling_0() { return &___EnablePooling_0; }
	inline void set_EnablePooling_0(bool value)
	{
		___EnablePooling_0 = value;
	}

	inline static int32_t get_offset_of_MinPoolSize_1() { return static_cast<int32_t>(offsetof(MemoryManager_t274225929_StaticFields, ___MinPoolSize_1)); }
	inline uint32_t get_MinPoolSize_1() const { return ___MinPoolSize_1; }
	inline uint32_t* get_address_of_MinPoolSize_1() { return &___MinPoolSize_1; }
	inline void set_MinPoolSize_1(uint32_t value)
	{
		___MinPoolSize_1 = value;
	}

	inline static int32_t get_offset_of__activeMemory_2() { return static_cast<int32_t>(offsetof(MemoryManager_t274225929_StaticFields, ____activeMemory_2)); }
	inline Dictionary_2_t4050696619 * get__activeMemory_2() const { return ____activeMemory_2; }
	inline Dictionary_2_t4050696619 ** get_address_of__activeMemory_2() { return &____activeMemory_2; }
	inline void set__activeMemory_2(Dictionary_2_t4050696619 * value)
	{
		____activeMemory_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeMemory_2), value);
	}

	inline static int32_t get_offset_of__pooledMemory_3() { return static_cast<int32_t>(offsetof(MemoryManager_t274225929_StaticFields, ____pooledMemory_3)); }
	inline Dictionary_2_t125294337 * get__pooledMemory_3() const { return ____pooledMemory_3; }
	inline Dictionary_2_t125294337 ** get_address_of__pooledMemory_3() { return &____pooledMemory_3; }
	inline void set__pooledMemory_3(Dictionary_2_t125294337 * value)
	{
		____pooledMemory_3 = value;
		Il2CppCodeGenWriteBarrier((&____pooledMemory_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYMANAGER_T274225929_H
#ifndef LIST_1_T1816580635_H
#define LIST_1_T1816580635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Leap.FailedDevice>
struct  List_1_t1816580635  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FailedDeviceU5BU5D_t3580892072* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1816580635, ____items_1)); }
	inline FailedDeviceU5BU5D_t3580892072* get__items_1() const { return ____items_1; }
	inline FailedDeviceU5BU5D_t3580892072** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FailedDeviceU5BU5D_t3580892072* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1816580635, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1816580635, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1816580635_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	FailedDeviceU5BU5D_t3580892072* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1816580635_StaticFields, ___EmptyArray_4)); }
	inline FailedDeviceU5BU5D_t3580892072* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline FailedDeviceU5BU5D_t3580892072** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(FailedDeviceU5BU5D_t3580892072* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1816580635_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
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
#ifndef BEGINPROFILINGBLOCKARGS_T384538013_H
#define BEGINPROFILINGBLOCKARGS_T384538013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.BeginProfilingBlockArgs
struct  BeginProfilingBlockArgs_t384538013 
{
public:
	// System.String Leap.BeginProfilingBlockArgs::blockName
	String_t* ___blockName_0;

public:
	inline static int32_t get_offset_of_blockName_0() { return static_cast<int32_t>(offsetof(BeginProfilingBlockArgs_t384538013, ___blockName_0)); }
	inline String_t* get_blockName_0() const { return ___blockName_0; }
	inline String_t** get_address_of_blockName_0() { return &___blockName_0; }
	inline void set_blockName_0(String_t* value)
	{
		___blockName_0 = value;
		Il2CppCodeGenWriteBarrier((&___blockName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Leap.BeginProfilingBlockArgs
struct BeginProfilingBlockArgs_t384538013_marshaled_pinvoke
{
	char* ___blockName_0;
};
// Native definition for COM marshalling of Leap.BeginProfilingBlockArgs
struct BeginProfilingBlockArgs_t384538013_marshaled_com
{
	Il2CppChar* ___blockName_0;
};
#endif // BEGINPROFILINGBLOCKARGS_T384538013_H
#ifndef BEGINPROFILINGFORTHREADARGS_T1715947996_H
#define BEGINPROFILINGFORTHREADARGS_T1715947996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.BeginProfilingForThreadArgs
struct  BeginProfilingForThreadArgs_t1715947996 
{
public:
	// System.String Leap.BeginProfilingForThreadArgs::threadName
	String_t* ___threadName_0;
	// System.String[] Leap.BeginProfilingForThreadArgs::blockNames
	StringU5BU5D_t1281789340* ___blockNames_1;

public:
	inline static int32_t get_offset_of_threadName_0() { return static_cast<int32_t>(offsetof(BeginProfilingForThreadArgs_t1715947996, ___threadName_0)); }
	inline String_t* get_threadName_0() const { return ___threadName_0; }
	inline String_t** get_address_of_threadName_0() { return &___threadName_0; }
	inline void set_threadName_0(String_t* value)
	{
		___threadName_0 = value;
		Il2CppCodeGenWriteBarrier((&___threadName_0), value);
	}

	inline static int32_t get_offset_of_blockNames_1() { return static_cast<int32_t>(offsetof(BeginProfilingForThreadArgs_t1715947996, ___blockNames_1)); }
	inline StringU5BU5D_t1281789340* get_blockNames_1() const { return ___blockNames_1; }
	inline StringU5BU5D_t1281789340** get_address_of_blockNames_1() { return &___blockNames_1; }
	inline void set_blockNames_1(StringU5BU5D_t1281789340* value)
	{
		___blockNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___blockNames_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Leap.BeginProfilingForThreadArgs
struct BeginProfilingForThreadArgs_t1715947996_marshaled_pinvoke
{
	char* ___threadName_0;
	char** ___blockNames_1;
};
// Native definition for COM marshalling of Leap.BeginProfilingForThreadArgs
struct BeginProfilingForThreadArgs_t1715947996_marshaled_com
{
	Il2CppChar* ___threadName_0;
	Il2CppChar** ___blockNames_1;
};
#endif // BEGINPROFILINGFORTHREADARGS_T1715947996_H
#ifndef ENDPROFILINGBLOCKARGS_T3615195081_H
#define ENDPROFILINGBLOCKARGS_T3615195081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.EndProfilingBlockArgs
struct  EndProfilingBlockArgs_t3615195081 
{
public:
	// System.String Leap.EndProfilingBlockArgs::blockName
	String_t* ___blockName_0;

public:
	inline static int32_t get_offset_of_blockName_0() { return static_cast<int32_t>(offsetof(EndProfilingBlockArgs_t3615195081, ___blockName_0)); }
	inline String_t* get_blockName_0() const { return ___blockName_0; }
	inline String_t** get_address_of_blockName_0() { return &___blockName_0; }
	inline void set_blockName_0(String_t* value)
	{
		___blockName_0 = value;
		Il2CppCodeGenWriteBarrier((&___blockName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Leap.EndProfilingBlockArgs
struct EndProfilingBlockArgs_t3615195081_marshaled_pinvoke
{
	char* ___blockName_0;
};
// Native definition for COM marshalling of Leap.EndProfilingBlockArgs
struct EndProfilingBlockArgs_t3615195081_marshaled_com
{
	Il2CppChar* ___blockName_0;
};
#endif // ENDPROFILINGBLOCKARGS_T3615195081_H
#ifndef ENDPROFILINGFORTHREADARGS_T2316443864_H
#define ENDPROFILINGFORTHREADARGS_T2316443864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.EndProfilingForThreadArgs
struct  EndProfilingForThreadArgs_t2316443864 
{
public:
	union
	{
		struct
		{
		};
		uint8_t EndProfilingForThreadArgs_t2316443864__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDPROFILINGFORTHREADARGS_T2316443864_H
#ifndef FAILEDDEVICELIST_T4229507291_H
#define FAILEDDEVICELIST_T4229507291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.FailedDeviceList
struct  FailedDeviceList_t4229507291  : public List_1_t1816580635
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FAILEDDEVICELIST_T4229507291_H
#ifndef LEAPQUATERNION_T1571790471_H
#define LEAPQUATERNION_T1571790471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.LeapQuaternion
struct  LeapQuaternion_t1571790471 
{
public:
	// System.Single Leap.LeapQuaternion::x
	float ___x_0;
	// System.Single Leap.LeapQuaternion::y
	float ___y_1;
	// System.Single Leap.LeapQuaternion::z
	float ___z_2;
	// System.Single Leap.LeapQuaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(LeapQuaternion_t1571790471, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(LeapQuaternion_t1571790471, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(LeapQuaternion_t1571790471, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(LeapQuaternion_t1571790471, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct LeapQuaternion_t1571790471_StaticFields
{
public:
	// Leap.LeapQuaternion Leap.LeapQuaternion::Identity
	LeapQuaternion_t1571790471  ___Identity_4;

public:
	inline static int32_t get_offset_of_Identity_4() { return static_cast<int32_t>(offsetof(LeapQuaternion_t1571790471_StaticFields, ___Identity_4)); }
	inline LeapQuaternion_t1571790471  get_Identity_4() const { return ___Identity_4; }
	inline LeapQuaternion_t1571790471 * get_address_of_Identity_4() { return &___Identity_4; }
	inline void set_Identity_4(LeapQuaternion_t1571790471  value)
	{
		___Identity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAPQUATERNION_T1571790471_H
#ifndef POINTMAPPING_T4234514857_H
#define POINTMAPPING_T4234514857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.PointMapping
struct  PointMapping_t4234514857 
{
public:
	// System.Int64 Leap.PointMapping::frameId
	int64_t ___frameId_0;
	// System.Int64 Leap.PointMapping::timestamp
	int64_t ___timestamp_1;
	// Leap.Vector[] Leap.PointMapping::points
	VectorU5BU5D_t59731885* ___points_2;
	// System.UInt32[] Leap.PointMapping::ids
	UInt32U5BU5D_t2770800703* ___ids_3;

public:
	inline static int32_t get_offset_of_frameId_0() { return static_cast<int32_t>(offsetof(PointMapping_t4234514857, ___frameId_0)); }
	inline int64_t get_frameId_0() const { return ___frameId_0; }
	inline int64_t* get_address_of_frameId_0() { return &___frameId_0; }
	inline void set_frameId_0(int64_t value)
	{
		___frameId_0 = value;
	}

	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(PointMapping_t4234514857, ___timestamp_1)); }
	inline int64_t get_timestamp_1() const { return ___timestamp_1; }
	inline int64_t* get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(int64_t value)
	{
		___timestamp_1 = value;
	}

	inline static int32_t get_offset_of_points_2() { return static_cast<int32_t>(offsetof(PointMapping_t4234514857, ___points_2)); }
	inline VectorU5BU5D_t59731885* get_points_2() const { return ___points_2; }
	inline VectorU5BU5D_t59731885** get_address_of_points_2() { return &___points_2; }
	inline void set_points_2(VectorU5BU5D_t59731885* value)
	{
		___points_2 = value;
		Il2CppCodeGenWriteBarrier((&___points_2), value);
	}

	inline static int32_t get_offset_of_ids_3() { return static_cast<int32_t>(offsetof(PointMapping_t4234514857, ___ids_3)); }
	inline UInt32U5BU5D_t2770800703* get_ids_3() const { return ___ids_3; }
	inline UInt32U5BU5D_t2770800703** get_address_of_ids_3() { return &___ids_3; }
	inline void set_ids_3(UInt32U5BU5D_t2770800703* value)
	{
		___ids_3 = value;
		Il2CppCodeGenWriteBarrier((&___ids_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Leap.PointMapping
struct PointMapping_t4234514857_marshaled_pinvoke
{
	int64_t ___frameId_0;
	int64_t ___timestamp_1;
	Vector_t2166112452 * ___points_2;
	uint32_t* ___ids_3;
};
// Native definition for COM marshalling of Leap.PointMapping
struct PointMapping_t4234514857_marshaled_com
{
	int64_t ___frameId_0;
	int64_t ___timestamp_1;
	Vector_t2166112452 * ___points_2;
	uint32_t* ___ids_3;
};
#endif // POINTMAPPING_T4234514857_H
#ifndef HERMITESPLINE_T3057915579_H
#define HERMITESPLINE_T3057915579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Unity.Animation.HermiteSpline
struct  HermiteSpline_t3057915579 
{
public:
	// System.Single Leap.Unity.Animation.HermiteSpline::t0
	float ___t0_0;
	// System.Single Leap.Unity.Animation.HermiteSpline::t1
	float ___t1_1;
	// System.Single Leap.Unity.Animation.HermiteSpline::pos0
	float ___pos0_2;
	// System.Single Leap.Unity.Animation.HermiteSpline::pos1
	float ___pos1_3;
	// System.Single Leap.Unity.Animation.HermiteSpline::vel0
	float ___vel0_4;
	// System.Single Leap.Unity.Animation.HermiteSpline::vel1
	float ___vel1_5;

public:
	inline static int32_t get_offset_of_t0_0() { return static_cast<int32_t>(offsetof(HermiteSpline_t3057915579, ___t0_0)); }
	inline float get_t0_0() const { return ___t0_0; }
	inline float* get_address_of_t0_0() { return &___t0_0; }
	inline void set_t0_0(float value)
	{
		___t0_0 = value;
	}

	inline static int32_t get_offset_of_t1_1() { return static_cast<int32_t>(offsetof(HermiteSpline_t3057915579, ___t1_1)); }
	inline float get_t1_1() const { return ___t1_1; }
	inline float* get_address_of_t1_1() { return &___t1_1; }
	inline void set_t1_1(float value)
	{
		___t1_1 = value;
	}

	inline static int32_t get_offset_of_pos0_2() { return static_cast<int32_t>(offsetof(HermiteSpline_t3057915579, ___pos0_2)); }
	inline float get_pos0_2() const { return ___pos0_2; }
	inline float* get_address_of_pos0_2() { return &___pos0_2; }
	inline void set_pos0_2(float value)
	{
		___pos0_2 = value;
	}

	inline static int32_t get_offset_of_pos1_3() { return static_cast<int32_t>(offsetof(HermiteSpline_t3057915579, ___pos1_3)); }
	inline float get_pos1_3() const { return ___pos1_3; }
	inline float* get_address_of_pos1_3() { return &___pos1_3; }
	inline void set_pos1_3(float value)
	{
		___pos1_3 = value;
	}

	inline static int32_t get_offset_of_vel0_4() { return static_cast<int32_t>(offsetof(HermiteSpline_t3057915579, ___vel0_4)); }
	inline float get_vel0_4() const { return ___vel0_4; }
	inline float* get_address_of_vel0_4() { return &___vel0_4; }
	inline void set_vel0_4(float value)
	{
		___vel0_4 = value;
	}

	inline static int32_t get_offset_of_vel1_5() { return static_cast<int32_t>(offsetof(HermiteSpline_t3057915579, ___vel1_5)); }
	inline float get_vel1_5() const { return ___vel1_5; }
	inline float* get_address_of_vel1_5() { return &___vel1_5; }
	inline void set_vel1_5(float value)
	{
		___vel1_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HERMITESPLINE_T3057915579_H
#ifndef INDEXVALUEPAIR_T2628511264_H
#define INDEXVALUEPAIR_T2628511264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Unity.SlidingMax/IndexValuePair
struct  IndexValuePair_t2628511264 
{
public:
	// System.Int32 Leap.Unity.SlidingMax/IndexValuePair::index
	int32_t ___index_0;
	// System.Single Leap.Unity.SlidingMax/IndexValuePair::value
	float ___value_1;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(IndexValuePair_t2628511264, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(IndexValuePair_t2628511264, ___value_1)); }
	inline float get_value_1() const { return ___value_1; }
	inline float* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(float value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXVALUEPAIR_T2628511264_H
#ifndef VECTOR_T2166112452_H
#define VECTOR_T2166112452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Vector
struct  Vector_t2166112452 
{
public:
	// System.Single Leap.Vector::x
	float ___x_0;
	// System.Single Leap.Vector::y
	float ___y_1;
	// System.Single Leap.Vector::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector_t2166112452, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector_t2166112452, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Vector_t2166112452, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct Vector_t2166112452_StaticFields
{
public:
	// Leap.Vector Leap.Vector::Zero
	Vector_t2166112452  ___Zero_3;
	// Leap.Vector Leap.Vector::Ones
	Vector_t2166112452  ___Ones_4;
	// Leap.Vector Leap.Vector::XAxis
	Vector_t2166112452  ___XAxis_5;
	// Leap.Vector Leap.Vector::YAxis
	Vector_t2166112452  ___YAxis_6;
	// Leap.Vector Leap.Vector::ZAxis
	Vector_t2166112452  ___ZAxis_7;
	// Leap.Vector Leap.Vector::Forward
	Vector_t2166112452  ___Forward_8;
	// Leap.Vector Leap.Vector::Backward
	Vector_t2166112452  ___Backward_9;
	// Leap.Vector Leap.Vector::Left
	Vector_t2166112452  ___Left_10;
	// Leap.Vector Leap.Vector::Right
	Vector_t2166112452  ___Right_11;
	// Leap.Vector Leap.Vector::Up
	Vector_t2166112452  ___Up_12;
	// Leap.Vector Leap.Vector::Down
	Vector_t2166112452  ___Down_13;

public:
	inline static int32_t get_offset_of_Zero_3() { return static_cast<int32_t>(offsetof(Vector_t2166112452_StaticFields, ___Zero_3)); }
	inline Vector_t2166112452  get_Zero_3() const { return ___Zero_3; }
	inline Vector_t2166112452 * get_address_of_Zero_3() { return &___Zero_3; }
	inline void set_Zero_3(Vector_t2166112452  value)
	{
		___Zero_3 = value;
	}

	inline static int32_t get_offset_of_Ones_4() { return static_cast<int32_t>(offsetof(Vector_t2166112452_StaticFields, ___Ones_4)); }
	inline Vector_t2166112452  get_Ones_4() const { return ___Ones_4; }
	inline Vector_t2166112452 * get_address_of_Ones_4() { return &___Ones_4; }
	inline void set_Ones_4(Vector_t2166112452  value)
	{
		___Ones_4 = value;
	}

	inline static int32_t get_offset_of_XAxis_5() { return static_cast<int32_t>(offsetof(Vector_t2166112452_StaticFields, ___XAxis_5)); }
	inline Vector_t2166112452  get_XAxis_5() const { return ___XAxis_5; }
	inline Vector_t2166112452 * get_address_of_XAxis_5() { return &___XAxis_5; }
	inline void set_XAxis_5(Vector_t2166112452  value)
	{
		___XAxis_5 = value;
	}

	inline static int32_t get_offset_of_YAxis_6() { return static_cast<int32_t>(offsetof(Vector_t2166112452_StaticFields, ___YAxis_6)); }
	inline Vector_t2166112452  get_YAxis_6() const { return ___YAxis_6; }
	inline Vector_t2166112452 * get_address_of_YAxis_6() { return &___YAxis_6; }
	inline void set_YAxis_6(Vector_t2166112452  value)
	{
		___YAxis_6 = value;
	}

	inline static int32_t get_offset_of_ZAxis_7() { return static_cast<int32_t>(offsetof(Vector_t2166112452_StaticFields, ___ZAxis_7)); }
	inline Vector_t2166112452  get_ZAxis_7() const { return ___ZAxis_7; }
	inline Vector_t2166112452 * get_address_of_ZAxis_7() { return &___ZAxis_7; }
	inline void set_ZAxis_7(Vector_t2166112452  value)
	{
		___ZAxis_7 = value;
	}

	inline static int32_t get_offset_of_Forward_8() { return static_cast<int32_t>(offsetof(Vector_t2166112452_StaticFields, ___Forward_8)); }
	inline Vector_t2166112452  get_Forward_8() const { return ___Forward_8; }
	inline Vector_t2166112452 * get_address_of_Forward_8() { return &___Forward_8; }
	inline void set_Forward_8(Vector_t2166112452  value)
	{
		___Forward_8 = value;
	}

	inline static int32_t get_offset_of_Backward_9() { return static_cast<int32_t>(offsetof(Vector_t2166112452_StaticFields, ___Backward_9)); }
	inline Vector_t2166112452  get_Backward_9() const { return ___Backward_9; }
	inline Vector_t2166112452 * get_address_of_Backward_9() { return &___Backward_9; }
	inline void set_Backward_9(Vector_t2166112452  value)
	{
		___Backward_9 = value;
	}

	inline static int32_t get_offset_of_Left_10() { return static_cast<int32_t>(offsetof(Vector_t2166112452_StaticFields, ___Left_10)); }
	inline Vector_t2166112452  get_Left_10() const { return ___Left_10; }
	inline Vector_t2166112452 * get_address_of_Left_10() { return &___Left_10; }
	inline void set_Left_10(Vector_t2166112452  value)
	{
		___Left_10 = value;
	}

	inline static int32_t get_offset_of_Right_11() { return static_cast<int32_t>(offsetof(Vector_t2166112452_StaticFields, ___Right_11)); }
	inline Vector_t2166112452  get_Right_11() const { return ___Right_11; }
	inline Vector_t2166112452 * get_address_of_Right_11() { return &___Right_11; }
	inline void set_Right_11(Vector_t2166112452  value)
	{
		___Right_11 = value;
	}

	inline static int32_t get_offset_of_Up_12() { return static_cast<int32_t>(offsetof(Vector_t2166112452_StaticFields, ___Up_12)); }
	inline Vector_t2166112452  get_Up_12() const { return ___Up_12; }
	inline Vector_t2166112452 * get_address_of_Up_12() { return &___Up_12; }
	inline void set_Up_12(Vector_t2166112452  value)
	{
		___Up_12 = value;
	}

	inline static int32_t get_offset_of_Down_13() { return static_cast<int32_t>(offsetof(Vector_t2166112452_StaticFields, ___Down_13)); }
	inline Vector_t2166112452  get_Down_13() const { return ___Down_13; }
	inline Vector_t2166112452 * get_address_of_Down_13() { return &___Down_13; }
	inline void set_Down_13(Vector_t2166112452  value)
	{
		___Down_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR_T2166112452_H
#ifndef LEAP_CONFIG_CHANGE_EVENT_T1085445210_H
#define LEAP_CONFIG_CHANGE_EVENT_T1085445210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_CONFIG_CHANGE_EVENT
struct  LEAP_CONFIG_CHANGE_EVENT_t1085445210 
{
public:
	// System.UInt32 LeapInternal.LEAP_CONFIG_CHANGE_EVENT::requestId
	uint32_t ___requestId_0;
	// System.Boolean LeapInternal.LEAP_CONFIG_CHANGE_EVENT::status
	bool ___status_1;

public:
	inline static int32_t get_offset_of_requestId_0() { return static_cast<int32_t>(offsetof(LEAP_CONFIG_CHANGE_EVENT_t1085445210, ___requestId_0)); }
	inline uint32_t get_requestId_0() const { return ___requestId_0; }
	inline uint32_t* get_address_of_requestId_0() { return &___requestId_0; }
	inline void set_requestId_0(uint32_t value)
	{
		___requestId_0 = value;
	}

	inline static int32_t get_offset_of_status_1() { return static_cast<int32_t>(offsetof(LEAP_CONFIG_CHANGE_EVENT_t1085445210, ___status_1)); }
	inline bool get_status_1() const { return ___status_1; }
	inline bool* get_address_of_status_1() { return &___status_1; }
	inline void set_status_1(bool value)
	{
		___status_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LeapInternal.LEAP_CONFIG_CHANGE_EVENT
#pragma pack(push, tp, 1)
struct LEAP_CONFIG_CHANGE_EVENT_t1085445210_marshaled_pinvoke
{
	uint32_t ___requestId_0;
	int32_t ___status_1;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of LeapInternal.LEAP_CONFIG_CHANGE_EVENT
#pragma pack(push, tp, 1)
struct LEAP_CONFIG_CHANGE_EVENT_t1085445210_marshaled_com
{
	uint32_t ___requestId_0;
	int32_t ___status_1;
};
#pragma pack(pop, tp)
#endif // LEAP_CONFIG_CHANGE_EVENT_T1085445210_H
#ifndef LEAP_CONNECTION_LOST_EVENT_T3613973647_H
#define LEAP_CONNECTION_LOST_EVENT_T3613973647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_CONNECTION_LOST_EVENT
#pragma pack(push, tp, 1)
struct  LEAP_CONNECTION_LOST_EVENT_t3613973647 
{
public:
	// System.UInt32 LeapInternal.LEAP_CONNECTION_LOST_EVENT::flags
	uint32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(LEAP_CONNECTION_LOST_EVENT_t3613973647, ___flags_0)); }
	inline uint32_t get_flags_0() const { return ___flags_0; }
	inline uint32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(uint32_t value)
	{
		___flags_0 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_CONNECTION_LOST_EVENT_T3613973647_H
#ifndef LEAP_DISCONNECTION_EVENT_T1725570187_H
#define LEAP_DISCONNECTION_EVENT_T1725570187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_DISCONNECTION_EVENT
#pragma pack(push, tp, 1)
struct  LEAP_DISCONNECTION_EVENT_t1725570187 
{
public:
	// System.UInt32 LeapInternal.LEAP_DISCONNECTION_EVENT::reserved
	uint32_t ___reserved_0;

public:
	inline static int32_t get_offset_of_reserved_0() { return static_cast<int32_t>(offsetof(LEAP_DISCONNECTION_EVENT_t1725570187, ___reserved_0)); }
	inline uint32_t get_reserved_0() const { return ___reserved_0; }
	inline uint32_t* get_address_of_reserved_0() { return &___reserved_0; }
	inline void set_reserved_0(uint32_t value)
	{
		___reserved_0 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_DISCONNECTION_EVENT_T1725570187_H
#ifndef LEAP_POINT_MAPPING_CHANGE_EVENT_T1177989613_H
#define LEAP_POINT_MAPPING_CHANGE_EVENT_T1177989613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_POINT_MAPPING_CHANGE_EVENT
#pragma pack(push, tp, 1)
struct  LEAP_POINT_MAPPING_CHANGE_EVENT_t1177989613 
{
public:
	// System.Int64 LeapInternal.LEAP_POINT_MAPPING_CHANGE_EVENT::frame_id
	int64_t ___frame_id_0;
	// System.Int64 LeapInternal.LEAP_POINT_MAPPING_CHANGE_EVENT::timestamp
	int64_t ___timestamp_1;
	// System.UInt32 LeapInternal.LEAP_POINT_MAPPING_CHANGE_EVENT::nPoints
	uint32_t ___nPoints_2;

public:
	inline static int32_t get_offset_of_frame_id_0() { return static_cast<int32_t>(offsetof(LEAP_POINT_MAPPING_CHANGE_EVENT_t1177989613, ___frame_id_0)); }
	inline int64_t get_frame_id_0() const { return ___frame_id_0; }
	inline int64_t* get_address_of_frame_id_0() { return &___frame_id_0; }
	inline void set_frame_id_0(int64_t value)
	{
		___frame_id_0 = value;
	}

	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(LEAP_POINT_MAPPING_CHANGE_EVENT_t1177989613, ___timestamp_1)); }
	inline int64_t get_timestamp_1() const { return ___timestamp_1; }
	inline int64_t* get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(int64_t value)
	{
		___timestamp_1 = value;
	}

	inline static int32_t get_offset_of_nPoints_2() { return static_cast<int32_t>(offsetof(LEAP_POINT_MAPPING_CHANGE_EVENT_t1177989613, ___nPoints_2)); }
	inline uint32_t get_nPoints_2() const { return ___nPoints_2; }
	inline uint32_t* get_address_of_nPoints_2() { return &___nPoints_2; }
	inline void set_nPoints_2(uint32_t value)
	{
		___nPoints_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_POINT_MAPPING_CHANGE_EVENT_T1177989613_H
#ifndef LEAP_POLICY_EVENT_T4018224125_H
#define LEAP_POLICY_EVENT_T4018224125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_POLICY_EVENT
#pragma pack(push, tp, 1)
struct  LEAP_POLICY_EVENT_t4018224125 
{
public:
	// System.UInt32 LeapInternal.LEAP_POLICY_EVENT::reserved
	uint32_t ___reserved_0;
	// System.UInt32 LeapInternal.LEAP_POLICY_EVENT::current_policy
	uint32_t ___current_policy_1;

public:
	inline static int32_t get_offset_of_reserved_0() { return static_cast<int32_t>(offsetof(LEAP_POLICY_EVENT_t4018224125, ___reserved_0)); }
	inline uint32_t get_reserved_0() const { return ___reserved_0; }
	inline uint32_t* get_address_of_reserved_0() { return &___reserved_0; }
	inline void set_reserved_0(uint32_t value)
	{
		___reserved_0 = value;
	}

	inline static int32_t get_offset_of_current_policy_1() { return static_cast<int32_t>(offsetof(LEAP_POLICY_EVENT_t4018224125, ___current_policy_1)); }
	inline uint32_t get_current_policy_1() const { return ___current_policy_1; }
	inline uint32_t* get_address_of_current_policy_1() { return &___current_policy_1; }
	inline void set_current_policy_1(uint32_t value)
	{
		___current_policy_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_POLICY_EVENT_T4018224125_H
#ifndef LEAP_QUATERNION_T2298175287_H
#define LEAP_QUATERNION_T2298175287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_QUATERNION
#pragma pack(push, tp, 1)
struct  LEAP_QUATERNION_t2298175287 
{
public:
	// System.Single LeapInternal.LEAP_QUATERNION::x
	float ___x_0;
	// System.Single LeapInternal.LEAP_QUATERNION::y
	float ___y_1;
	// System.Single LeapInternal.LEAP_QUATERNION::z
	float ___z_2;
	// System.Single LeapInternal.LEAP_QUATERNION::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(LEAP_QUATERNION_t2298175287, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(LEAP_QUATERNION_t2298175287, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(LEAP_QUATERNION_t2298175287, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(LEAP_QUATERNION_t2298175287, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_QUATERNION_T2298175287_H
#ifndef LEAP_TELEMETRY_DATA_T3936163532_H
#define LEAP_TELEMETRY_DATA_T3936163532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_TELEMETRY_DATA
struct  LEAP_TELEMETRY_DATA_t3936163532 
{
public:
	// System.UInt32 LeapInternal.LEAP_TELEMETRY_DATA::threadId
	uint32_t ___threadId_0;
	// System.UInt64 LeapInternal.LEAP_TELEMETRY_DATA::startTime
	uint64_t ___startTime_1;
	// System.UInt64 LeapInternal.LEAP_TELEMETRY_DATA::endTime
	uint64_t ___endTime_2;
	// System.UInt32 LeapInternal.LEAP_TELEMETRY_DATA::zoneDepth
	uint32_t ___zoneDepth_3;
	// System.String LeapInternal.LEAP_TELEMETRY_DATA::fileName
	String_t* ___fileName_4;
	// System.UInt32 LeapInternal.LEAP_TELEMETRY_DATA::lineNumber
	uint32_t ___lineNumber_5;
	// System.String LeapInternal.LEAP_TELEMETRY_DATA::zoneName
	String_t* ___zoneName_6;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(LEAP_TELEMETRY_DATA_t3936163532, ___threadId_0)); }
	inline uint32_t get_threadId_0() const { return ___threadId_0; }
	inline uint32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(uint32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_startTime_1() { return static_cast<int32_t>(offsetof(LEAP_TELEMETRY_DATA_t3936163532, ___startTime_1)); }
	inline uint64_t get_startTime_1() const { return ___startTime_1; }
	inline uint64_t* get_address_of_startTime_1() { return &___startTime_1; }
	inline void set_startTime_1(uint64_t value)
	{
		___startTime_1 = value;
	}

	inline static int32_t get_offset_of_endTime_2() { return static_cast<int32_t>(offsetof(LEAP_TELEMETRY_DATA_t3936163532, ___endTime_2)); }
	inline uint64_t get_endTime_2() const { return ___endTime_2; }
	inline uint64_t* get_address_of_endTime_2() { return &___endTime_2; }
	inline void set_endTime_2(uint64_t value)
	{
		___endTime_2 = value;
	}

	inline static int32_t get_offset_of_zoneDepth_3() { return static_cast<int32_t>(offsetof(LEAP_TELEMETRY_DATA_t3936163532, ___zoneDepth_3)); }
	inline uint32_t get_zoneDepth_3() const { return ___zoneDepth_3; }
	inline uint32_t* get_address_of_zoneDepth_3() { return &___zoneDepth_3; }
	inline void set_zoneDepth_3(uint32_t value)
	{
		___zoneDepth_3 = value;
	}

	inline static int32_t get_offset_of_fileName_4() { return static_cast<int32_t>(offsetof(LEAP_TELEMETRY_DATA_t3936163532, ___fileName_4)); }
	inline String_t* get_fileName_4() const { return ___fileName_4; }
	inline String_t** get_address_of_fileName_4() { return &___fileName_4; }
	inline void set_fileName_4(String_t* value)
	{
		___fileName_4 = value;
		Il2CppCodeGenWriteBarrier((&___fileName_4), value);
	}

	inline static int32_t get_offset_of_lineNumber_5() { return static_cast<int32_t>(offsetof(LEAP_TELEMETRY_DATA_t3936163532, ___lineNumber_5)); }
	inline uint32_t get_lineNumber_5() const { return ___lineNumber_5; }
	inline uint32_t* get_address_of_lineNumber_5() { return &___lineNumber_5; }
	inline void set_lineNumber_5(uint32_t value)
	{
		___lineNumber_5 = value;
	}

	inline static int32_t get_offset_of_zoneName_6() { return static_cast<int32_t>(offsetof(LEAP_TELEMETRY_DATA_t3936163532, ___zoneName_6)); }
	inline String_t* get_zoneName_6() const { return ___zoneName_6; }
	inline String_t** get_address_of_zoneName_6() { return &___zoneName_6; }
	inline void set_zoneName_6(String_t* value)
	{
		___zoneName_6 = value;
		Il2CppCodeGenWriteBarrier((&___zoneName_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LeapInternal.LEAP_TELEMETRY_DATA
#pragma pack(push, tp, 1)
struct LEAP_TELEMETRY_DATA_t3936163532_marshaled_pinvoke
{
	uint32_t ___threadId_0;
	uint64_t ___startTime_1;
	uint64_t ___endTime_2;
	uint32_t ___zoneDepth_3;
	char* ___fileName_4;
	uint32_t ___lineNumber_5;
	char* ___zoneName_6;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of LeapInternal.LEAP_TELEMETRY_DATA
#pragma pack(push, tp, 1)
struct LEAP_TELEMETRY_DATA_t3936163532_marshaled_com
{
	uint32_t ___threadId_0;
	uint64_t ___startTime_1;
	uint64_t ___endTime_2;
	uint32_t ___zoneDepth_3;
	Il2CppChar* ___fileName_4;
	uint32_t ___lineNumber_5;
	Il2CppChar* ___zoneName_6;
};
#pragma pack(pop, tp)
#endif // LEAP_TELEMETRY_DATA_T3936163532_H
#ifndef LEAP_VECTOR_T1604988008_H
#define LEAP_VECTOR_T1604988008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_VECTOR
#pragma pack(push, tp, 1)
struct  LEAP_VECTOR_t1604988008 
{
public:
	// System.Single LeapInternal.LEAP_VECTOR::x
	float ___x_0;
	// System.Single LeapInternal.LEAP_VECTOR::y
	float ___y_1;
	// System.Single LeapInternal.LEAP_VECTOR::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(LEAP_VECTOR_t1604988008, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(LEAP_VECTOR_t1604988008, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(LEAP_VECTOR_t1604988008, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_VECTOR_T1604988008_H
#ifndef LEAP_RECORDING_PARAMETERS_T41342046_H
#define LEAP_RECORDING_PARAMETERS_T41342046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LeapC/LEAP_RECORDING_PARAMETERS
#pragma pack(push, tp, 1)
struct  LEAP_RECORDING_PARAMETERS_t41342046 
{
public:
	// System.UInt32 LeapInternal.LeapC/LEAP_RECORDING_PARAMETERS::mode
	uint32_t ___mode_0;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(LEAP_RECORDING_PARAMETERS_t41342046, ___mode_0)); }
	inline uint32_t get_mode_0() const { return ___mode_0; }
	inline uint32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(uint32_t value)
	{
		___mode_0 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_RECORDING_PARAMETERS_T41342046_H
#ifndef LEAP_RECORDING_STATUS_T2202254995_H
#define LEAP_RECORDING_STATUS_T2202254995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LeapC/LEAP_RECORDING_STATUS
#pragma pack(push, tp, 1)
struct  LEAP_RECORDING_STATUS_t2202254995 
{
public:
	// System.UInt32 LeapInternal.LeapC/LEAP_RECORDING_STATUS::mode
	uint32_t ___mode_0;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(LEAP_RECORDING_STATUS_t2202254995, ___mode_0)); }
	inline uint32_t get_mode_0() const { return ___mode_0; }
	inline uint32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(uint32_t value)
	{
		___mode_0 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_RECORDING_STATUS_T2202254995_H
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
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
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
#ifndef FAILURETYPE_T2714356128_H
#define FAILURETYPE_T2714356128_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.FailedDevice/FailureType
struct  FailureType_t2714356128 
{
public:
	// System.Int32 Leap.FailedDevice/FailureType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FailureType_t2714356128, ___value___1)); }
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
#endif // FAILURETYPE_T2714356128_H
#ifndef FINGERTYPE_T1918730133_H
#define FINGERTYPE_T1918730133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Finger/FingerType
struct  FingerType_t1918730133 
{
public:
	// System.Int32 Leap.Finger/FingerType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FingerType_t1918730133, ___value___1)); }
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
#endif // FINGERTYPE_T1918730133_H
#ifndef HAND_T3194765404_H
#define HAND_T3194765404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Hand
struct  Hand_t3194765404  : public RuntimeObject
{
public:
	// System.Int64 Leap.Hand::FrameId
	int64_t ___FrameId_0;
	// System.Int32 Leap.Hand::Id
	int32_t ___Id_1;
	// System.Collections.Generic.List`1<Leap.Finger> Leap.Hand::Fingers
	List_1_t549942457 * ___Fingers_2;
	// Leap.Vector Leap.Hand::PalmPosition
	Vector_t2166112452  ___PalmPosition_3;
	// Leap.Vector Leap.Hand::PalmVelocity
	Vector_t2166112452  ___PalmVelocity_4;
	// Leap.Vector Leap.Hand::PalmNormal
	Vector_t2166112452  ___PalmNormal_5;
	// Leap.Vector Leap.Hand::Direction
	Vector_t2166112452  ___Direction_6;
	// Leap.LeapQuaternion Leap.Hand::Rotation
	LeapQuaternion_t1571790471  ___Rotation_7;
	// System.Single Leap.Hand::GrabStrength
	float ___GrabStrength_8;
	// System.Single Leap.Hand::GrabAngle
	float ___GrabAngle_9;
	// System.Single Leap.Hand::PinchStrength
	float ___PinchStrength_10;
	// System.Single Leap.Hand::PinchDistance
	float ___PinchDistance_11;
	// System.Single Leap.Hand::PalmWidth
	float ___PalmWidth_12;
	// Leap.Vector Leap.Hand::StabilizedPalmPosition
	Vector_t2166112452  ___StabilizedPalmPosition_13;
	// Leap.Vector Leap.Hand::WristPosition
	Vector_t2166112452  ___WristPosition_14;
	// System.Single Leap.Hand::TimeVisible
	float ___TimeVisible_15;
	// System.Single Leap.Hand::Confidence
	float ___Confidence_16;
	// System.Boolean Leap.Hand::IsLeft
	bool ___IsLeft_17;
	// Leap.Arm Leap.Hand::Arm
	Arm_t507750312 * ___Arm_18;

public:
	inline static int32_t get_offset_of_FrameId_0() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___FrameId_0)); }
	inline int64_t get_FrameId_0() const { return ___FrameId_0; }
	inline int64_t* get_address_of_FrameId_0() { return &___FrameId_0; }
	inline void set_FrameId_0(int64_t value)
	{
		___FrameId_0 = value;
	}

	inline static int32_t get_offset_of_Id_1() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___Id_1)); }
	inline int32_t get_Id_1() const { return ___Id_1; }
	inline int32_t* get_address_of_Id_1() { return &___Id_1; }
	inline void set_Id_1(int32_t value)
	{
		___Id_1 = value;
	}

	inline static int32_t get_offset_of_Fingers_2() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___Fingers_2)); }
	inline List_1_t549942457 * get_Fingers_2() const { return ___Fingers_2; }
	inline List_1_t549942457 ** get_address_of_Fingers_2() { return &___Fingers_2; }
	inline void set_Fingers_2(List_1_t549942457 * value)
	{
		___Fingers_2 = value;
		Il2CppCodeGenWriteBarrier((&___Fingers_2), value);
	}

	inline static int32_t get_offset_of_PalmPosition_3() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___PalmPosition_3)); }
	inline Vector_t2166112452  get_PalmPosition_3() const { return ___PalmPosition_3; }
	inline Vector_t2166112452 * get_address_of_PalmPosition_3() { return &___PalmPosition_3; }
	inline void set_PalmPosition_3(Vector_t2166112452  value)
	{
		___PalmPosition_3 = value;
	}

	inline static int32_t get_offset_of_PalmVelocity_4() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___PalmVelocity_4)); }
	inline Vector_t2166112452  get_PalmVelocity_4() const { return ___PalmVelocity_4; }
	inline Vector_t2166112452 * get_address_of_PalmVelocity_4() { return &___PalmVelocity_4; }
	inline void set_PalmVelocity_4(Vector_t2166112452  value)
	{
		___PalmVelocity_4 = value;
	}

	inline static int32_t get_offset_of_PalmNormal_5() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___PalmNormal_5)); }
	inline Vector_t2166112452  get_PalmNormal_5() const { return ___PalmNormal_5; }
	inline Vector_t2166112452 * get_address_of_PalmNormal_5() { return &___PalmNormal_5; }
	inline void set_PalmNormal_5(Vector_t2166112452  value)
	{
		___PalmNormal_5 = value;
	}

	inline static int32_t get_offset_of_Direction_6() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___Direction_6)); }
	inline Vector_t2166112452  get_Direction_6() const { return ___Direction_6; }
	inline Vector_t2166112452 * get_address_of_Direction_6() { return &___Direction_6; }
	inline void set_Direction_6(Vector_t2166112452  value)
	{
		___Direction_6 = value;
	}

	inline static int32_t get_offset_of_Rotation_7() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___Rotation_7)); }
	inline LeapQuaternion_t1571790471  get_Rotation_7() const { return ___Rotation_7; }
	inline LeapQuaternion_t1571790471 * get_address_of_Rotation_7() { return &___Rotation_7; }
	inline void set_Rotation_7(LeapQuaternion_t1571790471  value)
	{
		___Rotation_7 = value;
	}

	inline static int32_t get_offset_of_GrabStrength_8() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___GrabStrength_8)); }
	inline float get_GrabStrength_8() const { return ___GrabStrength_8; }
	inline float* get_address_of_GrabStrength_8() { return &___GrabStrength_8; }
	inline void set_GrabStrength_8(float value)
	{
		___GrabStrength_8 = value;
	}

	inline static int32_t get_offset_of_GrabAngle_9() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___GrabAngle_9)); }
	inline float get_GrabAngle_9() const { return ___GrabAngle_9; }
	inline float* get_address_of_GrabAngle_9() { return &___GrabAngle_9; }
	inline void set_GrabAngle_9(float value)
	{
		___GrabAngle_9 = value;
	}

	inline static int32_t get_offset_of_PinchStrength_10() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___PinchStrength_10)); }
	inline float get_PinchStrength_10() const { return ___PinchStrength_10; }
	inline float* get_address_of_PinchStrength_10() { return &___PinchStrength_10; }
	inline void set_PinchStrength_10(float value)
	{
		___PinchStrength_10 = value;
	}

	inline static int32_t get_offset_of_PinchDistance_11() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___PinchDistance_11)); }
	inline float get_PinchDistance_11() const { return ___PinchDistance_11; }
	inline float* get_address_of_PinchDistance_11() { return &___PinchDistance_11; }
	inline void set_PinchDistance_11(float value)
	{
		___PinchDistance_11 = value;
	}

	inline static int32_t get_offset_of_PalmWidth_12() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___PalmWidth_12)); }
	inline float get_PalmWidth_12() const { return ___PalmWidth_12; }
	inline float* get_address_of_PalmWidth_12() { return &___PalmWidth_12; }
	inline void set_PalmWidth_12(float value)
	{
		___PalmWidth_12 = value;
	}

	inline static int32_t get_offset_of_StabilizedPalmPosition_13() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___StabilizedPalmPosition_13)); }
	inline Vector_t2166112452  get_StabilizedPalmPosition_13() const { return ___StabilizedPalmPosition_13; }
	inline Vector_t2166112452 * get_address_of_StabilizedPalmPosition_13() { return &___StabilizedPalmPosition_13; }
	inline void set_StabilizedPalmPosition_13(Vector_t2166112452  value)
	{
		___StabilizedPalmPosition_13 = value;
	}

	inline static int32_t get_offset_of_WristPosition_14() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___WristPosition_14)); }
	inline Vector_t2166112452  get_WristPosition_14() const { return ___WristPosition_14; }
	inline Vector_t2166112452 * get_address_of_WristPosition_14() { return &___WristPosition_14; }
	inline void set_WristPosition_14(Vector_t2166112452  value)
	{
		___WristPosition_14 = value;
	}

	inline static int32_t get_offset_of_TimeVisible_15() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___TimeVisible_15)); }
	inline float get_TimeVisible_15() const { return ___TimeVisible_15; }
	inline float* get_address_of_TimeVisible_15() { return &___TimeVisible_15; }
	inline void set_TimeVisible_15(float value)
	{
		___TimeVisible_15 = value;
	}

	inline static int32_t get_offset_of_Confidence_16() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___Confidence_16)); }
	inline float get_Confidence_16() const { return ___Confidence_16; }
	inline float* get_address_of_Confidence_16() { return &___Confidence_16; }
	inline void set_Confidence_16(float value)
	{
		___Confidence_16 = value;
	}

	inline static int32_t get_offset_of_IsLeft_17() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___IsLeft_17)); }
	inline bool get_IsLeft_17() const { return ___IsLeft_17; }
	inline bool* get_address_of_IsLeft_17() { return &___IsLeft_17; }
	inline void set_IsLeft_17(bool value)
	{
		___IsLeft_17 = value;
	}

	inline static int32_t get_offset_of_Arm_18() { return static_cast<int32_t>(offsetof(Hand_t3194765404, ___Arm_18)); }
	inline Arm_t507750312 * get_Arm_18() const { return ___Arm_18; }
	inline Arm_t507750312 ** get_address_of_Arm_18() { return &___Arm_18; }
	inline void set_Arm_18(Arm_t507750312 * value)
	{
		___Arm_18 = value;
		Il2CppCodeGenWriteBarrier((&___Arm_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HAND_T3194765404_H
#ifndef CAMERATYPE_T2777050665_H
#define CAMERATYPE_T2777050665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Image/CameraType
struct  CameraType_t2777050665 
{
public:
	// System.Int32 Leap.Image/CameraType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraType_t2777050665, ___value___1)); }
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
#endif // CAMERATYPE_T2777050665_H
#ifndef FORMATTYPE_T972853132_H
#define FORMATTYPE_T972853132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Image/FormatType
struct  FormatType_t972853132 
{
public:
	// System.Int32 Leap.Image/FormatType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatType_t972853132, ___value___1)); }
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
#endif // FORMATTYPE_T972853132_H
#ifndef IMAGETYPE_T216642555_H
#define IMAGETYPE_T216642555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Image/ImageType
struct  ImageType_t216642555 
{
public:
	// System.Int32 Leap.Image/ImageType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ImageType_t216642555, ___value___1)); }
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
#endif // IMAGETYPE_T216642555_H
#ifndef LEAPEVENT_T2997827813_H
#define LEAPEVENT_T2997827813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.LeapEvent
struct  LeapEvent_t2997827813 
{
public:
	// System.Int32 Leap.LeapEvent::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LeapEvent_t2997827813, ___value___1)); }
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
#endif // LEAPEVENT_T2997827813_H
#ifndef LEAPTRANSFORM_T1384850941_H
#define LEAPTRANSFORM_T1384850941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.LeapTransform
struct  LeapTransform_t1384850941 
{
public:
	// Leap.Vector Leap.LeapTransform::_translation
	Vector_t2166112452  ____translation_1;
	// Leap.Vector Leap.LeapTransform::_scale
	Vector_t2166112452  ____scale_2;
	// Leap.LeapQuaternion Leap.LeapTransform::_quaternion
	LeapQuaternion_t1571790471  ____quaternion_3;
	// System.Boolean Leap.LeapTransform::_quaternionDirty
	bool ____quaternionDirty_4;
	// System.Boolean Leap.LeapTransform::_flip
	bool ____flip_5;
	// Leap.Vector Leap.LeapTransform::_flipAxes
	Vector_t2166112452  ____flipAxes_6;
	// Leap.Vector Leap.LeapTransform::_xBasis
	Vector_t2166112452  ____xBasis_7;
	// Leap.Vector Leap.LeapTransform::_yBasis
	Vector_t2166112452  ____yBasis_8;
	// Leap.Vector Leap.LeapTransform::_zBasis
	Vector_t2166112452  ____zBasis_9;
	// Leap.Vector Leap.LeapTransform::_xBasisScaled
	Vector_t2166112452  ____xBasisScaled_10;
	// Leap.Vector Leap.LeapTransform::_yBasisScaled
	Vector_t2166112452  ____yBasisScaled_11;
	// Leap.Vector Leap.LeapTransform::_zBasisScaled
	Vector_t2166112452  ____zBasisScaled_12;

public:
	inline static int32_t get_offset_of__translation_1() { return static_cast<int32_t>(offsetof(LeapTransform_t1384850941, ____translation_1)); }
	inline Vector_t2166112452  get__translation_1() const { return ____translation_1; }
	inline Vector_t2166112452 * get_address_of__translation_1() { return &____translation_1; }
	inline void set__translation_1(Vector_t2166112452  value)
	{
		____translation_1 = value;
	}

	inline static int32_t get_offset_of__scale_2() { return static_cast<int32_t>(offsetof(LeapTransform_t1384850941, ____scale_2)); }
	inline Vector_t2166112452  get__scale_2() const { return ____scale_2; }
	inline Vector_t2166112452 * get_address_of__scale_2() { return &____scale_2; }
	inline void set__scale_2(Vector_t2166112452  value)
	{
		____scale_2 = value;
	}

	inline static int32_t get_offset_of__quaternion_3() { return static_cast<int32_t>(offsetof(LeapTransform_t1384850941, ____quaternion_3)); }
	inline LeapQuaternion_t1571790471  get__quaternion_3() const { return ____quaternion_3; }
	inline LeapQuaternion_t1571790471 * get_address_of__quaternion_3() { return &____quaternion_3; }
	inline void set__quaternion_3(LeapQuaternion_t1571790471  value)
	{
		____quaternion_3 = value;
	}

	inline static int32_t get_offset_of__quaternionDirty_4() { return static_cast<int32_t>(offsetof(LeapTransform_t1384850941, ____quaternionDirty_4)); }
	inline bool get__quaternionDirty_4() const { return ____quaternionDirty_4; }
	inline bool* get_address_of__quaternionDirty_4() { return &____quaternionDirty_4; }
	inline void set__quaternionDirty_4(bool value)
	{
		____quaternionDirty_4 = value;
	}

	inline static int32_t get_offset_of__flip_5() { return static_cast<int32_t>(offsetof(LeapTransform_t1384850941, ____flip_5)); }
	inline bool get__flip_5() const { return ____flip_5; }
	inline bool* get_address_of__flip_5() { return &____flip_5; }
	inline void set__flip_5(bool value)
	{
		____flip_5 = value;
	}

	inline static int32_t get_offset_of__flipAxes_6() { return static_cast<int32_t>(offsetof(LeapTransform_t1384850941, ____flipAxes_6)); }
	inline Vector_t2166112452  get__flipAxes_6() const { return ____flipAxes_6; }
	inline Vector_t2166112452 * get_address_of__flipAxes_6() { return &____flipAxes_6; }
	inline void set__flipAxes_6(Vector_t2166112452  value)
	{
		____flipAxes_6 = value;
	}

	inline static int32_t get_offset_of__xBasis_7() { return static_cast<int32_t>(offsetof(LeapTransform_t1384850941, ____xBasis_7)); }
	inline Vector_t2166112452  get__xBasis_7() const { return ____xBasis_7; }
	inline Vector_t2166112452 * get_address_of__xBasis_7() { return &____xBasis_7; }
	inline void set__xBasis_7(Vector_t2166112452  value)
	{
		____xBasis_7 = value;
	}

	inline static int32_t get_offset_of__yBasis_8() { return static_cast<int32_t>(offsetof(LeapTransform_t1384850941, ____yBasis_8)); }
	inline Vector_t2166112452  get__yBasis_8() const { return ____yBasis_8; }
	inline Vector_t2166112452 * get_address_of__yBasis_8() { return &____yBasis_8; }
	inline void set__yBasis_8(Vector_t2166112452  value)
	{
		____yBasis_8 = value;
	}

	inline static int32_t get_offset_of__zBasis_9() { return static_cast<int32_t>(offsetof(LeapTransform_t1384850941, ____zBasis_9)); }
	inline Vector_t2166112452  get__zBasis_9() const { return ____zBasis_9; }
	inline Vector_t2166112452 * get_address_of__zBasis_9() { return &____zBasis_9; }
	inline void set__zBasis_9(Vector_t2166112452  value)
	{
		____zBasis_9 = value;
	}

	inline static int32_t get_offset_of__xBasisScaled_10() { return static_cast<int32_t>(offsetof(LeapTransform_t1384850941, ____xBasisScaled_10)); }
	inline Vector_t2166112452  get__xBasisScaled_10() const { return ____xBasisScaled_10; }
	inline Vector_t2166112452 * get_address_of__xBasisScaled_10() { return &____xBasisScaled_10; }
	inline void set__xBasisScaled_10(Vector_t2166112452  value)
	{
		____xBasisScaled_10 = value;
	}

	inline static int32_t get_offset_of__yBasisScaled_11() { return static_cast<int32_t>(offsetof(LeapTransform_t1384850941, ____yBasisScaled_11)); }
	inline Vector_t2166112452  get__yBasisScaled_11() const { return ____yBasisScaled_11; }
	inline Vector_t2166112452 * get_address_of__yBasisScaled_11() { return &____yBasisScaled_11; }
	inline void set__yBasisScaled_11(Vector_t2166112452  value)
	{
		____yBasisScaled_11 = value;
	}

	inline static int32_t get_offset_of__zBasisScaled_12() { return static_cast<int32_t>(offsetof(LeapTransform_t1384850941, ____zBasisScaled_12)); }
	inline Vector_t2166112452  get__zBasisScaled_12() const { return ____zBasisScaled_12; }
	inline Vector_t2166112452 * get_address_of__zBasisScaled_12() { return &____zBasisScaled_12; }
	inline void set__zBasisScaled_12(Vector_t2166112452  value)
	{
		____zBasisScaled_12 = value;
	}
};

struct LeapTransform_t1384850941_StaticFields
{
public:
	// Leap.LeapTransform Leap.LeapTransform::Identity
	LeapTransform_t1384850941  ___Identity_0;

public:
	inline static int32_t get_offset_of_Identity_0() { return static_cast<int32_t>(offsetof(LeapTransform_t1384850941_StaticFields, ___Identity_0)); }
	inline LeapTransform_t1384850941  get_Identity_0() const { return ___Identity_0; }
	inline LeapTransform_t1384850941 * get_address_of_Identity_0() { return &___Identity_0; }
	inline void set_Identity_0(LeapTransform_t1384850941  value)
	{
		___Identity_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Leap.LeapTransform
struct LeapTransform_t1384850941_marshaled_pinvoke
{
	Vector_t2166112452  ____translation_1;
	Vector_t2166112452  ____scale_2;
	LeapQuaternion_t1571790471  ____quaternion_3;
	int32_t ____quaternionDirty_4;
	int32_t ____flip_5;
	Vector_t2166112452  ____flipAxes_6;
	Vector_t2166112452  ____xBasis_7;
	Vector_t2166112452  ____yBasis_8;
	Vector_t2166112452  ____zBasis_9;
	Vector_t2166112452  ____xBasisScaled_10;
	Vector_t2166112452  ____yBasisScaled_11;
	Vector_t2166112452  ____zBasisScaled_12;
};
// Native definition for COM marshalling of Leap.LeapTransform
struct LeapTransform_t1384850941_marshaled_com
{
	Vector_t2166112452  ____translation_1;
	Vector_t2166112452  ____scale_2;
	LeapQuaternion_t1571790471  ____quaternion_3;
	int32_t ____quaternionDirty_4;
	int32_t ____flip_5;
	Vector_t2166112452  ____flipAxes_6;
	Vector_t2166112452  ____xBasis_7;
	Vector_t2166112452  ____yBasis_8;
	Vector_t2166112452  ____zBasis_9;
	Vector_t2166112452  ____xBasisScaled_10;
	Vector_t2166112452  ____yBasisScaled_11;
	Vector_t2166112452  ____zBasisScaled_12;
};
#endif // LEAPTRANSFORM_T1384850941_H
#ifndef MATRIX_T187358336_H
#define MATRIX_T187358336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Matrix
struct  Matrix_t187358336 
{
public:
	// Leap.Vector Leap.Matrix::<xBasis>k__BackingField
	Vector_t2166112452  ___U3CxBasisU3Ek__BackingField_0;
	// Leap.Vector Leap.Matrix::<yBasis>k__BackingField
	Vector_t2166112452  ___U3CyBasisU3Ek__BackingField_1;
	// Leap.Vector Leap.Matrix::<zBasis>k__BackingField
	Vector_t2166112452  ___U3CzBasisU3Ek__BackingField_2;
	// Leap.Vector Leap.Matrix::<origin>k__BackingField
	Vector_t2166112452  ___U3CoriginU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CxBasisU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Matrix_t187358336, ___U3CxBasisU3Ek__BackingField_0)); }
	inline Vector_t2166112452  get_U3CxBasisU3Ek__BackingField_0() const { return ___U3CxBasisU3Ek__BackingField_0; }
	inline Vector_t2166112452 * get_address_of_U3CxBasisU3Ek__BackingField_0() { return &___U3CxBasisU3Ek__BackingField_0; }
	inline void set_U3CxBasisU3Ek__BackingField_0(Vector_t2166112452  value)
	{
		___U3CxBasisU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CyBasisU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Matrix_t187358336, ___U3CyBasisU3Ek__BackingField_1)); }
	inline Vector_t2166112452  get_U3CyBasisU3Ek__BackingField_1() const { return ___U3CyBasisU3Ek__BackingField_1; }
	inline Vector_t2166112452 * get_address_of_U3CyBasisU3Ek__BackingField_1() { return &___U3CyBasisU3Ek__BackingField_1; }
	inline void set_U3CyBasisU3Ek__BackingField_1(Vector_t2166112452  value)
	{
		___U3CyBasisU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CzBasisU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Matrix_t187358336, ___U3CzBasisU3Ek__BackingField_2)); }
	inline Vector_t2166112452  get_U3CzBasisU3Ek__BackingField_2() const { return ___U3CzBasisU3Ek__BackingField_2; }
	inline Vector_t2166112452 * get_address_of_U3CzBasisU3Ek__BackingField_2() { return &___U3CzBasisU3Ek__BackingField_2; }
	inline void set_U3CzBasisU3Ek__BackingField_2(Vector_t2166112452  value)
	{
		___U3CzBasisU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CoriginU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Matrix_t187358336, ___U3CoriginU3Ek__BackingField_3)); }
	inline Vector_t2166112452  get_U3CoriginU3Ek__BackingField_3() const { return ___U3CoriginU3Ek__BackingField_3; }
	inline Vector_t2166112452 * get_address_of_U3CoriginU3Ek__BackingField_3() { return &___U3CoriginU3Ek__BackingField_3; }
	inline void set_U3CoriginU3Ek__BackingField_3(Vector_t2166112452  value)
	{
		___U3CoriginU3Ek__BackingField_3 = value;
	}
};

struct Matrix_t187358336_StaticFields
{
public:
	// Leap.Matrix Leap.Matrix::Identity
	Matrix_t187358336  ___Identity_4;

public:
	inline static int32_t get_offset_of_Identity_4() { return static_cast<int32_t>(offsetof(Matrix_t187358336_StaticFields, ___Identity_4)); }
	inline Matrix_t187358336  get_Identity_4() const { return ___Identity_4; }
	inline Matrix_t187358336 * get_address_of_Identity_4() { return &___Identity_4; }
	inline void set_Identity_4(Matrix_t187358336  value)
	{
		___Identity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX_T187358336_H
#ifndef MESSAGESEVERITY_T2831501899_H
#define MESSAGESEVERITY_T2831501899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.MessageSeverity
struct  MessageSeverity_t2831501899 
{
public:
	// System.Int32 Leap.MessageSeverity::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MessageSeverity_t2831501899, ___value___1)); }
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
#endif // MESSAGESEVERITY_T2831501899_H
#ifndef HERMITESPLINE2_T2580300728_H
#define HERMITESPLINE2_T2580300728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Unity.Animation.HermiteSpline2
struct  HermiteSpline2_t2580300728 
{
public:
	// System.Single Leap.Unity.Animation.HermiteSpline2::t0
	float ___t0_0;
	// System.Single Leap.Unity.Animation.HermiteSpline2::t1
	float ___t1_1;
	// UnityEngine.Vector2 Leap.Unity.Animation.HermiteSpline2::pos0
	Vector2_t2156229523  ___pos0_2;
	// UnityEngine.Vector2 Leap.Unity.Animation.HermiteSpline2::pos1
	Vector2_t2156229523  ___pos1_3;
	// UnityEngine.Vector2 Leap.Unity.Animation.HermiteSpline2::vel0
	Vector2_t2156229523  ___vel0_4;
	// UnityEngine.Vector2 Leap.Unity.Animation.HermiteSpline2::vel1
	Vector2_t2156229523  ___vel1_5;

public:
	inline static int32_t get_offset_of_t0_0() { return static_cast<int32_t>(offsetof(HermiteSpline2_t2580300728, ___t0_0)); }
	inline float get_t0_0() const { return ___t0_0; }
	inline float* get_address_of_t0_0() { return &___t0_0; }
	inline void set_t0_0(float value)
	{
		___t0_0 = value;
	}

	inline static int32_t get_offset_of_t1_1() { return static_cast<int32_t>(offsetof(HermiteSpline2_t2580300728, ___t1_1)); }
	inline float get_t1_1() const { return ___t1_1; }
	inline float* get_address_of_t1_1() { return &___t1_1; }
	inline void set_t1_1(float value)
	{
		___t1_1 = value;
	}

	inline static int32_t get_offset_of_pos0_2() { return static_cast<int32_t>(offsetof(HermiteSpline2_t2580300728, ___pos0_2)); }
	inline Vector2_t2156229523  get_pos0_2() const { return ___pos0_2; }
	inline Vector2_t2156229523 * get_address_of_pos0_2() { return &___pos0_2; }
	inline void set_pos0_2(Vector2_t2156229523  value)
	{
		___pos0_2 = value;
	}

	inline static int32_t get_offset_of_pos1_3() { return static_cast<int32_t>(offsetof(HermiteSpline2_t2580300728, ___pos1_3)); }
	inline Vector2_t2156229523  get_pos1_3() const { return ___pos1_3; }
	inline Vector2_t2156229523 * get_address_of_pos1_3() { return &___pos1_3; }
	inline void set_pos1_3(Vector2_t2156229523  value)
	{
		___pos1_3 = value;
	}

	inline static int32_t get_offset_of_vel0_4() { return static_cast<int32_t>(offsetof(HermiteSpline2_t2580300728, ___vel0_4)); }
	inline Vector2_t2156229523  get_vel0_4() const { return ___vel0_4; }
	inline Vector2_t2156229523 * get_address_of_vel0_4() { return &___vel0_4; }
	inline void set_vel0_4(Vector2_t2156229523  value)
	{
		___vel0_4 = value;
	}

	inline static int32_t get_offset_of_vel1_5() { return static_cast<int32_t>(offsetof(HermiteSpline2_t2580300728, ___vel1_5)); }
	inline Vector2_t2156229523  get_vel1_5() const { return ___vel1_5; }
	inline Vector2_t2156229523 * get_address_of_vel1_5() { return &___vel1_5; }
	inline void set_vel1_5(Vector2_t2156229523  value)
	{
		___vel1_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HERMITESPLINE2_T2580300728_H
#ifndef HERMITESPLINE3_T4146384669_H
#define HERMITESPLINE3_T4146384669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Unity.Animation.HermiteSpline3
struct  HermiteSpline3_t4146384669 
{
public:
	// System.Single Leap.Unity.Animation.HermiteSpline3::t0
	float ___t0_0;
	// System.Single Leap.Unity.Animation.HermiteSpline3::t1
	float ___t1_1;
	// UnityEngine.Vector3 Leap.Unity.Animation.HermiteSpline3::pos0
	Vector3_t3722313464  ___pos0_2;
	// UnityEngine.Vector3 Leap.Unity.Animation.HermiteSpline3::pos1
	Vector3_t3722313464  ___pos1_3;
	// UnityEngine.Vector3 Leap.Unity.Animation.HermiteSpline3::vel0
	Vector3_t3722313464  ___vel0_4;
	// UnityEngine.Vector3 Leap.Unity.Animation.HermiteSpline3::vel1
	Vector3_t3722313464  ___vel1_5;

public:
	inline static int32_t get_offset_of_t0_0() { return static_cast<int32_t>(offsetof(HermiteSpline3_t4146384669, ___t0_0)); }
	inline float get_t0_0() const { return ___t0_0; }
	inline float* get_address_of_t0_0() { return &___t0_0; }
	inline void set_t0_0(float value)
	{
		___t0_0 = value;
	}

	inline static int32_t get_offset_of_t1_1() { return static_cast<int32_t>(offsetof(HermiteSpline3_t4146384669, ___t1_1)); }
	inline float get_t1_1() const { return ___t1_1; }
	inline float* get_address_of_t1_1() { return &___t1_1; }
	inline void set_t1_1(float value)
	{
		___t1_1 = value;
	}

	inline static int32_t get_offset_of_pos0_2() { return static_cast<int32_t>(offsetof(HermiteSpline3_t4146384669, ___pos0_2)); }
	inline Vector3_t3722313464  get_pos0_2() const { return ___pos0_2; }
	inline Vector3_t3722313464 * get_address_of_pos0_2() { return &___pos0_2; }
	inline void set_pos0_2(Vector3_t3722313464  value)
	{
		___pos0_2 = value;
	}

	inline static int32_t get_offset_of_pos1_3() { return static_cast<int32_t>(offsetof(HermiteSpline3_t4146384669, ___pos1_3)); }
	inline Vector3_t3722313464  get_pos1_3() const { return ___pos1_3; }
	inline Vector3_t3722313464 * get_address_of_pos1_3() { return &___pos1_3; }
	inline void set_pos1_3(Vector3_t3722313464  value)
	{
		___pos1_3 = value;
	}

	inline static int32_t get_offset_of_vel0_4() { return static_cast<int32_t>(offsetof(HermiteSpline3_t4146384669, ___vel0_4)); }
	inline Vector3_t3722313464  get_vel0_4() const { return ___vel0_4; }
	inline Vector3_t3722313464 * get_address_of_vel0_4() { return &___vel0_4; }
	inline void set_vel0_4(Vector3_t3722313464  value)
	{
		___vel0_4 = value;
	}

	inline static int32_t get_offset_of_vel1_5() { return static_cast<int32_t>(offsetof(HermiteSpline3_t4146384669, ___vel1_5)); }
	inline Vector3_t3722313464  get_vel1_5() const { return ___vel1_5; }
	inline Vector3_t3722313464 * get_address_of_vel1_5() { return &___vel1_5; }
	inline void set_vel1_5(Vector3_t3722313464  value)
	{
		___vel1_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HERMITESPLINE3_T4146384669_H
#ifndef SMOOTHEDQUATERNION_T2836823219_H
#define SMOOTHEDQUATERNION_T2836823219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Unity.SmoothedQuaternion
struct  SmoothedQuaternion_t2836823219  : public RuntimeObject
{
public:
	// UnityEngine.Quaternion Leap.Unity.SmoothedQuaternion::value
	Quaternion_t2301928331  ___value_0;
	// System.Single Leap.Unity.SmoothedQuaternion::delay
	float ___delay_1;
	// System.Boolean Leap.Unity.SmoothedQuaternion::reset
	bool ___reset_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SmoothedQuaternion_t2836823219, ___value_0)); }
	inline Quaternion_t2301928331  get_value_0() const { return ___value_0; }
	inline Quaternion_t2301928331 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Quaternion_t2301928331  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_delay_1() { return static_cast<int32_t>(offsetof(SmoothedQuaternion_t2836823219, ___delay_1)); }
	inline float get_delay_1() const { return ___delay_1; }
	inline float* get_address_of_delay_1() { return &___delay_1; }
	inline void set_delay_1(float value)
	{
		___delay_1 = value;
	}

	inline static int32_t get_offset_of_reset_2() { return static_cast<int32_t>(offsetof(SmoothedQuaternion_t2836823219, ___reset_2)); }
	inline bool get_reset_2() const { return ___reset_2; }
	inline bool* get_address_of_reset_2() { return &___reset_2; }
	inline void set_reset_2(bool value)
	{
		___reset_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMOOTHEDQUATERNION_T2836823219_H
#ifndef SMOOTHEDVECTOR3_T1334650525_H
#define SMOOTHEDVECTOR3_T1334650525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Unity.SmoothedVector3
struct  SmoothedVector3_t1334650525  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Leap.Unity.SmoothedVector3::value
	Vector3_t3722313464  ___value_0;
	// System.Single Leap.Unity.SmoothedVector3::delay
	float ___delay_1;
	// System.Boolean Leap.Unity.SmoothedVector3::reset
	bool ___reset_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SmoothedVector3_t1334650525, ___value_0)); }
	inline Vector3_t3722313464  get_value_0() const { return ___value_0; }
	inline Vector3_t3722313464 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t3722313464  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_delay_1() { return static_cast<int32_t>(offsetof(SmoothedVector3_t1334650525, ___delay_1)); }
	inline float get_delay_1() const { return ___delay_1; }
	inline float* get_address_of_delay_1() { return &___delay_1; }
	inline void set_delay_1(float value)
	{
		___delay_1 = value;
	}

	inline static int32_t get_offset_of_reset_2() { return static_cast<int32_t>(offsetof(SmoothedVector3_t1334650525, ___reset_2)); }
	inline bool get_reset_2() const { return ___reset_2; }
	inline bool* get_address_of_reset_2() { return &___reset_2; }
	inline void set_reset_2(bool value)
	{
		___reset_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMOOTHEDVECTOR3_T1334650525_H
#ifndef LEAP_ALLOCATOR_T1130793279_H
#define LEAP_ALLOCATOR_T1130793279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_ALLOCATOR
struct  LEAP_ALLOCATOR_t1130793279 
{
public:
	// LeapInternal.Allocate LeapInternal.LEAP_ALLOCATOR::allocate
	Allocate_t169257233 * ___allocate_0;
	// LeapInternal.Deallocate LeapInternal.LEAP_ALLOCATOR::deallocate
	Deallocate_t3308055752 * ___deallocate_1;
	// System.IntPtr LeapInternal.LEAP_ALLOCATOR::state
	intptr_t ___state_2;

public:
	inline static int32_t get_offset_of_allocate_0() { return static_cast<int32_t>(offsetof(LEAP_ALLOCATOR_t1130793279, ___allocate_0)); }
	inline Allocate_t169257233 * get_allocate_0() const { return ___allocate_0; }
	inline Allocate_t169257233 ** get_address_of_allocate_0() { return &___allocate_0; }
	inline void set_allocate_0(Allocate_t169257233 * value)
	{
		___allocate_0 = value;
		Il2CppCodeGenWriteBarrier((&___allocate_0), value);
	}

	inline static int32_t get_offset_of_deallocate_1() { return static_cast<int32_t>(offsetof(LEAP_ALLOCATOR_t1130793279, ___deallocate_1)); }
	inline Deallocate_t3308055752 * get_deallocate_1() const { return ___deallocate_1; }
	inline Deallocate_t3308055752 ** get_address_of_deallocate_1() { return &___deallocate_1; }
	inline void set_deallocate_1(Deallocate_t3308055752 * value)
	{
		___deallocate_1 = value;
		Il2CppCodeGenWriteBarrier((&___deallocate_1), value);
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(LEAP_ALLOCATOR_t1130793279, ___state_2)); }
	inline intptr_t get_state_2() const { return ___state_2; }
	inline intptr_t* get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(intptr_t value)
	{
		___state_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LeapInternal.LEAP_ALLOCATOR
#pragma pack(push, tp, 1)
struct LEAP_ALLOCATOR_t1130793279_marshaled_pinvoke
{
	Il2CppMethodPointer ___allocate_0;
	Il2CppMethodPointer ___deallocate_1;
	intptr_t ___state_2;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of LeapInternal.LEAP_ALLOCATOR
#pragma pack(push, tp, 1)
struct LEAP_ALLOCATOR_t1130793279_marshaled_com
{
	Il2CppMethodPointer ___allocate_0;
	Il2CppMethodPointer ___deallocate_1;
	intptr_t ___state_2;
};
#pragma pack(pop, tp)
#endif // LEAP_ALLOCATOR_T1130793279_H
#ifndef LEAP_BONE_T971009456_H
#define LEAP_BONE_T971009456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_BONE
#pragma pack(push, tp, 1)
struct  LEAP_BONE_t971009456 
{
public:
	// LeapInternal.LEAP_VECTOR LeapInternal.LEAP_BONE::prev_joint
	LEAP_VECTOR_t1604988008  ___prev_joint_0;
	// LeapInternal.LEAP_VECTOR LeapInternal.LEAP_BONE::next_joint
	LEAP_VECTOR_t1604988008  ___next_joint_1;
	// System.Single LeapInternal.LEAP_BONE::width
	float ___width_2;
	// LeapInternal.LEAP_QUATERNION LeapInternal.LEAP_BONE::rotation
	LEAP_QUATERNION_t2298175287  ___rotation_3;

public:
	inline static int32_t get_offset_of_prev_joint_0() { return static_cast<int32_t>(offsetof(LEAP_BONE_t971009456, ___prev_joint_0)); }
	inline LEAP_VECTOR_t1604988008  get_prev_joint_0() const { return ___prev_joint_0; }
	inline LEAP_VECTOR_t1604988008 * get_address_of_prev_joint_0() { return &___prev_joint_0; }
	inline void set_prev_joint_0(LEAP_VECTOR_t1604988008  value)
	{
		___prev_joint_0 = value;
	}

	inline static int32_t get_offset_of_next_joint_1() { return static_cast<int32_t>(offsetof(LEAP_BONE_t971009456, ___next_joint_1)); }
	inline LEAP_VECTOR_t1604988008  get_next_joint_1() const { return ___next_joint_1; }
	inline LEAP_VECTOR_t1604988008 * get_address_of_next_joint_1() { return &___next_joint_1; }
	inline void set_next_joint_1(LEAP_VECTOR_t1604988008  value)
	{
		___next_joint_1 = value;
	}

	inline static int32_t get_offset_of_width_2() { return static_cast<int32_t>(offsetof(LEAP_BONE_t971009456, ___width_2)); }
	inline float get_width_2() const { return ___width_2; }
	inline float* get_address_of_width_2() { return &___width_2; }
	inline void set_width_2(float value)
	{
		___width_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(LEAP_BONE_t971009456, ___rotation_3)); }
	inline LEAP_QUATERNION_t2298175287  get_rotation_3() const { return ___rotation_3; }
	inline LEAP_QUATERNION_t2298175287 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(LEAP_QUATERNION_t2298175287  value)
	{
		___rotation_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_BONE_T971009456_H
#ifndef LEAP_CONNECTION_CONFIG_T204252879_H
#define LEAP_CONNECTION_CONFIG_T204252879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_CONNECTION_CONFIG
#pragma pack(push, tp, 1)
struct  LEAP_CONNECTION_CONFIG_t204252879 
{
public:
	// System.UInt32 LeapInternal.LEAP_CONNECTION_CONFIG::size
	uint32_t ___size_0;
	// System.UInt32 LeapInternal.LEAP_CONNECTION_CONFIG::flags
	uint32_t ___flags_1;
	// System.IntPtr LeapInternal.LEAP_CONNECTION_CONFIG::server_namespace
	intptr_t ___server_namespace_2;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(LEAP_CONNECTION_CONFIG_t204252879, ___size_0)); }
	inline uint32_t get_size_0() const { return ___size_0; }
	inline uint32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(uint32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_flags_1() { return static_cast<int32_t>(offsetof(LEAP_CONNECTION_CONFIG_t204252879, ___flags_1)); }
	inline uint32_t get_flags_1() const { return ___flags_1; }
	inline uint32_t* get_address_of_flags_1() { return &___flags_1; }
	inline void set_flags_1(uint32_t value)
	{
		___flags_1 = value;
	}

	inline static int32_t get_offset_of_server_namespace_2() { return static_cast<int32_t>(offsetof(LEAP_CONNECTION_CONFIG_t204252879, ___server_namespace_2)); }
	inline intptr_t get_server_namespace_2() const { return ___server_namespace_2; }
	inline intptr_t* get_address_of_server_namespace_2() { return &___server_namespace_2; }
	inline void set_server_namespace_2(intptr_t value)
	{
		___server_namespace_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_CONNECTION_CONFIG_T204252879_H
#ifndef LEAP_DEVICE_REF_T3554253992_H
#define LEAP_DEVICE_REF_T3554253992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_DEVICE_REF
#pragma pack(push, tp, 1)
struct  LEAP_DEVICE_REF_t3554253992 
{
public:
	// System.IntPtr LeapInternal.LEAP_DEVICE_REF::handle
	intptr_t ___handle_0;
	// System.UInt32 LeapInternal.LEAP_DEVICE_REF::id
	uint32_t ___id_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_REF_t3554253992, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_REF_t3554253992, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_DEVICE_REF_T3554253992_H
#ifndef LEAP_FRAME_HEADER_T1981168231_H
#define LEAP_FRAME_HEADER_T1981168231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_FRAME_HEADER
#pragma pack(push, tp, 1)
struct  LEAP_FRAME_HEADER_t1981168231 
{
public:
	// System.IntPtr LeapInternal.LEAP_FRAME_HEADER::reserved
	intptr_t ___reserved_0;
	// System.Int64 LeapInternal.LEAP_FRAME_HEADER::frame_id
	int64_t ___frame_id_1;
	// System.Int64 LeapInternal.LEAP_FRAME_HEADER::timestamp
	int64_t ___timestamp_2;

public:
	inline static int32_t get_offset_of_reserved_0() { return static_cast<int32_t>(offsetof(LEAP_FRAME_HEADER_t1981168231, ___reserved_0)); }
	inline intptr_t get_reserved_0() const { return ___reserved_0; }
	inline intptr_t* get_address_of_reserved_0() { return &___reserved_0; }
	inline void set_reserved_0(intptr_t value)
	{
		___reserved_0 = value;
	}

	inline static int32_t get_offset_of_frame_id_1() { return static_cast<int32_t>(offsetof(LEAP_FRAME_HEADER_t1981168231, ___frame_id_1)); }
	inline int64_t get_frame_id_1() const { return ___frame_id_1; }
	inline int64_t* get_address_of_frame_id_1() { return &___frame_id_1; }
	inline void set_frame_id_1(int64_t value)
	{
		___frame_id_1 = value;
	}

	inline static int32_t get_offset_of_timestamp_2() { return static_cast<int32_t>(offsetof(LEAP_FRAME_HEADER_t1981168231, ___timestamp_2)); }
	inline int64_t get_timestamp_2() const { return ___timestamp_2; }
	inline int64_t* get_address_of_timestamp_2() { return &___timestamp_2; }
	inline void set_timestamp_2(int64_t value)
	{
		___timestamp_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_FRAME_HEADER_T1981168231_H
#ifndef LEAP_HEAD_POSE_EVENT_T1999289289_H
#define LEAP_HEAD_POSE_EVENT_T1999289289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_HEAD_POSE_EVENT
#pragma pack(push, tp, 1)
struct  LEAP_HEAD_POSE_EVENT_t1999289289 
{
public:
	// System.Int64 LeapInternal.LEAP_HEAD_POSE_EVENT::timestamp
	int64_t ___timestamp_0;
	// LeapInternal.LEAP_VECTOR LeapInternal.LEAP_HEAD_POSE_EVENT::head_position
	LEAP_VECTOR_t1604988008  ___head_position_1;
	// LeapInternal.LEAP_QUATERNION LeapInternal.LEAP_HEAD_POSE_EVENT::head_orientation
	LEAP_QUATERNION_t2298175287  ___head_orientation_2;

public:
	inline static int32_t get_offset_of_timestamp_0() { return static_cast<int32_t>(offsetof(LEAP_HEAD_POSE_EVENT_t1999289289, ___timestamp_0)); }
	inline int64_t get_timestamp_0() const { return ___timestamp_0; }
	inline int64_t* get_address_of_timestamp_0() { return &___timestamp_0; }
	inline void set_timestamp_0(int64_t value)
	{
		___timestamp_0 = value;
	}

	inline static int32_t get_offset_of_head_position_1() { return static_cast<int32_t>(offsetof(LEAP_HEAD_POSE_EVENT_t1999289289, ___head_position_1)); }
	inline LEAP_VECTOR_t1604988008  get_head_position_1() const { return ___head_position_1; }
	inline LEAP_VECTOR_t1604988008 * get_address_of_head_position_1() { return &___head_position_1; }
	inline void set_head_position_1(LEAP_VECTOR_t1604988008  value)
	{
		___head_position_1 = value;
	}

	inline static int32_t get_offset_of_head_orientation_2() { return static_cast<int32_t>(offsetof(LEAP_HEAD_POSE_EVENT_t1999289289, ___head_orientation_2)); }
	inline LEAP_QUATERNION_t2298175287  get_head_orientation_2() const { return ___head_orientation_2; }
	inline LEAP_QUATERNION_t2298175287 * get_address_of_head_orientation_2() { return &___head_orientation_2; }
	inline void set_head_orientation_2(LEAP_QUATERNION_t2298175287  value)
	{
		___head_orientation_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_HEAD_POSE_EVENT_T1999289289_H
#ifndef LEAP_MATRIX_3X3_T36015662_H
#define LEAP_MATRIX_3X3_T36015662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_MATRIX_3x3
#pragma pack(push, tp, 1)
struct  LEAP_MATRIX_3x3_t36015662 
{
public:
	// LeapInternal.LEAP_VECTOR LeapInternal.LEAP_MATRIX_3x3::m1
	LEAP_VECTOR_t1604988008  ___m1_0;
	// LeapInternal.LEAP_VECTOR LeapInternal.LEAP_MATRIX_3x3::m2
	LEAP_VECTOR_t1604988008  ___m2_1;
	// LeapInternal.LEAP_VECTOR LeapInternal.LEAP_MATRIX_3x3::m3
	LEAP_VECTOR_t1604988008  ___m3_2;

public:
	inline static int32_t get_offset_of_m1_0() { return static_cast<int32_t>(offsetof(LEAP_MATRIX_3x3_t36015662, ___m1_0)); }
	inline LEAP_VECTOR_t1604988008  get_m1_0() const { return ___m1_0; }
	inline LEAP_VECTOR_t1604988008 * get_address_of_m1_0() { return &___m1_0; }
	inline void set_m1_0(LEAP_VECTOR_t1604988008  value)
	{
		___m1_0 = value;
	}

	inline static int32_t get_offset_of_m2_1() { return static_cast<int32_t>(offsetof(LEAP_MATRIX_3x3_t36015662, ___m2_1)); }
	inline LEAP_VECTOR_t1604988008  get_m2_1() const { return ___m2_1; }
	inline LEAP_VECTOR_t1604988008 * get_address_of_m2_1() { return &___m2_1; }
	inline void set_m2_1(LEAP_VECTOR_t1604988008  value)
	{
		___m2_1 = value;
	}

	inline static int32_t get_offset_of_m3_2() { return static_cast<int32_t>(offsetof(LEAP_MATRIX_3x3_t36015662, ___m3_2)); }
	inline LEAP_VECTOR_t1604988008  get_m3_2() const { return ___m3_2; }
	inline LEAP_VECTOR_t1604988008 * get_address_of_m3_2() { return &___m3_2; }
	inline void set_m3_2(LEAP_VECTOR_t1604988008  value)
	{
		___m3_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_MATRIX_3X3_T36015662_H
#ifndef LEAP_PALM_T3332508984_H
#define LEAP_PALM_T3332508984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_PALM
#pragma pack(push, tp, 1)
struct  LEAP_PALM_t3332508984 
{
public:
	// LeapInternal.LEAP_VECTOR LeapInternal.LEAP_PALM::position
	LEAP_VECTOR_t1604988008  ___position_0;
	// LeapInternal.LEAP_VECTOR LeapInternal.LEAP_PALM::stabilized_position
	LEAP_VECTOR_t1604988008  ___stabilized_position_1;
	// LeapInternal.LEAP_VECTOR LeapInternal.LEAP_PALM::velocity
	LEAP_VECTOR_t1604988008  ___velocity_2;
	// LeapInternal.LEAP_VECTOR LeapInternal.LEAP_PALM::normal
	LEAP_VECTOR_t1604988008  ___normal_3;
	// System.Single LeapInternal.LEAP_PALM::width
	float ___width_4;
	// LeapInternal.LEAP_VECTOR LeapInternal.LEAP_PALM::direction
	LEAP_VECTOR_t1604988008  ___direction_5;
	// LeapInternal.LEAP_QUATERNION LeapInternal.LEAP_PALM::orientation
	LEAP_QUATERNION_t2298175287  ___orientation_6;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(LEAP_PALM_t3332508984, ___position_0)); }
	inline LEAP_VECTOR_t1604988008  get_position_0() const { return ___position_0; }
	inline LEAP_VECTOR_t1604988008 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(LEAP_VECTOR_t1604988008  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_stabilized_position_1() { return static_cast<int32_t>(offsetof(LEAP_PALM_t3332508984, ___stabilized_position_1)); }
	inline LEAP_VECTOR_t1604988008  get_stabilized_position_1() const { return ___stabilized_position_1; }
	inline LEAP_VECTOR_t1604988008 * get_address_of_stabilized_position_1() { return &___stabilized_position_1; }
	inline void set_stabilized_position_1(LEAP_VECTOR_t1604988008  value)
	{
		___stabilized_position_1 = value;
	}

	inline static int32_t get_offset_of_velocity_2() { return static_cast<int32_t>(offsetof(LEAP_PALM_t3332508984, ___velocity_2)); }
	inline LEAP_VECTOR_t1604988008  get_velocity_2() const { return ___velocity_2; }
	inline LEAP_VECTOR_t1604988008 * get_address_of_velocity_2() { return &___velocity_2; }
	inline void set_velocity_2(LEAP_VECTOR_t1604988008  value)
	{
		___velocity_2 = value;
	}

	inline static int32_t get_offset_of_normal_3() { return static_cast<int32_t>(offsetof(LEAP_PALM_t3332508984, ___normal_3)); }
	inline LEAP_VECTOR_t1604988008  get_normal_3() const { return ___normal_3; }
	inline LEAP_VECTOR_t1604988008 * get_address_of_normal_3() { return &___normal_3; }
	inline void set_normal_3(LEAP_VECTOR_t1604988008  value)
	{
		___normal_3 = value;
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(LEAP_PALM_t3332508984, ___width_4)); }
	inline float get_width_4() const { return ___width_4; }
	inline float* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(float value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_direction_5() { return static_cast<int32_t>(offsetof(LEAP_PALM_t3332508984, ___direction_5)); }
	inline LEAP_VECTOR_t1604988008  get_direction_5() const { return ___direction_5; }
	inline LEAP_VECTOR_t1604988008 * get_address_of_direction_5() { return &___direction_5; }
	inline void set_direction_5(LEAP_VECTOR_t1604988008  value)
	{
		___direction_5 = value;
	}

	inline static int32_t get_offset_of_orientation_6() { return static_cast<int32_t>(offsetof(LEAP_PALM_t3332508984, ___orientation_6)); }
	inline LEAP_QUATERNION_t2298175287  get_orientation_6() const { return ___orientation_6; }
	inline LEAP_QUATERNION_t2298175287 * get_address_of_orientation_6() { return &___orientation_6; }
	inline void set_orientation_6(LEAP_QUATERNION_t2298175287  value)
	{
		___orientation_6 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_PALM_T3332508984_H
#ifndef LEAP_POINT_MAPPING_T1256084792_H
#define LEAP_POINT_MAPPING_T1256084792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_POINT_MAPPING
#pragma pack(push, tp, 1)
struct  LEAP_POINT_MAPPING_t1256084792 
{
public:
	// System.Int64 LeapInternal.LEAP_POINT_MAPPING::frame_id
	int64_t ___frame_id_0;
	// System.Int64 LeapInternal.LEAP_POINT_MAPPING::timestamp
	int64_t ___timestamp_1;
	// System.UInt32 LeapInternal.LEAP_POINT_MAPPING::nPoints
	uint32_t ___nPoints_2;
	// System.IntPtr LeapInternal.LEAP_POINT_MAPPING::points
	intptr_t ___points_3;
	// System.IntPtr LeapInternal.LEAP_POINT_MAPPING::ids
	intptr_t ___ids_4;

public:
	inline static int32_t get_offset_of_frame_id_0() { return static_cast<int32_t>(offsetof(LEAP_POINT_MAPPING_t1256084792, ___frame_id_0)); }
	inline int64_t get_frame_id_0() const { return ___frame_id_0; }
	inline int64_t* get_address_of_frame_id_0() { return &___frame_id_0; }
	inline void set_frame_id_0(int64_t value)
	{
		___frame_id_0 = value;
	}

	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(LEAP_POINT_MAPPING_t1256084792, ___timestamp_1)); }
	inline int64_t get_timestamp_1() const { return ___timestamp_1; }
	inline int64_t* get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(int64_t value)
	{
		___timestamp_1 = value;
	}

	inline static int32_t get_offset_of_nPoints_2() { return static_cast<int32_t>(offsetof(LEAP_POINT_MAPPING_t1256084792, ___nPoints_2)); }
	inline uint32_t get_nPoints_2() const { return ___nPoints_2; }
	inline uint32_t* get_address_of_nPoints_2() { return &___nPoints_2; }
	inline void set_nPoints_2(uint32_t value)
	{
		___nPoints_2 = value;
	}

	inline static int32_t get_offset_of_points_3() { return static_cast<int32_t>(offsetof(LEAP_POINT_MAPPING_t1256084792, ___points_3)); }
	inline intptr_t get_points_3() const { return ___points_3; }
	inline intptr_t* get_address_of_points_3() { return &___points_3; }
	inline void set_points_3(intptr_t value)
	{
		___points_3 = value;
	}

	inline static int32_t get_offset_of_ids_4() { return static_cast<int32_t>(offsetof(LEAP_POINT_MAPPING_t1256084792, ___ids_4)); }
	inline intptr_t get_ids_4() const { return ___ids_4; }
	inline intptr_t* get_address_of_ids_4() { return &___ids_4; }
	inline void set_ids_4(intptr_t value)
	{
		___ids_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_POINT_MAPPING_T1256084792_H
#ifndef LEAP_TIP_T4133281704_H
#define LEAP_TIP_T4133281704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_TIP
#pragma pack(push, tp, 1)
struct  LEAP_TIP_t4133281704 
{
public:
	// LeapInternal.LEAP_VECTOR LeapInternal.LEAP_TIP::position
	LEAP_VECTOR_t1604988008  ___position_0;
	// System.Single LeapInternal.LEAP_TIP::radius
	float ___radius_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(LEAP_TIP_t4133281704, ___position_0)); }
	inline LEAP_VECTOR_t1604988008  get_position_0() const { return ___position_0; }
	inline LEAP_VECTOR_t1604988008 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(LEAP_VECTOR_t1604988008  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_radius_1() { return static_cast<int32_t>(offsetof(LEAP_TIP_t4133281704, ___radius_1)); }
	inline float get_radius_1() const { return ___radius_1; }
	inline float* get_address_of_radius_1() { return &___radius_1; }
	inline void set_radius_1(float value)
	{
		___radius_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_TIP_T4133281704_H
#ifndef EDISTORTIONMATRIXTYPE_T4112054008_H
#define EDISTORTIONMATRIXTYPE_T4112054008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eDistortionMatrixType
struct  eDistortionMatrixType_t4112054008 
{
public:
	// System.Int32 LeapInternal.eDistortionMatrixType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eDistortionMatrixType_t4112054008, ___value___1)); }
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
#endif // EDISTORTIONMATRIXTYPE_T4112054008_H
#ifndef ELEAPALLOCATORTYPE_T294866453_H
#define ELEAPALLOCATORTYPE_T294866453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapAllocatorType
struct  eLeapAllocatorType_t294866453 
{
public:
	// System.UInt32 LeapInternal.eLeapAllocatorType::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapAllocatorType_t294866453, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEAPALLOCATORTYPE_T294866453_H
#ifndef ELEAPCONNECTIONSTATUS_T2496445009_H
#define ELEAPCONNECTIONSTATUS_T2496445009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapConnectionStatus
struct  eLeapConnectionStatus_t2496445009 
{
public:
	// System.UInt32 LeapInternal.eLeapConnectionStatus::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapConnectionStatus_t2496445009, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEAPCONNECTIONSTATUS_T2496445009_H
#ifndef ELEAPDEVICECAPS_T1179089849_H
#define ELEAPDEVICECAPS_T1179089849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapDeviceCaps
struct  eLeapDeviceCaps_t1179089849 
{
public:
	// System.UInt32 LeapInternal.eLeapDeviceCaps::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapDeviceCaps_t1179089849, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEAPDEVICECAPS_T1179089849_H
#ifndef ELEAPDEVICEFLAG_T2618636809_H
#define ELEAPDEVICEFLAG_T2618636809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapDeviceFlag
struct  eLeapDeviceFlag_t2618636809 
{
public:
	// System.UInt32 LeapInternal.eLeapDeviceFlag::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapDeviceFlag_t2618636809, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEAPDEVICEFLAG_T2618636809_H
#ifndef ELEAPDEVICESTATUS_T921293112_H
#define ELEAPDEVICESTATUS_T921293112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapDeviceStatus
struct  eLeapDeviceStatus_t921293112 
{
public:
	// System.UInt32 LeapInternal.eLeapDeviceStatus::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapDeviceStatus_t921293112, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEAPDEVICESTATUS_T921293112_H
#ifndef ELEAPDEVICETYPE_T3853876176_H
#define ELEAPDEVICETYPE_T3853876176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapDeviceType
struct  eLeapDeviceType_t3853876176 
{
public:
	// System.UInt32 LeapInternal.eLeapDeviceType::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapDeviceType_t3853876176, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEAPDEVICETYPE_T3853876176_H
#ifndef ELEAPDROPPEDFRAMETYPE_T4020102257_H
#define ELEAPDROPPEDFRAMETYPE_T4020102257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapDroppedFrameType
struct  eLeapDroppedFrameType_t4020102257 
{
public:
	// System.Int32 LeapInternal.eLeapDroppedFrameType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapDroppedFrameType_t4020102257, ___value___1)); }
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
#endif // ELEAPDROPPEDFRAMETYPE_T4020102257_H
#ifndef ELEAPEVENTTYPE_T2039909547_H
#define ELEAPEVENTTYPE_T2039909547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapEventType
struct  eLeapEventType_t2039909547 
{
public:
	// System.Int32 LeapInternal.eLeapEventType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapEventType_t2039909547, ___value___1)); }
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
#endif // ELEAPEVENTTYPE_T2039909547_H
#ifndef ELEAPHANDTYPE_T2031712638_H
#define ELEAPHANDTYPE_T2031712638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapHandType
struct  eLeapHandType_t2031712638 
{
public:
	// System.Int32 LeapInternal.eLeapHandType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapHandType_t2031712638, ___value___1)); }
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
#endif // ELEAPHANDTYPE_T2031712638_H
#ifndef ELEAPIMAGEFORMAT_T3165415781_H
#define ELEAPIMAGEFORMAT_T3165415781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapImageFormat
struct  eLeapImageFormat_t3165415781 
{
public:
	// System.UInt32 LeapInternal.eLeapImageFormat::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapImageFormat_t3165415781, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEAPIMAGEFORMAT_T3165415781_H
#ifndef ELEAPIMAGETYPE_T992146754_H
#define ELEAPIMAGETYPE_T992146754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapImageType
struct  eLeapImageType_t992146754 
{
public:
	// System.Int32 LeapInternal.eLeapImageType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapImageType_t992146754, ___value___1)); }
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
#endif // ELEAPIMAGETYPE_T992146754_H
#ifndef ELEAPLOGSEVERITY_T3338786591_H
#define ELEAPLOGSEVERITY_T3338786591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapLogSeverity
struct  eLeapLogSeverity_t3338786591 
{
public:
	// System.Int32 LeapInternal.eLeapLogSeverity::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapLogSeverity_t3338786591, ___value___1)); }
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
#endif // ELEAPLOGSEVERITY_T3338786591_H
#ifndef ELEAPPERSPECTIVETYPE_T3963569717_H
#define ELEAPPERSPECTIVETYPE_T3963569717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapPerspectiveType
struct  eLeapPerspectiveType_t3963569717 
{
public:
	// System.Int32 LeapInternal.eLeapPerspectiveType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapPerspectiveType_t3963569717, ___value___1)); }
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
#endif // ELEAPPERSPECTIVETYPE_T3963569717_H
#ifndef ELEAPPOLICYFLAG_T3685117543_H
#define ELEAPPOLICYFLAG_T3685117543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapPolicyFlag
struct  eLeapPolicyFlag_t3685117543 
{
public:
	// System.UInt32 LeapInternal.eLeapPolicyFlag::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapPolicyFlag_t3685117543, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEAPPOLICYFLAG_T3685117543_H
#ifndef ELEAPRS_T391302811_H
#define ELEAPRS_T391302811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapRS
struct  eLeapRS_t391302811 
{
public:
	// System.UInt32 LeapInternal.eLeapRS::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapRS_t391302811, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEAPRS_T391302811_H
#ifndef ELEAPSERVICEDISPOSITION_T2679159627_H
#define ELEAPSERVICEDISPOSITION_T2679159627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapServiceDisposition
struct  eLeapServiceDisposition_t2679159627 
{
public:
	// System.UInt32 LeapInternal.eLeapServiceDisposition::value__
	uint32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapServiceDisposition_t2679159627, ___value___1)); }
	inline uint32_t get_value___1() const { return ___value___1; }
	inline uint32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEAPSERVICEDISPOSITION_T2679159627_H
#ifndef ELEAPVALUETYPE_T878858220_H
#define ELEAPVALUETYPE_T878858220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.eLeapValueType
struct  eLeapValueType_t878858220 
{
public:
	// System.Int32 LeapInternal.eLeapValueType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(eLeapValueType_t878858220, ___value___1)); }
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
#endif // ELEAPVALUETYPE_T878858220_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef FAILEDDEVICE_T344505893_H
#define FAILEDDEVICE_T344505893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.FailedDevice
struct  FailedDevice_t344505893  : public RuntimeObject
{
public:
	// System.String Leap.FailedDevice::<PnpId>k__BackingField
	String_t* ___U3CPnpIdU3Ek__BackingField_0;
	// Leap.FailedDevice/FailureType Leap.FailedDevice::<Failure>k__BackingField
	int32_t ___U3CFailureU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPnpIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FailedDevice_t344505893, ___U3CPnpIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CPnpIdU3Ek__BackingField_0() const { return ___U3CPnpIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CPnpIdU3Ek__BackingField_0() { return &___U3CPnpIdU3Ek__BackingField_0; }
	inline void set_U3CPnpIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CPnpIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPnpIdU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CFailureU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(FailedDevice_t344505893, ___U3CFailureU3Ek__BackingField_1)); }
	inline int32_t get_U3CFailureU3Ek__BackingField_1() const { return ___U3CFailureU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CFailureU3Ek__BackingField_1() { return &___U3CFailureU3Ek__BackingField_1; }
	inline void set_U3CFailureU3Ek__BackingField_1(int32_t value)
	{
		___U3CFailureU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FAILEDDEVICE_T344505893_H
#ifndef FINGER_T3372835011_H
#define FINGER_T3372835011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.Finger
struct  Finger_t3372835011  : public RuntimeObject
{
public:
	// Leap.Bone[] Leap.Finger::bones
	BoneU5BU5D_t3230550922* ___bones_0;
	// Leap.Finger/FingerType Leap.Finger::Type
	int32_t ___Type_1;
	// System.Int32 Leap.Finger::Id
	int32_t ___Id_2;
	// System.Int32 Leap.Finger::HandId
	int32_t ___HandId_3;
	// Leap.Vector Leap.Finger::TipPosition
	Vector_t2166112452  ___TipPosition_4;
	// Leap.Vector Leap.Finger::Direction
	Vector_t2166112452  ___Direction_5;
	// System.Single Leap.Finger::Width
	float ___Width_6;
	// System.Single Leap.Finger::Length
	float ___Length_7;
	// System.Boolean Leap.Finger::IsExtended
	bool ___IsExtended_8;
	// System.Single Leap.Finger::TimeVisible
	float ___TimeVisible_9;

public:
	inline static int32_t get_offset_of_bones_0() { return static_cast<int32_t>(offsetof(Finger_t3372835011, ___bones_0)); }
	inline BoneU5BU5D_t3230550922* get_bones_0() const { return ___bones_0; }
	inline BoneU5BU5D_t3230550922** get_address_of_bones_0() { return &___bones_0; }
	inline void set_bones_0(BoneU5BU5D_t3230550922* value)
	{
		___bones_0 = value;
		Il2CppCodeGenWriteBarrier((&___bones_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(Finger_t3372835011, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Id_2() { return static_cast<int32_t>(offsetof(Finger_t3372835011, ___Id_2)); }
	inline int32_t get_Id_2() const { return ___Id_2; }
	inline int32_t* get_address_of_Id_2() { return &___Id_2; }
	inline void set_Id_2(int32_t value)
	{
		___Id_2 = value;
	}

	inline static int32_t get_offset_of_HandId_3() { return static_cast<int32_t>(offsetof(Finger_t3372835011, ___HandId_3)); }
	inline int32_t get_HandId_3() const { return ___HandId_3; }
	inline int32_t* get_address_of_HandId_3() { return &___HandId_3; }
	inline void set_HandId_3(int32_t value)
	{
		___HandId_3 = value;
	}

	inline static int32_t get_offset_of_TipPosition_4() { return static_cast<int32_t>(offsetof(Finger_t3372835011, ___TipPosition_4)); }
	inline Vector_t2166112452  get_TipPosition_4() const { return ___TipPosition_4; }
	inline Vector_t2166112452 * get_address_of_TipPosition_4() { return &___TipPosition_4; }
	inline void set_TipPosition_4(Vector_t2166112452  value)
	{
		___TipPosition_4 = value;
	}

	inline static int32_t get_offset_of_Direction_5() { return static_cast<int32_t>(offsetof(Finger_t3372835011, ___Direction_5)); }
	inline Vector_t2166112452  get_Direction_5() const { return ___Direction_5; }
	inline Vector_t2166112452 * get_address_of_Direction_5() { return &___Direction_5; }
	inline void set_Direction_5(Vector_t2166112452  value)
	{
		___Direction_5 = value;
	}

	inline static int32_t get_offset_of_Width_6() { return static_cast<int32_t>(offsetof(Finger_t3372835011, ___Width_6)); }
	inline float get_Width_6() const { return ___Width_6; }
	inline float* get_address_of_Width_6() { return &___Width_6; }
	inline void set_Width_6(float value)
	{
		___Width_6 = value;
	}

	inline static int32_t get_offset_of_Length_7() { return static_cast<int32_t>(offsetof(Finger_t3372835011, ___Length_7)); }
	inline float get_Length_7() const { return ___Length_7; }
	inline float* get_address_of_Length_7() { return &___Length_7; }
	inline void set_Length_7(float value)
	{
		___Length_7 = value;
	}

	inline static int32_t get_offset_of_IsExtended_8() { return static_cast<int32_t>(offsetof(Finger_t3372835011, ___IsExtended_8)); }
	inline bool get_IsExtended_8() const { return ___IsExtended_8; }
	inline bool* get_address_of_IsExtended_8() { return &___IsExtended_8; }
	inline void set_IsExtended_8(bool value)
	{
		___IsExtended_8 = value;
	}

	inline static int32_t get_offset_of_TimeVisible_9() { return static_cast<int32_t>(offsetof(Finger_t3372835011, ___TimeVisible_9)); }
	inline float get_TimeVisible_9() const { return ___TimeVisible_9; }
	inline float* get_address_of_TimeVisible_9() { return &___TimeVisible_9; }
	inline void set_TimeVisible_9(float value)
	{
		___TimeVisible_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FINGER_T3372835011_H
#ifndef LEAPEVENTARGS_T1891591329_H
#define LEAPEVENTARGS_T1891591329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.LeapEventArgs
struct  LeapEventArgs_t1891591329  : public EventArgs_t3591816995
{
public:
	// Leap.LeapEvent Leap.LeapEventArgs::<type>k__BackingField
	int32_t ___U3CtypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CtypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LeapEventArgs_t1891591329, ___U3CtypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CtypeU3Ek__BackingField_1() const { return ___U3CtypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CtypeU3Ek__BackingField_1() { return &___U3CtypeU3Ek__BackingField_1; }
	inline void set_U3CtypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CtypeU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAPEVENTARGS_T1891591329_H
#ifndef LEAP_CONNECTION_EVENT_T625730999_H
#define LEAP_CONNECTION_EVENT_T625730999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_CONNECTION_EVENT
#pragma pack(push, tp, 1)
struct  LEAP_CONNECTION_EVENT_t625730999 
{
public:
	// LeapInternal.eLeapServiceDisposition LeapInternal.LEAP_CONNECTION_EVENT::flags
	uint32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(LEAP_CONNECTION_EVENT_t625730999, ___flags_0)); }
	inline uint32_t get_flags_0() const { return ___flags_0; }
	inline uint32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(uint32_t value)
	{
		___flags_0 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_CONNECTION_EVENT_T625730999_H
#ifndef LEAP_CONNECTION_INFO_T1143076656_H
#define LEAP_CONNECTION_INFO_T1143076656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_CONNECTION_INFO
#pragma pack(push, tp, 1)
struct  LEAP_CONNECTION_INFO_t1143076656 
{
public:
	// System.UInt32 LeapInternal.LEAP_CONNECTION_INFO::size
	uint32_t ___size_0;
	// LeapInternal.eLeapConnectionStatus LeapInternal.LEAP_CONNECTION_INFO::status
	uint32_t ___status_1;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(LEAP_CONNECTION_INFO_t1143076656, ___size_0)); }
	inline uint32_t get_size_0() const { return ___size_0; }
	inline uint32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(uint32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_status_1() { return static_cast<int32_t>(offsetof(LEAP_CONNECTION_INFO_t1143076656, ___status_1)); }
	inline uint32_t get_status_1() const { return ___status_1; }
	inline uint32_t* get_address_of_status_1() { return &___status_1; }
	inline void set_status_1(uint32_t value)
	{
		___status_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_CONNECTION_INFO_T1143076656_H
#ifndef LEAP_CONNECTION_MESSAGE_T378074802_H
#define LEAP_CONNECTION_MESSAGE_T378074802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_CONNECTION_MESSAGE
#pragma pack(push, tp, 1)
struct  LEAP_CONNECTION_MESSAGE_t378074802 
{
public:
	// System.UInt32 LeapInternal.LEAP_CONNECTION_MESSAGE::size
	uint32_t ___size_0;
	// LeapInternal.eLeapEventType LeapInternal.LEAP_CONNECTION_MESSAGE::type
	int32_t ___type_1;
	// System.IntPtr LeapInternal.LEAP_CONNECTION_MESSAGE::eventStructPtr
	intptr_t ___eventStructPtr_2;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(LEAP_CONNECTION_MESSAGE_t378074802, ___size_0)); }
	inline uint32_t get_size_0() const { return ___size_0; }
	inline uint32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(uint32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(LEAP_CONNECTION_MESSAGE_t378074802, ___type_1)); }
	inline int32_t get_type_1() const { return ___type_1; }
	inline int32_t* get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(int32_t value)
	{
		___type_1 = value;
	}

	inline static int32_t get_offset_of_eventStructPtr_2() { return static_cast<int32_t>(offsetof(LEAP_CONNECTION_MESSAGE_t378074802, ___eventStructPtr_2)); }
	inline intptr_t get_eventStructPtr_2() const { return ___eventStructPtr_2; }
	inline intptr_t* get_address_of_eventStructPtr_2() { return &___eventStructPtr_2; }
	inline void set_eventStructPtr_2(intptr_t value)
	{
		___eventStructPtr_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_CONNECTION_MESSAGE_T378074802_H
#ifndef LEAP_DEVICE_EVENT_T3586739927_H
#define LEAP_DEVICE_EVENT_T3586739927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_DEVICE_EVENT
#pragma pack(push, tp, 1)
struct  LEAP_DEVICE_EVENT_t3586739927 
{
public:
	// System.UInt32 LeapInternal.LEAP_DEVICE_EVENT::flags
	uint32_t ___flags_0;
	// LeapInternal.LEAP_DEVICE_REF LeapInternal.LEAP_DEVICE_EVENT::device
	LEAP_DEVICE_REF_t3554253992  ___device_1;
	// LeapInternal.eLeapDeviceStatus LeapInternal.LEAP_DEVICE_EVENT::status
	uint32_t ___status_2;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_EVENT_t3586739927, ___flags_0)); }
	inline uint32_t get_flags_0() const { return ___flags_0; }
	inline uint32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(uint32_t value)
	{
		___flags_0 = value;
	}

	inline static int32_t get_offset_of_device_1() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_EVENT_t3586739927, ___device_1)); }
	inline LEAP_DEVICE_REF_t3554253992  get_device_1() const { return ___device_1; }
	inline LEAP_DEVICE_REF_t3554253992 * get_address_of_device_1() { return &___device_1; }
	inline void set_device_1(LEAP_DEVICE_REF_t3554253992  value)
	{
		___device_1 = value;
	}

	inline static int32_t get_offset_of_status_2() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_EVENT_t3586739927, ___status_2)); }
	inline uint32_t get_status_2() const { return ___status_2; }
	inline uint32_t* get_address_of_status_2() { return &___status_2; }
	inline void set_status_2(uint32_t value)
	{
		___status_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_DEVICE_EVENT_T3586739927_H
#ifndef LEAP_DEVICE_FAILURE_EVENT_T5414606_H
#define LEAP_DEVICE_FAILURE_EVENT_T5414606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_DEVICE_FAILURE_EVENT
#pragma pack(push, tp, 1)
struct  LEAP_DEVICE_FAILURE_EVENT_t5414606 
{
public:
	// LeapInternal.eLeapDeviceStatus LeapInternal.LEAP_DEVICE_FAILURE_EVENT::status
	uint32_t ___status_0;
	// System.IntPtr LeapInternal.LEAP_DEVICE_FAILURE_EVENT::hDevice
	intptr_t ___hDevice_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_FAILURE_EVENT_t5414606, ___status_0)); }
	inline uint32_t get_status_0() const { return ___status_0; }
	inline uint32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(uint32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_hDevice_1() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_FAILURE_EVENT_t5414606, ___hDevice_1)); }
	inline intptr_t get_hDevice_1() const { return ___hDevice_1; }
	inline intptr_t* get_address_of_hDevice_1() { return &___hDevice_1; }
	inline void set_hDevice_1(intptr_t value)
	{
		___hDevice_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_DEVICE_FAILURE_EVENT_T5414606_H
#ifndef LEAP_DEVICE_INFO_T3103997278_H
#define LEAP_DEVICE_INFO_T3103997278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_DEVICE_INFO
#pragma pack(push, tp, 1)
struct  LEAP_DEVICE_INFO_t3103997278 
{
public:
	// System.UInt32 LeapInternal.LEAP_DEVICE_INFO::size
	uint32_t ___size_0;
	// LeapInternal.eLeapDeviceStatus LeapInternal.LEAP_DEVICE_INFO::status
	uint32_t ___status_1;
	// LeapInternal.eLeapDeviceCaps LeapInternal.LEAP_DEVICE_INFO::caps
	uint32_t ___caps_2;
	// LeapInternal.eLeapDeviceType LeapInternal.LEAP_DEVICE_INFO::type
	uint32_t ___type_3;
	// System.UInt32 LeapInternal.LEAP_DEVICE_INFO::baseline
	uint32_t ___baseline_4;
	// System.UInt32 LeapInternal.LEAP_DEVICE_INFO::serial_length
	uint32_t ___serial_length_5;
	// System.IntPtr LeapInternal.LEAP_DEVICE_INFO::serial
	intptr_t ___serial_6;
	// System.Single LeapInternal.LEAP_DEVICE_INFO::h_fov
	float ___h_fov_7;
	// System.Single LeapInternal.LEAP_DEVICE_INFO::v_fov
	float ___v_fov_8;
	// System.UInt32 LeapInternal.LEAP_DEVICE_INFO::range
	uint32_t ___range_9;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_INFO_t3103997278, ___size_0)); }
	inline uint32_t get_size_0() const { return ___size_0; }
	inline uint32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(uint32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_status_1() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_INFO_t3103997278, ___status_1)); }
	inline uint32_t get_status_1() const { return ___status_1; }
	inline uint32_t* get_address_of_status_1() { return &___status_1; }
	inline void set_status_1(uint32_t value)
	{
		___status_1 = value;
	}

	inline static int32_t get_offset_of_caps_2() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_INFO_t3103997278, ___caps_2)); }
	inline uint32_t get_caps_2() const { return ___caps_2; }
	inline uint32_t* get_address_of_caps_2() { return &___caps_2; }
	inline void set_caps_2(uint32_t value)
	{
		___caps_2 = value;
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_INFO_t3103997278, ___type_3)); }
	inline uint32_t get_type_3() const { return ___type_3; }
	inline uint32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(uint32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_baseline_4() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_INFO_t3103997278, ___baseline_4)); }
	inline uint32_t get_baseline_4() const { return ___baseline_4; }
	inline uint32_t* get_address_of_baseline_4() { return &___baseline_4; }
	inline void set_baseline_4(uint32_t value)
	{
		___baseline_4 = value;
	}

	inline static int32_t get_offset_of_serial_length_5() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_INFO_t3103997278, ___serial_length_5)); }
	inline uint32_t get_serial_length_5() const { return ___serial_length_5; }
	inline uint32_t* get_address_of_serial_length_5() { return &___serial_length_5; }
	inline void set_serial_length_5(uint32_t value)
	{
		___serial_length_5 = value;
	}

	inline static int32_t get_offset_of_serial_6() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_INFO_t3103997278, ___serial_6)); }
	inline intptr_t get_serial_6() const { return ___serial_6; }
	inline intptr_t* get_address_of_serial_6() { return &___serial_6; }
	inline void set_serial_6(intptr_t value)
	{
		___serial_6 = value;
	}

	inline static int32_t get_offset_of_h_fov_7() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_INFO_t3103997278, ___h_fov_7)); }
	inline float get_h_fov_7() const { return ___h_fov_7; }
	inline float* get_address_of_h_fov_7() { return &___h_fov_7; }
	inline void set_h_fov_7(float value)
	{
		___h_fov_7 = value;
	}

	inline static int32_t get_offset_of_v_fov_8() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_INFO_t3103997278, ___v_fov_8)); }
	inline float get_v_fov_8() const { return ___v_fov_8; }
	inline float* get_address_of_v_fov_8() { return &___v_fov_8; }
	inline void set_v_fov_8(float value)
	{
		___v_fov_8 = value;
	}

	inline static int32_t get_offset_of_range_9() { return static_cast<int32_t>(offsetof(LEAP_DEVICE_INFO_t3103997278, ___range_9)); }
	inline uint32_t get_range_9() const { return ___range_9; }
	inline uint32_t* get_address_of_range_9() { return &___range_9; }
	inline void set_range_9(uint32_t value)
	{
		___range_9 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_DEVICE_INFO_T3103997278_H
#ifndef LEAP_DIGIT_T718736239_H
#define LEAP_DIGIT_T718736239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_DIGIT
#pragma pack(push, tp, 1)
struct  LEAP_DIGIT_t718736239 
{
public:
	// System.Int32 LeapInternal.LEAP_DIGIT::finger_id
	int32_t ___finger_id_0;
	// LeapInternal.LEAP_BONE LeapInternal.LEAP_DIGIT::metacarpal
	LEAP_BONE_t971009456  ___metacarpal_1;
	// LeapInternal.LEAP_BONE LeapInternal.LEAP_DIGIT::proximal
	LEAP_BONE_t971009456  ___proximal_2;
	// LeapInternal.LEAP_BONE LeapInternal.LEAP_DIGIT::intermediate
	LEAP_BONE_t971009456  ___intermediate_3;
	// LeapInternal.LEAP_BONE LeapInternal.LEAP_DIGIT::distal
	LEAP_BONE_t971009456  ___distal_4;
	// System.Int32 LeapInternal.LEAP_DIGIT::is_extended
	int32_t ___is_extended_5;

public:
	inline static int32_t get_offset_of_finger_id_0() { return static_cast<int32_t>(offsetof(LEAP_DIGIT_t718736239, ___finger_id_0)); }
	inline int32_t get_finger_id_0() const { return ___finger_id_0; }
	inline int32_t* get_address_of_finger_id_0() { return &___finger_id_0; }
	inline void set_finger_id_0(int32_t value)
	{
		___finger_id_0 = value;
	}

	inline static int32_t get_offset_of_metacarpal_1() { return static_cast<int32_t>(offsetof(LEAP_DIGIT_t718736239, ___metacarpal_1)); }
	inline LEAP_BONE_t971009456  get_metacarpal_1() const { return ___metacarpal_1; }
	inline LEAP_BONE_t971009456 * get_address_of_metacarpal_1() { return &___metacarpal_1; }
	inline void set_metacarpal_1(LEAP_BONE_t971009456  value)
	{
		___metacarpal_1 = value;
	}

	inline static int32_t get_offset_of_proximal_2() { return static_cast<int32_t>(offsetof(LEAP_DIGIT_t718736239, ___proximal_2)); }
	inline LEAP_BONE_t971009456  get_proximal_2() const { return ___proximal_2; }
	inline LEAP_BONE_t971009456 * get_address_of_proximal_2() { return &___proximal_2; }
	inline void set_proximal_2(LEAP_BONE_t971009456  value)
	{
		___proximal_2 = value;
	}

	inline static int32_t get_offset_of_intermediate_3() { return static_cast<int32_t>(offsetof(LEAP_DIGIT_t718736239, ___intermediate_3)); }
	inline LEAP_BONE_t971009456  get_intermediate_3() const { return ___intermediate_3; }
	inline LEAP_BONE_t971009456 * get_address_of_intermediate_3() { return &___intermediate_3; }
	inline void set_intermediate_3(LEAP_BONE_t971009456  value)
	{
		___intermediate_3 = value;
	}

	inline static int32_t get_offset_of_distal_4() { return static_cast<int32_t>(offsetof(LEAP_DIGIT_t718736239, ___distal_4)); }
	inline LEAP_BONE_t971009456  get_distal_4() const { return ___distal_4; }
	inline LEAP_BONE_t971009456 * get_address_of_distal_4() { return &___distal_4; }
	inline void set_distal_4(LEAP_BONE_t971009456  value)
	{
		___distal_4 = value;
	}

	inline static int32_t get_offset_of_is_extended_5() { return static_cast<int32_t>(offsetof(LEAP_DIGIT_t718736239, ___is_extended_5)); }
	inline int32_t get_is_extended_5() const { return ___is_extended_5; }
	inline int32_t* get_address_of_is_extended_5() { return &___is_extended_5; }
	inline void set_is_extended_5(int32_t value)
	{
		___is_extended_5 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_DIGIT_T718736239_H
#ifndef LEAP_DROPPED_FRAME_EVENT_T2848960069_H
#define LEAP_DROPPED_FRAME_EVENT_T2848960069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_DROPPED_FRAME_EVENT
#pragma pack(push, tp, 1)
struct  LEAP_DROPPED_FRAME_EVENT_t2848960069 
{
public:
	// System.Int64 LeapInternal.LEAP_DROPPED_FRAME_EVENT::frame_id
	int64_t ___frame_id_0;
	// LeapInternal.eLeapDroppedFrameType LeapInternal.LEAP_DROPPED_FRAME_EVENT::reason
	int32_t ___reason_1;

public:
	inline static int32_t get_offset_of_frame_id_0() { return static_cast<int32_t>(offsetof(LEAP_DROPPED_FRAME_EVENT_t2848960069, ___frame_id_0)); }
	inline int64_t get_frame_id_0() const { return ___frame_id_0; }
	inline int64_t* get_address_of_frame_id_0() { return &___frame_id_0; }
	inline void set_frame_id_0(int64_t value)
	{
		___frame_id_0 = value;
	}

	inline static int32_t get_offset_of_reason_1() { return static_cast<int32_t>(offsetof(LEAP_DROPPED_FRAME_EVENT_t2848960069, ___reason_1)); }
	inline int32_t get_reason_1() const { return ___reason_1; }
	inline int32_t* get_address_of_reason_1() { return &___reason_1; }
	inline void set_reason_1(int32_t value)
	{
		___reason_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_DROPPED_FRAME_EVENT_T2848960069_H
#ifndef LEAP_IMAGE_PROPERTIES_T1677471885_H
#define LEAP_IMAGE_PROPERTIES_T1677471885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_IMAGE_PROPERTIES
#pragma pack(push, tp, 1)
struct  LEAP_IMAGE_PROPERTIES_t1677471885 
{
public:
	// LeapInternal.eLeapImageType LeapInternal.LEAP_IMAGE_PROPERTIES::type
	int32_t ___type_0;
	// LeapInternal.eLeapImageFormat LeapInternal.LEAP_IMAGE_PROPERTIES::format
	uint32_t ___format_1;
	// System.UInt32 LeapInternal.LEAP_IMAGE_PROPERTIES::bpp
	uint32_t ___bpp_2;
	// System.UInt32 LeapInternal.LEAP_IMAGE_PROPERTIES::width
	uint32_t ___width_3;
	// System.UInt32 LeapInternal.LEAP_IMAGE_PROPERTIES::height
	uint32_t ___height_4;
	// System.Single LeapInternal.LEAP_IMAGE_PROPERTIES::x_scale
	float ___x_scale_5;
	// System.Single LeapInternal.LEAP_IMAGE_PROPERTIES::y_scale
	float ___y_scale_6;
	// System.Single LeapInternal.LEAP_IMAGE_PROPERTIES::x_offset
	float ___x_offset_7;
	// System.Single LeapInternal.LEAP_IMAGE_PROPERTIES::y_offset
	float ___y_offset_8;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_PROPERTIES_t1677471885, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_format_1() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_PROPERTIES_t1677471885, ___format_1)); }
	inline uint32_t get_format_1() const { return ___format_1; }
	inline uint32_t* get_address_of_format_1() { return &___format_1; }
	inline void set_format_1(uint32_t value)
	{
		___format_1 = value;
	}

	inline static int32_t get_offset_of_bpp_2() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_PROPERTIES_t1677471885, ___bpp_2)); }
	inline uint32_t get_bpp_2() const { return ___bpp_2; }
	inline uint32_t* get_address_of_bpp_2() { return &___bpp_2; }
	inline void set_bpp_2(uint32_t value)
	{
		___bpp_2 = value;
	}

	inline static int32_t get_offset_of_width_3() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_PROPERTIES_t1677471885, ___width_3)); }
	inline uint32_t get_width_3() const { return ___width_3; }
	inline uint32_t* get_address_of_width_3() { return &___width_3; }
	inline void set_width_3(uint32_t value)
	{
		___width_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_PROPERTIES_t1677471885, ___height_4)); }
	inline uint32_t get_height_4() const { return ___height_4; }
	inline uint32_t* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(uint32_t value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_x_scale_5() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_PROPERTIES_t1677471885, ___x_scale_5)); }
	inline float get_x_scale_5() const { return ___x_scale_5; }
	inline float* get_address_of_x_scale_5() { return &___x_scale_5; }
	inline void set_x_scale_5(float value)
	{
		___x_scale_5 = value;
	}

	inline static int32_t get_offset_of_y_scale_6() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_PROPERTIES_t1677471885, ___y_scale_6)); }
	inline float get_y_scale_6() const { return ___y_scale_6; }
	inline float* get_address_of_y_scale_6() { return &___y_scale_6; }
	inline void set_y_scale_6(float value)
	{
		___y_scale_6 = value;
	}

	inline static int32_t get_offset_of_x_offset_7() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_PROPERTIES_t1677471885, ___x_offset_7)); }
	inline float get_x_offset_7() const { return ___x_offset_7; }
	inline float* get_address_of_x_offset_7() { return &___x_offset_7; }
	inline void set_x_offset_7(float value)
	{
		___x_offset_7 = value;
	}

	inline static int32_t get_offset_of_y_offset_8() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_PROPERTIES_t1677471885, ___y_offset_8)); }
	inline float get_y_offset_8() const { return ___y_offset_8; }
	inline float* get_address_of_y_offset_8() { return &___y_offset_8; }
	inline void set_y_offset_8(float value)
	{
		___y_offset_8 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_IMAGE_PROPERTIES_T1677471885_H
#ifndef LEAP_LOG_EVENT_T2747504930_H
#define LEAP_LOG_EVENT_T2747504930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_LOG_EVENT
#pragma pack(push, tp, 1)
struct  LEAP_LOG_EVENT_t2747504930 
{
public:
	// LeapInternal.eLeapLogSeverity LeapInternal.LEAP_LOG_EVENT::severity
	int32_t ___severity_0;
	// System.Int64 LeapInternal.LEAP_LOG_EVENT::timestamp
	int64_t ___timestamp_1;
	// System.IntPtr LeapInternal.LEAP_LOG_EVENT::message
	intptr_t ___message_2;

public:
	inline static int32_t get_offset_of_severity_0() { return static_cast<int32_t>(offsetof(LEAP_LOG_EVENT_t2747504930, ___severity_0)); }
	inline int32_t get_severity_0() const { return ___severity_0; }
	inline int32_t* get_address_of_severity_0() { return &___severity_0; }
	inline void set_severity_0(int32_t value)
	{
		___severity_0 = value;
	}

	inline static int32_t get_offset_of_timestamp_1() { return static_cast<int32_t>(offsetof(LEAP_LOG_EVENT_t2747504930, ___timestamp_1)); }
	inline int64_t get_timestamp_1() const { return ___timestamp_1; }
	inline int64_t* get_address_of_timestamp_1() { return &___timestamp_1; }
	inline void set_timestamp_1(int64_t value)
	{
		___timestamp_1 = value;
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(LEAP_LOG_EVENT_t2747504930, ___message_2)); }
	inline intptr_t get_message_2() const { return ___message_2; }
	inline intptr_t* get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(intptr_t value)
	{
		___message_2 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_LOG_EVENT_T2747504930_H
#ifndef LEAP_TRACKING_EVENT_T2432170554_H
#define LEAP_TRACKING_EVENT_T2432170554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_TRACKING_EVENT
#pragma pack(push, tp, 1)
struct  LEAP_TRACKING_EVENT_t2432170554 
{
public:
	// LeapInternal.LEAP_FRAME_HEADER LeapInternal.LEAP_TRACKING_EVENT::info
	LEAP_FRAME_HEADER_t1981168231  ___info_0;
	// System.Int64 LeapInternal.LEAP_TRACKING_EVENT::tracking_id
	int64_t ___tracking_id_1;
	// System.UInt32 LeapInternal.LEAP_TRACKING_EVENT::nHands
	uint32_t ___nHands_2;
	// System.IntPtr LeapInternal.LEAP_TRACKING_EVENT::pHands
	intptr_t ___pHands_3;
	// System.Single LeapInternal.LEAP_TRACKING_EVENT::framerate
	float ___framerate_4;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(LEAP_TRACKING_EVENT_t2432170554, ___info_0)); }
	inline LEAP_FRAME_HEADER_t1981168231  get_info_0() const { return ___info_0; }
	inline LEAP_FRAME_HEADER_t1981168231 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(LEAP_FRAME_HEADER_t1981168231  value)
	{
		___info_0 = value;
	}

	inline static int32_t get_offset_of_tracking_id_1() { return static_cast<int32_t>(offsetof(LEAP_TRACKING_EVENT_t2432170554, ___tracking_id_1)); }
	inline int64_t get_tracking_id_1() const { return ___tracking_id_1; }
	inline int64_t* get_address_of_tracking_id_1() { return &___tracking_id_1; }
	inline void set_tracking_id_1(int64_t value)
	{
		___tracking_id_1 = value;
	}

	inline static int32_t get_offset_of_nHands_2() { return static_cast<int32_t>(offsetof(LEAP_TRACKING_EVENT_t2432170554, ___nHands_2)); }
	inline uint32_t get_nHands_2() const { return ___nHands_2; }
	inline uint32_t* get_address_of_nHands_2() { return &___nHands_2; }
	inline void set_nHands_2(uint32_t value)
	{
		___nHands_2 = value;
	}

	inline static int32_t get_offset_of_pHands_3() { return static_cast<int32_t>(offsetof(LEAP_TRACKING_EVENT_t2432170554, ___pHands_3)); }
	inline intptr_t get_pHands_3() const { return ___pHands_3; }
	inline intptr_t* get_address_of_pHands_3() { return &___pHands_3; }
	inline void set_pHands_3(intptr_t value)
	{
		___pHands_3 = value;
	}

	inline static int32_t get_offset_of_framerate_4() { return static_cast<int32_t>(offsetof(LEAP_TRACKING_EVENT_t2432170554, ___framerate_4)); }
	inline float get_framerate_4() const { return ___framerate_4; }
	inline float* get_address_of_framerate_4() { return &___framerate_4; }
	inline void set_framerate_4(float value)
	{
		___framerate_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_TRACKING_EVENT_T2432170554_H
#ifndef LEAP_VARIANT_REF_TYPE_T643214953_H
#define LEAP_VARIANT_REF_TYPE_T643214953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_VARIANT_REF_TYPE
struct  LEAP_VARIANT_REF_TYPE_t643214953 
{
public:
	// LeapInternal.eLeapValueType LeapInternal.LEAP_VARIANT_REF_TYPE::type
	int32_t ___type_0;
	// System.String LeapInternal.LEAP_VARIANT_REF_TYPE::stringValue
	String_t* ___stringValue_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(LEAP_VARIANT_REF_TYPE_t643214953, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_stringValue_1() { return static_cast<int32_t>(offsetof(LEAP_VARIANT_REF_TYPE_t643214953, ___stringValue_1)); }
	inline String_t* get_stringValue_1() const { return ___stringValue_1; }
	inline String_t** get_address_of_stringValue_1() { return &___stringValue_1; }
	inline void set_stringValue_1(String_t* value)
	{
		___stringValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___stringValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LeapInternal.LEAP_VARIANT_REF_TYPE
#pragma pack(push, tp, 1)
struct LEAP_VARIANT_REF_TYPE_t643214953_marshaled_pinvoke
{
	int32_t ___type_0;
	char* ___stringValue_1;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of LeapInternal.LEAP_VARIANT_REF_TYPE
#pragma pack(push, tp, 1)
struct LEAP_VARIANT_REF_TYPE_t643214953_marshaled_com
{
	int32_t ___type_0;
	Il2CppChar* ___stringValue_1;
};
#pragma pack(pop, tp)
#endif // LEAP_VARIANT_REF_TYPE_T643214953_H
#ifndef LEAP_VARIANT_VALUE_TYPE_T2124457737_H
#define LEAP_VARIANT_VALUE_TYPE_T2124457737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_VARIANT_VALUE_TYPE
struct  LEAP_VARIANT_VALUE_TYPE_t2124457737 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// LeapInternal.eLeapValueType LeapInternal.LEAP_VARIANT_VALUE_TYPE::type
			int32_t ___type_0;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___type_0_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___boolValue_1_OffsetPadding[4];
			// System.Int32 LeapInternal.LEAP_VARIANT_VALUE_TYPE::boolValue
			int32_t ___boolValue_1;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___boolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___boolValue_1_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___intValue_2_OffsetPadding[4];
			// System.Int32 LeapInternal.LEAP_VARIANT_VALUE_TYPE::intValue
			int32_t ___intValue_2;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___intValue_2_OffsetPadding_forAlignmentOnly[4];
			int32_t ___intValue_2_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___floatValue_3_OffsetPadding[4];
			// System.Single LeapInternal.LEAP_VARIANT_VALUE_TYPE::floatValue
			float ___floatValue_3;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___floatValue_3_OffsetPadding_forAlignmentOnly[4];
			float ___floatValue_3_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(LEAP_VARIANT_VALUE_TYPE_t2124457737, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_boolValue_1() { return static_cast<int32_t>(offsetof(LEAP_VARIANT_VALUE_TYPE_t2124457737, ___boolValue_1)); }
	inline int32_t get_boolValue_1() const { return ___boolValue_1; }
	inline int32_t* get_address_of_boolValue_1() { return &___boolValue_1; }
	inline void set_boolValue_1(int32_t value)
	{
		___boolValue_1 = value;
	}

	inline static int32_t get_offset_of_intValue_2() { return static_cast<int32_t>(offsetof(LEAP_VARIANT_VALUE_TYPE_t2124457737, ___intValue_2)); }
	inline int32_t get_intValue_2() const { return ___intValue_2; }
	inline int32_t* get_address_of_intValue_2() { return &___intValue_2; }
	inline void set_intValue_2(int32_t value)
	{
		___intValue_2 = value;
	}

	inline static int32_t get_offset_of_floatValue_3() { return static_cast<int32_t>(offsetof(LEAP_VARIANT_VALUE_TYPE_t2124457737, ___floatValue_3)); }
	inline float get_floatValue_3() const { return ___floatValue_3; }
	inline float* get_address_of_floatValue_3() { return &___floatValue_3; }
	inline void set_floatValue_3(float value)
	{
		___floatValue_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_VARIANT_VALUE_TYPE_T2124457737_H
#ifndef POOLKEY_T148673589_H
#define POOLKEY_T148673589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.MemoryManager/PoolKey
struct  PoolKey_t148673589 
{
public:
	// LeapInternal.eLeapAllocatorType LeapInternal.MemoryManager/PoolKey::type
	uint32_t ___type_0;
	// System.UInt32 LeapInternal.MemoryManager/PoolKey::size
	uint32_t ___size_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PoolKey_t148673589, ___type_0)); }
	inline uint32_t get_type_0() const { return ___type_0; }
	inline uint32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(uint32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(PoolKey_t148673589, ___size_1)); }
	inline uint32_t get_size_1() const { return ___size_1; }
	inline uint32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(uint32_t value)
	{
		___size_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POOLKEY_T148673589_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef HEADPOSEEVENTARGS_T4173195793_H
#define HEADPOSEEVENTARGS_T4173195793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.HeadPoseEventArgs
struct  HeadPoseEventArgs_t4173195793  : public LeapEventArgs_t1891591329
{
public:
	// LeapInternal.LEAP_VECTOR Leap.HeadPoseEventArgs::<headPosition>k__BackingField
	LEAP_VECTOR_t1604988008  ___U3CheadPositionU3Ek__BackingField_2;
	// LeapInternal.LEAP_QUATERNION Leap.HeadPoseEventArgs::<headOrientation>k__BackingField
	LEAP_QUATERNION_t2298175287  ___U3CheadOrientationU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CheadPositionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(HeadPoseEventArgs_t4173195793, ___U3CheadPositionU3Ek__BackingField_2)); }
	inline LEAP_VECTOR_t1604988008  get_U3CheadPositionU3Ek__BackingField_2() const { return ___U3CheadPositionU3Ek__BackingField_2; }
	inline LEAP_VECTOR_t1604988008 * get_address_of_U3CheadPositionU3Ek__BackingField_2() { return &___U3CheadPositionU3Ek__BackingField_2; }
	inline void set_U3CheadPositionU3Ek__BackingField_2(LEAP_VECTOR_t1604988008  value)
	{
		___U3CheadPositionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CheadOrientationU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(HeadPoseEventArgs_t4173195793, ___U3CheadOrientationU3Ek__BackingField_3)); }
	inline LEAP_QUATERNION_t2298175287  get_U3CheadOrientationU3Ek__BackingField_3() const { return ___U3CheadOrientationU3Ek__BackingField_3; }
	inline LEAP_QUATERNION_t2298175287 * get_address_of_U3CheadOrientationU3Ek__BackingField_3() { return &___U3CheadOrientationU3Ek__BackingField_3; }
	inline void set_U3CheadOrientationU3Ek__BackingField_3(LEAP_QUATERNION_t2298175287  value)
	{
		___U3CheadOrientationU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADPOSEEVENTARGS_T4173195793_H
#ifndef IMAGEEVENTARGS_T712359980_H
#define IMAGEEVENTARGS_T712359980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.ImageEventArgs
struct  ImageEventArgs_t712359980  : public LeapEventArgs_t1891591329
{
public:
	// Leap.Image Leap.ImageEventArgs::<image>k__BackingField
	Image_t2297214883 * ___U3CimageU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CimageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ImageEventArgs_t712359980, ___U3CimageU3Ek__BackingField_2)); }
	inline Image_t2297214883 * get_U3CimageU3Ek__BackingField_2() const { return ___U3CimageU3Ek__BackingField_2; }
	inline Image_t2297214883 ** get_address_of_U3CimageU3Ek__BackingField_2() { return &___U3CimageU3Ek__BackingField_2; }
	inline void set_U3CimageU3Ek__BackingField_2(Image_t2297214883 * value)
	{
		___U3CimageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CimageU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEEVENTARGS_T712359980_H
#ifndef POINTMAPPINGCHANGEEVENTARGS_T2109744611_H
#define POINTMAPPINGCHANGEEVENTARGS_T2109744611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Leap.PointMappingChangeEventArgs
struct  PointMappingChangeEventArgs_t2109744611  : public LeapEventArgs_t1891591329
{
public:
	// System.Int64 Leap.PointMappingChangeEventArgs::<frameID>k__BackingField
	int64_t ___U3CframeIDU3Ek__BackingField_2;
	// System.Int64 Leap.PointMappingChangeEventArgs::<timestamp>k__BackingField
	int64_t ___U3CtimestampU3Ek__BackingField_3;
	// System.UInt32 Leap.PointMappingChangeEventArgs::<nPoints>k__BackingField
	uint32_t ___U3CnPointsU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CframeIDU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointMappingChangeEventArgs_t2109744611, ___U3CframeIDU3Ek__BackingField_2)); }
	inline int64_t get_U3CframeIDU3Ek__BackingField_2() const { return ___U3CframeIDU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CframeIDU3Ek__BackingField_2() { return &___U3CframeIDU3Ek__BackingField_2; }
	inline void set_U3CframeIDU3Ek__BackingField_2(int64_t value)
	{
		___U3CframeIDU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CtimestampU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PointMappingChangeEventArgs_t2109744611, ___U3CtimestampU3Ek__BackingField_3)); }
	inline int64_t get_U3CtimestampU3Ek__BackingField_3() const { return ___U3CtimestampU3Ek__BackingField_3; }
	inline int64_t* get_address_of_U3CtimestampU3Ek__BackingField_3() { return &___U3CtimestampU3Ek__BackingField_3; }
	inline void set_U3CtimestampU3Ek__BackingField_3(int64_t value)
	{
		___U3CtimestampU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CnPointsU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointMappingChangeEventArgs_t2109744611, ___U3CnPointsU3Ek__BackingField_4)); }
	inline uint32_t get_U3CnPointsU3Ek__BackingField_4() const { return ___U3CnPointsU3Ek__BackingField_4; }
	inline uint32_t* get_address_of_U3CnPointsU3Ek__BackingField_4() { return &___U3CnPointsU3Ek__BackingField_4; }
	inline void set_U3CnPointsU3Ek__BackingField_4(uint32_t value)
	{
		___U3CnPointsU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTMAPPINGCHANGEEVENTARGS_T2109744611_H
#ifndef ALLOCATE_T169257233_H
#define ALLOCATE_T169257233_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.Allocate
struct  Allocate_t169257233  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOCATE_T169257233_H
#ifndef DEALLOCATE_T3308055752_H
#define DEALLOCATE_T3308055752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.Deallocate
struct  Deallocate_t3308055752  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATE_T3308055752_H
#ifndef IMAGEDATA_T1944121525_H
#define IMAGEDATA_T1944121525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.ImageData
struct  ImageData_t1944121525  : public RuntimeObject
{
public:
	// LeapInternal.LEAP_IMAGE_PROPERTIES LeapInternal.ImageData::_properties
	LEAP_IMAGE_PROPERTIES_t1677471885  ____properties_0;
	// System.Object LeapInternal.ImageData::_object
	RuntimeObject * ____object_1;
	// Leap.Image/CameraType LeapInternal.ImageData::<camera>k__BackingField
	int32_t ___U3CcameraU3Ek__BackingField_2;
	// System.UInt32 LeapInternal.ImageData::<byteOffset>k__BackingField
	uint32_t ___U3CbyteOffsetU3Ek__BackingField_3;
	// System.UInt64 LeapInternal.ImageData::<DistortionMatrixKey>k__BackingField
	uint64_t ___U3CDistortionMatrixKeyU3Ek__BackingField_4;
	// Leap.DistortionData LeapInternal.ImageData::<DistortionData>k__BackingField
	DistortionData_t2402192950 * ___U3CDistortionDataU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(ImageData_t1944121525, ____properties_0)); }
	inline LEAP_IMAGE_PROPERTIES_t1677471885  get__properties_0() const { return ____properties_0; }
	inline LEAP_IMAGE_PROPERTIES_t1677471885 * get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(LEAP_IMAGE_PROPERTIES_t1677471885  value)
	{
		____properties_0 = value;
	}

	inline static int32_t get_offset_of__object_1() { return static_cast<int32_t>(offsetof(ImageData_t1944121525, ____object_1)); }
	inline RuntimeObject * get__object_1() const { return ____object_1; }
	inline RuntimeObject ** get_address_of__object_1() { return &____object_1; }
	inline void set__object_1(RuntimeObject * value)
	{
		____object_1 = value;
		Il2CppCodeGenWriteBarrier((&____object_1), value);
	}

	inline static int32_t get_offset_of_U3CcameraU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ImageData_t1944121525, ___U3CcameraU3Ek__BackingField_2)); }
	inline int32_t get_U3CcameraU3Ek__BackingField_2() const { return ___U3CcameraU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CcameraU3Ek__BackingField_2() { return &___U3CcameraU3Ek__BackingField_2; }
	inline void set_U3CcameraU3Ek__BackingField_2(int32_t value)
	{
		___U3CcameraU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CbyteOffsetU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ImageData_t1944121525, ___U3CbyteOffsetU3Ek__BackingField_3)); }
	inline uint32_t get_U3CbyteOffsetU3Ek__BackingField_3() const { return ___U3CbyteOffsetU3Ek__BackingField_3; }
	inline uint32_t* get_address_of_U3CbyteOffsetU3Ek__BackingField_3() { return &___U3CbyteOffsetU3Ek__BackingField_3; }
	inline void set_U3CbyteOffsetU3Ek__BackingField_3(uint32_t value)
	{
		___U3CbyteOffsetU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CDistortionMatrixKeyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ImageData_t1944121525, ___U3CDistortionMatrixKeyU3Ek__BackingField_4)); }
	inline uint64_t get_U3CDistortionMatrixKeyU3Ek__BackingField_4() const { return ___U3CDistortionMatrixKeyU3Ek__BackingField_4; }
	inline uint64_t* get_address_of_U3CDistortionMatrixKeyU3Ek__BackingField_4() { return &___U3CDistortionMatrixKeyU3Ek__BackingField_4; }
	inline void set_U3CDistortionMatrixKeyU3Ek__BackingField_4(uint64_t value)
	{
		___U3CDistortionMatrixKeyU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CDistortionDataU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ImageData_t1944121525, ___U3CDistortionDataU3Ek__BackingField_5)); }
	inline DistortionData_t2402192950 * get_U3CDistortionDataU3Ek__BackingField_5() const { return ___U3CDistortionDataU3Ek__BackingField_5; }
	inline DistortionData_t2402192950 ** get_address_of_U3CDistortionDataU3Ek__BackingField_5() { return &___U3CDistortionDataU3Ek__BackingField_5; }
	inline void set_U3CDistortionDataU3Ek__BackingField_5(DistortionData_t2402192950 * value)
	{
		___U3CDistortionDataU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDistortionDataU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEDATA_T1944121525_H
#ifndef LEAP_CONFIG_RESPONSE_EVENT_T1933621578_H
#define LEAP_CONFIG_RESPONSE_EVENT_T1933621578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_CONFIG_RESPONSE_EVENT
#pragma pack(push, tp, 1)
struct  LEAP_CONFIG_RESPONSE_EVENT_t1933621578 
{
public:
	// System.UInt32 LeapInternal.LEAP_CONFIG_RESPONSE_EVENT::requestId
	uint32_t ___requestId_0;
	// LeapInternal.LEAP_VARIANT_VALUE_TYPE LeapInternal.LEAP_CONFIG_RESPONSE_EVENT::value
	LEAP_VARIANT_VALUE_TYPE_t2124457737  ___value_1;

public:
	inline static int32_t get_offset_of_requestId_0() { return static_cast<int32_t>(offsetof(LEAP_CONFIG_RESPONSE_EVENT_t1933621578, ___requestId_0)); }
	inline uint32_t get_requestId_0() const { return ___requestId_0; }
	inline uint32_t* get_address_of_requestId_0() { return &___requestId_0; }
	inline void set_requestId_0(uint32_t value)
	{
		___requestId_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(LEAP_CONFIG_RESPONSE_EVENT_t1933621578, ___value_1)); }
	inline LEAP_VARIANT_VALUE_TYPE_t2124457737  get_value_1() const { return ___value_1; }
	inline LEAP_VARIANT_VALUE_TYPE_t2124457737 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(LEAP_VARIANT_VALUE_TYPE_t2124457737  value)
	{
		___value_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_CONFIG_RESPONSE_EVENT_T1933621578_H
#ifndef LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE_T528064400_H
#define LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE_T528064400_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE
struct  LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE_t528064400 
{
public:
	// System.UInt32 LeapInternal.LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE::requestId
	uint32_t ___requestId_0;
	// LeapInternal.LEAP_VARIANT_REF_TYPE LeapInternal.LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE::value
	LEAP_VARIANT_REF_TYPE_t643214953  ___value_1;

public:
	inline static int32_t get_offset_of_requestId_0() { return static_cast<int32_t>(offsetof(LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE_t528064400, ___requestId_0)); }
	inline uint32_t get_requestId_0() const { return ___requestId_0; }
	inline uint32_t* get_address_of_requestId_0() { return &___requestId_0; }
	inline void set_requestId_0(uint32_t value)
	{
		___requestId_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE_t528064400, ___value_1)); }
	inline LEAP_VARIANT_REF_TYPE_t643214953  get_value_1() const { return ___value_1; }
	inline LEAP_VARIANT_REF_TYPE_t643214953 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(LEAP_VARIANT_REF_TYPE_t643214953  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of LeapInternal.LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE
#pragma pack(push, tp, 1)
struct LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE_t528064400_marshaled_pinvoke
{
	uint32_t ___requestId_0;
	LEAP_VARIANT_REF_TYPE_t643214953_marshaled_pinvoke ___value_1;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of LeapInternal.LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE
#pragma pack(push, tp, 1)
struct LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE_t528064400_marshaled_com
{
	uint32_t ___requestId_0;
	LEAP_VARIANT_REF_TYPE_t643214953_marshaled_com ___value_1;
};
#pragma pack(pop, tp)
#endif // LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE_T528064400_H
#ifndef LEAP_HAND_T106822590_H
#define LEAP_HAND_T106822590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_HAND
#pragma pack(push, tp, 1)
struct  LEAP_HAND_t106822590 
{
public:
	// System.UInt32 LeapInternal.LEAP_HAND::id
	uint32_t ___id_0;
	// System.UInt32 LeapInternal.LEAP_HAND::flags
	uint32_t ___flags_1;
	// LeapInternal.eLeapHandType LeapInternal.LEAP_HAND::type
	int32_t ___type_2;
	// System.Single LeapInternal.LEAP_HAND::confidence
	float ___confidence_3;
	// System.UInt64 LeapInternal.LEAP_HAND::visible_time
	uint64_t ___visible_time_4;
	// System.Single LeapInternal.LEAP_HAND::pinch_distance
	float ___pinch_distance_5;
	// System.Single LeapInternal.LEAP_HAND::grab_angle
	float ___grab_angle_6;
	// System.Single LeapInternal.LEAP_HAND::pinch_strength
	float ___pinch_strength_7;
	// System.Single LeapInternal.LEAP_HAND::grab_strength
	float ___grab_strength_8;
	// LeapInternal.LEAP_PALM LeapInternal.LEAP_HAND::palm
	LEAP_PALM_t3332508984  ___palm_9;
	// LeapInternal.LEAP_DIGIT LeapInternal.LEAP_HAND::thumb
	LEAP_DIGIT_t718736239  ___thumb_10;
	// LeapInternal.LEAP_DIGIT LeapInternal.LEAP_HAND::index
	LEAP_DIGIT_t718736239  ___index_11;
	// LeapInternal.LEAP_DIGIT LeapInternal.LEAP_HAND::middle
	LEAP_DIGIT_t718736239  ___middle_12;
	// LeapInternal.LEAP_DIGIT LeapInternal.LEAP_HAND::ring
	LEAP_DIGIT_t718736239  ___ring_13;
	// LeapInternal.LEAP_DIGIT LeapInternal.LEAP_HAND::pinky
	LEAP_DIGIT_t718736239  ___pinky_14;
	// LeapInternal.LEAP_BONE LeapInternal.LEAP_HAND::arm
	LEAP_BONE_t971009456  ___arm_15;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_flags_1() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___flags_1)); }
	inline uint32_t get_flags_1() const { return ___flags_1; }
	inline uint32_t* get_address_of_flags_1() { return &___flags_1; }
	inline void set_flags_1(uint32_t value)
	{
		___flags_1 = value;
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_confidence_3() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___confidence_3)); }
	inline float get_confidence_3() const { return ___confidence_3; }
	inline float* get_address_of_confidence_3() { return &___confidence_3; }
	inline void set_confidence_3(float value)
	{
		___confidence_3 = value;
	}

	inline static int32_t get_offset_of_visible_time_4() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___visible_time_4)); }
	inline uint64_t get_visible_time_4() const { return ___visible_time_4; }
	inline uint64_t* get_address_of_visible_time_4() { return &___visible_time_4; }
	inline void set_visible_time_4(uint64_t value)
	{
		___visible_time_4 = value;
	}

	inline static int32_t get_offset_of_pinch_distance_5() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___pinch_distance_5)); }
	inline float get_pinch_distance_5() const { return ___pinch_distance_5; }
	inline float* get_address_of_pinch_distance_5() { return &___pinch_distance_5; }
	inline void set_pinch_distance_5(float value)
	{
		___pinch_distance_5 = value;
	}

	inline static int32_t get_offset_of_grab_angle_6() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___grab_angle_6)); }
	inline float get_grab_angle_6() const { return ___grab_angle_6; }
	inline float* get_address_of_grab_angle_6() { return &___grab_angle_6; }
	inline void set_grab_angle_6(float value)
	{
		___grab_angle_6 = value;
	}

	inline static int32_t get_offset_of_pinch_strength_7() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___pinch_strength_7)); }
	inline float get_pinch_strength_7() const { return ___pinch_strength_7; }
	inline float* get_address_of_pinch_strength_7() { return &___pinch_strength_7; }
	inline void set_pinch_strength_7(float value)
	{
		___pinch_strength_7 = value;
	}

	inline static int32_t get_offset_of_grab_strength_8() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___grab_strength_8)); }
	inline float get_grab_strength_8() const { return ___grab_strength_8; }
	inline float* get_address_of_grab_strength_8() { return &___grab_strength_8; }
	inline void set_grab_strength_8(float value)
	{
		___grab_strength_8 = value;
	}

	inline static int32_t get_offset_of_palm_9() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___palm_9)); }
	inline LEAP_PALM_t3332508984  get_palm_9() const { return ___palm_9; }
	inline LEAP_PALM_t3332508984 * get_address_of_palm_9() { return &___palm_9; }
	inline void set_palm_9(LEAP_PALM_t3332508984  value)
	{
		___palm_9 = value;
	}

	inline static int32_t get_offset_of_thumb_10() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___thumb_10)); }
	inline LEAP_DIGIT_t718736239  get_thumb_10() const { return ___thumb_10; }
	inline LEAP_DIGIT_t718736239 * get_address_of_thumb_10() { return &___thumb_10; }
	inline void set_thumb_10(LEAP_DIGIT_t718736239  value)
	{
		___thumb_10 = value;
	}

	inline static int32_t get_offset_of_index_11() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___index_11)); }
	inline LEAP_DIGIT_t718736239  get_index_11() const { return ___index_11; }
	inline LEAP_DIGIT_t718736239 * get_address_of_index_11() { return &___index_11; }
	inline void set_index_11(LEAP_DIGIT_t718736239  value)
	{
		___index_11 = value;
	}

	inline static int32_t get_offset_of_middle_12() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___middle_12)); }
	inline LEAP_DIGIT_t718736239  get_middle_12() const { return ___middle_12; }
	inline LEAP_DIGIT_t718736239 * get_address_of_middle_12() { return &___middle_12; }
	inline void set_middle_12(LEAP_DIGIT_t718736239  value)
	{
		___middle_12 = value;
	}

	inline static int32_t get_offset_of_ring_13() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___ring_13)); }
	inline LEAP_DIGIT_t718736239  get_ring_13() const { return ___ring_13; }
	inline LEAP_DIGIT_t718736239 * get_address_of_ring_13() { return &___ring_13; }
	inline void set_ring_13(LEAP_DIGIT_t718736239  value)
	{
		___ring_13 = value;
	}

	inline static int32_t get_offset_of_pinky_14() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___pinky_14)); }
	inline LEAP_DIGIT_t718736239  get_pinky_14() const { return ___pinky_14; }
	inline LEAP_DIGIT_t718736239 * get_address_of_pinky_14() { return &___pinky_14; }
	inline void set_pinky_14(LEAP_DIGIT_t718736239  value)
	{
		___pinky_14 = value;
	}

	inline static int32_t get_offset_of_arm_15() { return static_cast<int32_t>(offsetof(LEAP_HAND_t106822590, ___arm_15)); }
	inline LEAP_BONE_t971009456  get_arm_15() const { return ___arm_15; }
	inline LEAP_BONE_t971009456 * get_address_of_arm_15() { return &___arm_15; }
	inline void set_arm_15(LEAP_BONE_t971009456  value)
	{
		___arm_15 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_HAND_T106822590_H
#ifndef LEAP_IMAGE_T334071425_H
#define LEAP_IMAGE_T334071425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_IMAGE
#pragma pack(push, tp, 1)
struct  LEAP_IMAGE_t334071425 
{
public:
	// LeapInternal.LEAP_IMAGE_PROPERTIES LeapInternal.LEAP_IMAGE::properties
	LEAP_IMAGE_PROPERTIES_t1677471885  ___properties_0;
	// System.UInt64 LeapInternal.LEAP_IMAGE::matrix_version
	uint64_t ___matrix_version_1;
	// System.IntPtr LeapInternal.LEAP_IMAGE::distortionMatrix
	intptr_t ___distortionMatrix_2;
	// System.IntPtr LeapInternal.LEAP_IMAGE::data
	intptr_t ___data_3;
	// System.UInt32 LeapInternal.LEAP_IMAGE::offset
	uint32_t ___offset_4;

public:
	inline static int32_t get_offset_of_properties_0() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_t334071425, ___properties_0)); }
	inline LEAP_IMAGE_PROPERTIES_t1677471885  get_properties_0() const { return ___properties_0; }
	inline LEAP_IMAGE_PROPERTIES_t1677471885 * get_address_of_properties_0() { return &___properties_0; }
	inline void set_properties_0(LEAP_IMAGE_PROPERTIES_t1677471885  value)
	{
		___properties_0 = value;
	}

	inline static int32_t get_offset_of_matrix_version_1() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_t334071425, ___matrix_version_1)); }
	inline uint64_t get_matrix_version_1() const { return ___matrix_version_1; }
	inline uint64_t* get_address_of_matrix_version_1() { return &___matrix_version_1; }
	inline void set_matrix_version_1(uint64_t value)
	{
		___matrix_version_1 = value;
	}

	inline static int32_t get_offset_of_distortionMatrix_2() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_t334071425, ___distortionMatrix_2)); }
	inline intptr_t get_distortionMatrix_2() const { return ___distortionMatrix_2; }
	inline intptr_t* get_address_of_distortionMatrix_2() { return &___distortionMatrix_2; }
	inline void set_distortionMatrix_2(intptr_t value)
	{
		___distortionMatrix_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_t334071425, ___data_3)); }
	inline intptr_t get_data_3() const { return ___data_3; }
	inline intptr_t* get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(intptr_t value)
	{
		___data_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_t334071425, ___offset_4)); }
	inline uint32_t get_offset_4() const { return ___offset_4; }
	inline uint32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(uint32_t value)
	{
		___offset_4 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_IMAGE_T334071425_H
#ifndef ACTIVEMEMORYINFO_T1533863604_H
#define ACTIVEMEMORYINFO_T1533863604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.MemoryManager/ActiveMemoryInfo
struct  ActiveMemoryInfo_t1533863604 
{
public:
	// System.Runtime.InteropServices.GCHandle LeapInternal.MemoryManager/ActiveMemoryInfo::handle
	GCHandle_t3351438187  ___handle_0;
	// LeapInternal.MemoryManager/PoolKey LeapInternal.MemoryManager/ActiveMemoryInfo::key
	PoolKey_t148673589  ___key_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(ActiveMemoryInfo_t1533863604, ___handle_0)); }
	inline GCHandle_t3351438187  get_handle_0() const { return ___handle_0; }
	inline GCHandle_t3351438187 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(GCHandle_t3351438187  value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(ActiveMemoryInfo_t1533863604, ___key_1)); }
	inline PoolKey_t148673589  get_key_1() const { return ___key_1; }
	inline PoolKey_t148673589 * get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(PoolKey_t148673589  value)
	{
		___key_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVEMEMORYINFO_T1533863604_H
#ifndef LEAP_IMAGE_EVENT_T3001731371_H
#define LEAP_IMAGE_EVENT_T3001731371_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LeapInternal.LEAP_IMAGE_EVENT
#pragma pack(push, tp, 1)
struct  LEAP_IMAGE_EVENT_t3001731371 
{
public:
	// LeapInternal.LEAP_FRAME_HEADER LeapInternal.LEAP_IMAGE_EVENT::info
	LEAP_FRAME_HEADER_t1981168231  ___info_0;
	// LeapInternal.LEAP_IMAGE LeapInternal.LEAP_IMAGE_EVENT::leftImage
	LEAP_IMAGE_t334071425  ___leftImage_1;
	// LeapInternal.LEAP_IMAGE LeapInternal.LEAP_IMAGE_EVENT::rightImage
	LEAP_IMAGE_t334071425  ___rightImage_2;
	// System.IntPtr LeapInternal.LEAP_IMAGE_EVENT::calib
	intptr_t ___calib_3;

public:
	inline static int32_t get_offset_of_info_0() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_EVENT_t3001731371, ___info_0)); }
	inline LEAP_FRAME_HEADER_t1981168231  get_info_0() const { return ___info_0; }
	inline LEAP_FRAME_HEADER_t1981168231 * get_address_of_info_0() { return &___info_0; }
	inline void set_info_0(LEAP_FRAME_HEADER_t1981168231  value)
	{
		___info_0 = value;
	}

	inline static int32_t get_offset_of_leftImage_1() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_EVENT_t3001731371, ___leftImage_1)); }
	inline LEAP_IMAGE_t334071425  get_leftImage_1() const { return ___leftImage_1; }
	inline LEAP_IMAGE_t334071425 * get_address_of_leftImage_1() { return &___leftImage_1; }
	inline void set_leftImage_1(LEAP_IMAGE_t334071425  value)
	{
		___leftImage_1 = value;
	}

	inline static int32_t get_offset_of_rightImage_2() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_EVENT_t3001731371, ___rightImage_2)); }
	inline LEAP_IMAGE_t334071425  get_rightImage_2() const { return ___rightImage_2; }
	inline LEAP_IMAGE_t334071425 * get_address_of_rightImage_2() { return &___rightImage_2; }
	inline void set_rightImage_2(LEAP_IMAGE_t334071425  value)
	{
		___rightImage_2 = value;
	}

	inline static int32_t get_offset_of_calib_3() { return static_cast<int32_t>(offsetof(LEAP_IMAGE_EVENT_t3001731371, ___calib_3)); }
	inline intptr_t get_calib_3() const { return ___calib_3; }
	inline intptr_t* get_address_of_calib_3() { return &___calib_3; }
	inline void set_calib_3(intptr_t value)
	{
		___calib_3 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEAP_IMAGE_EVENT_T3001731371_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2600 = { sizeof (ImageEventArgs_t712359980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2600[1] = 
{
	ImageEventArgs_t712359980::get_offset_of_U3CimageU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2601 = { sizeof (PointMappingChangeEventArgs_t2109744611), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2601[3] = 
{
	PointMappingChangeEventArgs_t2109744611::get_offset_of_U3CframeIDU3Ek__BackingField_2(),
	PointMappingChangeEventArgs_t2109744611::get_offset_of_U3CtimestampU3Ek__BackingField_3(),
	PointMappingChangeEventArgs_t2109744611::get_offset_of_U3CnPointsU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2602 = { sizeof (HeadPoseEventArgs_t4173195793), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2602[2] = 
{
	HeadPoseEventArgs_t4173195793::get_offset_of_U3CheadPositionU3Ek__BackingField_2(),
	HeadPoseEventArgs_t4173195793::get_offset_of_U3CheadOrientationU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2603 = { sizeof (BeginProfilingForThreadArgs_t1715947996)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2603[2] = 
{
	BeginProfilingForThreadArgs_t1715947996::get_offset_of_threadName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	BeginProfilingForThreadArgs_t1715947996::get_offset_of_blockNames_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2604 = { sizeof (EndProfilingForThreadArgs_t2316443864)+ sizeof (RuntimeObject), sizeof(EndProfilingForThreadArgs_t2316443864 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2605 = { sizeof (BeginProfilingBlockArgs_t384538013)+ sizeof (RuntimeObject), sizeof(BeginProfilingBlockArgs_t384538013_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2605[1] = 
{
	BeginProfilingBlockArgs_t384538013::get_offset_of_blockName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2606 = { sizeof (EndProfilingBlockArgs_t3615195081)+ sizeof (RuntimeObject), sizeof(EndProfilingBlockArgs_t3615195081_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2606[1] = 
{
	EndProfilingBlockArgs_t3615195081::get_offset_of_blockName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2607 = { sizeof (FailedDevice_t344505893), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2607[2] = 
{
	FailedDevice_t344505893::get_offset_of_U3CPnpIdU3Ek__BackingField_0(),
	FailedDevice_t344505893::get_offset_of_U3CFailureU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2608 = { sizeof (FailureType_t2714356128)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2608[6] = 
{
	FailureType_t2714356128::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2609 = { sizeof (FailedDeviceList_t4229507291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2610 = { sizeof (Finger_t3372835011), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2610[10] = 
{
	Finger_t3372835011::get_offset_of_bones_0(),
	Finger_t3372835011::get_offset_of_Type_1(),
	Finger_t3372835011::get_offset_of_Id_2(),
	Finger_t3372835011::get_offset_of_HandId_3(),
	Finger_t3372835011::get_offset_of_TipPosition_4(),
	Finger_t3372835011::get_offset_of_Direction_5(),
	Finger_t3372835011::get_offset_of_Width_6(),
	Finger_t3372835011::get_offset_of_Length_7(),
	Finger_t3372835011::get_offset_of_IsExtended_8(),
	Finger_t3372835011::get_offset_of_TimeVisible_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2611 = { sizeof (FingerType_t1918730133)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2611[7] = 
{
	FingerType_t1918730133::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2612 = { sizeof (Frame_t1926239594), -1, 0, sizeof(Frame_t1926239594_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable2612[5] = 
{
	Frame_t1926239594_ThreadStaticFields::get_offset_of__handPool_0() | THREAD_LOCAL_STATIC_MASK,
	Frame_t1926239594::get_offset_of_Id_1(),
	Frame_t1926239594::get_offset_of_Timestamp_2(),
	Frame_t1926239594::get_offset_of_CurrentFramesPerSecond_3(),
	Frame_t1926239594::get_offset_of_Hands_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2613 = { sizeof (Hand_t3194765404), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2613[19] = 
{
	Hand_t3194765404::get_offset_of_FrameId_0(),
	Hand_t3194765404::get_offset_of_Id_1(),
	Hand_t3194765404::get_offset_of_Fingers_2(),
	Hand_t3194765404::get_offset_of_PalmPosition_3(),
	Hand_t3194765404::get_offset_of_PalmVelocity_4(),
	Hand_t3194765404::get_offset_of_PalmNormal_5(),
	Hand_t3194765404::get_offset_of_Direction_6(),
	Hand_t3194765404::get_offset_of_Rotation_7(),
	Hand_t3194765404::get_offset_of_GrabStrength_8(),
	Hand_t3194765404::get_offset_of_GrabAngle_9(),
	Hand_t3194765404::get_offset_of_PinchStrength_10(),
	Hand_t3194765404::get_offset_of_PinchDistance_11(),
	Hand_t3194765404::get_offset_of_PalmWidth_12(),
	Hand_t3194765404::get_offset_of_StabilizedPalmPosition_13(),
	Hand_t3194765404::get_offset_of_WristPosition_14(),
	Hand_t3194765404::get_offset_of_TimeVisible_15(),
	Hand_t3194765404::get_offset_of_Confidence_16(),
	Hand_t3194765404::get_offset_of_IsLeft_17(),
	Hand_t3194765404::get_offset_of_Arm_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2614 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2615 = { sizeof (Image_t2297214883), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2615[4] = 
{
	Image_t2297214883::get_offset_of_leftImage_0(),
	Image_t2297214883::get_offset_of_rightImage_1(),
	Image_t2297214883::get_offset_of_frameId_2(),
	Image_t2297214883::get_offset_of_timestamp_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2616 = { sizeof (FormatType_t972853132)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2616[3] = 
{
	FormatType_t972853132::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2617 = { sizeof (ImageType_t216642555)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2617[3] = 
{
	ImageType_t216642555::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2618 = { sizeof (CameraType_t2777050665)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2618[3] = 
{
	CameraType_t2777050665::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2619 = { sizeof (ImageData_t1944121525), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2619[6] = 
{
	ImageData_t1944121525::get_offset_of__properties_0(),
	ImageData_t1944121525::get_offset_of__object_1(),
	ImageData_t1944121525::get_offset_of_U3CcameraU3Ek__BackingField_2(),
	ImageData_t1944121525::get_offset_of_U3CbyteOffsetU3Ek__BackingField_3(),
	ImageData_t1944121525::get_offset_of_U3CDistortionMatrixKeyU3Ek__BackingField_4(),
	ImageData_t1944121525::get_offset_of_U3CDistortionDataU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2620 = { sizeof (eLeapConnectionStatus_t2496445009)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2620[5] = 
{
	eLeapConnectionStatus_t2496445009::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2621 = { sizeof (eLeapDeviceCaps_t1179089849)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2621[2] = 
{
	eLeapDeviceCaps_t1179089849::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2622 = { sizeof (eLeapDeviceType_t3853876176)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2622[5] = 
{
	eLeapDeviceType_t3853876176::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2623 = { sizeof (eLeapServiceDisposition_t2679159627)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2623[3] = 
{
	eLeapServiceDisposition_t2679159627::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2624 = { sizeof (eDistortionMatrixType_t4112054008)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2624[2] = 
{
	eDistortionMatrixType_t4112054008::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2625 = { sizeof (eLeapPolicyFlag_t3685117543)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2625[6] = 
{
	eLeapPolicyFlag_t3685117543::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2626 = { sizeof (eLeapDeviceStatus_t921293112)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2626[11] = 
{
	eLeapDeviceStatus_t921293112::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2627 = { sizeof (eLeapImageType_t992146754)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2627[4] = 
{
	eLeapImageType_t992146754::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2628 = { sizeof (eLeapImageFormat_t3165415781)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2628[4] = 
{
	eLeapImageFormat_t3165415781::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2629 = { sizeof (eLeapPerspectiveType_t3963569717)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2629[5] = 
{
	eLeapPerspectiveType_t3963569717::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2630 = { sizeof (eLeapHandType_t2031712638)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2630[3] = 
{
	eLeapHandType_t2031712638::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2631 = { sizeof (eLeapLogSeverity_t3338786591)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2631[5] = 
{
	eLeapLogSeverity_t3338786591::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2632 = { sizeof (eLeapValueType_t878858220)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2632[6] = 
{
	eLeapValueType_t878858220::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2633 = { sizeof (eLeapAllocatorType_t294866453)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2633[11] = 
{
	eLeapAllocatorType_t294866453::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2634 = { sizeof (eLeapRS_t391302811)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2634[21] = 
{
	eLeapRS_t391302811::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2635 = { sizeof (eLeapEventType_t2039909547)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2635[20] = 
{
	eLeapEventType_t2039909547::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2636 = { sizeof (eLeapDeviceFlag_t2618636809)+ sizeof (RuntimeObject), sizeof(uint32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2636[2] = 
{
	eLeapDeviceFlag_t2618636809::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2637 = { sizeof (eLeapDroppedFrameType_t4020102257)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2637[4] = 
{
	eLeapDroppedFrameType_t4020102257::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2638 = { sizeof (LEAP_CONNECTION_CONFIG_t204252879)+ sizeof (RuntimeObject), sizeof(LEAP_CONNECTION_CONFIG_t204252879 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2638[3] = 
{
	LEAP_CONNECTION_CONFIG_t204252879::get_offset_of_size_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_CONNECTION_CONFIG_t204252879::get_offset_of_flags_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_CONNECTION_CONFIG_t204252879::get_offset_of_server_namespace_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2639 = { sizeof (LEAP_CONNECTION_INFO_t1143076656)+ sizeof (RuntimeObject), sizeof(LEAP_CONNECTION_INFO_t1143076656 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2639[2] = 
{
	LEAP_CONNECTION_INFO_t1143076656::get_offset_of_size_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_CONNECTION_INFO_t1143076656::get_offset_of_status_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2640 = { sizeof (LEAP_CONNECTION_EVENT_t625730999)+ sizeof (RuntimeObject), sizeof(LEAP_CONNECTION_EVENT_t625730999 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2640[1] = 
{
	LEAP_CONNECTION_EVENT_t625730999::get_offset_of_flags_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2641 = { sizeof (LEAP_DEVICE_REF_t3554253992)+ sizeof (RuntimeObject), sizeof(LEAP_DEVICE_REF_t3554253992 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2641[2] = 
{
	LEAP_DEVICE_REF_t3554253992::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DEVICE_REF_t3554253992::get_offset_of_id_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2642 = { sizeof (LEAP_CONNECTION_LOST_EVENT_t3613973647)+ sizeof (RuntimeObject), sizeof(LEAP_CONNECTION_LOST_EVENT_t3613973647 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2642[1] = 
{
	LEAP_CONNECTION_LOST_EVENT_t3613973647::get_offset_of_flags_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2643 = { sizeof (LEAP_ALLOCATOR_t1130793279)+ sizeof (RuntimeObject), sizeof(LEAP_ALLOCATOR_t1130793279_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2643[3] = 
{
	LEAP_ALLOCATOR_t1130793279::get_offset_of_allocate_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_ALLOCATOR_t1130793279::get_offset_of_deallocate_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_ALLOCATOR_t1130793279::get_offset_of_state_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2644 = { sizeof (LEAP_DEVICE_EVENT_t3586739927)+ sizeof (RuntimeObject), sizeof(LEAP_DEVICE_EVENT_t3586739927 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2644[3] = 
{
	LEAP_DEVICE_EVENT_t3586739927::get_offset_of_flags_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DEVICE_EVENT_t3586739927::get_offset_of_device_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DEVICE_EVENT_t3586739927::get_offset_of_status_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2645 = { sizeof (LEAP_DEVICE_FAILURE_EVENT_t5414606)+ sizeof (RuntimeObject), sizeof(LEAP_DEVICE_FAILURE_EVENT_t5414606 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2645[2] = 
{
	LEAP_DEVICE_FAILURE_EVENT_t5414606::get_offset_of_status_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DEVICE_FAILURE_EVENT_t5414606::get_offset_of_hDevice_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2646 = { sizeof (LEAP_TRACKING_EVENT_t2432170554)+ sizeof (RuntimeObject), sizeof(LEAP_TRACKING_EVENT_t2432170554 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2646[5] = 
{
	LEAP_TRACKING_EVENT_t2432170554::get_offset_of_info_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_TRACKING_EVENT_t2432170554::get_offset_of_tracking_id_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_TRACKING_EVENT_t2432170554::get_offset_of_nHands_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_TRACKING_EVENT_t2432170554::get_offset_of_pHands_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_TRACKING_EVENT_t2432170554::get_offset_of_framerate_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2647 = { sizeof (LEAP_DROPPED_FRAME_EVENT_t2848960069)+ sizeof (RuntimeObject), sizeof(LEAP_DROPPED_FRAME_EVENT_t2848960069 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2647[2] = 
{
	LEAP_DROPPED_FRAME_EVENT_t2848960069::get_offset_of_frame_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DROPPED_FRAME_EVENT_t2848960069::get_offset_of_reason_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2648 = { sizeof (LEAP_POINT_MAPPING_CHANGE_EVENT_t1177989613)+ sizeof (RuntimeObject), sizeof(LEAP_POINT_MAPPING_CHANGE_EVENT_t1177989613 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2648[3] = 
{
	LEAP_POINT_MAPPING_CHANGE_EVENT_t1177989613::get_offset_of_frame_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_POINT_MAPPING_CHANGE_EVENT_t1177989613::get_offset_of_timestamp_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_POINT_MAPPING_CHANGE_EVENT_t1177989613::get_offset_of_nPoints_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2649 = { sizeof (LEAP_POINT_MAPPING_t1256084792)+ sizeof (RuntimeObject), sizeof(LEAP_POINT_MAPPING_t1256084792 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2649[5] = 
{
	LEAP_POINT_MAPPING_t1256084792::get_offset_of_frame_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_POINT_MAPPING_t1256084792::get_offset_of_timestamp_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_POINT_MAPPING_t1256084792::get_offset_of_nPoints_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_POINT_MAPPING_t1256084792::get_offset_of_points_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_POINT_MAPPING_t1256084792::get_offset_of_ids_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2650 = { sizeof (LEAP_HEAD_POSE_EVENT_t1999289289)+ sizeof (RuntimeObject), sizeof(LEAP_HEAD_POSE_EVENT_t1999289289 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2650[3] = 
{
	LEAP_HEAD_POSE_EVENT_t1999289289::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HEAD_POSE_EVENT_t1999289289::get_offset_of_head_position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HEAD_POSE_EVENT_t1999289289::get_offset_of_head_orientation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2651 = { sizeof (LEAP_CONNECTION_MESSAGE_t378074802)+ sizeof (RuntimeObject), sizeof(LEAP_CONNECTION_MESSAGE_t378074802 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2651[3] = 
{
	LEAP_CONNECTION_MESSAGE_t378074802::get_offset_of_size_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_CONNECTION_MESSAGE_t378074802::get_offset_of_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_CONNECTION_MESSAGE_t378074802::get_offset_of_eventStructPtr_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2652 = { sizeof (LEAP_DISCONNECTION_EVENT_t1725570187)+ sizeof (RuntimeObject), sizeof(LEAP_DISCONNECTION_EVENT_t1725570187 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2652[1] = 
{
	LEAP_DISCONNECTION_EVENT_t1725570187::get_offset_of_reserved_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2653 = { sizeof (LEAP_DEVICE_INFO_t3103997278)+ sizeof (RuntimeObject), sizeof(LEAP_DEVICE_INFO_t3103997278 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2653[10] = 
{
	LEAP_DEVICE_INFO_t3103997278::get_offset_of_size_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DEVICE_INFO_t3103997278::get_offset_of_status_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DEVICE_INFO_t3103997278::get_offset_of_caps_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DEVICE_INFO_t3103997278::get_offset_of_type_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DEVICE_INFO_t3103997278::get_offset_of_baseline_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DEVICE_INFO_t3103997278::get_offset_of_serial_length_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DEVICE_INFO_t3103997278::get_offset_of_serial_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DEVICE_INFO_t3103997278::get_offset_of_h_fov_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DEVICE_INFO_t3103997278::get_offset_of_v_fov_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DEVICE_INFO_t3103997278::get_offset_of_range_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2654 = { sizeof (LEAP_FRAME_HEADER_t1981168231)+ sizeof (RuntimeObject), sizeof(LEAP_FRAME_HEADER_t1981168231 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2654[3] = 
{
	LEAP_FRAME_HEADER_t1981168231::get_offset_of_reserved_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_FRAME_HEADER_t1981168231::get_offset_of_frame_id_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_FRAME_HEADER_t1981168231::get_offset_of_timestamp_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2655 = { sizeof (LEAP_IMAGE_PROPERTIES_t1677471885)+ sizeof (RuntimeObject), sizeof(LEAP_IMAGE_PROPERTIES_t1677471885 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2655[9] = 
{
	LEAP_IMAGE_PROPERTIES_t1677471885::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_PROPERTIES_t1677471885::get_offset_of_format_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_PROPERTIES_t1677471885::get_offset_of_bpp_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_PROPERTIES_t1677471885::get_offset_of_width_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_PROPERTIES_t1677471885::get_offset_of_height_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_PROPERTIES_t1677471885::get_offset_of_x_scale_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_PROPERTIES_t1677471885::get_offset_of_y_scale_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_PROPERTIES_t1677471885::get_offset_of_x_offset_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_PROPERTIES_t1677471885::get_offset_of_y_offset_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2656 = { sizeof (LEAP_IMAGE_t334071425)+ sizeof (RuntimeObject), sizeof(LEAP_IMAGE_t334071425 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2656[5] = 
{
	LEAP_IMAGE_t334071425::get_offset_of_properties_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_t334071425::get_offset_of_matrix_version_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_t334071425::get_offset_of_distortionMatrix_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_t334071425::get_offset_of_data_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_t334071425::get_offset_of_offset_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2657 = { sizeof (LEAP_IMAGE_EVENT_t3001731371)+ sizeof (RuntimeObject), sizeof(LEAP_IMAGE_EVENT_t3001731371 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2657[4] = 
{
	LEAP_IMAGE_EVENT_t3001731371::get_offset_of_info_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_EVENT_t3001731371::get_offset_of_leftImage_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_EVENT_t3001731371::get_offset_of_rightImage_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_IMAGE_EVENT_t3001731371::get_offset_of_calib_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2658 = { sizeof (LEAP_VECTOR_t1604988008)+ sizeof (RuntimeObject), sizeof(LEAP_VECTOR_t1604988008 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2658[3] = 
{
	LEAP_VECTOR_t1604988008::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_VECTOR_t1604988008::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_VECTOR_t1604988008::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2659 = { sizeof (LEAP_QUATERNION_t2298175287)+ sizeof (RuntimeObject), sizeof(LEAP_QUATERNION_t2298175287 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2659[4] = 
{
	LEAP_QUATERNION_t2298175287::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_QUATERNION_t2298175287::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_QUATERNION_t2298175287::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_QUATERNION_t2298175287::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2660 = { sizeof (LEAP_MATRIX_3x3_t36015662)+ sizeof (RuntimeObject), sizeof(LEAP_MATRIX_3x3_t36015662 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2660[3] = 
{
	LEAP_MATRIX_3x3_t36015662::get_offset_of_m1_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_MATRIX_3x3_t36015662::get_offset_of_m2_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_MATRIX_3x3_t36015662::get_offset_of_m3_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2661 = { sizeof (LEAP_BONE_t971009456)+ sizeof (RuntimeObject), sizeof(LEAP_BONE_t971009456 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2661[4] = 
{
	LEAP_BONE_t971009456::get_offset_of_prev_joint_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_BONE_t971009456::get_offset_of_next_joint_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_BONE_t971009456::get_offset_of_width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_BONE_t971009456::get_offset_of_rotation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2662 = { sizeof (LEAP_DIGIT_t718736239)+ sizeof (RuntimeObject), sizeof(LEAP_DIGIT_t718736239 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2662[6] = 
{
	LEAP_DIGIT_t718736239::get_offset_of_finger_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DIGIT_t718736239::get_offset_of_metacarpal_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DIGIT_t718736239::get_offset_of_proximal_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DIGIT_t718736239::get_offset_of_intermediate_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DIGIT_t718736239::get_offset_of_distal_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_DIGIT_t718736239::get_offset_of_is_extended_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2663 = { sizeof (LEAP_PALM_t3332508984)+ sizeof (RuntimeObject), sizeof(LEAP_PALM_t3332508984 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2663[7] = 
{
	LEAP_PALM_t3332508984::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_PALM_t3332508984::get_offset_of_stabilized_position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_PALM_t3332508984::get_offset_of_velocity_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_PALM_t3332508984::get_offset_of_normal_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_PALM_t3332508984::get_offset_of_width_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_PALM_t3332508984::get_offset_of_direction_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_PALM_t3332508984::get_offset_of_orientation_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2664 = { sizeof (LEAP_HAND_t106822590)+ sizeof (RuntimeObject), sizeof(LEAP_HAND_t106822590 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2664[16] = 
{
	LEAP_HAND_t106822590::get_offset_of_id_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_flags_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_type_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_confidence_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_visible_time_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_pinch_distance_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_grab_angle_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_pinch_strength_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_grab_strength_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_palm_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_thumb_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_index_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_middle_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_ring_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_pinky_14() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_HAND_t106822590::get_offset_of_arm_15() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2665 = { sizeof (LEAP_TIP_t4133281704)+ sizeof (RuntimeObject), sizeof(LEAP_TIP_t4133281704 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2665[2] = 
{
	LEAP_TIP_t4133281704::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_TIP_t4133281704::get_offset_of_radius_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2666 = { sizeof (LEAP_LOG_EVENT_t2747504930)+ sizeof (RuntimeObject), sizeof(LEAP_LOG_EVENT_t2747504930 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2666[3] = 
{
	LEAP_LOG_EVENT_t2747504930::get_offset_of_severity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_LOG_EVENT_t2747504930::get_offset_of_timestamp_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_LOG_EVENT_t2747504930::get_offset_of_message_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2667 = { sizeof (LEAP_POLICY_EVENT_t4018224125)+ sizeof (RuntimeObject), sizeof(LEAP_POLICY_EVENT_t4018224125 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2667[2] = 
{
	LEAP_POLICY_EVENT_t4018224125::get_offset_of_reserved_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_POLICY_EVENT_t4018224125::get_offset_of_current_policy_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2668 = { sizeof (LEAP_VARIANT_VALUE_TYPE_t2124457737)+ sizeof (RuntimeObject), sizeof(LEAP_VARIANT_VALUE_TYPE_t2124457737 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2668[4] = 
{
	LEAP_VARIANT_VALUE_TYPE_t2124457737::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_VARIANT_VALUE_TYPE_t2124457737::get_offset_of_boolValue_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_VARIANT_VALUE_TYPE_t2124457737::get_offset_of_intValue_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_VARIANT_VALUE_TYPE_t2124457737::get_offset_of_floatValue_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2669 = { sizeof (LEAP_VARIANT_REF_TYPE_t643214953)+ sizeof (RuntimeObject), sizeof(LEAP_VARIANT_REF_TYPE_t643214953_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2669[2] = 
{
	LEAP_VARIANT_REF_TYPE_t643214953::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_VARIANT_REF_TYPE_t643214953::get_offset_of_stringValue_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2670 = { sizeof (LEAP_CONFIG_RESPONSE_EVENT_t1933621578)+ sizeof (RuntimeObject), sizeof(LEAP_CONFIG_RESPONSE_EVENT_t1933621578 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2670[2] = 
{
	LEAP_CONFIG_RESPONSE_EVENT_t1933621578::get_offset_of_requestId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_CONFIG_RESPONSE_EVENT_t1933621578::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2671 = { sizeof (LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE_t528064400)+ sizeof (RuntimeObject), sizeof(LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE_t528064400_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2671[2] = 
{
	LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE_t528064400::get_offset_of_requestId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_CONFIG_RESPONSE_EVENT_WITH_REF_TYPE_t528064400::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2672 = { sizeof (LEAP_CONFIG_CHANGE_EVENT_t1085445210)+ sizeof (RuntimeObject), sizeof(LEAP_CONFIG_CHANGE_EVENT_t1085445210_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2672[2] = 
{
	LEAP_CONFIG_CHANGE_EVENT_t1085445210::get_offset_of_requestId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_CONFIG_CHANGE_EVENT_t1085445210::get_offset_of_status_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2673 = { sizeof (LEAP_TELEMETRY_DATA_t3936163532)+ sizeof (RuntimeObject), sizeof(LEAP_TELEMETRY_DATA_t3936163532_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2673[7] = 
{
	LEAP_TELEMETRY_DATA_t3936163532::get_offset_of_threadId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_TELEMETRY_DATA_t3936163532::get_offset_of_startTime_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_TELEMETRY_DATA_t3936163532::get_offset_of_endTime_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_TELEMETRY_DATA_t3936163532::get_offset_of_zoneDepth_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_TELEMETRY_DATA_t3936163532::get_offset_of_fileName_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_TELEMETRY_DATA_t3936163532::get_offset_of_lineNumber_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LEAP_TELEMETRY_DATA_t3936163532::get_offset_of_zoneName_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2674 = { sizeof (LeapC_t2979983507), -1, sizeof(LeapC_t2979983507_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2674[1] = 
{
	LeapC_t2979983507_StaticFields::get_offset_of_DistortionSize_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2675 = { sizeof (LEAP_RECORDING_PARAMETERS_t41342046)+ sizeof (RuntimeObject), sizeof(LEAP_RECORDING_PARAMETERS_t41342046 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2675[1] = 
{
	LEAP_RECORDING_PARAMETERS_t41342046::get_offset_of_mode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2676 = { sizeof (LEAP_RECORDING_STATUS_t2202254995)+ sizeof (RuntimeObject), sizeof(LEAP_RECORDING_STATUS_t2202254995 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2676[1] = 
{
	LEAP_RECORDING_STATUS_t2202254995::get_offset_of_mode_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2677 = { sizeof (LeapQuaternion_t1571790471)+ sizeof (RuntimeObject), sizeof(LeapQuaternion_t1571790471 ), sizeof(LeapQuaternion_t1571790471_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2677[5] = 
{
	LeapQuaternion_t1571790471::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapQuaternion_t1571790471::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapQuaternion_t1571790471::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapQuaternion_t1571790471::get_offset_of_w_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapQuaternion_t1571790471_StaticFields::get_offset_of_Identity_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2678 = { sizeof (LeapTransform_t1384850941)+ sizeof (RuntimeObject), sizeof(LeapTransform_t1384850941_marshaled_pinvoke), sizeof(LeapTransform_t1384850941_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2678[13] = 
{
	LeapTransform_t1384850941_StaticFields::get_offset_of_Identity_0(),
	LeapTransform_t1384850941::get_offset_of__translation_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapTransform_t1384850941::get_offset_of__scale_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapTransform_t1384850941::get_offset_of__quaternion_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapTransform_t1384850941::get_offset_of__quaternionDirty_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapTransform_t1384850941::get_offset_of__flip_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapTransform_t1384850941::get_offset_of__flipAxes_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapTransform_t1384850941::get_offset_of__xBasis_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapTransform_t1384850941::get_offset_of__yBasis_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapTransform_t1384850941::get_offset_of__zBasis_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapTransform_t1384850941::get_offset_of__xBasisScaled_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapTransform_t1384850941::get_offset_of__yBasisScaled_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	LeapTransform_t1384850941::get_offset_of__zBasisScaled_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2679 = { sizeof (Logger_t1004207994), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2680 = { sizeof (Matrix_t187358336)+ sizeof (RuntimeObject), sizeof(Matrix_t187358336 ), sizeof(Matrix_t187358336_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2680[5] = 
{
	Matrix_t187358336::get_offset_of_U3CxBasisU3Ek__BackingField_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix_t187358336::get_offset_of_U3CyBasisU3Ek__BackingField_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix_t187358336::get_offset_of_U3CzBasisU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix_t187358336::get_offset_of_U3CoriginU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Matrix_t187358336_StaticFields::get_offset_of_Identity_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2681 = { sizeof (Allocate_t169257233), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2682 = { sizeof (Deallocate_t3308055752), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2683 = { sizeof (MemoryManager_t274225929), -1, sizeof(MemoryManager_t274225929_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2683[4] = 
{
	MemoryManager_t274225929_StaticFields::get_offset_of_EnablePooling_0(),
	MemoryManager_t274225929_StaticFields::get_offset_of_MinPoolSize_1(),
	MemoryManager_t274225929_StaticFields::get_offset_of__activeMemory_2(),
	MemoryManager_t274225929_StaticFields::get_offset_of__pooledMemory_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2684 = { sizeof (PoolKey_t148673589)+ sizeof (RuntimeObject), sizeof(PoolKey_t148673589 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2684[2] = 
{
	PoolKey_t148673589::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PoolKey_t148673589::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2685 = { sizeof (ActiveMemoryInfo_t1533863604)+ sizeof (RuntimeObject), sizeof(ActiveMemoryInfo_t1533863604 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2685[2] = 
{
	ActiveMemoryInfo_t1533863604::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ActiveMemoryInfo_t1533863604::get_offset_of_key_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2686 = { sizeof (MessageSeverity_t2831501899)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2686[5] = 
{
	MessageSeverity_t2831501899::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2687 = { sizeof (PointMapping_t4234514857)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2687[4] = 
{
	PointMapping_t4234514857::get_offset_of_frameId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PointMapping_t4234514857::get_offset_of_timestamp_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PointMapping_t4234514857::get_offset_of_points_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PointMapping_t4234514857::get_offset_of_ids_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2688 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2688[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2689 = { sizeof (TransformExtensions_t602296149), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2690 = { sizeof (Constants_t4098236021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2690[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2691 = { sizeof (Vector_t2166112452)+ sizeof (RuntimeObject), sizeof(Vector_t2166112452 ), sizeof(Vector_t2166112452_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2691[14] = 
{
	Vector_t2166112452::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector_t2166112452::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector_t2166112452::get_offset_of_z_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector_t2166112452_StaticFields::get_offset_of_Zero_3(),
	Vector_t2166112452_StaticFields::get_offset_of_Ones_4(),
	Vector_t2166112452_StaticFields::get_offset_of_XAxis_5(),
	Vector_t2166112452_StaticFields::get_offset_of_YAxis_6(),
	Vector_t2166112452_StaticFields::get_offset_of_ZAxis_7(),
	Vector_t2166112452_StaticFields::get_offset_of_Forward_8(),
	Vector_t2166112452_StaticFields::get_offset_of_Backward_9(),
	Vector_t2166112452_StaticFields::get_offset_of_Left_10(),
	Vector_t2166112452_StaticFields::get_offset_of_Right_11(),
	Vector_t2166112452_StaticFields::get_offset_of_Up_12(),
	Vector_t2166112452_StaticFields::get_offset_of_Down_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2692 = { sizeof (SlidingMax_t3389982681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2692[3] = 
{
	SlidingMax_t3389982681::get_offset_of__history_0(),
	SlidingMax_t3389982681::get_offset_of__count_1(),
	SlidingMax_t3389982681::get_offset_of__buffer_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2693 = { sizeof (IndexValuePair_t2628511264)+ sizeof (RuntimeObject), sizeof(IndexValuePair_t2628511264 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2693[2] = 
{
	IndexValuePair_t2628511264::get_offset_of_index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IndexValuePair_t2628511264::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2694 = { sizeof (SmoothedFloat_t3522733254), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2694[3] = 
{
	SmoothedFloat_t3522733254::get_offset_of_value_0(),
	SmoothedFloat_t3522733254::get_offset_of_delay_1(),
	SmoothedFloat_t3522733254::get_offset_of_reset_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2695 = { sizeof (SmoothedQuaternion_t2836823219), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2695[3] = 
{
	SmoothedQuaternion_t2836823219::get_offset_of_value_0(),
	SmoothedQuaternion_t2836823219::get_offset_of_delay_1(),
	SmoothedQuaternion_t2836823219::get_offset_of_reset_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2696 = { sizeof (SmoothedVector3_t1334650525), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2696[3] = 
{
	SmoothedVector3_t1334650525::get_offset_of_value_0(),
	SmoothedVector3_t1334650525::get_offset_of_delay_1(),
	SmoothedVector3_t1334650525::get_offset_of_reset_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2697 = { sizeof (HermiteSpline_t3057915579)+ sizeof (RuntimeObject), sizeof(HermiteSpline_t3057915579 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2697[6] = 
{
	HermiteSpline_t3057915579::get_offset_of_t0_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline_t3057915579::get_offset_of_t1_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline_t3057915579::get_offset_of_pos0_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline_t3057915579::get_offset_of_pos1_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline_t3057915579::get_offset_of_vel0_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline_t3057915579::get_offset_of_vel1_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2698 = { sizeof (HermiteSpline2_t2580300728)+ sizeof (RuntimeObject), sizeof(HermiteSpline2_t2580300728 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2698[6] = 
{
	HermiteSpline2_t2580300728::get_offset_of_t0_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline2_t2580300728::get_offset_of_t1_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline2_t2580300728::get_offset_of_pos0_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline2_t2580300728::get_offset_of_pos1_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline2_t2580300728::get_offset_of_vel0_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline2_t2580300728::get_offset_of_vel1_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2699 = { sizeof (HermiteSpline3_t4146384669)+ sizeof (RuntimeObject), sizeof(HermiteSpline3_t4146384669 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2699[6] = 
{
	HermiteSpline3_t4146384669::get_offset_of_t0_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline3_t4146384669::get_offset_of_t1_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline3_t4146384669::get_offset_of_pos0_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline3_t4146384669::get_offset_of_pos1_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline3_t4146384669::get_offset_of_vel0_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HermiteSpline3_t4146384669::get_offset_of_vel1_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

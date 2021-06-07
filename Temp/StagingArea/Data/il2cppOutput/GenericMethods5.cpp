#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean>
struct Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent>
struct Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB;
// System.Lazy`1<UnityEngine.Rendering.VolumeManager>
struct Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>
struct List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A;
// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>
struct List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.VolumeParameter>
struct ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>[]
struct EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.Rendering.VertexAttributeDescriptor[]
struct VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF;
// UnityEngine.Rendering.Volume[]
struct VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288;
// UnityEngine.Rendering.VolumeComponent[]
struct VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Rendering.Volume
struct Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E;
// UnityEngine.Rendering.VolumeComponent
struct VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E;
// UnityEngine.Rendering.VolumeManager
struct VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181;
// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB;
// UnityEngine.Rendering.VolumeProfile
struct VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821;
// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC;

IL2CPP_EXTERN_C RuntimeClass* Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Assert_IsNotNull_TisList_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28_mD240793205763EDAFC6429BBE43AFDBC2BCE0AE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___entries_1)); }
	inline EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD86A9C517A9183DC0D2A4F607541FE76CC5CFF0A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___keys_7)); }
	inline KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tEE205EA05E28A5192727FF0B031C07DC304D89FB * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ___values_8)); }
	inline ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8FFDAF68499A99F0038F1B69D8ACF21D51D6F995 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>
struct List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____items_1)); }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* get__items_1() const { return ____items_1; }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A_StaticFields, ____emptyArray_5)); }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VolumeU5BU5D_tA4AFF80913E54101E252936605E53D2C667FD288* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>
struct List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____items_1)); }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* get__items_1() const { return ____items_1; }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28_StaticFields, ____emptyArray_5)); }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VolumeComponentU5BU5D_t5BE4FFCA689AC3E792CACA8B420CDA5617E6B710* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tAA965823E05BE8ADD69F58C82BF0DF723476E551  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Threading.Volatile
struct Volatile_t7A8B2983396C4500A8FC226CDB66FE9067DA4AE6  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Rendering.VolumeManager
struct VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181  : public RuntimeObject
{
public:
	// UnityEngine.Rendering.VolumeStack UnityEngine.Rendering.VolumeManager::<stack>k__BackingField
	VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * ___U3CstackU3Ek__BackingField_1;
	// System.Type[] UnityEngine.Rendering.VolumeManager::<baseComponentTypeArray>k__BackingField
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___U3CbaseComponentTypeArrayU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>> UnityEngine.Rendering.VolumeManager::m_SortedVolumes
	Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * ___m_SortedVolumes_4;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.Volume> UnityEngine.Rendering.VolumeManager::m_Volumes
	List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * ___m_Volumes_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> UnityEngine.Rendering.VolumeManager::m_SortNeeded
	Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * ___m_SortNeeded_6;
	// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeManager::m_ComponentsDefaultState
	List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * ___m_ComponentsDefaultState_7;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.Rendering.VolumeManager::m_TempColliders
	List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * ___m_TempColliders_8;

public:
	inline static int32_t get_offset_of_U3CstackU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___U3CstackU3Ek__BackingField_1)); }
	inline VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * get_U3CstackU3Ek__BackingField_1() const { return ___U3CstackU3Ek__BackingField_1; }
	inline VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC ** get_address_of_U3CstackU3Ek__BackingField_1() { return &___U3CstackU3Ek__BackingField_1; }
	inline void set_U3CstackU3Ek__BackingField_1(VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * value)
	{
		___U3CstackU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CstackU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CbaseComponentTypeArrayU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___U3CbaseComponentTypeArrayU3Ek__BackingField_2)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_U3CbaseComponentTypeArrayU3Ek__BackingField_2() const { return ___U3CbaseComponentTypeArrayU3Ek__BackingField_2; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_U3CbaseComponentTypeArrayU3Ek__BackingField_2() { return &___U3CbaseComponentTypeArrayU3Ek__BackingField_2; }
	inline void set_U3CbaseComponentTypeArrayU3Ek__BackingField_2(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___U3CbaseComponentTypeArrayU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CbaseComponentTypeArrayU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SortedVolumes_4() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_SortedVolumes_4)); }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * get_m_SortedVolumes_4() const { return ___m_SortedVolumes_4; }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D ** get_address_of_m_SortedVolumes_4() { return &___m_SortedVolumes_4; }
	inline void set_m_SortedVolumes_4(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * value)
	{
		___m_SortedVolumes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SortedVolumes_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Volumes_5() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_Volumes_5)); }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * get_m_Volumes_5() const { return ___m_Volumes_5; }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A ** get_address_of_m_Volumes_5() { return &___m_Volumes_5; }
	inline void set_m_Volumes_5(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * value)
	{
		___m_Volumes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Volumes_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SortNeeded_6() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_SortNeeded_6)); }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * get_m_SortNeeded_6() const { return ___m_SortNeeded_6; }
	inline Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 ** get_address_of_m_SortNeeded_6() { return &___m_SortNeeded_6; }
	inline void set_m_SortNeeded_6(Dictionary_2_t446D8FCE66ED404E00855B46A520AB382A69EFF1 * value)
	{
		___m_SortNeeded_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SortNeeded_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ComponentsDefaultState_7() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_ComponentsDefaultState_7)); }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * get_m_ComponentsDefaultState_7() const { return ___m_ComponentsDefaultState_7; }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 ** get_address_of_m_ComponentsDefaultState_7() { return &___m_ComponentsDefaultState_7; }
	inline void set_m_ComponentsDefaultState_7(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * value)
	{
		___m_ComponentsDefaultState_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ComponentsDefaultState_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_TempColliders_8() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181, ___m_TempColliders_8)); }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * get_m_TempColliders_8() const { return ___m_TempColliders_8; }
	inline List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B ** get_address_of_m_TempColliders_8() { return &___m_TempColliders_8; }
	inline void set_m_TempColliders_8(List_1_tA906B1694E65A6E14892A3A8A80F1A939222B15B * value)
	{
		___m_TempColliders_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempColliders_8), (void*)value);
	}
};

struct VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181_StaticFields
{
public:
	// System.Lazy`1<UnityEngine.Rendering.VolumeManager> UnityEngine.Rendering.VolumeManager::s_Instance
	Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 * ___s_Instance_0;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181_StaticFields, ___s_Instance_0)); }
	inline Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(Lazy_1_tE0149DF13C992296D86538A52EF33509D67FA1D2 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_0), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeParameter
struct VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Rendering.VolumeParameter::m_OverrideState
	bool ___m_OverrideState_1;

public:
	inline static int32_t get_offset_of_m_OverrideState_1() { return static_cast<int32_t>(offsetof(VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB, ___m_OverrideState_1)); }
	inline bool get_m_OverrideState_1() const { return ___m_OverrideState_1; }
	inline bool* get_address_of_m_OverrideState_1() { return &___m_OverrideState_1; }
	inline void set_m_OverrideState_1(bool value)
	{
		___m_OverrideState_1 = value;
	}
};


// UnityEngine.Rendering.VolumeStack
struct VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeStack::components
	Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * ___components_0;

public:
	inline static int32_t get_offset_of_components_0() { return static_cast<int32_t>(offsetof(VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC, ___components_0)); }
	inline Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * get_components_0() const { return ___components_0; }
	inline Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 ** get_address_of_components_0() { return &___components_0; }
	inline void set_components_0(Dictionary_2_t78C37D8D8F911C9AB8FC854F6A72BF3916C60FC4 * value)
	{
		___components_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___components_0), (void*)value);
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>
struct AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A, ___data_1)); }
	inline uint8_t get_data_1() const { return ___data_1; }
	inline uint8_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint8_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>
struct AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1, ___data_1)); }
	inline int32_t get_data_1() const { return ___data_1; }
	inline int32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(int32_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt16>
struct AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint16_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863, ___data_1)); }
	inline uint16_t get_data_1() const { return ___data_1; }
	inline uint16_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint16_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>
struct AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0, ___data_1)); }
	inline uint32_t get_data_1() const { return ___data_1; }
	inline uint32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint32_t value)
	{
		___data_1 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Volume>
struct Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___list_0)); }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * get_list_0() const { return ___list_0; }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5, ___current_3)); }
	inline Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * get_current_3() const { return ___current_3; }
	inline Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>
struct Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___list_0)); }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * get_list_0() const { return ___list_0; }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB, ___current_3)); }
	inline VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * get_current_3() const { return ___current_3; }
	inline VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117, ___value_1)); }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * get_value_1() const { return ___value_1; }
	inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Boolean>
struct VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	bool ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201, ___m_Value_2)); }
	inline bool get_m_Value_2() const { return ___m_Value_2; }
	inline bool* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(bool value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Int32>
struct VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	int32_t ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7, ___m_Value_2)); }
	inline int32_t get_m_Value_2() const { return ___m_Value_2; }
	inline int32_t* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(int32_t value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Object>
struct VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	RuntimeObject * ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0, ___m_Value_2)); }
	inline RuntimeObject * get_m_Value_2() const { return ___m_Value_2; }
	inline RuntimeObject ** get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(RuntimeObject * value)
	{
		___m_Value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Value_2), (void*)value);
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Single>
struct VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	float ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7, ___m_Value_2)); }
	inline float get_m_Value_2() const { return ___m_Value_2; }
	inline float* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(float value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.BatchVisibility
struct BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE 
{
public:
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_instancesCount_1() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___instancesCount_1)); }
	inline int32_t get_instancesCount_1() const { return ___instancesCount_1; }
	inline int32_t* get_address_of_instancesCount_1() { return &___instancesCount_1; }
	inline void set_instancesCount_1(int32_t value)
	{
		___instancesCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCount_2() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___visibleCount_2)); }
	inline int32_t get_visibleCount_2() const { return ___visibleCount_2; }
	inline int32_t* get_address_of_visibleCount_2() { return &___visibleCount_2; }
	inline void set_visibleCount_2(int32_t value)
	{
		___visibleCount_2 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Rendering.DepthState
struct DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA 
{
public:
	// System.Byte UnityEngine.Rendering.DepthState::m_WriteEnabled
	uint8_t ___m_WriteEnabled_0;
	// System.SByte UnityEngine.Rendering.DepthState::m_CompareFunction
	int8_t ___m_CompareFunction_1;

public:
	inline static int32_t get_offset_of_m_WriteEnabled_0() { return static_cast<int32_t>(offsetof(DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA, ___m_WriteEnabled_0)); }
	inline uint8_t get_m_WriteEnabled_0() const { return ___m_WriteEnabled_0; }
	inline uint8_t* get_address_of_m_WriteEnabled_0() { return &___m_WriteEnabled_0; }
	inline void set_m_WriteEnabled_0(uint8_t value)
	{
		___m_WriteEnabled_0 = value;
	}

	inline static int32_t get_offset_of_m_CompareFunction_1() { return static_cast<int32_t>(offsetof(DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA, ___m_CompareFunction_1)); }
	inline int8_t get_m_CompareFunction_1() const { return ___m_CompareFunction_1; }
	inline int8_t* get_address_of_m_CompareFunction_1() { return &___m_CompareFunction_1; }
	inline void set_m_CompareFunction_1(int8_t value)
	{
		___m_CompareFunction_1 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Rendering.RenderTargetBlendState
struct RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD 
{
public:
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_WriteMask
	uint8_t ___m_WriteMask_0;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_SourceColorBlendMode
	uint8_t ___m_SourceColorBlendMode_1;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_DestinationColorBlendMode
	uint8_t ___m_DestinationColorBlendMode_2;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_SourceAlphaBlendMode
	uint8_t ___m_SourceAlphaBlendMode_3;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_DestinationAlphaBlendMode
	uint8_t ___m_DestinationAlphaBlendMode_4;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_ColorBlendOperation
	uint8_t ___m_ColorBlendOperation_5;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_AlphaBlendOperation
	uint8_t ___m_AlphaBlendOperation_6;
	// System.Byte UnityEngine.Rendering.RenderTargetBlendState::m_Padding
	uint8_t ___m_Padding_7;

public:
	inline static int32_t get_offset_of_m_WriteMask_0() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_WriteMask_0)); }
	inline uint8_t get_m_WriteMask_0() const { return ___m_WriteMask_0; }
	inline uint8_t* get_address_of_m_WriteMask_0() { return &___m_WriteMask_0; }
	inline void set_m_WriteMask_0(uint8_t value)
	{
		___m_WriteMask_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceColorBlendMode_1() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_SourceColorBlendMode_1)); }
	inline uint8_t get_m_SourceColorBlendMode_1() const { return ___m_SourceColorBlendMode_1; }
	inline uint8_t* get_address_of_m_SourceColorBlendMode_1() { return &___m_SourceColorBlendMode_1; }
	inline void set_m_SourceColorBlendMode_1(uint8_t value)
	{
		___m_SourceColorBlendMode_1 = value;
	}

	inline static int32_t get_offset_of_m_DestinationColorBlendMode_2() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_DestinationColorBlendMode_2)); }
	inline uint8_t get_m_DestinationColorBlendMode_2() const { return ___m_DestinationColorBlendMode_2; }
	inline uint8_t* get_address_of_m_DestinationColorBlendMode_2() { return &___m_DestinationColorBlendMode_2; }
	inline void set_m_DestinationColorBlendMode_2(uint8_t value)
	{
		___m_DestinationColorBlendMode_2 = value;
	}

	inline static int32_t get_offset_of_m_SourceAlphaBlendMode_3() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_SourceAlphaBlendMode_3)); }
	inline uint8_t get_m_SourceAlphaBlendMode_3() const { return ___m_SourceAlphaBlendMode_3; }
	inline uint8_t* get_address_of_m_SourceAlphaBlendMode_3() { return &___m_SourceAlphaBlendMode_3; }
	inline void set_m_SourceAlphaBlendMode_3(uint8_t value)
	{
		___m_SourceAlphaBlendMode_3 = value;
	}

	inline static int32_t get_offset_of_m_DestinationAlphaBlendMode_4() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_DestinationAlphaBlendMode_4)); }
	inline uint8_t get_m_DestinationAlphaBlendMode_4() const { return ___m_DestinationAlphaBlendMode_4; }
	inline uint8_t* get_address_of_m_DestinationAlphaBlendMode_4() { return &___m_DestinationAlphaBlendMode_4; }
	inline void set_m_DestinationAlphaBlendMode_4(uint8_t value)
	{
		___m_DestinationAlphaBlendMode_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorBlendOperation_5() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_ColorBlendOperation_5)); }
	inline uint8_t get_m_ColorBlendOperation_5() const { return ___m_ColorBlendOperation_5; }
	inline uint8_t* get_address_of_m_ColorBlendOperation_5() { return &___m_ColorBlendOperation_5; }
	inline void set_m_ColorBlendOperation_5(uint8_t value)
	{
		___m_ColorBlendOperation_5 = value;
	}

	inline static int32_t get_offset_of_m_AlphaBlendOperation_6() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_AlphaBlendOperation_6)); }
	inline uint8_t get_m_AlphaBlendOperation_6() const { return ___m_AlphaBlendOperation_6; }
	inline uint8_t* get_address_of_m_AlphaBlendOperation_6() { return &___m_AlphaBlendOperation_6; }
	inline void set_m_AlphaBlendOperation_6(uint8_t value)
	{
		___m_AlphaBlendOperation_6 = value;
	}

	inline static int32_t get_offset_of_m_Padding_7() { return static_cast<int32_t>(offsetof(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD, ___m_Padding_7)); }
	inline uint8_t get_m_Padding_7() const { return ___m_Padding_7; }
	inline uint8_t* get_address_of_m_Padding_7() { return &___m_Padding_7; }
	inline void set_m_Padding_7(uint8_t value)
	{
		___m_Padding_7 = value;
	}
};


// UnityEngine.Rendering.ShaderTagId
struct ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 
{
public:
	// System.Int32 UnityEngine.Rendering.ShaderTagId::m_Id
	int32_t ___m_Id_1;

public:
	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795, ___m_Id_1)); }
	inline int32_t get_m_Id_1() const { return ___m_Id_1; }
	inline int32_t* get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(int32_t value)
	{
		___m_Id_1 = value;
	}
};

struct ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_StaticFields
{
public:
	// UnityEngine.Rendering.ShaderTagId UnityEngine.Rendering.ShaderTagId::none
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___none_0;

public:
	inline static int32_t get_offset_of_none_0() { return static_cast<int32_t>(offsetof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_StaticFields, ___none_0)); }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  get_none_0() const { return ___none_0; }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 * get_address_of_none_0() { return &___none_0; }
	inline void set_none_0(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  value)
	{
		___none_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Rendering.StencilState
struct StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007 
{
public:
	// System.Byte UnityEngine.Rendering.StencilState::m_Enabled
	uint8_t ___m_Enabled_0;
	// System.Byte UnityEngine.Rendering.StencilState::m_ReadMask
	uint8_t ___m_ReadMask_1;
	// System.Byte UnityEngine.Rendering.StencilState::m_WriteMask
	uint8_t ___m_WriteMask_2;
	// System.Byte UnityEngine.Rendering.StencilState::m_Padding
	uint8_t ___m_Padding_3;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionFront
	uint8_t ___m_CompareFunctionFront_4;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationFront
	uint8_t ___m_PassOperationFront_5;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationFront
	uint8_t ___m_FailOperationFront_6;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationFront
	uint8_t ___m_ZFailOperationFront_7;
	// System.Byte UnityEngine.Rendering.StencilState::m_CompareFunctionBack
	uint8_t ___m_CompareFunctionBack_8;
	// System.Byte UnityEngine.Rendering.StencilState::m_PassOperationBack
	uint8_t ___m_PassOperationBack_9;
	// System.Byte UnityEngine.Rendering.StencilState::m_FailOperationBack
	uint8_t ___m_FailOperationBack_10;
	// System.Byte UnityEngine.Rendering.StencilState::m_ZFailOperationBack
	uint8_t ___m_ZFailOperationBack_11;

public:
	inline static int32_t get_offset_of_m_Enabled_0() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_Enabled_0)); }
	inline uint8_t get_m_Enabled_0() const { return ___m_Enabled_0; }
	inline uint8_t* get_address_of_m_Enabled_0() { return &___m_Enabled_0; }
	inline void set_m_Enabled_0(uint8_t value)
	{
		___m_Enabled_0 = value;
	}

	inline static int32_t get_offset_of_m_ReadMask_1() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_ReadMask_1)); }
	inline uint8_t get_m_ReadMask_1() const { return ___m_ReadMask_1; }
	inline uint8_t* get_address_of_m_ReadMask_1() { return &___m_ReadMask_1; }
	inline void set_m_ReadMask_1(uint8_t value)
	{
		___m_ReadMask_1 = value;
	}

	inline static int32_t get_offset_of_m_WriteMask_2() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_WriteMask_2)); }
	inline uint8_t get_m_WriteMask_2() const { return ___m_WriteMask_2; }
	inline uint8_t* get_address_of_m_WriteMask_2() { return &___m_WriteMask_2; }
	inline void set_m_WriteMask_2(uint8_t value)
	{
		___m_WriteMask_2 = value;
	}

	inline static int32_t get_offset_of_m_Padding_3() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_Padding_3)); }
	inline uint8_t get_m_Padding_3() const { return ___m_Padding_3; }
	inline uint8_t* get_address_of_m_Padding_3() { return &___m_Padding_3; }
	inline void set_m_Padding_3(uint8_t value)
	{
		___m_Padding_3 = value;
	}

	inline static int32_t get_offset_of_m_CompareFunctionFront_4() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_CompareFunctionFront_4)); }
	inline uint8_t get_m_CompareFunctionFront_4() const { return ___m_CompareFunctionFront_4; }
	inline uint8_t* get_address_of_m_CompareFunctionFront_4() { return &___m_CompareFunctionFront_4; }
	inline void set_m_CompareFunctionFront_4(uint8_t value)
	{
		___m_CompareFunctionFront_4 = value;
	}

	inline static int32_t get_offset_of_m_PassOperationFront_5() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_PassOperationFront_5)); }
	inline uint8_t get_m_PassOperationFront_5() const { return ___m_PassOperationFront_5; }
	inline uint8_t* get_address_of_m_PassOperationFront_5() { return &___m_PassOperationFront_5; }
	inline void set_m_PassOperationFront_5(uint8_t value)
	{
		___m_PassOperationFront_5 = value;
	}

	inline static int32_t get_offset_of_m_FailOperationFront_6() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_FailOperationFront_6)); }
	inline uint8_t get_m_FailOperationFront_6() const { return ___m_FailOperationFront_6; }
	inline uint8_t* get_address_of_m_FailOperationFront_6() { return &___m_FailOperationFront_6; }
	inline void set_m_FailOperationFront_6(uint8_t value)
	{
		___m_FailOperationFront_6 = value;
	}

	inline static int32_t get_offset_of_m_ZFailOperationFront_7() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_ZFailOperationFront_7)); }
	inline uint8_t get_m_ZFailOperationFront_7() const { return ___m_ZFailOperationFront_7; }
	inline uint8_t* get_address_of_m_ZFailOperationFront_7() { return &___m_ZFailOperationFront_7; }
	inline void set_m_ZFailOperationFront_7(uint8_t value)
	{
		___m_ZFailOperationFront_7 = value;
	}

	inline static int32_t get_offset_of_m_CompareFunctionBack_8() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_CompareFunctionBack_8)); }
	inline uint8_t get_m_CompareFunctionBack_8() const { return ___m_CompareFunctionBack_8; }
	inline uint8_t* get_address_of_m_CompareFunctionBack_8() { return &___m_CompareFunctionBack_8; }
	inline void set_m_CompareFunctionBack_8(uint8_t value)
	{
		___m_CompareFunctionBack_8 = value;
	}

	inline static int32_t get_offset_of_m_PassOperationBack_9() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_PassOperationBack_9)); }
	inline uint8_t get_m_PassOperationBack_9() const { return ___m_PassOperationBack_9; }
	inline uint8_t* get_address_of_m_PassOperationBack_9() { return &___m_PassOperationBack_9; }
	inline void set_m_PassOperationBack_9(uint8_t value)
	{
		___m_PassOperationBack_9 = value;
	}

	inline static int32_t get_offset_of_m_FailOperationBack_10() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_FailOperationBack_10)); }
	inline uint8_t get_m_FailOperationBack_10() const { return ___m_FailOperationBack_10; }
	inline uint8_t* get_address_of_m_FailOperationBack_10() { return &___m_FailOperationBack_10; }
	inline void set_m_FailOperationBack_10(uint8_t value)
	{
		___m_FailOperationBack_10 = value;
	}

	inline static int32_t get_offset_of_m_ZFailOperationBack_11() { return static_cast<int32_t>(offsetof(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007, ___m_ZFailOperationBack_11)); }
	inline uint8_t get_m_ZFailOperationBack_11() const { return ___m_ZFailOperationBack_11; }
	inline uint8_t* get_address_of_m_ZFailOperationBack_11() { return &___m_ZFailOperationBack_11; }
	inline void set_m_ZFailOperationBack_11(uint8_t value)
	{
		___m_ZFailOperationBack_11 = value;
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Unity.Mathematics.float2
struct float2_t11F5F2974404951113DDC4E13EEB6E2456295547 
{
public:
	// System.Single Unity.Mathematics.float2::x
	float ___x_0;
	// System.Single Unity.Mathematics.float2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(float2_t11F5F2974404951113DDC4E13EEB6E2456295547, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(float2_t11F5F2974404951113DDC4E13EEB6E2456295547, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};


// Unity.Mathematics.float3
struct float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D 
{
public:
	// System.Single Unity.Mathematics.float3::x
	float ___x_0;
	// System.Single Unity.Mathematics.float3::y
	float ___y_1;
	// System.Single Unity.Mathematics.float3::z
	float ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}
};

struct float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D_StaticFields
{
public:
	// Unity.Mathematics.float3 Unity.Mathematics.float3::zero
	float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  ___zero_3;

public:
	inline static int32_t get_offset_of_zero_3() { return static_cast<int32_t>(offsetof(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D_StaticFields, ___zero_3)); }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  get_zero_3() const { return ___zero_3; }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D * get_address_of_zero_3() { return &___zero_3; }
	inline void set_zero_3(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  value)
	{
		___zero_3 = value;
	}
};


// Unity.Mathematics.float4
struct float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883 
{
public:
	// System.Single Unity.Mathematics.float4::x
	float ___x_0;
	// System.Single Unity.Mathematics.float4::y
	float ___y_1;
	// System.Single Unity.Mathematics.float4::z
	float ___z_2;
	// System.Single Unity.Mathematics.float4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// Unity.Mathematics.uint4
struct uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 
{
public:
	// System.UInt32 Unity.Mathematics.uint4::x
	uint32_t ___x_0;
	// System.UInt32 Unity.Mathematics.uint4::y
	uint32_t ___y_1;
	// System.UInt32 Unity.Mathematics.uint4::z
	uint32_t ___z_2;
	// System.UInt32 Unity.Mathematics.uint4::w
	uint32_t ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92, ___x_0)); }
	inline uint32_t get_x_0() const { return ___x_0; }
	inline uint32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(uint32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92, ___y_1)); }
	inline uint32_t get_y_1() const { return ___y_1; }
	inline uint32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(uint32_t value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92, ___z_2)); }
	inline uint32_t get_z_2() const { return ___z_2; }
	inline uint32_t* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(uint32_t value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92, ___w_3)); }
	inline uint32_t get_w_3() const { return ___w_3; }
	inline uint32_t* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(uint32_t value)
	{
		___w_3 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>
struct AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F, ___data_1)); }
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  get_data_1() const { return ___data_1; }
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.ShaderTagId>
struct AlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC, ___data_1)); }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  get_data_1() const { return ___data_1; }
	inline ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Mathematics.uint4>
struct AlignOfHelper_1_tD1FAAB900EAA9C85D383FA2EFE082138B27FB0FB 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD1FAAB900EAA9C85D383FA2EFE082138B27FB0FB, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD1FAAB900EAA9C85D383FA2EFE082138B27FB0FB, ___data_1)); }
	inline uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92  get_data_1() const { return ___data_1; }
	inline uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92  value)
	{
		___data_1 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>
struct Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___dictionary_0)); }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___current_3)); }
	inline KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___dictionary_0)); }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___current_3)); }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Color>
struct VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A, ___m_Value_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Value_2() const { return ___m_Value_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>
struct VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D, ___m_Value_2)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_Value_2() const { return ___m_Value_2; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>
struct VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7, ___m_Value_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>
struct VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F, ___m_Value_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>
struct VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C, ___m_Value_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_Value_2() const { return ___m_Value_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_Value_2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.BlendState
struct BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34 
{
public:
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState0
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState0_0;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState1
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState1_1;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState2
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState2_2;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState3
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState3_3;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState4
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState4_4;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState5
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState5_5;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState6
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState6_6;
	// UnityEngine.Rendering.RenderTargetBlendState UnityEngine.Rendering.BlendState::m_BlendState7
	RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  ___m_BlendState7_7;
	// System.Byte UnityEngine.Rendering.BlendState::m_SeparateMRTBlendStates
	uint8_t ___m_SeparateMRTBlendStates_8;
	// System.Byte UnityEngine.Rendering.BlendState::m_AlphaToMask
	uint8_t ___m_AlphaToMask_9;
	// System.Int16 UnityEngine.Rendering.BlendState::m_Padding
	int16_t ___m_Padding_10;

public:
	inline static int32_t get_offset_of_m_BlendState0_0() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState0_0)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState0_0() const { return ___m_BlendState0_0; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState0_0() { return &___m_BlendState0_0; }
	inline void set_m_BlendState0_0(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState0_0 = value;
	}

	inline static int32_t get_offset_of_m_BlendState1_1() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState1_1)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState1_1() const { return ___m_BlendState1_1; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState1_1() { return &___m_BlendState1_1; }
	inline void set_m_BlendState1_1(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState1_1 = value;
	}

	inline static int32_t get_offset_of_m_BlendState2_2() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState2_2)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState2_2() const { return ___m_BlendState2_2; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState2_2() { return &___m_BlendState2_2; }
	inline void set_m_BlendState2_2(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState2_2 = value;
	}

	inline static int32_t get_offset_of_m_BlendState3_3() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState3_3)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState3_3() const { return ___m_BlendState3_3; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState3_3() { return &___m_BlendState3_3; }
	inline void set_m_BlendState3_3(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState3_3 = value;
	}

	inline static int32_t get_offset_of_m_BlendState4_4() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState4_4)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState4_4() const { return ___m_BlendState4_4; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState4_4() { return &___m_BlendState4_4; }
	inline void set_m_BlendState4_4(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState4_4 = value;
	}

	inline static int32_t get_offset_of_m_BlendState5_5() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState5_5)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState5_5() const { return ___m_BlendState5_5; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState5_5() { return &___m_BlendState5_5; }
	inline void set_m_BlendState5_5(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState5_5 = value;
	}

	inline static int32_t get_offset_of_m_BlendState6_6() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState6_6)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState6_6() const { return ___m_BlendState6_6; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState6_6() { return &___m_BlendState6_6; }
	inline void set_m_BlendState6_6(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState6_6 = value;
	}

	inline static int32_t get_offset_of_m_BlendState7_7() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_BlendState7_7)); }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  get_m_BlendState7_7() const { return ___m_BlendState7_7; }
	inline RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD * get_address_of_m_BlendState7_7() { return &___m_BlendState7_7; }
	inline void set_m_BlendState7_7(RenderTargetBlendState_tEFCC998AB00112AFCC263503C4F52E9F32048DBD  value)
	{
		___m_BlendState7_7 = value;
	}

	inline static int32_t get_offset_of_m_SeparateMRTBlendStates_8() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_SeparateMRTBlendStates_8)); }
	inline uint8_t get_m_SeparateMRTBlendStates_8() const { return ___m_SeparateMRTBlendStates_8; }
	inline uint8_t* get_address_of_m_SeparateMRTBlendStates_8() { return &___m_SeparateMRTBlendStates_8; }
	inline void set_m_SeparateMRTBlendStates_8(uint8_t value)
	{
		___m_SeparateMRTBlendStates_8 = value;
	}

	inline static int32_t get_offset_of_m_AlphaToMask_9() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_AlphaToMask_9)); }
	inline uint8_t get_m_AlphaToMask_9() const { return ___m_AlphaToMask_9; }
	inline uint8_t* get_address_of_m_AlphaToMask_9() { return &___m_AlphaToMask_9; }
	inline void set_m_AlphaToMask_9(uint8_t value)
	{
		___m_AlphaToMask_9 = value;
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34, ___m_Padding_10)); }
	inline int16_t get_m_Padding_10() const { return ___m_Padding_10; }
	inline int16_t* get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(int16_t value)
	{
		___m_Padding_10 = value;
	}
};


// UnityEngine.Rendering.CullMode
struct CullMode_t2217CE70E9A8E268EDDDB71F28D7F456E767C135 
{
public:
	// System.Int32 UnityEngine.Rendering.CullMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CullMode_t2217CE70E9A8E268EDDDB71F28D7F456E767C135, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Jobs.JobHandle
struct JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 
{
public:
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;

public:
	inline static int32_t get_offset_of_jobGroup_0() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___jobGroup_0)); }
	inline intptr_t get_jobGroup_0() const { return ___jobGroup_0; }
	inline intptr_t* get_address_of_jobGroup_0() { return &___jobGroup_0; }
	inline void set_jobGroup_0(intptr_t value)
	{
		___jobGroup_0 = value;
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LightType
struct LightType_tAD5FBE55DEE7A9C38A42323701B0BDD716761B14 
{
public:
	// System.Int32 UnityEngine.LightType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_tAD5FBE55DEE7A9C38A42323701B0BDD716761B14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.Rendering.Universal.PreTile
struct PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 
{
public:
	// Unity.Mathematics.float4 UnityEngine.Rendering.Universal.PreTile::planeLeft
	float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  ___planeLeft_0;
	// Unity.Mathematics.float4 UnityEngine.Rendering.Universal.PreTile::planeRight
	float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  ___planeRight_1;
	// Unity.Mathematics.float4 UnityEngine.Rendering.Universal.PreTile::planeBottom
	float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  ___planeBottom_2;
	// Unity.Mathematics.float4 UnityEngine.Rendering.Universal.PreTile::planeTop
	float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  ___planeTop_3;

public:
	inline static int32_t get_offset_of_planeLeft_0() { return static_cast<int32_t>(offsetof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36, ___planeLeft_0)); }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  get_planeLeft_0() const { return ___planeLeft_0; }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883 * get_address_of_planeLeft_0() { return &___planeLeft_0; }
	inline void set_planeLeft_0(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  value)
	{
		___planeLeft_0 = value;
	}

	inline static int32_t get_offset_of_planeRight_1() { return static_cast<int32_t>(offsetof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36, ___planeRight_1)); }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  get_planeRight_1() const { return ___planeRight_1; }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883 * get_address_of_planeRight_1() { return &___planeRight_1; }
	inline void set_planeRight_1(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  value)
	{
		___planeRight_1 = value;
	}

	inline static int32_t get_offset_of_planeBottom_2() { return static_cast<int32_t>(offsetof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36, ___planeBottom_2)); }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  get_planeBottom_2() const { return ___planeBottom_2; }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883 * get_address_of_planeBottom_2() { return &___planeBottom_2; }
	inline void set_planeBottom_2(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  value)
	{
		___planeBottom_2 = value;
	}

	inline static int32_t get_offset_of_planeTop_3() { return static_cast<int32_t>(offsetof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36, ___planeTop_3)); }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  get_planeTop_3() const { return ___planeTop_3; }
	inline float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883 * get_address_of_planeTop_3() { return &___planeTop_3; }
	inline void set_planeTop_3(float4_t866F9B9B0DB07AE8949D4ACE92A0A84C88769883  value)
	{
		___planeTop_3 = value;
	}
};


// UnityEngine.Rendering.RenderStateMask
struct RenderStateMask_t3501AB292C3334281865DF8E5CA5BF67C687AF35 
{
public:
	// System.Int32 UnityEngine.Rendering.RenderStateMask::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderStateMask_t3501AB292C3334281865DF8E5CA5BF67C687AF35, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Rendering.VisibleLightFlags
struct VisibleLightFlags_tDB755E7201CE7B38D58CC4524920ACDABC292EC0 
{
public:
	// System.Int32 UnityEngine.Rendering.VisibleLightFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VisibleLightFlags_tDB755E7201CE7B38D58CC4524920ACDABC292EC0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight
struct PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 
{
public:
	// Unity.Mathematics.float3 UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::posVS
	float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  ___posVS_0;
	// System.Single UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::radius
	float ___radius_1;
	// System.Single UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::minDist
	float ___minDist_2;
	// Unity.Mathematics.float2 UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::screenPos
	float2_t11F5F2974404951113DDC4E13EEB6E2456295547  ___screenPos_3;
	// System.UInt16 UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight::visLightIndex
	uint16_t ___visLightIndex_4;

public:
	inline static int32_t get_offset_of_posVS_0() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___posVS_0)); }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  get_posVS_0() const { return ___posVS_0; }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D * get_address_of_posVS_0() { return &___posVS_0; }
	inline void set_posVS_0(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  value)
	{
		___posVS_0 = value;
	}

	inline static int32_t get_offset_of_radius_1() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___radius_1)); }
	inline float get_radius_1() const { return ___radius_1; }
	inline float* get_address_of_radius_1() { return &___radius_1; }
	inline void set_radius_1(float value)
	{
		___radius_1 = value;
	}

	inline static int32_t get_offset_of_minDist_2() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___minDist_2)); }
	inline float get_minDist_2() const { return ___minDist_2; }
	inline float* get_address_of_minDist_2() { return &___minDist_2; }
	inline void set_minDist_2(float value)
	{
		___minDist_2 = value;
	}

	inline static int32_t get_offset_of_screenPos_3() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___screenPos_3)); }
	inline float2_t11F5F2974404951113DDC4E13EEB6E2456295547  get_screenPos_3() const { return ___screenPos_3; }
	inline float2_t11F5F2974404951113DDC4E13EEB6E2456295547 * get_address_of_screenPos_3() { return &___screenPos_3; }
	inline void set_screenPos_3(float2_t11F5F2974404951113DDC4E13EEB6E2456295547  value)
	{
		___screenPos_3 = value;
	}

	inline static int32_t get_offset_of_visLightIndex_4() { return static_cast<int32_t>(offsetof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609, ___visLightIndex_4)); }
	inline uint16_t get_visLightIndex_4() const { return ___visLightIndex_4; }
	inline uint16_t* get_address_of_visLightIndex_4() { return &___visLightIndex_4; }
	inline void set_visLightIndex_4(uint16_t value)
	{
		___visLightIndex_4 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex
struct ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 
{
public:
	// Unity.Mathematics.float3 UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex::position
	float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  ___position_0;
	// UnityEngine.Color UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893, ___position_0)); }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  get_position_0() const { return ___position_0; }
	inline float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(float3_tE0DD2FF13F818025945C9AC314390D2A1F55E37D  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}
};

struct ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893_StaticFields
{
public:
	// UnityEngine.Rendering.VertexAttributeDescriptor[] UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex::VertexLayout
	VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* ___VertexLayout_2;

public:
	inline static int32_t get_offset_of_VertexLayout_2() { return static_cast<int32_t>(offsetof(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893_StaticFields, ___VertexLayout_2)); }
	inline VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* get_VertexLayout_2() const { return ___VertexLayout_2; }
	inline VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF** get_address_of_VertexLayout_2() { return &___VertexLayout_2; }
	inline void set_VertexLayout_2(VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* value)
	{
		___VertexLayout_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VertexLayout_2), (void*)value);
	}
};


// UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex
struct SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC 
{
public:
	// UnityEngine.Vector3 UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Color UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_1;
	// UnityEngine.Vector2 UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex::uv
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___uv_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC, ___color_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_1() const { return ___color_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_uv_2() { return static_cast<int32_t>(offsetof(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC, ___uv_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_uv_2() const { return ___uv_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_uv_2() { return &___uv_2; }
	inline void set_uv_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___uv_2 = value;
	}
};

struct SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC_StaticFields
{
public:
	// UnityEngine.Rendering.VertexAttributeDescriptor[] UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex::VertexLayout
	VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* ___VertexLayout_3;

public:
	inline static int32_t get_offset_of_VertexLayout_3() { return static_cast<int32_t>(offsetof(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC_StaticFields, ___VertexLayout_3)); }
	inline VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* get_VertexLayout_3() const { return ___VertexLayout_3; }
	inline VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF** get_address_of_VertexLayout_3() { return &___VertexLayout_3; }
	inline void set_VertexLayout_3(VertexAttributeDescriptorU5BU5D_tD5E8E25AC5B9F233FDC5658F2C11FB7412BBDBFF* value)
	{
		___VertexLayout_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VertexLayout_3), (void*)value);
	}
};


// UnityEngine.Rendering.Universal.ShaderInput/LightData
struct LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 
{
public:
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::position
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___position_0;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::color
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___color_1;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::attenuation
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___attenuation_2;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::spotDirection
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___spotDirection_3;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/LightData::occlusionProbeChannels
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___occlusionProbeChannels_4;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___position_0)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_position_0() const { return ___position_0; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_color_1() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___color_1)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_color_1() const { return ___color_1; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_color_1() { return &___color_1; }
	inline void set_color_1(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___color_1 = value;
	}

	inline static int32_t get_offset_of_attenuation_2() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___attenuation_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_attenuation_2() const { return ___attenuation_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_attenuation_2() { return &___attenuation_2; }
	inline void set_attenuation_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___attenuation_2 = value;
	}

	inline static int32_t get_offset_of_spotDirection_3() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___spotDirection_3)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_spotDirection_3() const { return ___spotDirection_3; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_spotDirection_3() { return &___spotDirection_3; }
	inline void set_spotDirection_3(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___spotDirection_3 = value;
	}

	inline static int32_t get_offset_of_occlusionProbeChannels_4() { return static_cast<int32_t>(offsetof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135, ___occlusionProbeChannels_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_occlusionProbeChannels_4() const { return ___occlusionProbeChannels_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_occlusionProbeChannels_4() { return &___occlusionProbeChannels_4; }
	inline void set_occlusionProbeChannels_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___occlusionProbeChannels_4 = value;
	}
};


// UnityEngine.Rendering.Universal.ShaderInput/ShadowData
struct ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.Universal.ShaderInput/ShadowData::worldToShadowMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___worldToShadowMatrix_0;
	// UnityEngine.Vector4 UnityEngine.Rendering.Universal.ShaderInput/ShadowData::shadowParams
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___shadowParams_1;

public:
	inline static int32_t get_offset_of_worldToShadowMatrix_0() { return static_cast<int32_t>(offsetof(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701, ___worldToShadowMatrix_0)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_worldToShadowMatrix_0() const { return ___worldToShadowMatrix_0; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_worldToShadowMatrix_0() { return &___worldToShadowMatrix_0; }
	inline void set_worldToShadowMatrix_0(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___worldToShadowMatrix_0 = value;
	}

	inline static int32_t get_offset_of_shadowParams_1() { return static_cast<int32_t>(offsetof(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701, ___shadowParams_1)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_shadowParams_1() const { return ___shadowParams_1; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_shadowParams_1() { return &___shadowParams_1; }
	inline void set_shadowParams_1(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___shadowParams_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32Enum>
struct AlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9, ___data_1)); }
	inline int32_t get_data_1() const { return ___data_1; }
	inline int32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(int32_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Jobs.JobHandle>
struct AlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599, ___data_1)); }
	inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  get_data_1() const { return ___data_1; }
	inline JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>
struct AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893, ___data_1)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_data_1() const { return ___data_1; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.PreTile>
struct AlignOfHelper_1_t0903321CE301477697201BC084A409846158443E 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t0903321CE301477697201BC084A409846158443E, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t0903321CE301477697201BC084A409846158443E, ___data_1)); }
	inline PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  get_data_1() const { return ___data_1; }
	inline PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>
struct AlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE, ___data_1)); }
	inline PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  get_data_1() const { return ___data_1; }
	inline PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex>
struct AlignOfHelper_1_t8A44F087C4667982392B6430319A3508103E5799 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8A44F087C4667982392B6430319A3508103E5799, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t8A44F087C4667982392B6430319A3508103E5799, ___data_1)); }
	inline ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893  get_data_1() const { return ___data_1; }
	inline ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex>
struct AlignOfHelper_1_tE51A42CDF939261B479B3E0EE4FD18B36B7C1D95 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tE51A42CDF939261B479B3E0EE4FD18B36B7C1D95, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tE51A42CDF939261B479B3E0EE4FD18B36B7C1D95, ___data_1)); }
	inline SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC  get_data_1() const { return ___data_1; }
	inline SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.ShaderInput/LightData>
struct AlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE, ___data_1)); }
	inline LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  get_data_1() const { return ___data_1; }
	inline LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.ShaderInput/ShadowData>
struct AlignOfHelper_1_tC90B8A600D3C4DEC6CD533824B027FEE08718DFA 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC90B8A600D3C4DEC6CD533824B027FEE08718DFA, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tC90B8A600D3C4DEC6CD533824B027FEE08718DFA, ___data_1)); }
	inline ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701  get_data_1() const { return ___data_1; }
	inline ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701  value)
	{
		___data_1 = value;
	}
};


// UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>
struct VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740  : public VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB
{
public:
	// T UnityEngine.Rendering.VolumeParameter`1::m_Value
	int32_t ___m_Value_2;

public:
	inline static int32_t get_offset_of_m_Value_2() { return static_cast<int32_t>(offsetof(VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740, ___m_Value_2)); }
	inline int32_t get_m_Value_2() const { return ___m_Value_2; }
	inline int32_t* get_address_of_m_Value_2() { return &___m_Value_2; }
	inline void set_m_Value_2(int32_t value)
	{
		___m_Value_2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_cookieID_1() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieID_1)); }
	inline int32_t get_cookieID_1() const { return ___cookieID_1; }
	inline int32_t* get_address_of_cookieID_1() { return &___cookieID_1; }
	inline void set_cookieID_1(int32_t value)
	{
		___cookieID_1 = value;
	}

	inline static int32_t get_offset_of_cookieScale_2() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieScale_2)); }
	inline float get_cookieScale_2() const { return ___cookieScale_2; }
	inline float* get_address_of_cookieScale_2() { return &___cookieScale_2; }
	inline void set_cookieScale_2(float value)
	{
		___cookieScale_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___color_3)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_3() const { return ___color_3; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_indirectColor_4() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___indirectColor_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_4() const { return ___indirectColor_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_4() { return &___indirectColor_4; }
	inline void set_indirectColor_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___orientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_5() const { return ___orientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_6() const { return ___position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_coneAngle_8() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___coneAngle_8)); }
	inline float get_coneAngle_8() const { return ___coneAngle_8; }
	inline float* get_address_of_coneAngle_8() { return &___coneAngle_8; }
	inline void set_coneAngle_8(float value)
	{
		___coneAngle_8 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_9() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___innerConeAngle_9)); }
	inline float get_innerConeAngle_9() const { return ___innerConeAngle_9; }
	inline float* get_address_of_innerConeAngle_9() { return &___innerConeAngle_9; }
	inline void set_innerConeAngle_9(float value)
	{
		___innerConeAngle_9 = value;
	}

	inline static int32_t get_offset_of_shape0_10() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape0_10)); }
	inline float get_shape0_10() const { return ___shape0_10; }
	inline float* get_address_of_shape0_10() { return &___shape0_10; }
	inline void set_shape0_10(float value)
	{
		___shape0_10 = value;
	}

	inline static int32_t get_offset_of_shape1_11() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape1_11)); }
	inline float get_shape1_11() const { return ___shape1_11; }
	inline float* get_address_of_shape1_11() { return &___shape1_11; }
	inline void set_shape1_11(float value)
	{
		___shape1_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___type_12)); }
	inline uint8_t get_type_12() const { return ___type_12; }
	inline uint8_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(uint8_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_mode_13() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___mode_13)); }
	inline uint8_t get_mode_13() const { return ___mode_13; }
	inline uint8_t* get_address_of_mode_13() { return &___mode_13; }
	inline void set_mode_13(uint8_t value)
	{
		___mode_13 = value;
	}

	inline static int32_t get_offset_of_shadow_14() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shadow_14)); }
	inline uint8_t get_shadow_14() const { return ___shadow_14; }
	inline uint8_t* get_address_of_shadow_14() { return &___shadow_14; }
	inline void set_shadow_14(uint8_t value)
	{
		___shadow_14 = value;
	}

	inline static int32_t get_offset_of_falloff_15() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___falloff_15)); }
	inline uint8_t get_falloff_15() const { return ___falloff_15; }
	inline uint8_t* get_address_of_falloff_15() { return &___falloff_15; }
	inline void set_falloff_15(uint8_t value)
	{
		___falloff_15 = value;
	}
};


// UnityEngine.Rendering.RasterState
struct RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E 
{
public:
	// UnityEngine.Rendering.CullMode UnityEngine.Rendering.RasterState::m_CullingMode
	int32_t ___m_CullingMode_1;
	// System.Int32 UnityEngine.Rendering.RasterState::m_OffsetUnits
	int32_t ___m_OffsetUnits_2;
	// System.Single UnityEngine.Rendering.RasterState::m_OffsetFactor
	float ___m_OffsetFactor_3;
	// System.Byte UnityEngine.Rendering.RasterState::m_DepthClip
	uint8_t ___m_DepthClip_4;
	// System.Byte UnityEngine.Rendering.RasterState::m_Conservative
	uint8_t ___m_Conservative_5;
	// System.Byte UnityEngine.Rendering.RasterState::m_Padding1
	uint8_t ___m_Padding1_6;
	// System.Byte UnityEngine.Rendering.RasterState::m_Padding2
	uint8_t ___m_Padding2_7;

public:
	inline static int32_t get_offset_of_m_CullingMode_1() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_CullingMode_1)); }
	inline int32_t get_m_CullingMode_1() const { return ___m_CullingMode_1; }
	inline int32_t* get_address_of_m_CullingMode_1() { return &___m_CullingMode_1; }
	inline void set_m_CullingMode_1(int32_t value)
	{
		___m_CullingMode_1 = value;
	}

	inline static int32_t get_offset_of_m_OffsetUnits_2() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_OffsetUnits_2)); }
	inline int32_t get_m_OffsetUnits_2() const { return ___m_OffsetUnits_2; }
	inline int32_t* get_address_of_m_OffsetUnits_2() { return &___m_OffsetUnits_2; }
	inline void set_m_OffsetUnits_2(int32_t value)
	{
		___m_OffsetUnits_2 = value;
	}

	inline static int32_t get_offset_of_m_OffsetFactor_3() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_OffsetFactor_3)); }
	inline float get_m_OffsetFactor_3() const { return ___m_OffsetFactor_3; }
	inline float* get_address_of_m_OffsetFactor_3() { return &___m_OffsetFactor_3; }
	inline void set_m_OffsetFactor_3(float value)
	{
		___m_OffsetFactor_3 = value;
	}

	inline static int32_t get_offset_of_m_DepthClip_4() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_DepthClip_4)); }
	inline uint8_t get_m_DepthClip_4() const { return ___m_DepthClip_4; }
	inline uint8_t* get_address_of_m_DepthClip_4() { return &___m_DepthClip_4; }
	inline void set_m_DepthClip_4(uint8_t value)
	{
		___m_DepthClip_4 = value;
	}

	inline static int32_t get_offset_of_m_Conservative_5() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_Conservative_5)); }
	inline uint8_t get_m_Conservative_5() const { return ___m_Conservative_5; }
	inline uint8_t* get_address_of_m_Conservative_5() { return &___m_Conservative_5; }
	inline void set_m_Conservative_5(uint8_t value)
	{
		___m_Conservative_5 = value;
	}

	inline static int32_t get_offset_of_m_Padding1_6() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_Padding1_6)); }
	inline uint8_t get_m_Padding1_6() const { return ___m_Padding1_6; }
	inline uint8_t* get_address_of_m_Padding1_6() { return &___m_Padding1_6; }
	inline void set_m_Padding1_6(uint8_t value)
	{
		___m_Padding1_6 = value;
	}

	inline static int32_t get_offset_of_m_Padding2_7() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E, ___m_Padding2_7)); }
	inline uint8_t get_m_Padding2_7() const { return ___m_Padding2_7; }
	inline uint8_t* get_address_of_m_Padding2_7() { return &___m_Padding2_7; }
	inline void set_m_Padding2_7(uint8_t value)
	{
		___m_Padding2_7 = value;
	}
};

struct RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E_StaticFields
{
public:
	// UnityEngine.Rendering.RasterState UnityEngine.Rendering.RasterState::defaultValue
	RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  ___defaultValue_0;

public:
	inline static int32_t get_offset_of_defaultValue_0() { return static_cast<int32_t>(offsetof(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E_StaticFields, ___defaultValue_0)); }
	inline RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  get_defaultValue_0() const { return ___defaultValue_0; }
	inline RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E * get_address_of_defaultValue_0() { return &___defaultValue_0; }
	inline void set_defaultValue_0(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  value)
	{
		___defaultValue_0 = value;
	}
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Rendering.VisibleLight
struct VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B 
{
public:
	// UnityEngine.LightType UnityEngine.Rendering.VisibleLight::m_LightType
	int32_t ___m_LightType_0;
	// UnityEngine.Color UnityEngine.Rendering.VisibleLight::m_FinalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_FinalColor_1;
	// UnityEngine.Rect UnityEngine.Rendering.VisibleLight::m_ScreenRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_ScreenRect_2;
	// UnityEngine.Matrix4x4 UnityEngine.Rendering.VisibleLight::m_LocalToWorldMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_LocalToWorldMatrix_3;
	// System.Single UnityEngine.Rendering.VisibleLight::m_Range
	float ___m_Range_4;
	// System.Single UnityEngine.Rendering.VisibleLight::m_SpotAngle
	float ___m_SpotAngle_5;
	// System.Int32 UnityEngine.Rendering.VisibleLight::m_InstanceId
	int32_t ___m_InstanceId_6;
	// UnityEngine.Rendering.VisibleLightFlags UnityEngine.Rendering.VisibleLight::m_Flags
	int32_t ___m_Flags_7;

public:
	inline static int32_t get_offset_of_m_LightType_0() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_LightType_0)); }
	inline int32_t get_m_LightType_0() const { return ___m_LightType_0; }
	inline int32_t* get_address_of_m_LightType_0() { return &___m_LightType_0; }
	inline void set_m_LightType_0(int32_t value)
	{
		___m_LightType_0 = value;
	}

	inline static int32_t get_offset_of_m_FinalColor_1() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_FinalColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_FinalColor_1() const { return ___m_FinalColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_FinalColor_1() { return &___m_FinalColor_1; }
	inline void set_m_FinalColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_FinalColor_1 = value;
	}

	inline static int32_t get_offset_of_m_ScreenRect_2() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_ScreenRect_2)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_ScreenRect_2() const { return ___m_ScreenRect_2; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_ScreenRect_2() { return &___m_ScreenRect_2; }
	inline void set_m_ScreenRect_2(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_ScreenRect_2 = value;
	}

	inline static int32_t get_offset_of_m_LocalToWorldMatrix_3() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_LocalToWorldMatrix_3)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_LocalToWorldMatrix_3() const { return ___m_LocalToWorldMatrix_3; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_LocalToWorldMatrix_3() { return &___m_LocalToWorldMatrix_3; }
	inline void set_m_LocalToWorldMatrix_3(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_LocalToWorldMatrix_3 = value;
	}

	inline static int32_t get_offset_of_m_Range_4() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_Range_4)); }
	inline float get_m_Range_4() const { return ___m_Range_4; }
	inline float* get_address_of_m_Range_4() { return &___m_Range_4; }
	inline void set_m_Range_4(float value)
	{
		___m_Range_4 = value;
	}

	inline static int32_t get_offset_of_m_SpotAngle_5() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_SpotAngle_5)); }
	inline float get_m_SpotAngle_5() const { return ___m_SpotAngle_5; }
	inline float* get_address_of_m_SpotAngle_5() { return &___m_SpotAngle_5; }
	inline void set_m_SpotAngle_5(float value)
	{
		___m_SpotAngle_5 = value;
	}

	inline static int32_t get_offset_of_m_InstanceId_6() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_InstanceId_6)); }
	inline int32_t get_m_InstanceId_6() const { return ___m_InstanceId_6; }
	inline int32_t* get_address_of_m_InstanceId_6() { return &___m_InstanceId_6; }
	inline void set_m_InstanceId_6(int32_t value)
	{
		___m_InstanceId_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17, ___data_1)); }
	inline LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  get_data_1() const { return ___data_1; }
	inline LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.VisibleLight>
struct AlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C, ___data_1)); }
	inline VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  get_data_1() const { return ___data_1; }
	inline VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  value)
	{
		___data_1 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rendering.RenderStateBlock
struct RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D 
{
public:
	// UnityEngine.Rendering.BlendState UnityEngine.Rendering.RenderStateBlock::m_BlendState
	BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34  ___m_BlendState_0;
	// UnityEngine.Rendering.RasterState UnityEngine.Rendering.RenderStateBlock::m_RasterState
	RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  ___m_RasterState_1;
	// UnityEngine.Rendering.DepthState UnityEngine.Rendering.RenderStateBlock::m_DepthState
	DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA  ___m_DepthState_2;
	// UnityEngine.Rendering.StencilState UnityEngine.Rendering.RenderStateBlock::m_StencilState
	StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007  ___m_StencilState_3;
	// System.Int32 UnityEngine.Rendering.RenderStateBlock::m_StencilReference
	int32_t ___m_StencilReference_4;
	// UnityEngine.Rendering.RenderStateMask UnityEngine.Rendering.RenderStateBlock::m_Mask
	int32_t ___m_Mask_5;

public:
	inline static int32_t get_offset_of_m_BlendState_0() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_BlendState_0)); }
	inline BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34  get_m_BlendState_0() const { return ___m_BlendState_0; }
	inline BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34 * get_address_of_m_BlendState_0() { return &___m_BlendState_0; }
	inline void set_m_BlendState_0(BlendState_t09DFE151438C901F8F49E436A9C3AFFE7B4BBF34  value)
	{
		___m_BlendState_0 = value;
	}

	inline static int32_t get_offset_of_m_RasterState_1() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_RasterState_1)); }
	inline RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  get_m_RasterState_1() const { return ___m_RasterState_1; }
	inline RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E * get_address_of_m_RasterState_1() { return &___m_RasterState_1; }
	inline void set_m_RasterState_1(RasterState_tCE938359A754790604BA6BDF3A2C688A691D0B9E  value)
	{
		___m_RasterState_1 = value;
	}

	inline static int32_t get_offset_of_m_DepthState_2() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_DepthState_2)); }
	inline DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA  get_m_DepthState_2() const { return ___m_DepthState_2; }
	inline DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA * get_address_of_m_DepthState_2() { return &___m_DepthState_2; }
	inline void set_m_DepthState_2(DepthState_t5EED2586BDDA2B0B997E9B5CBBFCE5B59108E4EA  value)
	{
		___m_DepthState_2 = value;
	}

	inline static int32_t get_offset_of_m_StencilState_3() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_StencilState_3)); }
	inline StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007  get_m_StencilState_3() const { return ___m_StencilState_3; }
	inline StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007 * get_address_of_m_StencilState_3() { return &___m_StencilState_3; }
	inline void set_m_StencilState_3(StencilState_tB28C694E61104FAA8E48C56B6604DCA7911DB007  value)
	{
		___m_StencilState_3 = value;
	}

	inline static int32_t get_offset_of_m_StencilReference_4() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_StencilReference_4)); }
	inline int32_t get_m_StencilReference_4() const { return ___m_StencilReference_4; }
	inline int32_t* get_address_of_m_StencilReference_4() { return &___m_StencilReference_4; }
	inline void set_m_StencilReference_4(int32_t value)
	{
		___m_StencilReference_4 = value;
	}

	inline static int32_t get_offset_of_m_Mask_5() { return static_cast<int32_t>(offsetof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D, ___m_Mask_5)); }
	inline int32_t get_m_Mask_5() const { return ___m_Mask_5; }
	inline int32_t* get_address_of_m_Mask_5() { return &___m_Mask_5; }
	inline void set_m_Mask_5(int32_t value)
	{
		___m_Mask_5 = value;
	}
};


// UnityEngine.Rendering.VolumeComponent
struct VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.Rendering.VolumeComponent::active
	bool ___active_4;
	// System.String UnityEngine.Rendering.VolumeComponent::<displayName>k__BackingField
	String_t* ___U3CdisplayNameU3Ek__BackingField_5;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Rendering.VolumeParameter> UnityEngine.Rendering.VolumeComponent::<parameters>k__BackingField
	ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 * ___U3CparametersU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Rendering.VolumeComponent::m_AdvancedMode
	bool ___m_AdvancedMode_7;

public:
	inline static int32_t get_offset_of_active_4() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___active_4)); }
	inline bool get_active_4() const { return ___active_4; }
	inline bool* get_address_of_active_4() { return &___active_4; }
	inline void set_active_4(bool value)
	{
		___active_4 = value;
	}

	inline static int32_t get_offset_of_U3CdisplayNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___U3CdisplayNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CdisplayNameU3Ek__BackingField_5() const { return ___U3CdisplayNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CdisplayNameU3Ek__BackingField_5() { return &___U3CdisplayNameU3Ek__BackingField_5; }
	inline void set_U3CdisplayNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CdisplayNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdisplayNameU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CparametersU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___U3CparametersU3Ek__BackingField_6)); }
	inline ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 * get_U3CparametersU3Ek__BackingField_6() const { return ___U3CparametersU3Ek__BackingField_6; }
	inline ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 ** get_address_of_U3CparametersU3Ek__BackingField_6() { return &___U3CparametersU3Ek__BackingField_6; }
	inline void set_U3CparametersU3Ek__BackingField_6(ReadOnlyCollection_1_tB9AEF10E3DB0F627AE88E55EEF3F489697BF5BB5 * value)
	{
		___U3CparametersU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CparametersU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_AdvancedMode_7() { return static_cast<int32_t>(offsetof(VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E, ___m_AdvancedMode_7)); }
	inline bool get_m_AdvancedMode_7() const { return ___m_AdvancedMode_7; }
	inline bool* get_address_of_m_AdvancedMode_7() { return &___m_AdvancedMode_7; }
	inline void set_m_AdvancedMode_7(bool value)
	{
		___m_AdvancedMode_7 = value;
	}
};


// UnityEngine.Rendering.VolumeProfile
struct VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent> UnityEngine.Rendering.VolumeProfile::components
	List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * ___components_4;
	// System.Boolean UnityEngine.Rendering.VolumeProfile::isDirty
	bool ___isDirty_5;

public:
	inline static int32_t get_offset_of_components_4() { return static_cast<int32_t>(offsetof(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821, ___components_4)); }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * get_components_4() const { return ___components_4; }
	inline List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 ** get_address_of_components_4() { return &___components_4; }
	inline void set_components_4(List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * value)
	{
		___components_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___components_4), (void*)value);
	}

	inline static int32_t get_offset_of_isDirty_5() { return static_cast<int32_t>(offsetof(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821, ___isDirty_5)); }
	inline bool get_isDirty_5() const { return ___isDirty_5; }
	inline bool* get_address_of_isDirty_5() { return &___isDirty_5; }
	inline void set_isDirty_5(bool value)
	{
		___isDirty_5 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.RenderStateBlock>
struct AlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5, ___data_1)); }
	inline RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  get_data_1() const { return ___data_1; }
	inline RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  value)
	{
		___data_1 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Rendering.Volume
struct Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UnityEngine.Rendering.Volume::isGlobal
	bool ___isGlobal_4;
	// System.Single UnityEngine.Rendering.Volume::priority
	float ___priority_5;
	// System.Single UnityEngine.Rendering.Volume::blendDistance
	float ___blendDistance_6;
	// System.Single UnityEngine.Rendering.Volume::weight
	float ___weight_7;
	// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::sharedProfile
	VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * ___sharedProfile_8;
	// System.Int32 UnityEngine.Rendering.Volume::m_PreviousLayer
	int32_t ___m_PreviousLayer_9;
	// System.Single UnityEngine.Rendering.Volume::m_PreviousPriority
	float ___m_PreviousPriority_10;
	// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::m_InternalProfile
	VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * ___m_InternalProfile_11;

public:
	inline static int32_t get_offset_of_isGlobal_4() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___isGlobal_4)); }
	inline bool get_isGlobal_4() const { return ___isGlobal_4; }
	inline bool* get_address_of_isGlobal_4() { return &___isGlobal_4; }
	inline void set_isGlobal_4(bool value)
	{
		___isGlobal_4 = value;
	}

	inline static int32_t get_offset_of_priority_5() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___priority_5)); }
	inline float get_priority_5() const { return ___priority_5; }
	inline float* get_address_of_priority_5() { return &___priority_5; }
	inline void set_priority_5(float value)
	{
		___priority_5 = value;
	}

	inline static int32_t get_offset_of_blendDistance_6() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___blendDistance_6)); }
	inline float get_blendDistance_6() const { return ___blendDistance_6; }
	inline float* get_address_of_blendDistance_6() { return &___blendDistance_6; }
	inline void set_blendDistance_6(float value)
	{
		___blendDistance_6 = value;
	}

	inline static int32_t get_offset_of_weight_7() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___weight_7)); }
	inline float get_weight_7() const { return ___weight_7; }
	inline float* get_address_of_weight_7() { return &___weight_7; }
	inline void set_weight_7(float value)
	{
		___weight_7 = value;
	}

	inline static int32_t get_offset_of_sharedProfile_8() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___sharedProfile_8)); }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * get_sharedProfile_8() const { return ___sharedProfile_8; }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 ** get_address_of_sharedProfile_8() { return &___sharedProfile_8; }
	inline void set_sharedProfile_8(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * value)
	{
		___sharedProfile_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedProfile_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousLayer_9() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___m_PreviousLayer_9)); }
	inline int32_t get_m_PreviousLayer_9() const { return ___m_PreviousLayer_9; }
	inline int32_t* get_address_of_m_PreviousLayer_9() { return &___m_PreviousLayer_9; }
	inline void set_m_PreviousLayer_9(int32_t value)
	{
		___m_PreviousLayer_9 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPriority_10() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___m_PreviousPriority_10)); }
	inline float get_m_PreviousPriority_10() const { return ___m_PreviousPriority_10; }
	inline float* get_address_of_m_PreviousPriority_10() { return &___m_PreviousPriority_10; }
	inline void set_m_PreviousPriority_10(float value)
	{
		___m_PreviousPriority_10 = value;
	}

	inline static int32_t get_offset_of_m_InternalProfile_11() { return static_cast<int32_t>(offsetof(Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E, ___m_InternalProfile_11)); }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * get_m_InternalProfile_11() const { return ___m_InternalProfile_11; }
	inline VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 ** get_address_of_m_InternalProfile_11() { return &___m_InternalProfile_11; }
	inline void set_m_InternalProfile_11(VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * value)
	{
		___m_InternalProfile_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalProfile_11), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C  Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Assertions.Assert::IsNotNull<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisRuntimeObject_m55EFDAA397D9E255C8A38AEB4AC3E0C49D0FB3E8_gshared (RuntimeObject * ___value0, const RuntimeMethod* method);

// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::GetEnumerator()
inline Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2 (Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  (*) (Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m17437D82A5AF502166F10DD12B5C5830DDB95444_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::get_Current()
inline KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_inline (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  (*) (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *, const RuntimeMethod*))Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_inline (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::get_Value()
inline List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_inline (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 * __this, const RuntimeMethod* method)
{
	return ((  List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * (*) (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>::GetEnumerator()
inline Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8 (List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  (*) (List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Volume>::get_Current()
inline Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_inline (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 * __this, const RuntimeMethod* method)
{
	return ((  Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * (*) (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// UnityEngine.Rendering.VolumeProfile UnityEngine.Rendering.Volume::get_profileRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * Volume_get_profileRef_mD5E838C1AF9D9910187C2A26004E32813359618C (Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.Volume>::MoveNext()
inline bool Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692 (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Collections.Generic.List`1<UnityEngine.Rendering.Volume>>::MoveNext()
inline bool Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *, const RuntimeMethod*))Enumerator_MoveNext_mEEAA9A380252BB2F9B2403853F4C00F2F643ADC4_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Rendering.VolumeComponent UnityEngine.Rendering.VolumeProfile::Add(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * VolumeProfile_Add_m79223D2CF959C9E6D63D9FF846FF1B6A3B00FD10 (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, bool ___overrides1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Rendering.VolumeProfile::Has(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_Has_m4B7E73066F4F7D7A45656DA57A7C994260BD089D (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Void UnityEngine.Rendering.VolumeProfile::Remove(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeProfile_Remove_m932397236384F0E991CE7113270E019856DB5E86 (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>::GetEnumerator()
inline Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42 (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  (*) (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>::get_Current()
inline VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_inline (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB * __this, const RuntimeMethod* method)
{
	return ((  VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * (*) (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Rendering.VolumeComponent>::MoveNext()
inline bool Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143 (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void UnityEngine.Assertions.Assert::IsNotNull<System.Collections.Generic.List`1<UnityEngine.Rendering.VolumeComponent>>(!!0)
inline void Assert_IsNotNull_TisList_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28_mD240793205763EDAFC6429BBE43AFDBC2BCE0AE6 (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * ___value0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *, const RuntimeMethod*))Assert_IsNotNull_TisRuntimeObject_m55EFDAA397D9E255C8A38AEB4AC3E0C49D0FB3E8_gshared)(___value0, method);
}
// UnityEngine.Rendering.VolumeComponent UnityEngine.Rendering.VolumeStack::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * VolumeStack_GetComponent_m2C8AE635D2EE506EE0C2C436D6F5017DB10B288E (VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * __this, Type_t * ___type0, const RuntimeMethod* method);
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.Universal.PreTile>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  UnsafeUtility_ReadArrayElement_TisPreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36_mF7AABFA51DB839F297ECE907AC7996AE7911E181_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 );
		PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  L_3 = (*(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.RenderStateBlock>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  UnsafeUtility_ReadArrayElement_TisRenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D_mFBE5BE7FF39A7AC11E4C880161A2F47F67528EAB_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D );
		RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  L_3 = (*(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.ShaderTagId>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  UnsafeUtility_ReadArrayElement_TisShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_mD7A3CB1DA7D933A5FD5A3A5A50AF375C37A58B89_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 );
		ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  L_3 = (*(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt16>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t UnsafeUtility_ReadArrayElement_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m437E620086BA4C6B58E2748F294D1CEF240FA3CE_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = (*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint16_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mE811E8D32BDD37FAA30D65CCC1FCD5CF752FC61D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.VisibleLight>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  UnsafeUtility_ReadArrayElement_TisVisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B_mA1324B8AB6F36FFE7FD2D8010087C50511415B94_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B );
		VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  L_3 = (*(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.Mathematics.uint4>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92  UnsafeUtility_ReadArrayElement_Tisuint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92_mE13D93A40878C6C7133CEA5B9F21C107C2E4F212_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 );
		uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92  L_3 = (*(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  UnsafeUtility_ReadArrayElement_TisPrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609_m41CE69BC7A22EF963229E3E1F1E9C46C7D701748_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 );
		PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  L_3 = (*(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893  UnsafeUtility_ReadArrayElement_TisParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893_mEA4B211431E0AADF6E9A6EB676518AC0F2CC368D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 );
		ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893  L_3 = (*(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC  UnsafeUtility_ReadArrayElement_TisSpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC_m1BF032187974283A00A4BC60D30D1F819CB64606_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC );
		SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC  L_3 = (*(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.Universal.ShaderInput/LightData>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  UnsafeUtility_ReadArrayElement_TisLightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135_mD52FC20EBF30668DAC51B69F751DE8FD0BC6EAEC_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 );
		LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  L_3 = (*(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.Universal.ShaderInput/ShadowData>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701  UnsafeUtility_ReadArrayElement_TisShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701_m65D9D5FA749135EE82D49AFBA60E259FB6A1442B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 );
		ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701  L_3 = (*(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<System.Object>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElementWithStride_TisRuntimeObject_mF8EABB0D4879066BA75A629F50475A868FFD74DE_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (RuntimeObject *)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.Vector2>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  UnsafeUtility_ReadArrayElementWithStride_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m023D2F4D8C9081130593445A6603DACFA5E863DD_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = (*(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<UnityEngine.Vector3>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UnsafeUtility_ReadArrayElementWithStride_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m603AFD29C1F76DAAE7C65D53BBD207AA4E1C9CD3_gshared (void* ___source0, int32_t ___index1, int32_t ___stride2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___stride2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)L_2))))))));
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F_m4F09A05D3DD170DFA1F796E0A8FA0B313C65725B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A_m483AA7FC51E6A112FC0A4D06D38B11D37DFEF879_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1_mDA545781E7F1E51EA4B8806FE9681D3A0680C2BF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32Enum>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9_mA0E7E6DAD0CC9A9A8B9E1D78178F760C37DA4F0E_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tCE1A64729C77D887494347131F5B7B7DB93A65E9 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Jobs.JobHandle>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599_m33EE3278DDDF83B87C75ADBE8CD81340537E48BA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF92BC8515278E9FDC04A216B1393D0B9BEC9C599 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17_m78DEA1E58B4D9D6E271BFF9B14011D45ED34B031_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893_m7C04B3AA1BAA024C62459AAFF0C635C222310A16_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.PreTile>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0903321CE301477697201BC084A409846158443E_m9C459E8F6999C891DF925B0C49C093CDB5F20895_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0903321CE301477697201BC084A409846158443E );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.RenderStateBlock>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5_m884F709E2A71175E8EFB0B158C0B0772F4BC23DA_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6B1BA3DA7D249FEF24864C245614576490667AA5 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.ShaderTagId>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC_mE7A004863EFAA62A2EC22E6A1D0B8232CB402446_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC7C293DC0FCBC37AD2AEB9CC97019AE26E68DDBC );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt16>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863_m6084EEE82C0053C6CC1377753D3FE05B38701259_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t84B0D514478CAD691346D8A78F869BF54A4DF863 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0_m63AA9F73125758E2B2AE66DB1D84431649E73D40_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.VisibleLight>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C_m26E2230C824055D0B19E9272DE0AF27CBA1B4528_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tAA841EA1C06614BC9B5A33B37232CB6A7FAE3E0C );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<Unity.Mathematics.uint4>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD1FAAB900EAA9C85D383FA2EFE082138B27FB0FB_mC2D30E442BBFD7178BA02BABC2FF2CB6BDEC30A9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD1FAAB900EAA9C85D383FA2EFE082138B27FB0FB );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE_mD9B7F883AC8C804D135B24E7C8EE7619B9AD5B0B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tD156DB5C4278919EB91BB2C8C2A6C22B728282DE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8A44F087C4667982392B6430319A3508103E5799_mC65B2603F981B1E4C0DE2C323DD8B55FC3FD9D90_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8A44F087C4667982392B6430319A3508103E5799 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tE51A42CDF939261B479B3E0EE4FD18B36B7C1D95_mAEE2D7D1A1831CBE94BD39A5AEE400FF3E63D006_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tE51A42CDF939261B479B3E0EE4FD18B36B7C1D95 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.ShaderInput/LightData>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE_m8ADFB5C08222255666FEC07791A5D227F3D8B8B9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB000AF4E0947721913285791B8E6BE96B0AF88FE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.Universal.ShaderInput/ShadowData>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC90B8A600D3C4DEC6CD533824B027FEE08718DFA_mEBB544E7529F745B13531FD475FBE9BB351B4CEB_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC90B8A600D3C4DEC6CD533824B027FEE08718DFA );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m59EADA64485304CCC918007EE51D37E128AB411D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC38689A53E959AC0D3F9C9BF89F277C4A1D23BBF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC154751B6ED1926446C432F482791D0C5D3F663A_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_mFC3373190B3BE1CF7E7594D8E6A3FBC6251EA6DB_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Jobs.JobHandle>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisJobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847_mB8BE33706393D81F4A306DC4F21101B9984790B9_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mBBB6CBF143991B044213D375125D1E6F3352FF81_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_m223C8A2842490CA74E75B2180AEE83873D0A4696_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.Universal.PreTile>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36_m41D2920E7AA1DE26CB4F157F35FB633311906DDF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.RenderStateBlock>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisRenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D_m3F52D380A8E021AC8C3ADA685D00806AAE67C0A2_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.ShaderTagId>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_m70E058D6701D167F8354DD4CEE2D914E4FC6C4E8_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m9B19BBBE3E9CCFB3A08C9D69CB28B95159A85CE8_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mF52F526110B94ADBF53DDE17836AA18E0295A75B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mB0BA7AC549DE2A13AFD6C8FAF906DFABF03C148D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m8508D752DDCACDDA57921C7B14C2ABAB9E07C134_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.VisibleLight>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B_m646EEDD295B5FD3B9B23942BF10F0E1CC6AFEFFE_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Mathematics.uint4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisuint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92_m34261319E0C0223774E92DBB420EDEDFF460D296_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609_m45201220267E0F6FE36D6C25A8687DB158DC73B1_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893_m14FA8C16B323E3429CB38287D45070ADF3DB8B91_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC_m27894ED816D7D61CD418120118B6F56D88F316D4_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.Universal.ShaderInput/LightData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135_m735CE9946766A6D6AA7AC4CAF90B6C19691B38E7_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.Universal.ShaderInput/ShadowData>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701_m0DD8A6529DF0ED869908650B2762C4F2A6D50750_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 );
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_mC2658E4BCDD5CB7B35E546FAE518CF3C4102626E_gshared (void* ___destination0, int32_t ___index1, BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = ___value2;
		*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Byte>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB82F9E11B8FEC9E090AEA6C9C2C8A611682E7825_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32Enum>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m91AF1394BF925AC69C4DB49A768CE325DCEC86F7_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<Unity.Jobs.JobHandle>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisJobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847_m9550EC6555F13E73171430AE37B9CE94FD028933_gshared (void* ___destination0, int32_t ___index1, JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 );
		JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847  L_3 = ___value2;
		*(JobHandle_t8AEB8D31C25D7774C71D62B0C662525E6E36D847 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mB7E008D6D4C2008C47D4D71528F6AE7AFCF0B7CB_gshared (void* ___destination0, int32_t ___index1, LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = ___value2;
		*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Object>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRuntimeObject_mA6478546A0D6B20061E1DAF0862A895CF5D8C044_gshared (void* ___destination0, int32_t ___index1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = ___value2;
		*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Plane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mB75E0A57B03F72BC1744169D7F4F8CF73AD98915_gshared (void* ___destination0, int32_t ___index1, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = ___value2;
		*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.Universal.PreTile>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36_mB212BA28988EFB69FE48BB056D8A9CB84B735C35_gshared (void* ___destination0, int32_t ___index1, PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 );
		PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36  L_3 = ___value2;
		*(PreTile_t4C3B1DD1A0BC90B618CEE8D0102DBC58FF119F36 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.RenderStateBlock>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D_m9A96A6D9077362448A097F104D28577AAD0DED7C_gshared (void* ___destination0, int32_t ___index1, RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D );
		RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D  L_3 = ___value2;
		*(RenderStateBlock_tF93A39FEEF559096371ABBB792D58DFF892C240D *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.ShaderTagId>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795_mC64EA71F5974E291357EA90886B310D25753E16A_gshared (void* ___destination0, int32_t ___index1, ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 );
		ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795  L_3 = ___value2;
		*(ShaderTagId_t51914C89B8119195DACD234D1A624AAB7A07F795 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt16>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m3B55A7136E970C6B720C970679FAEBCBA17BE71B_gshared (void* ___destination0, int32_t ___index1, uint16_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint16_t);
		uint16_t L_3 = ___value2;
		*(uint16_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mD0CF58950EF1EBF39DB359EBC77FF0DC6582778F_gshared (void* ___destination0, int32_t ___index1, uint32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = ___value2;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.VisibleLight>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B_mA1CEF75704B5BF5CDE5604984A607303955B6588_gshared (void* ___destination0, int32_t ___index1, VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B );
		VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B  L_3 = ___value2;
		*(VisibleLight_t72748A05D894B8E7CBD6F03B858BEE8E8CAF065B *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<Unity.Mathematics.uint4>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisuint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92_mD2690690426D5884D6D437DE7FE8D5AF25846A03_gshared (void* ___destination0, int32_t ___index1, uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 );
		uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92  L_3 = ___value2;
		*(uint4_t6C7A8C67DCDD20CC3282CA4AA5382744FB27EE92 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609_m4208DE708137931352D8E02E9DCD22B2E54EC3F1_gshared (void* ___destination0, int32_t ___index1, PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 );
		PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609  L_3 = ___value2;
		*(PrePunctualLight_t6A6B0358A9D80FE6E10948C365C06F7092A8D609 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.Rendering.Universal.LightUtility/ParametricLightMeshVertex>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893_m8937218D0C2E9C95A58E45929A2C3D27E58DBD5E_gshared (void* ___destination0, int32_t ___index1, ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 );
		ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893  L_3 = ___value2;
		*(ParametricLightMeshVertex_tB82504F406737A009734BC6F80812DAC6B4DE893 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.Rendering.Universal.LightUtility/SpriteLightMeshVertex>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC_mD633B97175476F53CECECED1C86682D7E743150A_gshared (void* ___destination0, int32_t ___index1, SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC );
		SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC  L_3 = ___value2;
		*(SpriteLightMeshVertex_t6B4EA22B1C7FE0AFC97B4E47B3D24031A436CBCC *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.Universal.ShaderInput/LightData>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135_m4BCD116E1E24B10396499A3EF69B31A294B2B23A_gshared (void* ___destination0, int32_t ___index1, LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 );
		LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135  L_3 = ___value2;
		*(LightData_t8C139E4D07ED1FF86DF198773F7F41736AE9B135 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.Universal.ShaderInput/ShadowData>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701_m0FE05FD848EB300682CC74355DEFDA88F093FCC3_gshared (void* ___destination0, int32_t ___index1, ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 );
		ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701  L_3 = ___value2;
		*(ShadowData_t5ACDE96DE7C04AEE2981172CB8996A5E66ED3701 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_m34EC4B420E3B86C8B06957C02A3FDD87D674E50E_gshared (RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_m3392CE290ADB37963BB566664A63096AF6DABAE4_gshared (RuntimeObject ** ___location0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	VolatileWrite(___location0, ___value1);
}
// System.Boolean UnityEngine.Rendering.VolumeManager::IsComponentActiveInMask<System.Object>(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeManager_IsComponentActiveInMask_TisRuntimeObject_m1E6203C9BCF6BAA2CB860F2CAD52304B1C4FC7E2_gshared (VolumeManager_t64478BFF09DC722DD20A7765E7A7C8D36980A181 * __this, LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___layerMask0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * V_5 = NULL;
	RuntimeObject * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	int32_t G_B9_0 = 0;
	int32_t G_B14_0 = 0;
	{
		// int mask = layerMask.value;
		int32_t L_0;
		L_0 = LayerMask_get_value_m6380C7449537F99361797225E179A9448A53DDF9((LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 *)(&___layerMask0), /*hidden argument*/NULL);
		V_0 = (int32_t)L_0;
		// foreach (var kvp in m_SortedVolumes)
		Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D * L_1 = (Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *)__this->get_m_SortedVolumes_4();
		Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5  L_2;
		L_2 = Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2((Dictionary_2_tC06DE9946BE66D63523D54FDD2FD1C19D1E0093D *)L_1, /*hidden argument*/Dictionary_2_GetEnumerator_mAF5ECE514EBBFDF70BC04B74C22FCA11AE8F50F2_RuntimeMethod_var);
		V_1 = (Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 )L_2;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bc;
		}

IL_001b:
		{
			// foreach (var kvp in m_SortedVolumes)
			KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117  L_3;
			L_3 = Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_inline((Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m8AAB63E2716F881CEFF7994A1FC27D1D6D5D0B35_RuntimeMethod_var);
			V_2 = (KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 )L_3;
			// if (kvp.Key != mask)
			int32_t L_4;
			L_4 = KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_inline((KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m592B3F212F5C1D9FD3FBAB391854B3487FA569C7_RuntimeMethod_var);
			int32_t L_5 = V_0;
			V_3 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_6 = V_3;
			if (!L_6)
			{
				goto IL_003a;
			}
		}

IL_0035:
		{
			// continue;
			goto IL_00bc;
		}

IL_003a:
		{
			// foreach (var volume in kvp.Value)
			List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A * L_7;
			L_7 = KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_inline((KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(KeyValuePair_2_tBD4073575F1DFB1021BF33DC80F7EF5D01E89117 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mDD65420B0C51E00EEE7174BC1A9CFB71EEB0D662_RuntimeMethod_var);
			Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5  L_8;
			L_8 = List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8((List_1_tA718C35B9555DC0D96F8699BA6AE76A02BF4C00A *)L_7, /*hidden argument*/List_1_GetEnumerator_mEA25DFFCAB673BD76ADA473172AD1E090CD3B1E8_RuntimeMethod_var);
			V_4 = (Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 )L_8;
		}

IL_0049:
		try
		{ // begin try (depth: 2)
			{
				goto IL_00a1;
			}

IL_004b:
			{
				// foreach (var volume in kvp.Value)
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_9;
				L_9 = Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_inline((Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(&V_4), /*hidden argument*/Enumerator_get_Current_mBE0C626E2FD3A12EB78158C34DC7E59DA8B5B01D_RuntimeMethod_var);
				V_5 = (Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_9;
				// if (!volume.enabled || volume.profileRef == null)
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_10 = V_5;
				bool L_11;
				L_11 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)L_10, /*hidden argument*/NULL);
				if (!L_11)
				{
					goto IL_006d;
				}
			}

IL_005e:
			{
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_12 = V_5;
				VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * L_13;
				L_13 = Volume_get_profileRef_mD5E838C1AF9D9910187C2A26004E32813359618C((Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_12, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
				G_B9_0 = ((int32_t)(L_14));
				goto IL_006e;
			}

IL_006d:
			{
				G_B9_0 = 1;
			}

IL_006e:
			{
				V_7 = (bool)G_B9_0;
				bool L_15 = V_7;
				if (!L_15)
				{
					goto IL_0076;
				}
			}

IL_0074:
			{
				// continue;
				goto IL_00a1;
			}

IL_0076:
			{
				// if (volume.profileRef.TryGet(out T component) && component.active)
				Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E * L_16 = V_5;
				VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * L_17;
				L_17 = Volume_get_profileRef_mD5E838C1AF9D9910187C2A26004E32813359618C((Volume_tE3543CB1D401BA99DF33965B9D79DBA13A5A173E *)L_16, /*hidden argument*/NULL);
				bool L_18;
				L_18 = ((  bool (*) (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)L_17, (RuntimeObject **)(RuntimeObject **)(&V_6), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
				if (!L_18)
				{
					goto IL_0094;
				}
			}

IL_0086:
			{
				RuntimeObject * L_19 = V_6;
				bool L_20 = (bool)((VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_19)->get_active_4();
				G_B14_0 = ((int32_t)(L_20));
				goto IL_0095;
			}

IL_0094:
			{
				G_B14_0 = 0;
			}

IL_0095:
			{
				V_8 = (bool)G_B14_0;
				bool L_21 = V_8;
				if (!L_21)
				{
					goto IL_00a0;
				}
			}

IL_009b:
			{
				// return true;
				V_9 = (bool)1;
				IL2CPP_LEAVE(0xDE, FINALLY_00ac);
			}

IL_00a0:
			{
			}

IL_00a1:
			{
				// foreach (var volume in kvp.Value)
				bool L_22;
				L_22 = Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692((Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m0D7BCA11A6CC28CC9E17BEFA9DDE73BFF38A8692_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_004b;
				}
			}

IL_00aa:
			{
				IL2CPP_LEAVE(0xBB, FINALLY_00ac);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_00ac;
		}

FINALLY_00ac:
		{ // begin finally (depth: 2)
			Il2CppFakeBox<Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5 > L_23(Enumerator_t9CAD86F7FD1B007B45C9AB1DED99672A3A0102B5_il2cpp_TypeInfo_var, (&V_4));
			const VirtualInvokeData& il2cpp_virtual_invoke_data__180 = il2cpp_codegen_get_interface_invoke_data(0, (&L_23), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__180.methodPtr)((RuntimeObject*)(&L_23), /*hidden argument*/il2cpp_virtual_invoke_data__180.method);
			V_4 = L_23.m_Value;
			IL2CPP_END_FINALLY(172)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(172)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xDE, FINALLY_00ca);
			IL2CPP_JUMP_TBL(0xBB, IL_00bb)
		}

IL_00bb:
		{
		}

IL_00bc:
		{
			// foreach (var kvp in m_SortedVolumes)
			bool L_24;
			L_24 = Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B((Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mB8B43115749A7CDECCD1690AF1ECEAA8F78FEC6B_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_001b;
			}
		}

IL_00c8:
		{
			IL2CPP_LEAVE(0xD9, FINALLY_00ca);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ca;
	}

FINALLY_00ca:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5 > L_25(Enumerator_tC66A988193ACE81CF28B37486D8F1647938AF1E5_il2cpp_TypeInfo_var, (&V_1));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__210 = il2cpp_codegen_get_interface_invoke_data(0, (&L_25), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__210.methodPtr)((RuntimeObject*)(&L_25), /*hidden argument*/il2cpp_virtual_invoke_data__210.method);
		V_1 = L_25.m_Value;
		IL2CPP_END_FINALLY(202)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(202)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDE, IL_00de)
		IL2CPP_JUMP_TBL(0xD9, IL_00d9)
	}

IL_00d9:
	{
		// return false;
		V_9 = (bool)0;
		goto IL_00de;
	}

IL_00de:
	{
		// }
		bool L_26 = V_9;
		return (bool)L_26;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeParameter_GetValue_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mA77C6BDE8438CBC4A62266045DD63FD9142AD02D_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return ((VolumeParameter<T>) this).value;
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Boolean>::get_value() */, (VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201 *)((VolumeParameter_1_t5096F05CCD6852CF262ACF232A401187B9E88201 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		V_0 = (bool)L_0;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_1 = V_0;
		return (bool)L_1;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Color>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  VolumeParameter_GetValue_TisColor_tF40DAF76C04FFECF3FE6024F85A294741C9CC659_mF25E7DF7C52C71A95E527DF529EB7EE4BD41167A_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return ((VolumeParameter<T>) this).value;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0;
		L_0 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Color>::get_value() */, (VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A *)((VolumeParameter_1_t39D06592B6BAA00FD18C8FD8893203D1A4F7D11A *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		V_0 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_0;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1 = V_0;
		return (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_1;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_GetValue_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m100ED1424F5963AB5C56D61C97B3427E6F264E6E_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return ((VolumeParameter<T>) this).value;
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32>::get_value() */, (VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)((VolumeParameter_1_tDB3E73C28039660FD6C204191A4FDFA8EFBEC0F7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		V_0 = (int32_t)L_0;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_1 = V_0;
		return (int32_t)L_1;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Int32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VolumeParameter_GetValue_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m3C2FA8119D66B4C3DCD206194A2C58B37156AF2F_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return ((VolumeParameter<T>) this).value;
		int32_t L_0;
		L_0 = VirtFuncInvoker0< int32_t >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Int32Enum>::get_value() */, (VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)((VolumeParameter_1_t6E848A55C514718131AA63DC30EC61DAA73E5740 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		V_0 = (int32_t)L_0;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_1 = V_0;
		return (int32_t)L_1;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.LayerMask>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  VolumeParameter_GetValue_TisLayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8_mF8A79B835E8726F18021939CBB42AAE21BC856FF_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return ((VolumeParameter<T>) this).value;
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_0;
		L_0 = VirtFuncInvoker0< LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.LayerMask>::get_value() */, (VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)((VolumeParameter_1_t410FC9C75201D3D960D598DA98C3FC8765A54F5D *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		V_0 = (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_0;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_1 = V_0;
		return (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 )L_1;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeParameter_GetValue_TisRuntimeObject_mC69574109E6EFA56FF44E63DCFE350FA0CC099AB_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// return ((VolumeParameter<T>) this).value;
		RuntimeObject * L_0;
		L_0 = VirtFuncInvoker0< RuntimeObject * >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Object>::get_value() */, (VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)((VolumeParameter_1_t632335EE356E4A6F435B0D046FC5716C1E5ED6D0 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		V_0 = (RuntimeObject *)L_0;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		RuntimeObject * L_1 = V_0;
		return (RuntimeObject *)L_1;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VolumeParameter_GetValue_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m71A3CFF33EDE42C9127D094FE7BD9808E667AD6C_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return ((VolumeParameter<T>) this).value;
		float L_0;
		L_0 = VirtFuncInvoker0< float >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<System.Single>::get_value() */, (VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)((VolumeParameter_1_tEAD8BA2E1993A0E02F8FDB436B5AB2F66E1036D7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		V_0 = (float)L_0;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		float L_1 = V_0;
		return (float)L_1;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  VolumeParameter_GetValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m0E3F548FE9AC793809DC3C8DBE87742A114FF199_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return ((VolumeParameter<T>) this).value;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = VirtFuncInvoker0< Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector2>::get_value() */, (VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)((VolumeParameter_1_t54ABF950CC6A5A0584DBC3F81D8DDEF4D22270B7 *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		V_0 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_0;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = V_0;
		return (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 )L_1;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  VolumeParameter_GetValue_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m2483CFA48EA8E00EFA323A101A08322806931A02_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return ((VolumeParameter<T>) this).value;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = VirtFuncInvoker0< Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector3>::get_value() */, (VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)((VolumeParameter_1_t2E31F216E46FBD67713E740DF4AA855B19C4130F *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		V_0 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_0;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1;
	}
}
// T UnityEngine.Rendering.VolumeParameter::GetValue<UnityEngine.Vector4>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  VolumeParameter_GetValue_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m8B862B97BA0B205CF27280AC2F68D801241F333A_gshared (VolumeParameter_tC12A1A4DFCC791C06995421E31A6AE4A458D7BCB * __this, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return ((VolumeParameter<T>) this).value;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0;
		L_0 = VirtFuncInvoker0< Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  >::Invoke(12 /* T UnityEngine.Rendering.VolumeParameter`1<UnityEngine.Vector4>::get_value() */, (VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)((VolumeParameter_1_t3F7D5081F862B1E716B24AD243DB90F72E81139C *)Castclass((RuntimeObject*)__this, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
		V_0 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_0;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = V_0;
		return (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 )L_1;
	}
}
// T UnityEngine.Rendering.VolumeProfile::Add<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeProfile_Add_TisRuntimeObject_mCE1E1F8B084190E209D0A8F8237FA7F83751D962_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, bool ___overrides0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// return (T)Add(typeof(T), overrides);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2 = ___overrides0;
		VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_3;
		L_3 = VolumeProfile_Add_m79223D2CF959C9E6D63D9FF846FF1B6A3B00FD10((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, (bool)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001a;
	}

IL_001a:
	{
		// }
		RuntimeObject * L_4 = V_0;
		return (RuntimeObject *)L_4;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::Has<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_Has_TisRuntimeObject_mDB54341DE40B45F7005866878043CF31DBA99100_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return Has(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = VolumeProfile_Has_m4B7E73066F4F7D7A45656DA57A7C994260BD089D((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (bool)L_2;
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
// System.Void UnityEngine.Rendering.VolumeProfile::Remove<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeProfile_Remove_TisRuntimeObject_mF7D69686CD890F54D2E0F7E551EA8543DEB45291_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Remove(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		VolumeProfile_Remove_m932397236384F0E991CE7113270E019856DB5E86((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGet<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_mC7E64B2A6DC984083DED5D6F3E4FDCF0CE5D6026_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return TryGet(typeof(T), out component);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		RuntimeObject ** L_2 = ___component0;
		bool L_3;
		L_3 = ((  bool (*) (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *, Type_t *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 *)__this, (Type_t *)L_1, (RuntimeObject **)(RuntimeObject **)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (bool)L_3;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_4 = V_0;
		return (bool)L_4;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGet<System.Object>(System.Type,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGet_TisRuntimeObject_m4332B8785159649FB61B32048D85429ADD228254_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, RuntimeObject ** ___component1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// component = null;
		RuntimeObject ** L_0 = ___component1;
		il2cpp_codegen_initobj(L_0, sizeof(RuntimeObject *));
		// foreach (var comp in components)
		List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * L_1 = (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)__this->get_components_4();
		Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  L_2;
		L_2 = List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_1, /*hidden argument*/List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		V_0 = (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB )L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_0017:
		{
			// foreach (var comp in components)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_3;
			L_3 = Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_inline((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
			V_1 = (VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_3;
			// if (comp.GetType() == type)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_4 = V_1;
			Type_t * L_5;
			L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
			Type_t * L_6 = ___type0;
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			bool L_7;
			L_7 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_5, (Type_t *)L_6, /*hidden argument*/NULL);
			V_2 = (bool)L_7;
			bool L_8 = V_2;
			if (!L_8)
			{
				goto IL_0041;
			}
		}

IL_0030:
		{
			// component = (T)comp;
			RuntimeObject ** L_9 = ___component1;
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_10 = V_1;
			*(RuntimeObject **)L_9 = ((RuntimeObject *)Castclass((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_9, (void*)((RuntimeObject *)Castclass((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
			// return true;
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x60, FINALLY_004d);
		}

IL_0041:
		{
		}

IL_0042:
		{
			// foreach (var comp in components)
			bool L_11;
			L_11 = Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0017;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB > L_12(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var, (&V_0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__85 = il2cpp_codegen_get_interface_invoke_data(0, (&L_12), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__85.methodPtr)((RuntimeObject*)(&L_12), /*hidden argument*/il2cpp_virtual_invoke_data__85.method);
		V_0 = L_12.m_Value;
		IL2CPP_END_FINALLY(77)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
	}

IL_005c:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		bool L_13 = V_3;
		return (bool)L_13;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGetAllSubclassOf<System.Object>(System.Type,System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGetAllSubclassOf_TisRuntimeObject_mB3CC30C673E5FE2BA12751E91C01F1DC34D5BDC6_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_IsNotNull_TisList_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28_mD240793205763EDAFC6429BBE43AFDBC2BCE0AE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  V_1;
	memset((&V_1), 0, sizeof(V_1));
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Assert.IsNotNull(components);
		List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * L_0 = (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)__this->get_components_4();
		IL2CPP_RUNTIME_CLASS_INIT(Assert_t3AC091724A3B45CF2E68EB3CE3EABC651436F1BC_il2cpp_TypeInfo_var);
		Assert_IsNotNull_TisList_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28_mD240793205763EDAFC6429BBE43AFDBC2BCE0AE6((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_0, /*hidden argument*/Assert_IsNotNull_TisList_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28_mD240793205763EDAFC6429BBE43AFDBC2BCE0AE6_RuntimeMethod_var);
		// int count = result.Count;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = ___result1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (int32_t)L_2;
		// foreach (var comp in components)
		List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * L_3 = (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)__this->get_components_4();
		Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  L_4;
		L_4 = List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_3, /*hidden argument*/List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		V_1 = (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB )L_4;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0023:
		{
			// foreach (var comp in components)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_5;
			L_5 = Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_inline((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_1), /*hidden argument*/Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
			V_2 = (VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_5;
			// if (comp.GetType().IsSubclassOf(type))
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_6 = V_2;
			Type_t * L_7;
			L_7 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_6, /*hidden argument*/NULL);
			Type_t * L_8 = ___type0;
			bool L_9;
			L_9 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, (Type_t *)L_7, (Type_t *)L_8);
			V_3 = (bool)L_9;
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_0049;
			}
		}

IL_003c:
		{
			// result.Add((T)comp);
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_11 = ___result1;
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_12 = V_2;
			((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_11, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_12, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		}

IL_0049:
		{
		}

IL_004a:
		{
			// foreach (var comp in components)
			bool L_13;
			L_13 = Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0023;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB > L_14(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var, (&V_1));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__93 = il2cpp_codegen_get_interface_invoke_data(0, (&L_14), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__93.methodPtr)((RuntimeObject*)(&L_14), /*hidden argument*/il2cpp_virtual_invoke_data__93.method);
		V_1 = L_14.m_Value;
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x64, IL_0064)
	}

IL_0064:
	{
		// return count != result.Count;
		int32_t L_15 = V_0;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_16 = ___result1;
		int32_t L_17;
		L_17 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_4 = (bool)((((int32_t)((((int32_t)L_15) == ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0074;
	}

IL_0074:
	{
		// }
		bool L_18 = V_4;
		return (bool)L_18;
	}
}
// System.Boolean UnityEngine.Rendering.VolumeProfile::TryGetSubclassOf<System.Object>(System.Type,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VolumeProfile_TryGetSubclassOf_TisRuntimeObject_mE8153CC3B89807700D2B70752C6840FAE4135D47_gshared (VolumeProfile_tC8E23990426945665CC6567DF0EB4CEB793FB821 * __this, Type_t * ___type0, RuntimeObject ** ___component1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// component = null;
		RuntimeObject ** L_0 = ___component1;
		il2cpp_codegen_initobj(L_0, sizeof(RuntimeObject *));
		// foreach (var comp in components)
		List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 * L_1 = (List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)__this->get_components_4();
		Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB  L_2;
		L_2 = List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42((List_1_t4B03D7070A864A158E01E9FAA5C07C543884AD28 *)L_1, /*hidden argument*/List_1_GetEnumerator_mC0CD7053C5E07E728C08C2BD188FFBCC202D7B42_RuntimeMethod_var);
		V_0 = (Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB )L_2;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_0017:
		{
			// foreach (var comp in components)
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_3;
			L_3 = Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_inline((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_get_Current_m8856BFA2BC8F42FADE7D7B53A796FDA4DF3DA8E8_RuntimeMethod_var);
			V_1 = (VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_3;
			// if (comp.GetType().IsSubclassOf(type))
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_4 = V_1;
			Type_t * L_5;
			L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
			Type_t * L_6 = ___type0;
			bool L_7;
			L_7 = VirtFuncInvoker1< bool, Type_t * >::Invoke(108 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, (Type_t *)L_5, (Type_t *)L_6);
			V_2 = (bool)L_7;
			bool L_8 = V_2;
			if (!L_8)
			{
				goto IL_0041;
			}
		}

IL_0030:
		{
			// component = (T)comp;
			RuntimeObject ** L_9 = ___component1;
			VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_10 = V_1;
			*(RuntimeObject **)L_9 = ((RuntimeObject *)Castclass((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_9, (void*)((RuntimeObject *)Castclass((RuntimeObject*)L_10, IL2CPP_RGCTX_DATA(method->rgctx_data, 0))));
			// return true;
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x60, FINALLY_004d);
		}

IL_0041:
		{
		}

IL_0042:
		{
			// foreach (var comp in components)
			bool L_11;
			L_11 = Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143((Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m32F2D2DA9B02E09DF6CB0489CDF4E42851B67143_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0017;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5C, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB > L_12(Enumerator_t5ED3C7891E79C6043D0EFB7F96A377500868C5FB_il2cpp_TypeInfo_var, (&V_0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__85 = il2cpp_codegen_get_interface_invoke_data(0, (&L_12), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__85.methodPtr)((RuntimeObject*)(&L_12), /*hidden argument*/il2cpp_virtual_invoke_data__85.method);
		V_0 = L_12.m_Value;
		IL2CPP_END_FINALLY(77)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x60, IL_0060)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
	}

IL_005c:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0060;
	}

IL_0060:
	{
		// }
		bool L_13 = V_3;
		return (bool)L_13;
	}
}
// T UnityEngine.Rendering.VolumeStack::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VolumeStack_GetComponent_TisRuntimeObject_m38AF7B6B1BA6854A1DB152DEEA9E04079D5DFCD6_gshared (VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// var comp = GetComponent(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_2;
		L_2 = VolumeStack_GetComponent_m2C8AE635D2EE506EE0C2C436D6F5017DB10B288E((VolumeStack_t5AFBD6C1F03199FB3426F72E31C494556A16EBAC *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E *)L_2;
		// return (T)comp;
		VolumeComponent_t05C2B80778CC029195A0636BFA10447C5DBF526E * L_3 = V_0;
		V_1 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_001b;
	}

IL_001b:
	{
		// }
		RuntimeObject * L_4 = V_1;
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  Enumerator_get_Current_mE5033FC555E7BC63DDC919B903A8A305C3AADBEB_gshared_inline (Enumerator_t1AD96AD2810CD9FF13D02CD49EC9D4D447C1485C * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0  L_0 = (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )__this->get_current_3();
		return (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mCA6E77030F4BE64105E6B3EFB3CBB8E6EC08CA0A_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mC1E2EFCF98529D0550A547CF87C6EAB6821741BF_gshared_inline (KeyValuePair_2_t56E20A5489EE435FD8BBE3EFACF6219A626E04C0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}

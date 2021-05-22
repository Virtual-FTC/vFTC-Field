#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,HybridWebSocket.WebSocket>
struct Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,HybridWebSocket.WebSocket>
struct KeyCollection_tCE10EC41ADABA3E0056602952AD837746DD3D52B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,HybridWebSocket.WebSocket>
struct ValueCollection_t0ED8AA86CAD53D2DDEC73515F03BE0B99DC127B8;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,HybridWebSocket.WebSocket>[]
struct EntryU5BU5D_t5B59F2A7469CD902C4A8CFAF82E0811936BB827B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// HybridWebSocket.WebSocket
struct WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075;
// HybridWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C;
// HybridWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1;
// HybridWebSocket.WebSocketException
struct WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED;
// HybridWebSocket.WebSocketInvalidArgumentException
struct WebSocketInvalidArgumentException_tD7E9561BACD74991CBC85060CD689118EDA9E1D7;
// HybridWebSocket.WebSocketInvalidStateException
struct WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016;
// HybridWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98;
// HybridWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3;
// HybridWebSocket.WebSocketUnexpectedException
struct WebSocketUnexpectedException_t6AE508E113E560E5D96D2BA639AF3198D60CEB4A;
// HybridWebSocket.WebSocketFactory/OnCloseCallback
struct OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037;
// HybridWebSocket.WebSocketFactory/OnErrorCallback
struct OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41;
// HybridWebSocket.WebSocketFactory/OnMessageCallback
struct OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170;
// HybridWebSocket.WebSocketFactory/OnOpenCallback
struct OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseCode_tD7122C98073DDC2D748FB6315A2492DBABD436EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketInvalidArgumentException_tD7E9561BACD74991CBC85060CD689118EDA9E1D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketUnexpectedException_t6AE508E113E560E5D96D2BA639AF3198D60CEB4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B;
IL2CPP_EXTERN_C String_t* _stringLiteral1742337439BBC66D76773857596C8E79F12FE929;
IL2CPP_EXTERN_C String_t* _stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69;
IL2CPP_EXTERN_C String_t* _stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A;
IL2CPP_EXTERN_C String_t* _stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612;
IL2CPP_EXTERN_C String_t* _stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48;
IL2CPP_EXTERN_C String_t* _stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m58E2854400F6780A81C0091BFF5E9C56EC87E0B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m23444D9C2F4DEDD9B1734D9D2AEF16111FE1CB22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m00F2CBF04DB3637796241EB06CCAA35605C6F50C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF95FD1FBCB849CCB074FD7C45A8C646CA943F817_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnCloseEvent_m523CDB95384302AC773D1FC61A79F024182CFB51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnErrorEvent_m3A727A6902443770DB9E57E034A9D9DD6779F70A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnMessageEvent_m388E2C575F1CC4BA566501E31F2A861507CB2E70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnOpenEvent_mD2F9826BB5A333666D8D1F7D9EF03A5F35BD9715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Close_mD8B27E75F067A03F4725B9AA716D2D6E501F5325_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Connect_mF72DE7D9E27BB0728D0943FA925B7E0E8D9E59CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_GetState_m913CEED99ED720A0DB064D9E0FED9DC1BF83A6E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Send_m786E777316858BF26A3AA5ECFA02771B2ED45890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WebSocketCloseCode_tD7122C98073DDC2D748FB6315A2492DBABD436EE_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t00DDB26693B7BCCD40544DBD546A67E6CCF39740 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,HybridWebSocket.WebSocket>
struct Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5B59F2A7469CD902C4A8CFAF82E0811936BB827B* ___entries_1;
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
	KeyCollection_tCE10EC41ADABA3E0056602952AD837746DD3D52B * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0ED8AA86CAD53D2DDEC73515F03BE0B99DC127B8 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014, ___entries_1)); }
	inline EntryU5BU5D_t5B59F2A7469CD902C4A8CFAF82E0811936BB827B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5B59F2A7469CD902C4A8CFAF82E0811936BB827B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5B59F2A7469CD902C4A8CFAF82E0811936BB827B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014, ___keys_7)); }
	inline KeyCollection_tCE10EC41ADABA3E0056602952AD837746DD3D52B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tCE10EC41ADABA3E0056602952AD837746DD3D52B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tCE10EC41ADABA3E0056602952AD837746DD3D52B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014, ___values_8)); }
	inline ValueCollection_t0ED8AA86CAD53D2DDEC73515F03BE0B99DC127B8 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0ED8AA86CAD53D2DDEC73515F03BE0B99DC127B8 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0ED8AA86CAD53D2DDEC73515F03BE0B99DC127B8 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
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

// HybridWebSocket.WebSocket
struct WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075  : public RuntimeObject
{
public:
	// System.Int32 HybridWebSocket.WebSocket::instanceId
	int32_t ___instanceId_0;
	// HybridWebSocket.WebSocketOpenEventHandler HybridWebSocket.WebSocket::OnOpen
	WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * ___OnOpen_1;
	// HybridWebSocket.WebSocketMessageEventHandler HybridWebSocket.WebSocket::OnMessage
	WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * ___OnMessage_2;
	// HybridWebSocket.WebSocketErrorEventHandler HybridWebSocket.WebSocket::OnError
	WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * ___OnError_3;
	// HybridWebSocket.WebSocketCloseEventHandler HybridWebSocket.WebSocket::OnClose
	WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * ___OnClose_4;

public:
	inline static int32_t get_offset_of_instanceId_0() { return static_cast<int32_t>(offsetof(WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075, ___instanceId_0)); }
	inline int32_t get_instanceId_0() const { return ___instanceId_0; }
	inline int32_t* get_address_of_instanceId_0() { return &___instanceId_0; }
	inline void set_instanceId_0(int32_t value)
	{
		___instanceId_0 = value;
	}

	inline static int32_t get_offset_of_OnOpen_1() { return static_cast<int32_t>(offsetof(WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075, ___OnOpen_1)); }
	inline WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * get_OnOpen_1() const { return ___OnOpen_1; }
	inline WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 ** get_address_of_OnOpen_1() { return &___OnOpen_1; }
	inline void set_OnOpen_1(WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * value)
	{
		___OnOpen_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOpen_1), (void*)value);
	}

	inline static int32_t get_offset_of_OnMessage_2() { return static_cast<int32_t>(offsetof(WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075, ___OnMessage_2)); }
	inline WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * get_OnMessage_2() const { return ___OnMessage_2; }
	inline WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 ** get_address_of_OnMessage_2() { return &___OnMessage_2; }
	inline void set_OnMessage_2(WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * value)
	{
		___OnMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnMessage_2), (void*)value);
	}

	inline static int32_t get_offset_of_OnError_3() { return static_cast<int32_t>(offsetof(WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075, ___OnError_3)); }
	inline WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * get_OnError_3() const { return ___OnError_3; }
	inline WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 ** get_address_of_OnError_3() { return &___OnError_3; }
	inline void set_OnError_3(WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * value)
	{
		___OnError_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnError_3), (void*)value);
	}

	inline static int32_t get_offset_of_OnClose_4() { return static_cast<int32_t>(offsetof(WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075, ___OnClose_4)); }
	inline WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * get_OnClose_4() const { return ___OnClose_4; }
	inline WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C ** get_address_of_OnClose_4() { return &___OnClose_4; }
	inline void set_OnClose_4(WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * value)
	{
		___OnClose_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClose_4), (void*)value);
	}
};


// HybridWebSocket.WebSocketFactory
struct WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833  : public RuntimeObject
{
public:

public:
};

struct WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,HybridWebSocket.WebSocket> HybridWebSocket.WebSocketFactory::instances
	Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 * ___instances_0;
	// System.Boolean HybridWebSocket.WebSocketFactory::isInitialized
	bool ___isInitialized_1;

public:
	inline static int32_t get_offset_of_instances_0() { return static_cast<int32_t>(offsetof(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_StaticFields, ___instances_0)); }
	inline Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 * get_instances_0() const { return ___instances_0; }
	inline Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 ** get_address_of_instances_0() { return &___instances_0; }
	inline void set_instances_0(Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 * value)
	{
		___instances_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instances_0), (void*)value);
	}

	inline static int32_t get_offset_of_isInitialized_1() { return static_cast<int32_t>(offsetof(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_StaticFields, ___isInitialized_1)); }
	inline bool get_isInitialized_1() const { return ___isInitialized_1; }
	inline bool* get_address_of_isInitialized_1() { return &___isInitialized_1; }
	inline void set_isInitialized_1(bool value)
	{
		___isInitialized_1 = value;
	}
};


// HybridWebSocket.WebSocketHelpers
struct WebSocketHelpers_t32E57DFEC6462608C4EC932B9FFAD30AC9357677  : public RuntimeObject
{
public:

public:
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


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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


// HybridWebSocket.WebSocketCloseCode
struct WebSocketCloseCode_tD7122C98073DDC2D748FB6315A2492DBABD436EE 
{
public:
	// System.Int32 HybridWebSocket.WebSocketCloseCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketCloseCode_tD7122C98073DDC2D748FB6315A2492DBABD436EE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// HybridWebSocket.WebSocketState
struct WebSocketState_t68969ACA78817D5BAD53044334701BC5C44AA15D 
{
public:
	// System.Int32 HybridWebSocket.WebSocketState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebSocketState_t68969ACA78817D5BAD53044334701BC5C44AA15D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
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


// HybridWebSocket.WebSocketException
struct WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED  : public Exception_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// HybridWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C  : public MulticastDelegate_t
{
public:

public:
};


// HybridWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1  : public MulticastDelegate_t
{
public:

public:
};


// HybridWebSocket.WebSocketInvalidArgumentException
struct WebSocketInvalidArgumentException_tD7E9561BACD74991CBC85060CD689118EDA9E1D7  : public WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED
{
public:

public:
};


// HybridWebSocket.WebSocketInvalidStateException
struct WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016  : public WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED
{
public:

public:
};


// HybridWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98  : public MulticastDelegate_t
{
public:

public:
};


// HybridWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3  : public MulticastDelegate_t
{
public:

public:
};


// HybridWebSocket.WebSocketUnexpectedException
struct WebSocketUnexpectedException_t6AE508E113E560E5D96D2BA639AF3198D60CEB4A  : public WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED
{
public:

public:
};


// HybridWebSocket.WebSocketFactory/OnCloseCallback
struct OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037  : public MulticastDelegate_t
{
public:

public:
};


// HybridWebSocket.WebSocketFactory/OnErrorCallback
struct OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41  : public MulticastDelegate_t
{
public:

public:
};


// HybridWebSocket.WebSocketFactory/OnMessageCallback
struct OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170  : public MulticastDelegate_t
{
public:

public:
};


// HybridWebSocket.WebSocketFactory/OnOpenCallback
struct OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketFactory::HandleInstanceDestroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_HandleInstanceDestroy_m032E0B50A3572FDDEFB3FF66E02580A967F140F6 (int32_t ___instanceId0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 HybridWebSocket.WebSocket::WebSocketConnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketConnect_m9E4CD1E3C92513A4E15AB81BFF08A581BAD79BAF (int32_t ___instanceId0, const RuntimeMethod* method);
// HybridWebSocket.WebSocketException HybridWebSocket.WebSocketHelpers::GetErrorMessageFromCode(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED * WebSocketHelpers_GetErrorMessageFromCode_m80C6218AE0B4B571F00418B4E30A0F757AC17952 (int32_t ___errorCode0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.Int32 HybridWebSocket.WebSocket::WebSocketClose(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketClose_m8A33249925BCBF4D630E040543903D0D4D635992 (int32_t ___instanceId0, int32_t ___code1, String_t* ___reason2, const RuntimeMethod* method);
// System.Int32 HybridWebSocket.WebSocket::WebSocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSend_m67F539CA90154609F7CBECE7CA7A204F12DD6554 (int32_t ___instanceId0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dataPtr1, int32_t ___dataLength2, const RuntimeMethod* method);
// System.Int32 HybridWebSocket.WebSocket::WebSocketGetState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketGetState_m76BA1FF0370140EB9AAF31430550C81D8F210DAE (int32_t ___instanceId0, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketOpenEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_m463A1210A0CF3B0451EA212FEE85355DAB7B6EC0 (WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * __this, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_m5D9CAFBEAFD3C1A2FD26AD292C2D165A8BF4271D (WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_m356C5B6B198897031573419D151FE33866997804 (WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * __this, String_t* ___errorMsg0, const RuntimeMethod* method);
// HybridWebSocket.WebSocketCloseCode HybridWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketHelpers_ParseCloseCodeEnum_m2853525C9E621C03B5274BBFD55DB633D3654675 (int32_t ___closeCode0, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketCloseEventHandler::Invoke(HybridWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_mDEBFE0986BC3B1777BF7036BD2C84A5BFBBD3E6B (WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * __this, int32_t ___closeCode0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080 (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketFactory::DelegateOnOpenEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnOpenEvent_mD2F9826BB5A333666D8D1F7D9EF03A5F35BD9715 (int32_t ___instanceId0, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketFactory::DelegateOnMessageEvent(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnMessageEvent_m388E2C575F1CC4BA566501E31F2A861507CB2E70 (int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketFactory::DelegateOnErrorEvent(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnErrorEvent_m3A727A6902443770DB9E57E034A9D9DD6779F70A (int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketFactory::DelegateOnCloseEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnCloseEvent_m523CDB95384302AC773D1FC61A79F024182CFB51 (int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketFactory/OnOpenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback__ctor_mB5EFE607BF2C7F7D92E8D8652FBA5861063721D5 (OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketFactory::WebSocketSetOnOpen(HybridWebSocket.WebSocketFactory/OnOpenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnOpen_m608715A189903AA2C0B182EDC2CEB177D899B15B (OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF * ___callback0, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketFactory/OnMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback__ctor_m8B63F48B6911A463AF30E54067DEDBEFACFF3FD6 (OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketFactory::WebSocketSetOnMessage(HybridWebSocket.WebSocketFactory/OnMessageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnMessage_mD5C1FFF5D60C57ECD5E8F66FC5CC576A01C17D86 (OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170 * ___callback0, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketFactory/OnErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback__ctor_mFEA1C11CD4BD90DB09B8F4C80E7984EE60C8D254 (OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketFactory::WebSocketSetOnError(HybridWebSocket.WebSocketFactory/OnErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnError_m3D34E2753FAAD40AC1BA94154D049255FA45376C (OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41 * ___callback0, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketFactory/OnCloseCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback__ctor_mAA485B91BD429CAFDBB5F27CFCA931E8131F835C (OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketFactory::WebSocketSetOnClose(HybridWebSocket.WebSocketFactory/OnCloseCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnClose_m00E718AB78D806CF3C332C1031491DC40F755171 (OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037 * ___callback0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,HybridWebSocket.WebSocket>::Remove(!0)
inline bool Dictionary_2_Remove_m23444D9C2F4DEDD9B1734D9D2AEF16111FE1CB22 (Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void HybridWebSocket.WebSocketFactory::WebSocketFree(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketFree_mD34220F85D8B27A6561B0E8A81ED2AE11BE1B8CC (int32_t ___instanceId0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,HybridWebSocket.WebSocket>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m00F2CBF04DB3637796241EB06CCAA35605C6F50C (Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 * __this, int32_t ___key0, WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 *, int32_t, WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void HybridWebSocket.WebSocket::DelegateOnOpenEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnOpenEvent_m50B6FAEDD4B64EF9DA4EF058D36985DA3A476A9C (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0 (intptr_t ___source0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocket::DelegateOnMessageEvent(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnMessageEvent_mCEBC7C7122277D6974223338D037087AD97A9EF8 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAuto_m03AED23D0E1564F91E42B6240C60E8BC7F4EA6B2 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocket::DelegateOnErrorEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnErrorEvent_mD842CC8C61541CD2A9A0D835B93FB459C77556A6 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, String_t* ___errorMsg0, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocket::DelegateOnCloseEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnCloseEvent_m122B335ED6E189187E7076F6BDEF7BCBD94F3E00 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, int32_t ___closeCode0, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketFactory::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_Initialize_mECE1087B1DED6BC958A1127D892D1230DE2B771B (const RuntimeMethod* method);
// System.Int32 HybridWebSocket.WebSocketFactory::WebSocketAllocate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFactory_WebSocketAllocate_m94882BDA7436D39816179099F2EE4BC36C284633 (String_t* ___url0, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocket::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m43E891D30B8F7B04A2911A975B841595FD502A49 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, int32_t ___instanceId0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,HybridWebSocket.WebSocket>::Add(!0,!1)
inline void Dictionary_2_Add_m58E2854400F6780A81C0091BFF5E9C56EC87E0B5 (Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 * __this, int32_t ___key0, WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 *, int32_t, WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,HybridWebSocket.WebSocket>::.ctor()
inline void Dictionary_2__ctor_mF95FD1FBCB849CCB074FD7C45A8C646CA943F817 (Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96 (Type_t * ___enumType0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketUnexpectedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_mC5EDE451CEF57471230600C7DBB03479B04CA3DB (WebSocketUnexpectedException_t6AE508E113E560E5D96D2BA639AF3198D60CEB4A * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketInvalidStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_m0AB29BC819750447D99FC0E350631E051C792A95 (WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketInvalidArgumentException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m1F09E44E378059EBBB2BFD7AE849641D6566F620 (WebSocketInvalidArgumentException_tD7E9561BACD74991CBC85060CD689118EDA9E1D7 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mA1DC1FA395F7363DFA2CE98BA0ABFA9512540F17 (WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED * __this, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m30E1430FA020D05CB0F49CA3C0C4E30CA6528372 (WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void HybridWebSocket.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m9EB35F6B6189B0D90C47BF2B7BABA65750059A75 (WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketConnect(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketClose(int32_t, int32_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketSend(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketGetState(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketAllocate(char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketFree(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnOpen(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnMessage(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnError(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnClose(Il2CppMethodPointer);
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
// System.Int32 HybridWebSocket.WebSocket::WebSocketConnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketConnect_m9E4CD1E3C92513A4E15AB81BFF08A581BAD79BAF (int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketConnect)(___instanceId0);

	return returnValue;
}
// System.Int32 HybridWebSocket.WebSocket::WebSocketClose(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketClose_m8A33249925BCBF4D630E040543903D0D4D635992 (int32_t ___instanceId0, int32_t ___code1, String_t* ___reason2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, char*);

	// Marshaling of parameter '___reason2' to native representation
	char* ____reason2_marshaled = NULL;
	____reason2_marshaled = il2cpp_codegen_marshal_string(___reason2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketClose)(___instanceId0, ___code1, ____reason2_marshaled);

	// Marshaling cleanup of parameter '___reason2' native representation
	il2cpp_codegen_marshal_free(____reason2_marshaled);
	____reason2_marshaled = NULL;

	return returnValue;
}
// System.Int32 HybridWebSocket.WebSocket::WebSocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSend_m67F539CA90154609F7CBECE7CA7A204F12DD6554 (int32_t ___instanceId0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___dataPtr1, int32_t ___dataLength2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___dataPtr1' to native representation
	uint8_t* ____dataPtr1_marshaled = NULL;
	if (___dataPtr1 != NULL)
	{
		____dataPtr1_marshaled = reinterpret_cast<uint8_t*>((___dataPtr1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketSend)(___instanceId0, ____dataPtr1_marshaled, ___dataLength2);

	return returnValue;
}
// System.Int32 HybridWebSocket.WebSocket::WebSocketGetState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketGetState_m76BA1FF0370140EB9AAF31430550C81D8F210DAE (int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketGetState)(___instanceId0);

	return returnValue;
}
// System.Void HybridWebSocket.WebSocket::add_OnOpen(HybridWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_mB68E0D3A47AEE461F426285CCF5D160E5784D60D (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * V_0 = NULL;
	WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * V_1 = NULL;
	WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * V_2 = NULL;
	{
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_0 = __this->get_OnOpen_1();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_2 = V_1;
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 *)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 ** L_5 = __this->get_address_of_OnOpen_1();
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_6 = V_2;
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_7 = V_1;
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 *>((WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_9 = V_0;
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 *)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HybridWebSocket.WebSocket::remove_OnOpen(HybridWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnOpen_mC310C85E6149DD092740AB9B8069E980D5A5C9CE (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * V_0 = NULL;
	WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * V_1 = NULL;
	WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * V_2 = NULL;
	{
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_0 = __this->get_OnOpen_1();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_2 = V_1;
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 *)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 ** L_5 = __this->get_address_of_OnOpen_1();
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_6 = V_2;
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_7 = V_1;
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 *>((WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_9 = V_0;
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 *)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HybridWebSocket.WebSocket::add_OnMessage(HybridWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_m273E3E130BB7DCE14B0C24FCD08DC8E8F35DD3E5 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * V_0 = NULL;
	WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * V_1 = NULL;
	WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * V_2 = NULL;
	{
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_0 = __this->get_OnMessage_2();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_2 = V_1;
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 *)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 ** L_5 = __this->get_address_of_OnMessage_2();
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_6 = V_2;
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_7 = V_1;
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 *>((WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_9 = V_0;
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 *)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HybridWebSocket.WebSocket::remove_OnMessage(HybridWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnMessage_m8FBF44B6ED7D5C98F4144FD5DC8CABB81E00EEB6 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * V_0 = NULL;
	WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * V_1 = NULL;
	WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * V_2 = NULL;
	{
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_0 = __this->get_OnMessage_2();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_2 = V_1;
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 *)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 ** L_5 = __this->get_address_of_OnMessage_2();
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_6 = V_2;
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_7 = V_1;
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 *>((WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_9 = V_0;
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 *)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HybridWebSocket.WebSocket::add_OnError(HybridWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_m4C1BA21D45B3934BF61A2BF13E43BCF2F13F0D6E (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * V_0 = NULL;
	WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * V_1 = NULL;
	WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * V_2 = NULL;
	{
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_0 = __this->get_OnError_3();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_2 = V_1;
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 *)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 ** L_5 = __this->get_address_of_OnError_3();
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_6 = V_2;
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_7 = V_1;
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 *>((WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_9 = V_0;
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 *)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HybridWebSocket.WebSocket::remove_OnError(HybridWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnError_m4630EA4641D051424F362716176B56DDF8C26C79 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * V_0 = NULL;
	WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * V_1 = NULL;
	WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * V_2 = NULL;
	{
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_0 = __this->get_OnError_3();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_2 = V_1;
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 *)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 ** L_5 = __this->get_address_of_OnError_3();
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_6 = V_2;
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_7 = V_1;
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 *>((WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_9 = V_0;
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 *)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HybridWebSocket.WebSocket::add_OnClose(HybridWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m64A18053386016523A78FB2CF083DB431763DB41 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * V_0 = NULL;
	WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * V_1 = NULL;
	WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * V_2 = NULL;
	{
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_0 = __this->get_OnClose_4();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_2 = V_1;
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C *)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C ** L_5 = __this->get_address_of_OnClose_4();
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_6 = V_2;
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_7 = V_1;
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C *>((WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_9 = V_0;
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C *)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HybridWebSocket.WebSocket::remove_OnClose(HybridWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnClose_m7CF6943931B98251F7138111CB25A1867638095A (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * V_0 = NULL;
	WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * V_1 = NULL;
	WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * V_2 = NULL;
	{
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_0 = __this->get_OnClose_4();
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_2 = V_1;
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C *)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C ** L_5 = __this->get_address_of_OnClose_4();
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_6 = V_2;
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_7 = V_1;
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C *>((WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C **)L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_9 = V_0;
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C *)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void HybridWebSocket.WebSocket::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m43E891D30B8F7B04A2911A975B841595FD502A49 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, int32_t ___instanceId0, const RuntimeMethod* method)
{
	{
		// public WebSocket(int instanceId)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.instanceId = instanceId;
		int32_t L_0 = ___instanceId0;
		__this->set_instanceId_0(L_0);
		// }
		return;
	}
}
// System.Void HybridWebSocket.WebSocket::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Finalize_mCB79080F884B5BB9AAF011FC696D413BD1793DA5 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// WebSocketFactory.HandleInstanceDestroy(this.instanceId);
		int32_t L_0 = __this->get_instanceId_0();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		WebSocketFactory_HandleInstanceDestroy_m032E0B50A3572FDDEFB3FF66E02580A967F140F6(L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x14, FINALLY_000d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000d;
	}

FINALLY_000d:
	{ // begin finally (depth: 1)
		// }
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(13)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(13)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x14, IL_0014)
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Int32 HybridWebSocket.WebSocket::GetInstanceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_GetInstanceId_m5054218CAE172BE51141713B9ECE047CBE94EF5D (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, const RuntimeMethod* method)
{
	{
		// return this.instanceId;
		int32_t L_0 = __this->get_instanceId_0();
		return L_0;
	}
}
// System.Void HybridWebSocket.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Connect_mF72DE7D9E27BB0728D0943FA925B7E0E8D9E59CD (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int ret = WebSocketConnect(this.instanceId);
		int32_t L_0 = __this->get_instanceId_0();
		int32_t L_1;
		L_1 = WebSocket_WebSocketConnect_m9E4CD1E3C92513A4E15AB81BFF08A581BAD79BAF(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (ret < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode(ret, null);
		int32_t L_3 = V_0;
		WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED * L_4;
		L_4 = WebSocketHelpers_GetErrorMessageFromCode_m80C6218AE0B4B571F00418B4E30A0F757AC17952(L_3, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_Connect_mF72DE7D9E27BB0728D0943FA925B7E0E8D9E59CD_RuntimeMethod_var)));
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void HybridWebSocket.WebSocket::Close(HybridWebSocket.WebSocketCloseCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Close_mD8B27E75F067A03F4725B9AA716D2D6E501F5325 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, int32_t ___code0, String_t* ___reason1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int ret = WebSocketClose(this.instanceId, (int)code, reason);
		int32_t L_0 = __this->get_instanceId_0();
		int32_t L_1 = ___code0;
		String_t* L_2 = ___reason1;
		int32_t L_3;
		L_3 = WebSocket_WebSocketClose_m8A33249925BCBF4D630E040543903D0D4D635992(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (ret < 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode(ret, null);
		int32_t L_5 = V_0;
		WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED * L_6;
		L_6 = WebSocketHelpers_GetErrorMessageFromCode_m80C6218AE0B4B571F00418B4E30A0F757AC17952(L_5, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_Close_mD8B27E75F067A03F4725B9AA716D2D6E501F5325_RuntimeMethod_var)));
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void HybridWebSocket.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Send_m786E777316858BF26A3AA5ECFA02771B2ED45890 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int ret = WebSocketSend(this.instanceId, data, data.Length);
		int32_t L_0 = __this->get_instanceId_0();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___data0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data0;
		int32_t L_3;
		L_3 = WebSocket_WebSocketSend_m67F539CA90154609F7CBECE7CA7A204F12DD6554(L_0, L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), /*hidden argument*/NULL);
		V_0 = L_3;
		// if (ret < 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode(ret, null);
		int32_t L_5 = V_0;
		WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED * L_6;
		L_6 = WebSocketHelpers_GetErrorMessageFromCode_m80C6218AE0B4B571F00418B4E30A0F757AC17952(L_5, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_Send_m786E777316858BF26A3AA5ECFA02771B2ED45890_RuntimeMethod_var)));
	}

IL_001c:
	{
		// }
		return;
	}
}
// HybridWebSocket.WebSocketState HybridWebSocket.WebSocket::GetState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_GetState_m913CEED99ED720A0DB064D9E0FED9DC1BF83A6E6 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int state = WebSocketGetState(this.instanceId);
		int32_t L_0 = __this->get_instanceId_0();
		int32_t L_1;
		L_1 = WebSocket_WebSocketGetState_m76BA1FF0370140EB9AAF31430550C81D8F210DAE(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (state < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode(state, null);
		int32_t L_3 = V_0;
		WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED * L_4;
		L_4 = WebSocketHelpers_GetErrorMessageFromCode_m80C6218AE0B4B571F00418B4E30A0F757AC17952(L_3, (Exception_t *)NULL, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_GetState_m913CEED99ED720A0DB064D9E0FED9DC1BF83A6E6_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_0038;
	}

IL_0030:
	{
		// return WebSocketState.Connecting;
		return (int32_t)(0);
	}

IL_0032:
	{
		// return WebSocketState.Open;
		return (int32_t)(1);
	}

IL_0034:
	{
		// return WebSocketState.Closing;
		return (int32_t)(2);
	}

IL_0036:
	{
		// return WebSocketState.Closed;
		return (int32_t)(3);
	}

IL_0038:
	{
		// return WebSocketState.Closed;
		return (int32_t)(3);
	}
}
// System.Void HybridWebSocket.WebSocket::DelegateOnOpenEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnOpenEvent_m50B6FAEDD4B64EF9DA4EF058D36985DA3A476A9C (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, const RuntimeMethod* method)
{
	WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * G_B2_0 = NULL;
	WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * G_B1_0 = NULL;
	{
		// this.OnOpen?.Invoke();
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_0 = __this->get_OnOpen_1();
		WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WebSocketOpenEventHandler_Invoke_m463A1210A0CF3B0451EA212FEE85355DAB7B6EC0(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HybridWebSocket.WebSocket::DelegateOnMessageEvent(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnMessageEvent_mCEBC7C7122277D6974223338D037087AD97A9EF8 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * G_B2_0 = NULL;
	WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * G_B1_0 = NULL;
	{
		// this.OnMessage?.Invoke(data);
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_0 = __this->get_OnMessage_2();
		WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = ___data0;
		WebSocketMessageEventHandler_Invoke_m5D9CAFBEAFD3C1A2FD26AD292C2D165A8BF4271D(G_B2_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HybridWebSocket.WebSocket::DelegateOnErrorEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnErrorEvent_mD842CC8C61541CD2A9A0D835B93FB459C77556A6 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * G_B2_0 = NULL;
	WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * G_B1_0 = NULL;
	{
		// this.OnError?.Invoke(errorMsg);
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_0 = __this->get_OnError_3();
		WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___errorMsg0;
		WebSocketErrorEventHandler_Invoke_m356C5B6B198897031573419D151FE33866997804(G_B2_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HybridWebSocket.WebSocket::DelegateOnCloseEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnCloseEvent_m122B335ED6E189187E7076F6BDEF7BCBD94F3E00 (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * G_B2_0 = NULL;
	WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * G_B1_0 = NULL;
	{
		// this.OnClose?.Invoke(WebSocketHelpers.ParseCloseCodeEnum(closeCode));
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_0 = __this->get_OnClose_4();
		WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___closeCode0;
		int32_t L_3;
		L_3 = WebSocketHelpers_ParseCloseCodeEnum_m2853525C9E621C03B5274BBFD55DB633D3654675(L_2, /*hidden argument*/NULL);
		WebSocketCloseEventHandler_Invoke_mDEBFE0986BC3B1777BF7036BD2C84A5BFBBD3E6B(G_B2_0, L_3, /*hidden argument*/NULL);
		// }
		return;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C (WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___closeCode0);

}
// System.Void HybridWebSocket.WebSocketCloseEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler__ctor_m51B640CD4CB9BE0D26E7427A56A421A9A9FA0948 (WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void HybridWebSocket.WebSocketCloseEventHandler::Invoke(HybridWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_mDEBFE0986BC3B1777BF7036BD2C84A5BFBBD3E6B (WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * __this, int32_t ___closeCode0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___closeCode0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___closeCode0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___closeCode0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___closeCode0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___closeCode0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___closeCode0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___closeCode0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___closeCode0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult HybridWebSocket.WebSocketCloseEventHandler::BeginInvoke(HybridWebSocket.WebSocketCloseCode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketCloseEventHandler_BeginInvoke_m6BA3148015CF4E2D0FB47256EA3CB10AED38DB43 (WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * __this, int32_t ___closeCode0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseCode_tD7122C98073DDC2D748FB6315A2492DBABD436EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebSocketCloseCode_tD7122C98073DDC2D748FB6315A2492DBABD436EE_il2cpp_TypeInfo_var, &___closeCode0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void HybridWebSocket.WebSocketCloseEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_EndInvoke_m5463BD26133047B86E162878F3666D504BFFB456 (WebSocketCloseEventHandler_t63A9DDEBF6E41FE34F4DEB5AD1C3C1ECCE58D17C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 (WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___errorMsg0' to native representation
	char* ____errorMsg0_marshaled = NULL;
	____errorMsg0_marshaled = il2cpp_codegen_marshal_string(___errorMsg0);

	// Native function invocation
	il2cppPInvokeFunc(____errorMsg0_marshaled);

	// Marshaling cleanup of parameter '___errorMsg0' native representation
	il2cpp_codegen_marshal_free(____errorMsg0_marshaled);
	____errorMsg0_marshaled = NULL;

}
// System.Void HybridWebSocket.WebSocketErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler__ctor_m3F0C04DB1D57EADD4F6E99EE4E233D5884811F1D (WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void HybridWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_m356C5B6B198897031573419D151FE33866997804 (WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorMsg0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorMsg0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___errorMsg0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___errorMsg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___errorMsg0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___errorMsg0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorMsg0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___errorMsg0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___errorMsg0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorMsg0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorMsg0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___errorMsg0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___errorMsg0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult HybridWebSocket.WebSocketErrorEventHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketErrorEventHandler_BeginInvoke_mE8B1ABA7201829CE9F14FEEB6AEEB35D7E2B086B (WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * __this, String_t* ___errorMsg0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___errorMsg0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void HybridWebSocket.WebSocketErrorEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_EndInvoke_mA6A10315ACFCBF9DE39529782476DF1E4ABD5D95 (WebSocketErrorEventHandler_tE6C5063FA8C52A93053A3690D59CB28F8F30C2E1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HybridWebSocket.WebSocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mA1DC1FA395F7363DFA2CE98BA0ABFA9512540F17 (WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException()
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m0E9BEC861F6DBED197960E5BA23149543B1D7F5B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HybridWebSocket.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m30E1430FA020D05CB0F49CA3C0C4E30CA6528372 (WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(message)
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HybridWebSocket.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m9EB35F6B6189B0D90C47BF2B7BABA65750059A75 (WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(message, inner)
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_mB842BA6E644CDB9DB058F5628BB90DF5EF22C080(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnOpenEvent_mD2F9826BB5A333666D8D1F7D9EF03A5F35BD9715(int32_t ___instanceId0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnOpenEvent_mD2F9826BB5A333666D8D1F7D9EF03A5F35BD9715(___instanceId0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnMessageEvent_m388E2C575F1CC4BA566501E31F2A861507CB2E70(int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnMessageEvent_m388E2C575F1CC4BA566501E31F2A861507CB2E70(___instanceId0, ___msgPtr1, ___msgSize2, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnErrorEvent_m3A727A6902443770DB9E57E034A9D9DD6779F70A(int32_t ___instanceId0, intptr_t ___errorPtr1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnErrorEvent_m3A727A6902443770DB9E57E034A9D9DD6779F70A(___instanceId0, ___errorPtr1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnCloseEvent_m523CDB95384302AC773D1FC61A79F024182CFB51(int32_t ___instanceId0, int32_t ___closeCode1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnCloseEvent_m523CDB95384302AC773D1FC61A79F024182CFB51(___instanceId0, ___closeCode1, NULL);

}
// System.Int32 HybridWebSocket.WebSocketFactory::WebSocketAllocate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFactory_WebSocketAllocate_m94882BDA7436D39816179099F2EE4BC36C284633 (String_t* ___url0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___url0' to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketAllocate)(____url0_marshaled);

	// Marshaling cleanup of parameter '___url0' native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

	return returnValue;
}
// System.Void HybridWebSocket.WebSocketFactory::WebSocketFree(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketFree_mD34220F85D8B27A6561B0E8A81ED2AE11BE1B8CC (int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketFree)(___instanceId0);

}
// System.Void HybridWebSocket.WebSocketFactory::WebSocketSetOnOpen(HybridWebSocket.WebSocketFactory/OnOpenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnOpen_m608715A189903AA2C0B182EDC2CEB177D899B15B (OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnOpen)(____callback0_marshaled);

}
// System.Void HybridWebSocket.WebSocketFactory::WebSocketSetOnMessage(HybridWebSocket.WebSocketFactory/OnMessageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnMessage_mD5C1FFF5D60C57ECD5E8F66FC5CC576A01C17D86 (OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnMessage)(____callback0_marshaled);

}
// System.Void HybridWebSocket.WebSocketFactory::WebSocketSetOnError(HybridWebSocket.WebSocketFactory/OnErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnError_m3D34E2753FAAD40AC1BA94154D049255FA45376C (OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnError)(____callback0_marshaled);

}
// System.Void HybridWebSocket.WebSocketFactory::WebSocketSetOnClose(HybridWebSocket.WebSocketFactory/OnCloseCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnClose_m00E718AB78D806CF3C332C1031491DC40F755171 (OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037 * ___callback0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___callback0' to native representation
	Il2CppMethodPointer ____callback0_marshaled = NULL;
	____callback0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnClose)(____callback0_marshaled);

}
// System.Void HybridWebSocket.WebSocketFactory::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_Initialize_mECE1087B1DED6BC958A1127D892D1230DE2B771B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnCloseEvent_m523CDB95384302AC773D1FC61A79F024182CFB51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnErrorEvent_m3A727A6902443770DB9E57E034A9D9DD6779F70A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnMessageEvent_m388E2C575F1CC4BA566501E31F2A861507CB2E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnOpenEvent_mD2F9826BB5A333666D8D1F7D9EF03A5F35BD9715_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebSocketSetOnOpen(DelegateOnOpenEvent);
		OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF * L_0 = (OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF *)il2cpp_codegen_object_new(OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF_il2cpp_TypeInfo_var);
		OnOpenCallback__ctor_mB5EFE607BF2C7F7D92E8D8652FBA5861063721D5(L_0, NULL, (intptr_t)((intptr_t)WebSocketFactory_DelegateOnOpenEvent_mD2F9826BB5A333666D8D1F7D9EF03A5F35BD9715_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		WebSocketFactory_WebSocketSetOnOpen_m608715A189903AA2C0B182EDC2CEB177D899B15B(L_0, /*hidden argument*/NULL);
		// WebSocketSetOnMessage(DelegateOnMessageEvent);
		OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170 * L_1 = (OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170 *)il2cpp_codegen_object_new(OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170_il2cpp_TypeInfo_var);
		OnMessageCallback__ctor_m8B63F48B6911A463AF30E54067DEDBEFACFF3FD6(L_1, NULL, (intptr_t)((intptr_t)WebSocketFactory_DelegateOnMessageEvent_m388E2C575F1CC4BA566501E31F2A861507CB2E70_RuntimeMethod_var), /*hidden argument*/NULL);
		WebSocketFactory_WebSocketSetOnMessage_mD5C1FFF5D60C57ECD5E8F66FC5CC576A01C17D86(L_1, /*hidden argument*/NULL);
		// WebSocketSetOnError(DelegateOnErrorEvent);
		OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41 * L_2 = (OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41 *)il2cpp_codegen_object_new(OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41_il2cpp_TypeInfo_var);
		OnErrorCallback__ctor_mFEA1C11CD4BD90DB09B8F4C80E7984EE60C8D254(L_2, NULL, (intptr_t)((intptr_t)WebSocketFactory_DelegateOnErrorEvent_m3A727A6902443770DB9E57E034A9D9DD6779F70A_RuntimeMethod_var), /*hidden argument*/NULL);
		WebSocketFactory_WebSocketSetOnError_m3D34E2753FAAD40AC1BA94154D049255FA45376C(L_2, /*hidden argument*/NULL);
		// WebSocketSetOnClose(DelegateOnCloseEvent);
		OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037 * L_3 = (OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037 *)il2cpp_codegen_object_new(OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037_il2cpp_TypeInfo_var);
		OnCloseCallback__ctor_mAA485B91BD429CAFDBB5F27CFCA931E8131F835C(L_3, NULL, (intptr_t)((intptr_t)WebSocketFactory_DelegateOnCloseEvent_m523CDB95384302AC773D1FC61A79F024182CFB51_RuntimeMethod_var), /*hidden argument*/NULL);
		WebSocketFactory_WebSocketSetOnClose_m00E718AB78D806CF3C332C1031491DC40F755171(L_3, /*hidden argument*/NULL);
		// isInitialized = true;
		((WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var))->set_isInitialized_1((bool)1);
		// }
		return;
	}
}
// System.Void HybridWebSocket.WebSocketFactory::HandleInstanceDestroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_HandleInstanceDestroy_m032E0B50A3572FDDEFB3FF66E02580A967F140F6 (int32_t ___instanceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m23444D9C2F4DEDD9B1734D9D2AEF16111FE1CB22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instances.Remove(instanceId);
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 * L_0 = ((WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		bool L_2;
		L_2 = Dictionary_2_Remove_m23444D9C2F4DEDD9B1734D9D2AEF16111FE1CB22(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_m23444D9C2F4DEDD9B1734D9D2AEF16111FE1CB22_RuntimeMethod_var);
		// WebSocketFree(instanceId);
		int32_t L_3 = ___instanceId0;
		WebSocketFactory_WebSocketFree_mD34220F85D8B27A6561B0E8A81ED2AE11BE1B8CC(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HybridWebSocket.WebSocketFactory::DelegateOnOpenEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnOpenEvent_mD2F9826BB5A333666D8D1F7D9EF03A5F35BD9715 (int32_t ___instanceId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m00F2CBF04DB3637796241EB06CCAA35605C6F50C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * V_0 = NULL;
	{
		// if (instances.TryGetValue(instanceId, out instanceRef))
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 * L_0 = ((WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m00F2CBF04DB3637796241EB06CCAA35605C6F50C(L_0, L_1, (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m00F2CBF04DB3637796241EB06CCAA35605C6F50C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// instanceRef.DelegateOnOpenEvent();
		WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * L_3 = V_0;
		WebSocket_DelegateOnOpenEvent_m50B6FAEDD4B64EF9DA4EF058D36985DA3A476A9C(L_3, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void HybridWebSocket.WebSocketFactory::DelegateOnMessageEvent(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnMessageEvent_m388E2C575F1CC4BA566501E31F2A861507CB2E70 (int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m00F2CBF04DB3637796241EB06CCAA35605C6F50C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	{
		// if (instances.TryGetValue(instanceId, out instanceRef))
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 * L_0 = ((WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m00F2CBF04DB3637796241EB06CCAA35605C6F50C(L_0, L_1, (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m00F2CBF04DB3637796241EB06CCAA35605C6F50C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// byte[] msg = new byte[msgSize];
		int32_t L_3 = ___msgSize2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// Marshal.Copy(msgPtr, msg, 0, msgSize);
		intptr_t L_5 = ___msgPtr1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_6 = V_1;
		int32_t L_7 = ___msgSize2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		Marshal_Copy_m057A8067BF7212A361510EA26B24022990A07AC0((intptr_t)L_5, L_6, 0, L_7, /*hidden argument*/NULL);
		// instanceRef.DelegateOnMessageEvent(msg);
		WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * L_8 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = V_1;
		WebSocket_DelegateOnMessageEvent_mCEBC7C7122277D6974223338D037087AD97A9EF8(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void HybridWebSocket.WebSocketFactory::DelegateOnErrorEvent(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnErrorEvent_m3A727A6902443770DB9E57E034A9D9DD6779F70A (int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m00F2CBF04DB3637796241EB06CCAA35605C6F50C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (instances.TryGetValue(instanceId, out instanceRef))
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 * L_0 = ((WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m00F2CBF04DB3637796241EB06CCAA35605C6F50C(L_0, L_1, (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m00F2CBF04DB3637796241EB06CCAA35605C6F50C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// string errorMsg = Marshal.PtrToStringAuto(errorPtr);
		intptr_t L_3 = ___errorPtr1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Marshal_PtrToStringAuto_m03AED23D0E1564F91E42B6240C60E8BC7F4EA6B2((intptr_t)L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// instanceRef.DelegateOnErrorEvent(errorMsg);
		WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * L_5 = V_0;
		String_t* L_6 = V_1;
		WebSocket_DelegateOnErrorEvent_mD842CC8C61541CD2A9A0D835B93FB459C77556A6(L_5, L_6, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void HybridWebSocket.WebSocketFactory::DelegateOnCloseEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnCloseEvent_m523CDB95384302AC773D1FC61A79F024182CFB51 (int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m00F2CBF04DB3637796241EB06CCAA35605C6F50C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * V_0 = NULL;
	{
		// if (instances.TryGetValue(instanceId, out instanceRef))
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 * L_0 = ((WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_1 = ___instanceId0;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m00F2CBF04DB3637796241EB06CCAA35605C6F50C(L_0, L_1, (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m00F2CBF04DB3637796241EB06CCAA35605C6F50C_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// instanceRef.DelegateOnCloseEvent(closeCode);
		WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * L_3 = V_0;
		int32_t L_4 = ___closeCode1;
		WebSocket_DelegateOnCloseEvent_m122B335ED6E189187E7076F6BDEF7BCBD94F3E00(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// HybridWebSocket.WebSocket HybridWebSocket.WebSocketFactory::CreateInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * WebSocketFactory_CreateInstance_m2D00574111C569248339E4D2F982E9530AFDEC63 (String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m58E2854400F6780A81C0091BFF5E9C56EC87E0B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * V_1 = NULL;
	{
		// if (!isInitialized)
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		bool L_0 = ((WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var))->get_isInitialized_1();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// Initialize();
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		WebSocketFactory_Initialize_mECE1087B1DED6BC958A1127D892D1230DE2B771B(/*hidden argument*/NULL);
	}

IL_000c:
	{
		// int instanceId = WebSocketAllocate(url);
		String_t* L_1 = ___url0;
		IL2CPP_RUNTIME_CLASS_INIT(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = WebSocketFactory_WebSocketAllocate_m94882BDA7436D39816179099F2EE4BC36C284633(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// WebSocket wrapper = new WebSocket(instanceId);
		int32_t L_3 = V_0;
		WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * L_4 = (WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 *)il2cpp_codegen_object_new(WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075_il2cpp_TypeInfo_var);
		WebSocket__ctor_m43E891D30B8F7B04A2911A975B841595FD502A49(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// instances.Add(instanceId, wrapper);
		Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 * L_5 = ((WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var))->get_instances_0();
		int32_t L_6 = V_0;
		WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * L_7 = V_1;
		Dictionary_2_Add_m58E2854400F6780A81C0091BFF5E9C56EC87E0B5(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_Add_m58E2854400F6780A81C0091BFF5E9C56EC87E0B5_RuntimeMethod_var);
		// return wrapper;
		WebSocket_tF726A3DAB50A82ADADB23C769AB25AE8CA778075 * L_8 = V_1;
		return L_8;
	}
}
// System.Void HybridWebSocket.WebSocketFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory__cctor_m5D2214FC1C711C3C47FF5129E3E3E521A069E3A9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF95FD1FBCB849CCB074FD7C45A8C646CA943F817_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<Int32, WebSocket> instances = new Dictionary<Int32, WebSocket>();
		Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 * L_0 = (Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014 *)il2cpp_codegen_object_new(Dictionary_2_tC7777C665D6A5166B30A8B511EF2FD2BB67A6014_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF95FD1FBCB849CCB074FD7C45A8C646CA943F817(L_0, /*hidden argument*/Dictionary_2__ctor_mF95FD1FBCB849CCB074FD7C45A8C646CA943F817_RuntimeMethod_var);
		((WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var))->set_instances_0(L_0);
		// private static bool isInitialized = false;
		((WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_tD933351E9DFD9441460D58C6D2ED7D9670A7B833_il2cpp_TypeInfo_var))->set_isInitialized_1((bool)0);
		return;
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
// HybridWebSocket.WebSocketCloseCode HybridWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketHelpers_ParseCloseCodeEnum_m2853525C9E621C03B5274BBFD55DB633D3654675 (int32_t ___closeCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseCode_tD7122C98073DDC2D748FB6315A2492DBABD436EE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WebSocketCloseCode.IsDefined(typeof(WebSocketCloseCode), closeCode))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (WebSocketCloseCode_tD7122C98073DDC2D748FB6315A2492DBABD436EE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___closeCode0;
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m70E955627155998B426145940DE105ECEF213B96(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// return (WebSocketCloseCode)closeCode;
		int32_t L_6 = ___closeCode0;
		return (int32_t)(L_6);
	}

IL_0019:
	{
		// return WebSocketCloseCode.Undefined;
		return (int32_t)(((int32_t)1004));
	}
}
// HybridWebSocket.WebSocketException HybridWebSocket.WebSocketHelpers::GetErrorMessageFromCode(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketException_t327E513260E181E1276DEF0A52E260F0075598ED * WebSocketHelpers_GetErrorMessageFromCode_m80C6218AE0B4B571F00418B4E30A0F757AC17952 (int32_t ___errorCode0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketInvalidArgumentException_tD7E9561BACD74991CBC85060CD689118EDA9E1D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketUnexpectedException_t6AE508E113E560E5D96D2BA639AF3198D60CEB4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1742337439BBC66D76773857596C8E79F12FE929);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)-7))))
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_004b;
			}
			case 4:
			{
				goto IL_003f;
			}
			case 5:
			{
				goto IL_0033;
			}
			case 6:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_0027:
	{
		// case -1: return new WebSocketUnexpectedException("WebSocket instance not found.", inner);
		Exception_t * L_1 = ___inner1;
		WebSocketUnexpectedException_t6AE508E113E560E5D96D2BA639AF3198D60CEB4A * L_2 = (WebSocketUnexpectedException_t6AE508E113E560E5D96D2BA639AF3198D60CEB4A *)il2cpp_codegen_object_new(WebSocketUnexpectedException_t6AE508E113E560E5D96D2BA639AF3198D60CEB4A_il2cpp_TypeInfo_var);
		WebSocketUnexpectedException__ctor_mC5EDE451CEF57471230600C7DBB03479B04CA3DB(L_2, _stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0033:
	{
		// case -2: return new WebSocketInvalidStateException("WebSocket is already connected or in connecting state.", inner);
		Exception_t * L_3 = ___inner1;
		WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016 * L_4 = (WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016 *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_m0AB29BC819750447D99FC0E350631E051C792A95(L_4, _stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_003f:
	{
		// case -3: return new WebSocketInvalidStateException("WebSocket is not connected.", inner);
		Exception_t * L_5 = ___inner1;
		WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016 * L_6 = (WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016 *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_m0AB29BC819750447D99FC0E350631E051C792A95(L_6, _stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_004b:
	{
		// case -4: return new WebSocketInvalidStateException("WebSocket is already closing.", inner);
		Exception_t * L_7 = ___inner1;
		WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016 * L_8 = (WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016 *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_m0AB29BC819750447D99FC0E350631E051C792A95(L_8, _stringLiteral1742337439BBC66D76773857596C8E79F12FE929, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0057:
	{
		// case -5: return new WebSocketInvalidStateException("WebSocket is already closed.", inner);
		Exception_t * L_9 = ___inner1;
		WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016 * L_10 = (WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016 *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_m0AB29BC819750447D99FC0E350631E051C792A95(L_10, _stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0063:
	{
		// case -6: return new WebSocketInvalidStateException("WebSocket is not in open state.", inner);
		Exception_t * L_11 = ___inner1;
		WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016 * L_12 = (WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016 *)il2cpp_codegen_object_new(WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_m0AB29BC819750447D99FC0E350631E051C792A95(L_12, _stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_006f:
	{
		// case -7: return new WebSocketInvalidArgumentException("Cannot close WebSocket. An invalid code was specified or reason is too long.", inner);
		Exception_t * L_13 = ___inner1;
		WebSocketInvalidArgumentException_tD7E9561BACD74991CBC85060CD689118EDA9E1D7 * L_14 = (WebSocketInvalidArgumentException_tD7E9561BACD74991CBC85060CD689118EDA9E1D7 *)il2cpp_codegen_object_new(WebSocketInvalidArgumentException_tD7E9561BACD74991CBC85060CD689118EDA9E1D7_il2cpp_TypeInfo_var);
		WebSocketInvalidArgumentException__ctor_m1F09E44E378059EBBB2BFD7AE849641D6566F620(L_14, _stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_007b:
	{
		// default: return new WebSocketUnexpectedException("Unknown error.", inner);
		Exception_t * L_15 = ___inner1;
		WebSocketUnexpectedException_t6AE508E113E560E5D96D2BA639AF3198D60CEB4A * L_16 = (WebSocketUnexpectedException_t6AE508E113E560E5D96D2BA639AF3198D60CEB4A *)il2cpp_codegen_object_new(WebSocketUnexpectedException_t6AE508E113E560E5D96D2BA639AF3198D60CEB4A_il2cpp_TypeInfo_var);
		WebSocketUnexpectedException__ctor_mC5EDE451CEF57471230600C7DBB03479B04CA3DB(L_16, _stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D, L_15, /*hidden argument*/NULL);
		return L_16;
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
// System.Void HybridWebSocket.WebSocketInvalidArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_mB65C16F1B1CEF6F2720AD5F0086974ED0E5CC7EA (WebSocketInvalidArgumentException_tD7E9561BACD74991CBC85060CD689118EDA9E1D7 * __this, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidArgumentException() { }
		WebSocketException__ctor_mA1DC1FA395F7363DFA2CE98BA0ABFA9512540F17(__this, /*hidden argument*/NULL);
		// public WebSocketInvalidArgumentException() { }
		return;
	}
}
// System.Void HybridWebSocket.WebSocketInvalidArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_mF13A3CBAACD84EC39FB85CF6E7B9C8A1B2A81137 (WebSocketInvalidArgumentException_tD7E9561BACD74991CBC85060CD689118EDA9E1D7 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidArgumentException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		WebSocketException__ctor_m30E1430FA020D05CB0F49CA3C0C4E30CA6528372(__this, L_0, /*hidden argument*/NULL);
		// public WebSocketInvalidArgumentException(string message) : base(message) { }
		return;
	}
}
// System.Void HybridWebSocket.WebSocketInvalidArgumentException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m1F09E44E378059EBBB2BFD7AE849641D6566F620 (WebSocketInvalidArgumentException_tD7E9561BACD74991CBC85060CD689118EDA9E1D7 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidArgumentException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		WebSocketException__ctor_m9EB35F6B6189B0D90C47BF2B7BABA65750059A75(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WebSocketInvalidArgumentException(string message, Exception inner) : base(message, inner) { }
		return;
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
// System.Void HybridWebSocket.WebSocketInvalidStateException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_m3477D18CA268D2E5640B95820E60847D4CA9C562 (WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016 * __this, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidStateException() { }
		WebSocketException__ctor_mA1DC1FA395F7363DFA2CE98BA0ABFA9512540F17(__this, /*hidden argument*/NULL);
		// public WebSocketInvalidStateException() { }
		return;
	}
}
// System.Void HybridWebSocket.WebSocketInvalidStateException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_m980292F1035B0AB17674F59FA1F651E4A4A3C0A6 (WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidStateException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		WebSocketException__ctor_m30E1430FA020D05CB0F49CA3C0C4E30CA6528372(__this, L_0, /*hidden argument*/NULL);
		// public WebSocketInvalidStateException(string message) : base(message) { }
		return;
	}
}
// System.Void HybridWebSocket.WebSocketInvalidStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_m0AB29BC819750447D99FC0E350631E051C792A95 (WebSocketInvalidStateException_t511284484C8443500AC775C61D70742F9E5C9016 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	{
		// public WebSocketInvalidStateException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		WebSocketException__ctor_m9EB35F6B6189B0D90C47BF2B7BABA65750059A75(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WebSocketInvalidStateException(string message, Exception inner) : base(message, inner) { }
		return;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 (WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___data0' to native representation
	uint8_t* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<uint8_t*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void HybridWebSocket.WebSocketMessageEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler__ctor_m26BE4DEB6BA4108C19A599D884C80A96EFB55296 (WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void HybridWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_m5D9CAFBEAFD3C1A2FD26AD292C2D165A8BF4271D (WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult HybridWebSocket.WebSocketMessageEventHandler::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketMessageEventHandler_BeginInvoke_mD3EBE64263C76A2DE73C2590597079FF84244270 (WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void HybridWebSocket.WebSocketMessageEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_EndInvoke_m938C9038B555A3671586BE898927CA39959930B8 (WebSocketMessageEventHandler_t38C15191BA387BA88B8962C7689905F6F7980B98 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 (WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void HybridWebSocket.WebSocketOpenEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler__ctor_mCC909728B9E6EFF2E80567AFA7F6648DB3E8974B (WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void HybridWebSocket.WebSocketOpenEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_m463A1210A0CF3B0451EA212FEE85355DAB7B6EC0 (WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult HybridWebSocket.WebSocketOpenEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketOpenEventHandler_BeginInvoke_m67694F7CB24C88FBF94EC20B1E0524B099CFAD8B (WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void HybridWebSocket.WebSocketOpenEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_EndInvoke_m2C0A4787812A0240D14EED742D36C861581256A3 (WebSocketOpenEventHandler_t1F3BA8EFBCEBEDFD15563FADE0EB6AF9F46877E3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
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
// System.Void HybridWebSocket.WebSocketUnexpectedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_mCA6A9A13B3FD62F70E460C42E2E0319A05EF5105 (WebSocketUnexpectedException_t6AE508E113E560E5D96D2BA639AF3198D60CEB4A * __this, const RuntimeMethod* method)
{
	{
		// public WebSocketUnexpectedException(){}
		WebSocketException__ctor_mA1DC1FA395F7363DFA2CE98BA0ABFA9512540F17(__this, /*hidden argument*/NULL);
		// public WebSocketUnexpectedException(){}
		return;
	}
}
// System.Void HybridWebSocket.WebSocketUnexpectedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_m218BEF9A25CF3C68C95D09051F68632CA7707741 (WebSocketUnexpectedException_t6AE508E113E560E5D96D2BA639AF3198D60CEB4A * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		// public WebSocketUnexpectedException(string message) : base(message){}
		String_t* L_0 = ___message0;
		WebSocketException__ctor_m30E1430FA020D05CB0F49CA3C0C4E30CA6528372(__this, L_0, /*hidden argument*/NULL);
		// public WebSocketUnexpectedException(string message) : base(message){}
		return;
	}
}
// System.Void HybridWebSocket.WebSocketUnexpectedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_mC5EDE451CEF57471230600C7DBB03479B04CA3DB (WebSocketUnexpectedException_t6AE508E113E560E5D96D2BA639AF3198D60CEB4A * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	{
		// public WebSocketUnexpectedException(string message, Exception inner) : base(message, inner) {}
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		WebSocketException__ctor_m9EB35F6B6189B0D90C47BF2B7BABA65750059A75(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WebSocketUnexpectedException(string message, Exception inner) : base(message, inner) {}
		return;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037 (OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037 * __this, int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___instanceId0, ___closeCode1);

}
// System.Void HybridWebSocket.WebSocketFactory/OnCloseCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback__ctor_mAA485B91BD429CAFDBB5F27CFCA931E8131F835C (OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void HybridWebSocket.WebSocketFactory/OnCloseCallback::Invoke(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback_Invoke_mACC3D1EAD3976CAA9B3A5DBE09672EB1FE59B191 (OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037 * __this, int32_t ___instanceId0, int32_t ___closeCode1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceId0, ___closeCode1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___closeCode1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___closeCode1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___closeCode1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceId0, ___closeCode1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceId0, ___closeCode1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___closeCode1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult HybridWebSocket.WebSocketFactory/OnCloseCallback::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCloseCallback_BeginInvoke_m7CAA0E383C800B6F555C65C608C3A82892A7161A (OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037 * __this, int32_t ___instanceId0, int32_t ___closeCode1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___instanceId0);
	__d_args[1] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___closeCode1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void HybridWebSocket.WebSocketFactory/OnCloseCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback_EndInvoke_mB7956827A69CDFC4287B73B6F7D24AB84D646A40 (OnCloseCallback_t4FDFBA7B883D3B43DCF7808039261CAA159D9037 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41 (OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41 * __this, int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___instanceId0, ___errorPtr1);

}
// System.Void HybridWebSocket.WebSocketFactory/OnErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback__ctor_mFEA1C11CD4BD90DB09B8F4C80E7984EE60C8D254 (OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void HybridWebSocket.WebSocketFactory/OnErrorCallback::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback_Invoke_m6F6B92066C673CEEE0A8A31972F3F16AB2FDE053 (OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41 * __this, int32_t ___instanceId0, intptr_t ___errorPtr1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceId0, ___errorPtr1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___errorPtr1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___errorPtr1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___errorPtr1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceId0, ___errorPtr1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceId0, ___errorPtr1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___errorPtr1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult HybridWebSocket.WebSocketFactory/OnErrorCallback::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnErrorCallback_BeginInvoke_m059B7CA18599E0FEFC257EAB777F06DFC186B7BB (OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41 * __this, int32_t ___instanceId0, intptr_t ___errorPtr1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___instanceId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___errorPtr1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void HybridWebSocket.WebSocketFactory/OnErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback_EndInvoke_m7AA619C3DAC51DC9C1E3560C6F9D6EF8EF571F6A (OnErrorCallback_tF64274C48D61ACFEA00F29101940041532C29B41 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170 (OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170 * __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___instanceId0, ___msgPtr1, ___msgSize2);

}
// System.Void HybridWebSocket.WebSocketFactory/OnMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback__ctor_m8B63F48B6911A463AF30E54067DEDBEFACFF3FD6 (OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void HybridWebSocket.WebSocketFactory/OnMessageCallback::Invoke(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback_Invoke_m777A73837BDEC1E84BE55447116CDE813F19A30B (OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170 * __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceId0, ___msgPtr1, ___msgSize2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___msgPtr1, ___msgSize2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___msgPtr1, ___msgSize2);
					else
						GenericVirtActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___instanceId0, ___msgPtr1, ___msgSize2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceId0, ___msgPtr1, ___msgSize2);
					else
						VirtActionInvoker3< int32_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceId0, ___msgPtr1, ___msgSize2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, ___msgPtr1, ___msgSize2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult HybridWebSocket.WebSocketFactory/OnMessageCallback::BeginInvoke(System.Int32,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnMessageCallback_BeginInvoke_m21514B3FEB3316006BB3CC7DED784CF2A0DA917F (OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170 * __this, int32_t ___instanceId0, intptr_t ___msgPtr1, int32_t ___msgSize2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___instanceId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___msgPtr1);
	__d_args[2] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___msgSize2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);;
}
// System.Void HybridWebSocket.WebSocketFactory/OnMessageCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback_EndInvoke_m2BCAD40B0D7FDBC9B200DF4D07595F4E4B1643B0 (OnMessageCallback_tCABB8C5B6029D13B76F2EDF30D0E0630F6D4E170 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF (OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF * __this, int32_t ___instanceId0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___instanceId0);

}
// System.Void HybridWebSocket.WebSocketFactory/OnOpenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback__ctor_mB5EFE607BF2C7F7D92E8D8652FBA5861063721D5 (OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void HybridWebSocket.WebSocketFactory/OnOpenCallback::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback_Invoke_m67BAEB24BC475620891D3981139C9D265CA9362E (OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF * __this, int32_t ___instanceId0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___instanceId0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___instanceId0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___instanceId0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___instanceId0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___instanceId0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___instanceId0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult HybridWebSocket.WebSocketFactory/OnOpenCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnOpenCallback_BeginInvoke_m0DD4805FBDC097ED722EBE7175013AE096B26351 (OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF * __this, int32_t ___instanceId0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___instanceId0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void HybridWebSocket.WebSocketFactory/OnOpenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback_EndInvoke_m1F5442EAF7E7A01DFAB526B937824B9DD05BFA01 (OnOpenCallback_tE56F7B9C6AB47E5EB3FB7BB98DB418C2DE9163FF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
